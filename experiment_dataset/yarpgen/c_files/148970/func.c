/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148970
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 2 */
    for (signed char i_0 = 4; i_0 < 18; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] |= ((/* implicit */unsigned int) ((((unsigned int) arr_0 [i_0 - 3])) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)52)))));
        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) max((((/* implicit */int) ((short) max((arr_1 [i_0]), (((/* implicit */unsigned long long int) var_1)))))), ((-(((/* implicit */int) (unsigned char)1)))))))));
    }
    for (signed char i_1 = 4; i_1 < 18; i_1 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) arr_4 [(signed char)10] [i_1]))));
        var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned int) max((((/* implicit */long long int) arr_4 [11] [i_1 + 1])), (17523466567680LL)))))));
    }
    /* LoopSeq 2 */
    for (unsigned int i_2 = 0; i_2 < 16; i_2 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_3 = 3; i_3 < 14; i_3 += 4) 
        {
            var_20 = ((/* implicit */long long int) arr_8 [i_2]);
            var_21 = ((/* implicit */unsigned int) arr_0 [i_2]);
            var_22 = ((/* implicit */unsigned short) ((long long int) min((((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */int) arr_9 [7U] [i_3] [i_3 - 2])) : (arr_0 [i_3]))), ((~(((/* implicit */int) (unsigned char)46)))))));
        }
        for (long long int i_4 = 0; i_4 < 16; i_4 += 1) 
        {
            var_23 = ((/* implicit */unsigned int) (unsigned char)0);
            arr_15 [i_2] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_10 [i_2] [i_4] [i_4]), (arr_13 [i_2] [i_4])))) ? (7131354373194988447ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -5099552319759225860LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)58850))) : (((long long int) 2540408668U)))))));
        }
        arr_16 [i_2] = ((/* implicit */unsigned long long int) arr_3 [1U]);
        /* LoopNest 2 */
        for (unsigned int i_5 = 4; i_5 < 15; i_5 += 4) 
        {
            for (long long int i_6 = 1; i_6 < 12; i_6 += 4) 
            {
                {
                    var_24 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)61247)) + (((/* implicit */int) (unsigned char)0))));
                    var_25 ^= ((/* implicit */short) var_5);
                    arr_23 [i_2] [i_5] = ((/* implicit */unsigned short) max((var_9), (((/* implicit */short) (unsigned char)57))));
                }
            } 
        } 
    }
    for (long long int i_7 = 0; i_7 < 20; i_7 += 3) 
    {
        var_26 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (~(arr_25 [i_7])))), ((-(6768046478657261729LL))))))));
        var_27 = ((/* implicit */unsigned int) (unsigned char)250);
    }
    var_28 = ((/* implicit */int) var_15);
    var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) var_1))));
}

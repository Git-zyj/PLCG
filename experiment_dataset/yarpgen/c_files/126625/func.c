/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126625
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
    var_18 = ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) var_5)))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_19 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(var_13)))) ? (min((((/* implicit */unsigned long long int) (_Bool)1)), (14ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))))));
        var_20 = ((/* implicit */unsigned short) min((max((((/* implicit */long long int) ((2954708191U) - (78813871U)))), (((((/* implicit */_Bool) var_11)) ? (arr_2 [i_0]) : (((/* implicit */long long int) var_12)))))), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_15)))) > (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))))));
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            for (unsigned short i_2 = 2; i_2 < 15; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */long long int) (-(((/* implicit */int) ((unsigned char) arr_4 [i_0] [i_0])))));
                    arr_7 [i_1] [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) ^ (var_12)));
                    arr_8 [(unsigned short)0] [(unsigned short)0] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_1 [(short)6] [i_1 + 2])))) ? (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */int) arr_4 [i_0] [i_1])) : (((/* implicit */int) arr_4 [i_2 - 1] [i_1 + 2]))))) : ((~(((((/* implicit */unsigned int) ((/* implicit */int) var_6))) - (var_12)))))));
                    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((long long int) max((arr_1 [i_1 + 1] [i_2 - 1]), (((/* implicit */unsigned int) var_17))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        arr_11 [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)14539)) ? (((/* implicit */long long int) ((/* implicit */int) (short)31981))) : (4270483752386592276LL))))));
        arr_12 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_3])) ? (((((/* implicit */_Bool) var_4)) ? (arr_1 [i_3] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_3] [i_3])))));
    }
    for (unsigned int i_4 = 0; i_4 < 23; i_4 += 4) 
    {
        var_23 = ((/* implicit */unsigned short) min((((min((((/* implicit */unsigned long long int) var_8)), (var_1))) ^ (((/* implicit */unsigned long long int) ((var_16) * (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))), (((/* implicit */unsigned long long int) ((arr_13 [i_4] [i_4]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))));
        arr_15 [i_4] = ((unsigned short) max((arr_13 [i_4] [i_4]), (arr_13 [i_4] [i_4])));
    }
    var_24 = ((/* implicit */unsigned short) var_10);
}

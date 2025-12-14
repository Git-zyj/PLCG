/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175899
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) (!((!(((((/* implicit */int) var_2)) >= (((/* implicit */int) arr_3 [i_0] [i_0]))))))));
        var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) arr_0 [i_0] [i_0]))));
        var_12 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */int) ((15U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31942)))))) : (((/* implicit */int) arr_2 [i_0])));
        arr_5 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned long long int) max((var_6), (((/* implicit */unsigned int) (unsigned short)18601)))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_1 = 3; i_1 < 16; i_1 += 2) /* same iter space */
        {
            arr_10 [i_1 + 1] [i_0] [i_0] = ((/* implicit */unsigned short) arr_3 [i_1 - 1] [i_1 + 1]);
            arr_11 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) 4294967280U)) ? (arr_9 [i_1 - 2] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
        }
        for (long long int i_2 = 3; i_2 < 16; i_2 += 2) /* same iter space */
        {
            arr_14 [i_0] [i_2 - 3] = ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */int) (unsigned char)41)) >= (((/* implicit */int) arr_7 [i_2 + 2] [i_0]))))), (((((/* implicit */_Bool) arr_1 [i_2 + 1] [i_2 - 3])) ? (((/* implicit */int) (unsigned char)240)) : (((/* implicit */int) (unsigned char)201))))));
            var_13 = ((((/* implicit */_Bool) arr_13 [i_0] [i_2 + 1])) && (((/* implicit */_Bool) 523652504U)));
        }
    }
    for (signed char i_3 = 2; i_3 < 11; i_3 += 2) 
    {
        arr_18 [i_3 + 1] = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_16 [i_3 - 1])))) ? (min((((((/* implicit */_Bool) (unsigned short)65535)) ? (var_6) : (((/* implicit */unsigned int) -639880006)))), (8U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_3 + 2] [i_3 + 1])) + (((/* implicit */int) var_8)))))))))));
        var_14 ^= ((/* implicit */unsigned char) (~((~(4294967292U)))));
        arr_19 [i_3 - 2] = ((/* implicit */long long int) min((var_10), (((/* implicit */unsigned int) (unsigned short)0))));
    }
    var_15 = ((/* implicit */unsigned long long int) var_6);
}

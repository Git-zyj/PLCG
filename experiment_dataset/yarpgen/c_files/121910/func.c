/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121910
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
    var_13 = ((/* implicit */unsigned int) min((var_7), (((/* implicit */long long int) var_12))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 3; i_2 < 7; i_2 += 3) 
                {
                    arr_7 [i_0] = max(((signed char)-30), (((/* implicit */signed char) ((((/* implicit */int) (short)0)) != (((/* implicit */int) (short)0))))));
                    arr_8 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1 + 1] [i_2])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-109)), (arr_6 [i_0] [i_0] [i_2 - 1] [i_2]))))) : (((((/* implicit */_Bool) arr_6 [i_0] [(short)4] [(signed char)3] [i_1])) ? (max((((/* implicit */unsigned int) arr_3 [i_0] [i_1 + 3] [i_2 + 1])), (var_0))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0] [i_0] [i_2])) / (((/* implicit */int) var_11)))))))));
                    var_14 = ((/* implicit */long long int) (~(((((/* implicit */int) (signed char)109)) / (((/* implicit */int) arr_0 [i_1] [i_1 + 2]))))));
                    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-95))))) ? (((((/* implicit */_Bool) -2065778273)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_1 [i_2 - 1] [i_2]))) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)251)))))));
                }
                var_16 += ((/* implicit */signed char) (+(((/* implicit */int) max((arr_0 [i_1 + 1] [i_1 + 3]), (arr_0 [i_1 + 1] [i_1 + 3]))))));
            }
        } 
    } 
    var_17 = ((/* implicit */short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_6) : (var_2)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_6)), (994025992U)))) : (max((11744155122953794132ULL), (((/* implicit */unsigned long long int) 285978576338026496LL))))))));
    var_18 += var_12;
    var_19 = ((/* implicit */short) ((((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)110)), (max((var_6), (((/* implicit */int) var_10))))))) >= (((var_8) >> (((((long long int) var_11)) - (82LL)))))));
}

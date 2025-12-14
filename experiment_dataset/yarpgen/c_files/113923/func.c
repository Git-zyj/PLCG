/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113923
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_1] [i_1] [i_1]))))) ? (max((var_14), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_8), ((_Bool)0)))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_2])))) != (((var_6) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_17))))));
                    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_2 [i_2])) - (arr_0 [i_0])))) ? (((int) arr_4 [i_0] [i_1] [i_2])) : ((+(((/* implicit */int) (signed char)103))))));
                    arr_8 [i_2] [i_1] [i_1] = ((/* implicit */long long int) ((arr_2 [i_1]) <= (((/* implicit */int) (_Bool)1))));
                    arr_9 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 8737210381687331635LL)))))) : (arr_0 [i_0])));
                }
                for (long long int i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 24; i_4 += 3) 
                    {
                        for (signed char i_5 = 0; i_5 < 24; i_5 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) min((min(((-(((/* implicit */int) (unsigned short)0)))), (((/* implicit */int) var_16)))), (((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0]))))) ? (((/* implicit */int) (unsigned short)0)) : (((((((/* implicit */int) (short)-13084)) + (2147483647))) << (((4294967283U) - (4294967283U))))))))))));
                                var_22 = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (signed char)-81)), (4549034223632161354LL)))), (arr_12 [i_1] [i_4] [i_1]))), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_1])) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) var_8)))))))));
                                var_23 = ((/* implicit */int) min(((short)(-32767 - 1)), (((/* implicit */short) (signed char)-110))));
                            }
                        } 
                    } 
                    arr_19 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) var_10);
                }
            }
        } 
    } 
    var_24 = ((/* implicit */int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)(-32767 - 1)))))) * (min((1490582772U), (((/* implicit */unsigned int) var_5))))))) : (((((((/* implicit */int) (short)(-32767 - 1))) == (((/* implicit */int) (unsigned char)58)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-31902)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (3888999289U)))) : (12562307302446408462ULL)))));
}

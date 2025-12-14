/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105907
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
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (var_15) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)5053)) | (((/* implicit */int) (signed char)15)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        var_18 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (short)20400)), (2820396378U)))) ^ (min((var_12), (var_13)))));
                        arr_10 [i_1] [i_1] = ((/* implicit */int) ((((var_4) > (((/* implicit */unsigned long long int) 1474570920U)))) ? (((unsigned int) 1474570916U)) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) >= (var_5)))))));
                        arr_11 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [i_2])) ? (10385089172728519932ULL) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_5)) : (((unsigned long long int) (_Bool)1))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (long long int i_5 = 0; i_5 < 23; i_5 += 4) 
                        {
                            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_4) : (((/* implicit */unsigned long long int) 4294967295U))))) ? (((var_11) ? (1600942200992384478ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_5] [i_4] [i_1] [i_1] [i_0] [i_0]))))) : (((((/* implicit */_Bool) var_6)) ? (var_13) : (var_0)))));
                            arr_18 [i_1] [i_4] [9ULL] [i_1] [i_1] [i_0] [i_1] = ((/* implicit */unsigned int) arr_16 [i_0] [i_1] [14U] [i_4] [14U] [i_4]);
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 3) 
                        {
                            var_20 = ((/* implicit */int) min((var_20), ((~(((/* implicit */int) arr_16 [i_6] [i_4] [i_2] [i_1] [i_1] [(signed char)3]))))));
                            arr_23 [i_1] = ((/* implicit */int) var_15);
                        }
                        for (long long int i_7 = 0; i_7 < 23; i_7 += 2) 
                        {
                            arr_27 [i_0] [i_2] [i_1] [i_1] = ((/* implicit */short) arr_24 [i_0] [i_1] [i_7]);
                            arr_28 [i_0] [i_1] [i_2] [i_4] [i_1] = ((/* implicit */unsigned long long int) (+(var_7)));
                        }
                        var_21 &= var_0;
                        var_22 = ((/* implicit */_Bool) ((unsigned long long int) arr_22 [i_1]));
                        arr_29 [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((arr_3 [i_0] [i_1] [i_0]) <= (var_2)));
                    }
                    arr_30 [i_1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_26 [i_0] [i_1] [i_1] [i_1] [i_2])) < (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_0)))));
                }
            } 
        } 
    } 
}

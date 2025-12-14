/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1756
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            {
                arr_5 [i_1] [5] = ((/* implicit */unsigned short) ((min((((/* implicit */int) (short)-22260)), ((+(((/* implicit */int) var_0)))))) < (((/* implicit */int) (!((!(((/* implicit */_Bool) var_13)))))))));
                var_16 = ((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((/* implicit */int) ((_Bool) var_0))) : (((/* implicit */int) var_9)));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    for (int i_3 = 2; i_3 < 18; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (long long int i_4 = 0; i_4 < 21; i_4 += 2) 
                            {
                                var_17 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)22256))) - (var_4)));
                                var_18 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? ((~(((arr_13 [i_4] [20U]) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_3] [i_4])) : (((/* implicit */int) arr_8 [1] [i_3] [i_2] [(_Bool)1] [i_0] [i_0])))))) : (((/* implicit */int) var_3))));
                                arr_14 [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_12 [i_1] [i_1 - 1] [i_1 - 1] [(short)10] [i_1 - 1])) ? (min((var_2), (((/* implicit */unsigned int) arr_6 [i_0] [i_1] [i_3] [i_1])))) : (((/* implicit */unsigned int) arr_2 [(unsigned char)9] [(unsigned char)9])))) < (((/* implicit */unsigned int) ((int) (!(((/* implicit */_Bool) (short)22259))))))));
                            }
                            /* vectorizable */
                            for (short i_5 = 2; i_5 < 19; i_5 += 1) 
                            {
                                var_19 |= (!(((arr_1 [i_5]) < (((/* implicit */int) (short)-10341)))));
                                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_5] [i_5] [i_5 - 2] [i_5 + 1] [i_5 + 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)22259)) || (((/* implicit */_Bool) 3935330628U))))))))));
                                arr_17 [i_1] = ((/* implicit */short) var_12);
                            }
                            arr_18 [i_0] [i_1] [(signed char)12] [i_2] [i_3] |= ((/* implicit */int) min((max((((/* implicit */unsigned int) var_9)), (var_5))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? ((+(((/* implicit */int) arr_13 [i_3] [i_3])))) : (((((/* implicit */_Bool) (short)-22274)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)-22275)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) (-((+(((((/* implicit */int) var_10)) + (((/* implicit */int) var_1))))))));
    var_22 = ((/* implicit */unsigned short) min((var_5), (((/* implicit */unsigned int) ((unsigned char) var_7)))));
    var_23 = ((/* implicit */unsigned int) var_0);
    var_24 |= ((/* implicit */long long int) min((((/* implicit */unsigned short) var_8)), (var_7)));
}

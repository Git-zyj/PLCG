/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157967
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
    var_13 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) * (max((((/* implicit */unsigned int) (+(((/* implicit */int) var_8))))), ((-(1562619589U)))))));
    var_14 = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) ((12857064341127520042ULL) > (12857064341127520036ULL))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) var_10))));
                            arr_11 [(unsigned char)6] [i_1] [14] [(unsigned char)6] = ((/* implicit */int) arr_8 [18] [18] [(short)14]);
                        }
                    } 
                } 
                arr_12 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (-(var_0)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_7) : (var_7)))) ? (arr_9 [8] [8] [i_0] [10U]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1]))))) : (((/* implicit */unsigned long long int) ((long long int) arr_8 [i_0] [i_0] [i_0])))));
                /* LoopSeq 3 */
                for (unsigned int i_4 = 1; i_4 < 17; i_4 += 1) 
                {
                    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) -883924421214264051LL)))) ? (((/* implicit */unsigned long long int) ((long long int) 3120593764639150071ULL))) : (max((15326150309070401555ULL), (((/* implicit */unsigned long long int) arr_7 [i_0]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (max((15507427650688816642ULL), (((/* implicit */unsigned long long int) arr_10 [i_0] [i_1] [i_4 - 1] [i_4] [i_4 + 3] [5ULL])))))))));
                    arr_16 [i_1] = ((/* implicit */unsigned long long int) var_4);
                    var_17 = ((/* implicit */long long int) ((short) (short)-3271));
                }
                /* vectorizable */
                for (long long int i_5 = 0; i_5 < 20; i_5 += 3) 
                {
                    arr_19 [11U] [11U] [i_1] [11U] = ((/* implicit */int) (+(arr_3 [i_1])));
                    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_0] [i_5])) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_5])) : (((/* implicit */int) var_2))));
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 20; i_6 += 3) 
                    {
                        for (unsigned int i_7 = 2; i_7 < 18; i_7 += 1) 
                        {
                            {
                                var_19 = ((((var_0) > (((/* implicit */long long int) ((/* implicit */int) (short)-5018))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_1] [i_5] [i_6] [7LL]))))) : ((-(((/* implicit */int) var_8)))));
                                arr_25 [17U] [i_1] = ((/* implicit */signed char) arr_7 [i_1]);
                                arr_26 [i_0] [i_0] [i_1] [i_5] [i_5] [i_1] [i_7] = ((/* implicit */short) (~(((/* implicit */int) arr_24 [i_1] [i_7 - 1] [i_7 + 2] [i_7 + 2] [i_7] [i_7]))));
                                arr_27 [i_0] [i_1] [i_0] [14ULL] [i_6] [i_7] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_9 [i_6] [i_6] [i_6] [i_7 + 2]))));
                            }
                        } 
                    } 
                }
                for (int i_8 = 2; i_8 < 18; i_8 += 4) 
                {
                    arr_30 [i_1] = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? ((-(var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))), (min((12857064341127520042ULL), (((/* implicit */unsigned long long int) -570344301)))));
                    arr_31 [i_0] [i_8] |= ((/* implicit */unsigned int) 13182867633288214721ULL);
                    arr_32 [i_0] [6LL] [i_1] [i_0] = (~(((/* implicit */int) ((short) arr_18 [12LL] [i_8 - 2] [i_8 + 2]))));
                }
                var_20 ^= ((/* implicit */unsigned short) arr_28 [i_0] [i_0] [i_0] [i_0]);
            }
        } 
    } 
}

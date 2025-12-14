/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17111
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) (short)-7499))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2])))));
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0])))));
                    var_13 = ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_0 [i_1] [i_0]));
                }
                for (short i_3 = 0; i_3 < 11; i_3 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 11; i_4 += 4) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 11; i_5 += 2) 
                        {
                            {
                                var_14 &= ((/* implicit */short) max((min((((/* implicit */unsigned int) var_2)), (arr_6 [i_0] [i_1] [i_4]))), (var_7)));
                                var_15 = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) (short)17811)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_3]))) : (var_7))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) max((((/* implicit */unsigned int) min((((/* implicit */int) arr_10 [i_0] [i_1] [i_3])), ((-(((/* implicit */int) (short)-17789))))))), (var_7))))));
                }
            }
        } 
    } 
    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */int) var_5)) > (((/* implicit */int) var_3)))))));
}

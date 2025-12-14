/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162550
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_2 [i_0] [i_0] [i_1])))), (((/* implicit */int) max((((/* implicit */short) arr_2 [i_0] [i_1] [i_1])), ((short)32635))))));
                arr_5 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4))))), (((arr_0 [i_1]) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))))));
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) /* same iter space */
                {
                    arr_8 [i_0] [i_1] [10LL] [i_1] |= ((/* implicit */_Bool) ((short) ((unsigned int) (short)31968)));
                    var_12 = (~(-8681681754706039644LL));
                }
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) /* same iter space */
                {
                    arr_13 [i_0 + 1] [i_0] [i_3] = ((/* implicit */short) var_6);
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 25; i_4 += 4) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                arr_19 [i_0] [i_0] [i_1] [i_3 + 1] [i_3 + 1] [i_0] [1LL] = ((/* implicit */_Bool) arr_15 [i_0] [i_4] [i_3 + 1] [i_3]);
                                var_13 = ((/* implicit */int) (short)-27293);
                                var_14 = ((/* implicit */unsigned char) var_9);
                                var_15 |= ((/* implicit */_Bool) ((((var_10) | (((/* implicit */long long int) var_5)))) - (((/* implicit */long long int) (-(((/* implicit */int) (short)27293)))))));
                                arr_20 [i_5] [i_5] [i_0] [i_3 + 1] [i_0] [i_0 + 1] [i_0 + 1] = ((/* implicit */short) ((((-1374161531) + (2147483647))) << ((((-(((/* implicit */int) (short)-27299)))) - (27299)))));
                            }
                        } 
                    } 
                }
                var_16 = ((/* implicit */int) max((max((((/* implicit */unsigned int) arr_15 [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1])), (230620455U))), (((/* implicit */unsigned int) var_7))));
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) max((var_0), (((/* implicit */unsigned int) var_3)))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122462
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
    for (short i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 24; i_2 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_3] |= ((/* implicit */unsigned long long int) var_0);
                                var_12 = ((/* implicit */_Bool) arr_0 [i_2]);
                                var_13 |= ((/* implicit */unsigned long long int) (_Bool)1);
                                var_14 |= ((/* implicit */int) (_Bool)1);
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((_Bool) arr_10 [i_1 - 1] [i_1] [i_1 + 2] [i_1 - 1] [i_1]))), (((arr_0 [i_0 - 1]) + (arr_0 [i_0 + 1])))));
                }
                for (short i_5 = 0; i_5 < 24; i_5 += 4) /* same iter space */
                {
                    var_16 = ((/* implicit */long long int) ((427468831U) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                    var_17 = ((/* implicit */unsigned short) ((short) (((_Bool)1) ? ((-(8603496913209747682ULL))) : (((/* implicit */unsigned long long int) (+(4642364899118528555LL)))))));
                }
                var_18 = ((/* implicit */unsigned long long int) arr_2 [i_0]);
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (!(((/* implicit */_Bool) (((~(var_7))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_11)) == (((/* implicit */int) var_10))))))))))))));
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)6124))) : (var_9))) + (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2)))))))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-80))) / (4294967295U)))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) 1422275732)) : (((((/* implicit */_Bool) var_9)) ? (var_3) : (-163514702305490342LL)))))));
    var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) var_7))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112197
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
    var_18 = var_8;
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 15; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned int) max((var_19), (min((((arr_1 [i_1 - 2]) * (3095213537U))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2902910984U)) ? (var_9) : (arr_3 [16U] [16U])))) ? (var_11) : ((+(var_12)))))))));
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    var_20 *= 3716557325U;
                    var_21 = (-(1338960918U));
                    arr_10 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(273158903U)))) && (((/* implicit */_Bool) min((arr_6 [i_0] [i_1] [i_1]), (var_8))))));
                }
                for (unsigned int i_3 = 0; i_3 < 17; i_3 += 4) 
                {
                    var_22 *= ((unsigned int) (+(arr_4 [i_3] [i_1] [i_3])));
                    arr_15 [i_0] [i_3] [i_3] = ((/* implicit */unsigned int) ((arr_5 [i_3] [i_0]) >= (((unsigned int) min((arr_14 [i_3] [i_0] [i_0] [i_0 - 1]), (arr_2 [i_0] [i_1]))))));
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 1; i_4 < 14; i_4 += 4) 
                    {
                        for (unsigned int i_5 = 4; i_5 < 14; i_5 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned int) min((var_23), (1576964937U)));
                                var_24 = max((min((142282097U), (((unsigned int) 578409975U)))), ((((+(578409955U))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_3] [i_5])))))))));
                                var_25 = ((/* implicit */unsigned int) min((var_25), (arr_14 [i_0 - 1] [i_1] [i_3] [i_5 - 4])));
                                var_26 = max(((+(min((3698597740U), (2186256512U))))), (((((/* implicit */_Bool) (-(900698177U)))) ? (min((arr_4 [i_0] [i_1] [i_1]), (var_17))) : (((((/* implicit */_Bool) 4027007412U)) ? (578409975U) : (3095213534U))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned int i_6 = 0; i_6 < 17; i_6 += 3) 
                    {
                        var_27 = ((2357625425U) << (((3095213537U) - (3095213517U))));
                        var_28 = ((/* implicit */unsigned int) min((var_28), (arr_16 [i_0] [i_3] [i_3] [i_6] [i_0])));
                        var_29 = 2696337737U;
                    }
                    for (unsigned int i_7 = 3; i_7 < 15; i_7 += 3) 
                    {
                        var_30 *= (-(((((/* implicit */_Bool) min((1332793732U), (3325487118U)))) ? (min((1357924240U), (arr_23 [i_1] [i_1] [i_1] [i_7 + 2] [i_7] [i_1]))) : (596369556U))));
                        var_31 = (~(((unsigned int) 333049390U)));
                        var_32 = max((((((unsigned int) 3238616175U)) + (arr_21 [i_7 + 1] [i_7 + 2] [i_1] [i_1 - 2] [i_0 + 2] [i_0 + 2]))), (arr_23 [i_0 - 1] [i_1 - 2] [i_3] [i_7 - 3] [i_7] [i_7 + 2]));
                        var_33 |= max((3909889330U), (2392838157U));
                        var_34 = ((unsigned int) ((((/* implicit */_Bool) 3449153670U)) ? (3698597740U) : (3909889336U)));
                    }
                    for (unsigned int i_8 = 0; i_8 < 17; i_8 += 4) 
                    {
                        arr_27 [i_0] [i_1] [i_0] [i_8] = (~(3156967018U));
                        var_35 = max((((((/* implicit */_Bool) 3286749408U)) ? (3909889312U) : (2405933252U))), (min((2973782989U), (3404861190U))));
                        var_36 ^= ((min((arr_0 [i_0 - 1]), (arr_0 [i_3]))) + (((/* implicit */unsigned int) ((/* implicit */int) ((arr_19 [i_8] [i_3] [i_3] [i_1] [i_1] [i_1] [i_0]) < (((/* implicit */unsigned int) ((/* implicit */int) ((1615222355U) <= (1372224610U))))))))));
                        arr_28 [i_0] [i_1] [i_0] = arr_14 [i_0] [i_8] [i_0] [i_8];
                    }
                }
            }
        } 
    } 
}

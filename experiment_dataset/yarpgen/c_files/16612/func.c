/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16612
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned short) arr_0 [i_0] [i_1]);
                var_19 = ((/* implicit */int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-24272)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) ? (((((/* implicit */_Bool) (unsigned char)205)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)14))) : (arr_3 [i_0]))) : (arr_3 [i_0])))));
                /* LoopSeq 2 */
                for (short i_2 = 2; i_2 < 17; i_2 += 3) /* same iter space */
                {
                    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) 1030231077U)) ? (1030231083U) : (((/* implicit */unsigned int) 8191))));
                    var_21 = ((/* implicit */short) var_5);
                }
                for (short i_3 = 2; i_3 < 17; i_3 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 19; i_4 += 1) 
                    {
                        for (long long int i_5 = 3; i_5 < 17; i_5 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_15 [i_0] [i_5 + 1] [i_5 - 2] [i_5 - 1] [i_5 - 2] [i_5]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)251)))))) ? (((/* implicit */unsigned long long int) var_12)) : (((arr_15 [i_0] [(short)8] [i_0] [i_5] [i_5 + 2] [i_5]) ? (arr_8 [i_0] [i_0] [i_0 - 1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)14))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))));
                                var_23 = (-(((/* implicit */int) (short)13385)));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_9 [i_0])) ? (((/* implicit */long long int) var_12)) : (var_13))));
                    var_25 = ((/* implicit */_Bool) ((4135942187075943725LL) * (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_15 [i_0] [i_1] [i_1] [i_3 + 1] [4LL] [i_3 - 1])) : (((/* implicit */int) (_Bool)1)))))));
                }
            }
        } 
    } 
    var_26 = ((/* implicit */short) var_9);
    var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(-13)))) ? (((/* implicit */unsigned int) (((+(((/* implicit */int) var_11)))) * (((/* implicit */int) min((var_3), (((/* implicit */short) (_Bool)1)))))))) : (((((_Bool) (_Bool)1)) ? (var_6) : ((~(var_6)))))));
    var_28 = ((/* implicit */unsigned short) (-(var_8)));
}

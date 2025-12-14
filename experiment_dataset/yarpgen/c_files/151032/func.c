/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151032
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_19 |= ((/* implicit */_Bool) ((unsigned long long int) 16744470918106725666ULL));
                                var_20 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_4)) ? (max((1702273155602825949ULL), (1702273155602825950ULL))) : (((unsigned long long int) var_1))))));
                                var_21 = ((/* implicit */long long int) (~(374998456)));
                            }
                        } 
                    } 
                } 
                var_22 = (+(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (((((/* implicit */_Bool) 9527565834089084026ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1]))) : (var_10))))));
                var_23 ^= ((/* implicit */unsigned char) ((max((var_6), (((/* implicit */int) (!(var_15)))))) - (((/* implicit */int) var_4))));
                var_24 = ((/* implicit */unsigned char) (((_Bool)1) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_10 [i_0] [i_0] [i_1] [i_1] [i_0] [i_1]) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))) % (7042725860559341854ULL))) : ((+(var_5)))));
                var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) (((~(var_8))) - (((/* implicit */unsigned long long int) (((~(((/* implicit */int) (unsigned char)146)))) / (((/* implicit */int) (_Bool)1))))))))));
            }
        } 
    } 
    var_26 = var_18;
    var_27 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */int) min((var_3), (var_13)))), (min((((/* implicit */int) (_Bool)1)), (882271117))))))));
}

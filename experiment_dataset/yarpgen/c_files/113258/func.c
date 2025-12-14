/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113258
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (long long int i_4 = 4; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((max((4294967295U), (4294967284U))), (4294967286U))))));
                                var_21 = ((/* implicit */_Bool) max((var_21), ((!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_0))) / (var_6))))))));
                                var_22 = ((/* implicit */_Bool) (~((~(var_15)))));
                            }
                        } 
                    } 
                    var_23 *= ((/* implicit */unsigned short) var_7);
                    var_24 = (((-(12U))) != ((~(0U))));
                    var_25 = ((/* implicit */long long int) min((min((((/* implicit */unsigned int) ((short) var_2))), (0U))), (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 1495738738U))))))))));
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((_Bool) ((0LL) >= (((/* implicit */long long int) ((/* implicit */int) var_19))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (((3734515706007599824ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108871
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
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 3; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */long long int) max((((/* implicit */int) arr_3 [18LL] [i_1])), ((+(((/* implicit */int) min(((short)12857), ((short)-322))))))));
                                var_14 = ((/* implicit */unsigned long long int) arr_6 [i_0] [i_0]);
                                arr_13 [i_0] [i_1] [i_2] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (+((~((-(-8027999906276727818LL)))))));
                                var_15 = ((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_4 + 3] [i_4] [i_4] [i_4] [i_4 + 2] [i_4 + 1]))))), (((((/* implicit */int) arr_6 [i_4 - 1] [i_4 + 3])) - (((/* implicit */int) arr_6 [i_4 + 2] [i_4 + 2]))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_7 [i_1] [i_1])))) - (max(((-(var_9))), (((/* implicit */unsigned int) arr_4 [i_2] [i_1]))))));
                    var_17 = ((/* implicit */unsigned char) 8027999906276727817LL);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10))))) & (var_7)));
}

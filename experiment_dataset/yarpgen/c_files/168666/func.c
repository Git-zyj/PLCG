/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168666
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
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((int) var_6)))));
    var_19 += ((/* implicit */short) ((min((var_6), (((/* implicit */unsigned long long int) var_10)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
    var_20 = (((-((~(var_8))))) << (((var_15) - (892800832U))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 15; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [15ULL] [i_2 + 2] [i_2 - 1] [(short)0] [i_0] = var_4;
                                var_21 = ((/* implicit */int) var_8);
                            }
                        } 
                    } 
                    arr_14 [6ULL] [i_1] [i_0] [11ULL] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)25)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (min((arr_1 [i_2 + 2] [(short)3]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (2027617782) : (-2027617755))))))));
                    arr_15 [(short)0] [i_0] [(unsigned short)5] [16LL] = ((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_0] [i_2 + 1]);
                }
            } 
        } 
    } 
}

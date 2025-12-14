/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108903
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
    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) (-(((unsigned int) ((((/* implicit */_Bool) (unsigned char)255)) && (var_16)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_18 ^= (~(min((((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (7901575076187380208LL) : (-7901575076187380208LL))), (((/* implicit */long long int) arr_0 [i_0])))));
                var_19 += ((/* implicit */signed char) (+(((/* implicit */int) arr_1 [i_1]))));
                arr_4 [i_0] [i_1] = var_11;
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 13; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] [i_0] [i_2] [i_3] [i_0] = ((/* implicit */_Bool) ((var_8) * (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)250)) ? (((/* implicit */int) (unsigned short)30752)) : (((/* implicit */int) (unsigned char)255))))) ^ (-1240644429537262633LL))))));
                            var_20 = ((/* implicit */unsigned int) -7901575076187380194LL);
                            arr_11 [i_0] [6] = ((/* implicit */short) arr_9 [i_0] [i_1] [(_Bool)0] [7LL]);
                            var_21 = ((/* implicit */unsigned int) var_0);
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) ((((/* implicit */int) var_7)) | (((/* implicit */int) var_2))));
}

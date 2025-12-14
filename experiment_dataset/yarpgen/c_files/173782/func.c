/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173782
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
    var_20 = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 17077889092857049854ULL)) ? (var_18) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)250)))))) ? (var_15) : (((/* implicit */long long int) min((((/* implicit */int) var_10)), (var_5)))))), (((/* implicit */long long int) ((short) ((((/* implicit */long long int) ((/* implicit */int) var_6))) | (var_15))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 14; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                arr_6 [i_1] |= ((((/* implicit */_Bool) (+((+(((/* implicit */int) (unsigned short)1227))))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)1239))))) : (((arr_2 [i_0 + 2] [i_1]) + (((/* implicit */long long int) ((/* implicit */int) (short)12266))))));
                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_0 + 2]))))) ? (max((arr_2 [i_0 + 1] [i_0 + 1]), (arr_2 [i_0] [i_0 - 1]))) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))));
                /* LoopNest 3 */
                for (long long int i_2 = 4; i_2 < 14; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 1; i_4 < 13; i_4 += 3) 
                        {
                            {
                                var_22 += ((/* implicit */unsigned long long int) (unsigned short)65529);
                                var_23 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned char)128)) > (((/* implicit */int) (unsigned short)65524)))) || (((/* implicit */_Bool) arr_7 [i_0 - 3] [i_1] [i_2]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_24 &= ((/* implicit */_Bool) (-(max((((/* implicit */int) (unsigned char)199)), ((+(((/* implicit */int) (short)-1))))))));
}

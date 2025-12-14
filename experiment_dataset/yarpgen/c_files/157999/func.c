/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157999
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
    for (short i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_13 &= ((/* implicit */unsigned int) ((unsigned char) max((((/* implicit */unsigned int) ((short) -6592552008730664582LL))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 + 1]))) : (2698123237U))))));
                arr_6 [i_0 + 1] [i_0 + 1] [i_1] = ((/* implicit */unsigned char) (short)(-32767 - 1));
                var_14 ^= ((/* implicit */unsigned int) (~(((/* implicit */int) ((short) arr_2 [i_0 + 2] [i_0 + 2])))));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    var_15 = ((/* implicit */unsigned char) 1596844055U);
                    var_16 = ((/* implicit */long long int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) min((345463737155863434LL), (((/* implicit */long long int) 1596844057U)))))))), ((signed char)-31)));
                    arr_10 [i_2] [i_2] = ((/* implicit */int) ((long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)15))) & (((((/* implicit */_Bool) 2812939110U)) ? (var_12) : (var_1))))));
                    arr_11 [i_1] [i_2] [i_2] = ((/* implicit */long long int) min((0U), (2698123237U)));
                    var_17 &= ((/* implicit */_Bool) (unsigned char)72);
                }
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((min((1094180700), (((/* implicit */int) var_9)))) & (var_3)))), (((((/* implicit */long long int) (-(((/* implicit */int) var_4))))) / (((((/* implicit */_Bool) (unsigned short)45146)) ? (-5260591678382954166LL) : (((/* implicit */long long int) var_5))))))));
}

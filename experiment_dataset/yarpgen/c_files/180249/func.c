/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180249
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
    var_12 = min((max((((((/* implicit */_Bool) (unsigned short)38068)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_3))), (((1125899890065408LL) >> (((var_5) - (3820947771972758644ULL))))))), (((/* implicit */long long int) 716582944U)));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [i_0] = ((/* implicit */long long int) 3191908362U);
                    arr_7 [(unsigned char)4] = ((/* implicit */unsigned short) 18446744073709551602ULL);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (unsigned long long int i_4 = 2; i_4 < 12; i_4 += 2) 
        {
            {
                var_13 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_4 - 1])) * (((/* implicit */int) arr_8 [i_4 + 2]))))) ? (max((35ULL), (((/* implicit */unsigned long long int) (unsigned char)71)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_2)), (21ULL)))))))));
                var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) max(((~(((/* implicit */int) arr_10 [i_4 + 1] [i_4 - 2] [i_4 + 2])))), (max((2147483647), (((/* implicit */int) (_Bool)0)))))))));
                var_15 &= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) 3743854463013616982ULL))) > (((/* implicit */int) arr_10 [i_3] [i_4 + 1] [i_3]))))), (min((((18446744073709551602ULL) + (((/* implicit */unsigned long long int) -2147483636)))), (((/* implicit */unsigned long long int) arr_9 [i_3] [0ULL]))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 11U)) ? (18446744073709551580ULL) : (((/* implicit */unsigned long long int) 2674218472U))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)150)) : (((/* implicit */int) (unsigned char)253))))) == (max((((/* implicit */long long int) (short)-32743)), (var_2))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483627)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? (var_2) : (((((/* implicit */_Bool) var_3)) ? (-1022732118751347778LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
}

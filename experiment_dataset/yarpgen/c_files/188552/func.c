/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188552
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
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */signed char) 542750723U);
                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_2 [i_0] [i_0] [10ULL]), (((/* implicit */unsigned short) var_11))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) 281474976448512LL))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((3447385808024407777LL) < (arr_1 [i_0] [i_1]))))))) : (max((arr_1 [i_1] [i_0]), (arr_1 [i_1] [i_0])))));
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */int) max((((/* implicit */short) var_5)), ((short)-30367)))) >> (((var_12) + (4018182396769648944LL))))), (((/* implicit */int) ((unsigned char) var_5)))));
                arr_5 [i_0] &= ((/* implicit */long long int) 3752216572U);
            }
        } 
    } 
    var_18 = var_0;
    var_19 = ((/* implicit */unsigned int) min((var_8), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_8)))))));
    var_20 = ((/* implicit */unsigned short) ((3752216572U) | (((((542750724U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) << (((((/* implicit */int) var_5)) - (196)))))));
    var_21 -= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) -658905311)) - (3752216565U)));
}

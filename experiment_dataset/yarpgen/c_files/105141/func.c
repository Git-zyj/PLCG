/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105141
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 18; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */_Bool) ((((_Bool) (-(((/* implicit */int) arr_8 [i_0] [i_1] [i_0]))))) ? ((-(((((/* implicit */_Bool) 6604906306828832251ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-4221))) : (281474842492928LL))))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_2 + 1])))))));
                    var_12 += ((/* implicit */unsigned char) max((((((((((/* implicit */_Bool) (unsigned char)25)) ? (arr_1 [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [i_1] [i_1]))))) + (9223372036854775807LL))) << (((((arr_1 [i_0] [i_1]) + (4535424459610982304LL))) - (7LL))))), (((/* implicit */long long int) min((arr_6 [i_1]), (arr_6 [i_1]))))));
                    var_13 *= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((-281474842492911LL) & (((/* implicit */long long int) arr_6 [i_1]))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) arr_7 [i_1])), ((unsigned char)110)))) : (((/* implicit */int) arr_8 [i_1] [i_1] [i_1]))))) != (min((((/* implicit */long long int) arr_5 [i_2 - 1] [i_2 - 1] [i_2])), (281474842492917LL)))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) min((var_6), (var_6)))), ((~(((/* implicit */int) (short)32559))))))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) (unsigned char)17)) ? (max((-281474842492907LL), (((/* implicit */long long int) var_6)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) var_3))))))))))));
    var_15 = ((/* implicit */short) var_5);
    var_16 = ((/* implicit */int) var_8);
}

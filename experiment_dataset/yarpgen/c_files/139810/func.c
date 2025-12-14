/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139810
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
    var_13 -= ((/* implicit */short) max((((/* implicit */unsigned long long int) ((signed char) ((unsigned short) 1795881805987910784ULL)))), ((+(((16650862267721640831ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))));
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) < (var_3)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_2 [i_0])) || (((/* implicit */_Bool) max((arr_1 [i_1]), (((/* implicit */short) (unsigned char)0))))))) ? (((/* implicit */int) arr_1 [19ULL])) : (((/* implicit */int) (unsigned char)63))));
                var_15 *= ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */int) arr_2 [10U])) + (((/* implicit */int) arr_2 [i_0]))))), (4493119831708600527LL)));
                var_16 = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])), (17451503584242782598ULL))), (((/* implicit */unsigned long long int) ((unsigned int) (unsigned char)255)))));
                var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_4 [i_0] [9U])))) | (0U))))));
            }
        } 
    } 
}

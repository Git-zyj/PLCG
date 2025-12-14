/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170237
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
    var_17 = ((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (-2147483647 - 1))), (4025578287U)))))));
    var_18 += ((/* implicit */signed char) (-((-((+(((/* implicit */int) (short)-32764))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 23; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */signed char) ((min((min((-1430269899), (((/* implicit */int) (short)-32764)))), (((((/* implicit */_Bool) 3206502337U)) ? (-1430269899) : (((/* implicit */int) (short)-32763)))))) / (((((/* implicit */int) var_11)) >> (((7228131621714015178ULL) - (7228131621714015176ULL)))))));
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (-((-(min((((/* implicit */int) (short)-6570)), (1430269878)))))));
                arr_9 [i_0] [i_1] [i_0] = ((unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)32764)), ((unsigned short)27788)))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_13))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32763))) * (3ULL)))));
                var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 0U))));
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186155
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
    var_19 = (+(-7912070958560299941LL));
    var_20 = ((/* implicit */int) var_8);
    var_21 = ((/* implicit */signed char) min(((-(((/* implicit */int) var_0)))), (((/* implicit */int) (_Bool)1))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 8; i_2 += 1) 
            {
                {
                    var_22 |= ((/* implicit */short) ((((_Bool) var_9)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))));
                    var_23 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (_Bool)0)), ((short)-16438))))) > (arr_4 [i_0] [i_2 + 2] [i_2 + 2] [i_1]))))));
                    var_24 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((unsigned int) arr_4 [i_1] [i_1] [i_2 - 1] [i_2 - 1]))) / (arr_4 [i_0] [i_1] [i_2 + 1] [i_2 + 1])));
                    var_25 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_2 - 1] [i_2 - 1] [i_2 - 1])) ? ((~(2413608759039058566ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2921589060U))))))));
                }
            } 
        } 
    } 
    var_26 &= ((/* implicit */unsigned short) min((((/* implicit */long long int) var_0)), (var_13)));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105268
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
    for (short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (long long int i_1 = 4; i_1 < 13; i_1 += 3) 
        {
            {
                arr_7 [i_1] = ((/* implicit */unsigned char) max((((min((var_1), (((/* implicit */long long int) (unsigned char)25)))) - (((/* implicit */long long int) max((((/* implicit */int) (unsigned char)241)), (var_0)))))), (((/* implicit */long long int) 623966300))));
                arr_8 [i_1 - 2] [i_1 + 2] [i_1] = ((/* implicit */short) ((unsigned short) ((short) (((_Bool)1) ? (((/* implicit */int) var_6)) : (1231057496)))));
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned char) ((int) min((min((var_9), (var_7))), (var_9))));
    var_12 ^= max((((/* implicit */signed char) (!(((/* implicit */_Bool) var_5))))), (var_5));
    /* LoopNest 3 */
    for (unsigned short i_2 = 1; i_2 < 14; i_2 += 1) 
    {
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            for (unsigned short i_4 = 3; i_4 < 15; i_4 += 2) 
            {
                {
                    arr_19 [i_4] [i_4] [i_4] [i_4] = ((short) ((((/* implicit */long long int) 1231057522)) < (-1LL)));
                    var_13 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) max((-1231057511), (((/* implicit */int) (unsigned char)246))))) ? (8409429602872960482LL) : (((/* implicit */long long int) max((((/* implicit */int) (_Bool)1)), (-1231057496)))))), (((/* implicit */long long int) ((((/* implicit */long long int) 1231057496)) > (-3744997653438475668LL))))));
                }
            } 
        } 
    } 
}

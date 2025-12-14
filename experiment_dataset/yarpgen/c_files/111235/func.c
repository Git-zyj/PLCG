/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111235
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
    for (unsigned short i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_12 *= ((/* implicit */unsigned char) max((-8885902014338719332LL), (-2406736678306887164LL)));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_0 - 1] [i_1] [i_2] [i_3] [i_3] [i_4] = ((/* implicit */signed char) var_10);
                                arr_14 [i_4] [i_0] [i_1] [i_2] [i_3] [i_1] [i_4] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) arr_1 [i_0 + 1]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) min((421919109041177228ULL), (((/* implicit */unsigned long long int) (unsigned short)22988))))) ? (min((421919109041177220ULL), (((/* implicit */unsigned long long int) 17179869183LL)))) : ((((_Bool)1) ? (18024824964668374407ULL) : (421919109041177232ULL)))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127025
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [i_2] = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) (unsigned short)44638)) + (((/* implicit */int) (unsigned short)42166))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (short i_4 = 3; i_4 < 23; i_4 += 1) 
                        {
                            {
                                arr_13 [i_1] [i_2] [i_3] [i_4 - 1] = ((/* implicit */signed char) ((unsigned short) (short)-27063));
                                var_14 = ((/* implicit */unsigned short) arr_3 [i_0] [i_0] [i_0]);
                                var_15 ^= ((/* implicit */_Bool) (unsigned short)44637);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 *= ((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)24926))))) ? (4294967295U) : (((/* implicit */unsigned int) -1379379935))))) : (((((_Bool) (short)24206)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) : (17914385476318451984ULL)))));
    var_17 = ((/* implicit */int) ((unsigned long long int) 0U));
    var_18 = ((/* implicit */_Bool) ((int) (-2147483647 - 1)));
}

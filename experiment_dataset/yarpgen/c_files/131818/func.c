/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131818
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
    var_14 = min((((/* implicit */int) (unsigned char)158)), (((int) 9132801721732314242LL)));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_15 &= ((/* implicit */unsigned char) 1293377112U);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_16 ^= ((/* implicit */_Bool) ((short) var_6));
                                var_17 = ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) arr_7 [i_0] [i_0 + 1] [i_0])))));
                                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0 - 1]))) : (3709227064U))) < (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1])) && (((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0 - 1] [i_0 - 1])))))))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_0 - 1])) ? (((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) ((short) arr_2 [i_0 + 1] [i_0 - 1])))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned int) max((var_20), (((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_12) : (((/* implicit */unsigned int) var_13))))) || (((/* implicit */_Bool) var_0)))) ? (((unsigned int) (((_Bool)1) ? (4290772992U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)50)))))) : (var_10)))));
}

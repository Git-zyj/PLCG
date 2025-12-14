/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127191
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 3; i_3 < 8; i_3 += 3) 
                    {
                        {
                            arr_14 [i_0] [i_0] [9ULL] [i_3] [3U] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_3 + 1] [i_2]))) & (1721447256U)))) / (((((/* implicit */_Bool) arr_9 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5))))) : ((+(13181005277026251979ULL)))))));
                            var_12 = ((/* implicit */unsigned short) min(((~(arr_6 [i_1] [i_3 + 3] [i_3] [i_3 + 1]))), (14566142031091420407ULL)));
                            /* LoopSeq 1 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                arr_17 [i_0] [i_3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_10 [i_3 - 2] [i_3 - 3] [i_3] [i_3 - 2] [i_3] [i_4]);
                                var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) arr_12 [i_0] [i_2] [(short)11] [i_3 + 4] [i_3] [i_3 - 2]))) ? (14566142031091420407ULL) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)(-32767 - 1))))))));
                                var_14 = ((/* implicit */_Bool) ((signed char) 328301389U));
                                arr_18 [i_0] [i_3] [i_2] [i_3] [i_4] = ((/* implicit */int) var_1);
                                arr_19 [i_0] [i_0] [(signed char)4] [4LL] [i_3] [i_4] |= ((/* implicit */_Bool) ((unsigned int) 4294967295U));
                            }
                        }
                    } 
                } 
                var_15 = ((/* implicit */short) (-((-(arr_10 [i_0] [i_0] [i_1] [i_0] [i_1] [i_1])))));
            }
        } 
    } 
    var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) var_2))));
    var_17 = ((/* implicit */_Bool) (+(((423013883) >> (((3966665907U) - (3966665905U)))))));
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : ((~(656569815U)))))) : (((((/* implicit */_Bool) ((-9213198643535834047LL) | (((/* implicit */long long int) 328301397U))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_6)), (3638397480U)))) : (((unsigned long long int) var_8))))));
}

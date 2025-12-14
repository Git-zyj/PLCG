/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111291
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 11; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) arr_7 [i_1] [i_2 - 1] [i_2 + 2]))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) arr_7 [i_0] [(signed char)10] [i_4 + 1]))));
                                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) arr_8 [i_0] [i_3] [i_3] [i_3]))));
                                var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((arr_4 [i_3] [i_4 - 3] [i_4 - 2]) ^ (((/* implicit */int) arr_1 [(unsigned char)7] [i_3])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 &= ((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)27)), (var_14)));
    var_25 ^= max((((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) var_9)) ? (var_3) : (var_11))) : (((/* implicit */int) var_8)))), (((((/* implicit */_Bool) ((267911168LL) << (((var_10) - (3122794743801315798ULL)))))) ? (((((/* implicit */int) var_5)) >> (((((/* implicit */int) var_15)) - (227))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_8)) : (var_11))))));
}

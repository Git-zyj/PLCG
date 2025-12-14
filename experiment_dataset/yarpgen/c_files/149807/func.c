/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149807
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
    var_16 = ((/* implicit */_Bool) ((var_7) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_4)))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_17 -= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_2]))))), (max((((/* implicit */unsigned long long int) min((((/* implicit */short) (unsigned char)0)), (var_6)))), (((((/* implicit */_Bool) var_0)) ? (7085335091143352503ULL) : (((/* implicit */unsigned long long int) var_4))))))));
                    var_18 = max((((/* implicit */long long int) 277811899)), (min((max((((/* implicit */long long int) var_14)), (var_15))), (8228725763920648994LL))));
                    var_19 = ((/* implicit */unsigned int) (((+(((/* implicit */int) (short)-20126)))) - (645366362)));
                    var_20 ^= ((/* implicit */short) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)42504))) : (16202648569037959297ULL)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_3] [i_4] &= ((/* implicit */signed char) (-(((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) ^ (arr_9 [i_0] [i_0] [i_2] [16ULL])))));
                                arr_14 [18ULL] [i_1] [i_2] [i_2] [i_3] [i_4] [i_4 + 1] = ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) (signed char)-77)))), (((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_4] [i_3])) * (((/* implicit */int) var_9))))) ? (((/* implicit */int) (unsigned char)2)) : (((/* implicit */int) arr_0 [i_4 + 1]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */long long int) var_13))));
}

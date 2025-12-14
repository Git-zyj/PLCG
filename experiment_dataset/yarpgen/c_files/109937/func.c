/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109937
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
    var_14 = ((/* implicit */int) ((unsigned short) min((((/* implicit */long long int) var_11)), (((long long int) var_4)))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_8 [i_2] = ((/* implicit */long long int) ((((min((var_9), (((/* implicit */int) arr_1 [i_0])))) + (2147483647))) << (((((var_9) + (1018179994))) - (7)))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                arr_14 [(unsigned char)9] [(signed char)8] [(_Bool)1] [(unsigned char)9] [14] &= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)78))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) min(((signed char)-1), (var_8)))), (((((/* implicit */long long int) ((/* implicit */int) arr_13 [(_Bool)1] [i_3] [i_3 - 2] [i_0] [(_Bool)1] [(_Bool)1] [i_0]))) & (arr_12 [i_4] [i_1] [i_2] [i_1] [i_0])))))) : (max((((/* implicit */unsigned long long int) arr_4 [4LL] [i_1] [i_3])), (7073782893557068192ULL)))));
                                var_15 = ((/* implicit */signed char) ((((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_9 [i_0] [i_1] [3U] [3LL] [i_3] [i_4])))))) + (2147483647))) << ((((~(((var_13) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2]))) : (var_1))))) - (3112826940U)))));
                                arr_15 [i_0] [i_1] [i_2] [i_3 + 1] [i_4] [i_4] [(short)9] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_11)), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_3 - 2] [i_3 + 1] [(_Bool)1] [i_4]))) * (arr_3 [i_3 - 1] [i_3 - 1] [i_3 - 2])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}

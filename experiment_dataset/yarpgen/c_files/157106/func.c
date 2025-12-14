/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157106
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
    var_15 = ((/* implicit */unsigned int) var_14);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 4; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_2] [i_1] [i_2 + 2])) ? (((/* implicit */int) ((((/* implicit */int) arr_13 [i_4] [i_3] [i_2] [i_2] [i_1] [i_0])) < (((/* implicit */int) (_Bool)1))))) : (((arr_5 [i_0]) ^ (((/* implicit */int) arr_0 [i_0]))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1] [i_2] [i_3 + 1] [i_4])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)(-127 - 1)))))) ? (((/* implicit */unsigned long long int) ((var_4) ? (arr_2 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (short)-1)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_3 + 1] [i_3 + 1] [i_4]))) % (arr_10 [i_0])))))));
                                var_17 = ((((long long int) (~(arr_11 [i_4] [i_3 + 1] [i_2] [i_1])))) != (((((long long int) (unsigned char)15)) & (((/* implicit */long long int) max((var_5), (((/* implicit */int) (signed char)2))))))));
                                arr_14 [i_4] [i_3 + 1] [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (((-9223372036854775807LL - 1LL)) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) - (arr_11 [i_0] [i_0] [i_3 + 1] [(signed char)8])))) || (((/* implicit */_Bool) (~(max((((/* implicit */long long int) arr_7 [i_0])), (arr_2 [i_0] [i_1] [i_1])))))));
                                arr_15 [i_0] [i_0] [i_0] [i_0] [2] [i_0] [i_0] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (33554432U)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_2 - 4] [i_3] [i_4])) ? (((/* implicit */int) arr_7 [i_0])) : (((/* implicit */int) arr_13 [i_4] [i_3] [i_1] [i_1] [i_1] [i_0]))))) : (arr_2 [i_2 - 1] [i_0] [i_0])))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) (~(33554410U))))) > (((/* implicit */int) min((arr_0 [i_1]), (max((((/* implicit */unsigned short) arr_13 [i_0] [i_0] [i_0] [i_2] [i_1] [i_2])), (arr_9 [i_2] [i_1] [i_0]))))))));
                    var_18 ^= ((/* implicit */short) max((((/* implicit */unsigned int) ((unsigned char) 511ULL))), (((max((var_9), (((/* implicit */unsigned int) var_1)))) / (((/* implicit */unsigned int) ((/* implicit */int) max((arr_3 [i_0] [i_1]), (((/* implicit */unsigned short) arr_12 [i_0] [i_1] [i_2 + 2]))))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */signed char) max((((/* implicit */int) var_2)), (max((((((/* implicit */int) (unsigned char)226)) ^ (var_5))), ((((_Bool)1) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) var_12))))))));
    /* LoopNest 2 */
    for (unsigned int i_5 = 3; i_5 < 23; i_5 += 3) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */short) arr_23 [i_5] [i_5 - 1] [i_6])), ((short)-32757)))))))));
                var_21 ^= ((/* implicit */unsigned int) (!(((((/* implicit */int) arr_23 [i_5 + 1] [i_5 + 1] [i_5 - 2])) != ((-(((/* implicit */int) (unsigned short)32767))))))));
                var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */int) arr_18 [i_5 - 3])) + (((/* implicit */int) arr_18 [i_5 - 3]))))), (((max((((/* implicit */long long int) var_8)), (-8613019107119433251LL))) - (((/* implicit */long long int) (-(((/* implicit */int) var_7))))))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) var_4);
}

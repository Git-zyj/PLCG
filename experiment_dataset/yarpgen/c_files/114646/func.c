/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114646
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
    var_15 = ((/* implicit */int) max((((/* implicit */unsigned long long int) var_4)), (((((var_1) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) * (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6)))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 8; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */int) (+(((((/* implicit */_Bool) (short)-25466)) ? ((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_7))) : (min((((/* implicit */unsigned long long int) arr_1 [(short)7])), (10055911659897841641ULL)))))));
                    var_17 |= ((/* implicit */unsigned char) var_10);
                    arr_7 [i_1] [i_1] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (-1938860375)));
                    arr_8 [i_1] = ((/* implicit */int) max((max((8388096ULL), (((/* implicit */unsigned long long int) arr_0 [i_2 + 1] [i_1])))), (((/* implicit */unsigned long long int) ((arr_0 [i_2 + 4] [(unsigned short)6]) / (arr_0 [i_2 + 3] [5LL]))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                arr_16 [i_1] [8] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((-(18446744073701163525ULL))) / (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_13)))))))) ? (((/* implicit */int) arr_4 [i_2 - 1] [i_1])) : ((+(((((/* implicit */_Bool) arr_13 [i_1] [i_3] [i_2] [0ULL] [i_1])) ? (((/* implicit */int) arr_15 [i_1] [3] [(unsigned short)6])) : (1938860381)))))));
                                arr_17 [(short)6] [i_1] [i_2] [i_1] [11ULL] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */short) var_12)), (var_5)))) || (((/* implicit */_Bool) (-(var_7))))))) + (var_10)));
                                var_18 ^= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (arr_10 [8] [(signed char)10] [0LL] [0ULL] [(_Bool)1]) : (((((/* implicit */_Bool) var_13)) ? (var_10) : (((/* implicit */int) arr_1 [1]))))))), (((8388089ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)18747)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */long long int) (~(8388086ULL)));
}

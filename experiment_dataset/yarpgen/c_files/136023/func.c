/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136023
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = min(((-(((((/* implicit */_Bool) var_8)) ? (arr_3 [i_0] [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))), (min((((/* implicit */unsigned int) (+(((/* implicit */int) var_2))))), (((((/* implicit */_Bool) (short)992)) ? (1216884456U) : (((/* implicit */unsigned int) -6)))))));
                arr_5 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((_Bool) arr_0 [i_0] [i_1])) ? ((-(((arr_2 [i_0] [i_0] [i_0]) - (2726868555366102223ULL))))) : (((/* implicit */unsigned long long int) ((long long int) (unsigned char)128)))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 3; i_2 < 8; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) 12845331462796388161ULL)) ? (12845331462796388158ULL) : (((/* implicit */unsigned long long int) 3972746045U))));
                            arr_13 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [(short)1])) ? (((((/* implicit */_Bool) 1216884467U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0]))) : (3078082850U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) 3078082840U)))))) : (max((12845331462796388158ULL), (((/* implicit */unsigned long long int) 1216884467U))))));
                            arr_14 [(short)0] [i_1] = ((/* implicit */_Bool) 1216884472U);
                        }
                    } 
                } 
                arr_15 [i_0] = ((/* implicit */long long int) (unsigned char)4);
                arr_16 [i_0] = ((/* implicit */_Bool) ((unsigned short) ((unsigned short) ((unsigned long long int) arr_2 [i_0] [i_0] [i_0]))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) * (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (12845331462796388161ULL)))) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (signed char)0))))) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
}

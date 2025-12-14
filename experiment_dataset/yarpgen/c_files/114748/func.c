/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114748
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
    var_18 = ((/* implicit */unsigned short) (((-(((((/* implicit */_Bool) (unsigned char)248)) ? (((/* implicit */long long int) 4001156786U)) : (6405830648583508629LL))))) - (4974526793602362452LL)));
    var_19 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (unsigned short)65518))))) ? (((((/* implicit */int) (unsigned short)45885)) + (((/* implicit */int) (unsigned short)0)))) : ((-(((/* implicit */int) var_10))))))) - ((((-(-1320730997541070582LL))) / (var_0)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 2; i_3 < 18; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) min((max((((((/* implicit */_Bool) 0U)) ? (arr_7 [i_0 + 2] [i_1] [i_3] [i_3]) : (((/* implicit */long long int) 2450854379U)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65514))) : (arr_6 [i_4 - 1] [i_1] [i_1] [i_0])))))), (((/* implicit */long long int) (unsigned char)172))));
                                var_21 ^= ((/* implicit */long long int) arr_2 [i_0 + 1] [i_3 + 1]);
                                var_22 = ((/* implicit */unsigned int) ((((arr_6 [i_4 - 1] [i_1 - 2] [i_0 + 1] [i_0 + 1]) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)254))))) != (((arr_9 [i_0] [i_1 - 2] [i_4] [i_4] [i_1] [i_3]) ^ (arr_9 [i_0] [i_0] [i_0 - 1] [i_0 + 1] [i_0] [i_3])))));
                                var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)172)))))) * (min((arr_3 [i_0] [i_4 + 1] [i_3 + 1]), (((((/* implicit */_Bool) arr_4 [i_3 + 2] [i_3] [i_3 + 2])) ? (arr_3 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))))))));
                                arr_13 [i_3] [i_3] [i_2] [i_4] [i_4] [i_3 + 1] = ((/* implicit */unsigned char) ((((unsigned int) arr_9 [i_1 - 1] [i_3] [i_4 - 1] [i_4] [i_4] [i_3])) >> (((/* implicit */int) ((var_6) >= (((/* implicit */long long int) 4001156786U)))))));
                            }
                        } 
                    } 
                } 
                var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_0 - 1]))) : (arr_2 [i_0] [i_0])))) ? (((arr_10 [(unsigned char)12]) ? (((/* implicit */long long int) 1885880285U)) : (arr_1 [i_1] [i_1]))) : (((/* implicit */long long int) arr_9 [i_1 + 1] [i_1] [i_1] [i_1] [i_1] [(unsigned char)4])))), (((arr_0 [i_0 + 4] [i_1]) - (((/* implicit */long long int) ((/* implicit */int) arr_10 [10LL]))))))))));
            }
        } 
    } 
}

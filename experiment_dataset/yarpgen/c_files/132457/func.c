/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132457
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
    var_17 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (min((((/* implicit */long long int) 0U)), (var_11))) : (((/* implicit */long long int) min((658007328), (((/* implicit */int) (unsigned short)26036))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(max((16515072U), (((/* implicit */unsigned int) var_6))))))) ? (min((min((var_5), (((/* implicit */unsigned int) -658007329)))), (((/* implicit */unsigned int) max((((/* implicit */unsigned char) arr_6 [i_0])), (arr_3 [i_2] [i_1] [i_2])))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_10)), (var_3)))) ? (((/* implicit */int) var_13)) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_5 [i_2] [(_Bool)1] [i_0])) : (((/* implicit */int) (short)0)))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 20; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0 - 1] [11] [11] [i_0] = ((/* implicit */unsigned int) 658007328);
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0] = ((/* implicit */_Bool) arr_9 [i_0] [i_3] [i_2] [i_0]);
                                arr_15 [i_0] [i_2] [i_0] = ((/* implicit */long long int) ((((((/* implicit */int) arr_12 [i_0] [i_0] [i_0 - 1] [i_0] [i_4])) - (((/* implicit */int) arr_12 [i_0] [i_0] [i_0 - 1] [i_1] [i_0 - 1])))) - (((/* implicit */int) min((arr_12 [i_0] [i_0 - 1] [i_0 - 1] [i_3 - 1] [i_3]), (arr_12 [i_0] [i_0] [i_0 - 1] [i_4] [i_0 - 1]))))));
                                arr_16 [i_1] [i_2] [i_0] [i_4] = ((/* implicit */unsigned char) ((min((((((/* implicit */_Bool) arr_3 [i_4] [i_3] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_5))), (max((4240293147U), (3270117281U))))) << (((((((/* implicit */_Bool) arr_5 [i_3 - 1] [i_3 - 1] [i_3 - 1])) ? ((+(2921427425U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((1198798789) < (((/* implicit */int) (signed char)-19)))))))) - (2921427400U)))));
                                arr_17 [i_2] [i_2] [i_0] [i_2] [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned int) var_15)), (var_1))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_3 + 1])))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned short) min((((/* implicit */int) ((unsigned short) min((arr_0 [i_2] [i_1]), (((/* implicit */short) arr_6 [i_0])))))), (max((var_6), (((((/* implicit */_Bool) (short)17)) ? (var_6) : (((/* implicit */int) arr_5 [i_2] [i_1] [i_0 - 1]))))))));
                    arr_18 [i_0] [i_1] = min((((((/* implicit */int) arr_5 [i_0] [i_0] [i_2])) ^ (((var_6) ^ (((/* implicit */int) arr_12 [i_0] [i_2] [i_2] [i_2] [i_2])))))), (((/* implicit */int) min((((_Bool) var_13)), ((_Bool)1)))));
                }
            } 
        } 
    } 
}

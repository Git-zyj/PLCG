/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10205
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
    var_11 = ((((/* implicit */int) var_10)) == (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) (short)-8146)) % (((/* implicit */int) var_9))))) < (((var_2) / (((/* implicit */long long int) ((/* implicit */int) var_6)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                arr_5 [i_0] [2U] [i_0] = (_Bool)1;
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_1] [i_0] [i_3] [i_4] = ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (short)-28657))) >= (6017505250581034115LL))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-81)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-81))) : (3452426157U))) : ((~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (3809243597U)))))));
                                var_12 &= ((/* implicit */long long int) min((((((/* implicit */_Bool) ((long long int) (_Bool)1))) ? (((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (signed char)60)) : (((/* implicit */int) (signed char)0)))) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_3 [i_0] [i_0]))));
                            }
                        } 
                    } 
                } 
                var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_6 [i_1] [i_0])), (2778780827U))))));
            }
        } 
    } 
    var_14 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) & (((((/* implicit */int) (signed char)-81)) | (((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9))))) ^ (var_4))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((var_3) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) : (((472209139U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))))));
    /* LoopNest 2 */
    for (short i_5 = 2; i_5 < 7; i_5 += 4) 
    {
        for (unsigned int i_6 = 1; i_6 < 9; i_6 += 2) 
        {
            {
                var_15 += ((/* implicit */unsigned int) (((_Bool)1) ? (min(((-(((/* implicit */int) var_0)))), (((/* implicit */int) (_Bool)1)))) : (((((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) (_Bool)0)))) ? (((/* implicit */int) arr_13 [i_6] [i_6 - 1] [i_6] [i_5])) : (((/* implicit */int) ((((/* implicit */int) var_9)) < (((/* implicit */int) (_Bool)1)))))))));
                var_16 = var_3;
                var_17 = ((/* implicit */_Bool) ((((/* implicit */int) min((var_6), (((/* implicit */signed char) min(((_Bool)1), (arr_3 [i_5] [(_Bool)1]))))))) / (((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
}

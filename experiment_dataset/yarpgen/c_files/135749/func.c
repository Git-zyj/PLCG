/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135749
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
    var_15 += ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)0))));
    var_16 = ((/* implicit */int) min((var_8), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 301663061)) ? (((/* implicit */int) (unsigned short)14739)) : (((/* implicit */int) (unsigned short)11308)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    for (short i_3 = 1; i_3 < 17; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_17 += ((/* implicit */signed char) min(((((_Bool)1) ? (10830067215723816186ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)54))))), (max((((/* implicit */unsigned long long int) 301663061)), (2359269875619717311ULL)))));
                                var_18 += ((/* implicit */unsigned short) ((((unsigned long long int) 2523354956762691753ULL)) <= (16087474198089834304ULL)));
                                var_19 += ((/* implicit */unsigned int) arr_1 [i_1 + 1]);
                                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)-93)), (15923389116946859863ULL))))));
                                var_21 = ((/* implicit */signed char) max((min((arr_13 [i_0] [i_0] [i_2] [i_3 + 1] [i_4] [i_4]), (arr_13 [i_1] [(unsigned short)7] [(unsigned short)7] [i_3 + 1] [(_Bool)1] [i_4]))), (((((/* implicit */_Bool) arr_13 [i_1 - 1] [i_3] [i_3] [i_3 - 1] [i_4] [i_4])) ? (arr_13 [i_2] [i_2] [i_3 + 1] [i_3 - 1] [i_2] [i_4]) : (arr_13 [1] [1] [i_3] [i_3 - 1] [i_3 - 1] [(unsigned char)8])))));
                            }
                        } 
                    } 
                } 
                arr_14 [i_1] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1 + 1])) ? (((/* implicit */long long int) 2813393077U)) : (arr_1 [i_1 + 1]))));
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) var_3);
}

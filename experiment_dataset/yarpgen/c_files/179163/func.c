/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179163
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
    for (unsigned long long int i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 4; i_3 < 17; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_2] [i_2] [i_3] [i_2] |= ((/* implicit */signed char) ((((unsigned int) arr_12 [(signed char)1] [i_0 + 1] [i_3 - 3] [i_3 + 1])) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_4] [i_2] [i_1] [i_0 - 2])) ? (((/* implicit */int) arr_0 [i_1] [i_3 + 1])) : (((/* implicit */int) var_11)))))));
                                var_17 = ((/* implicit */unsigned long long int) (signed char)11);
                                arr_14 [i_3] [i_3] [i_3 - 1] [i_2] [i_1] [i_0] [i_3] |= ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_3] [i_0 + 1]))))) % (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_0 [i_4] [i_0 + 1]))))));
                            }
                        } 
                    } 
                    var_18 += ((/* implicit */unsigned long long int) (~(((/* implicit */int) max((arr_10 [i_0] [i_0] [i_0 + 1] [i_1] [i_0] [i_0 - 2]), (arr_9 [i_0] [i_0 - 2]))))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 18; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 2) 
                        {
                            {
                                arr_20 [i_0 - 1] [i_0] [i_2] [i_5] [i_6] [i_6] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((var_7) * ((-(var_9))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_1)))))));
                                var_19 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_0 [i_0] [i_2])) : (((/* implicit */int) arr_0 [i_0] [i_0])))) < (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) arr_17 [i_0 + 1] [i_0 + 1] [i_2] [i_2] [(signed char)13])) : (((/* implicit */int) var_3))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (signed char)-12)), (max((arr_18 [i_0] [i_1] [i_0] [i_0] [i_1] [i_1] [i_1]), (((/* implicit */unsigned long long int) arr_16 [i_0 - 3] [i_1] [i_2]))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) ((min((15392437271935870344ULL), (((/* implicit */unsigned long long int) (signed char)-38)))) >= (min((3054306801773681292ULL), (((/* implicit */unsigned long long int) max((var_12), (var_3))))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160971
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
    var_15 = ((/* implicit */unsigned int) 7065363902966868934LL);
    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) var_4))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (long long int i_2 = 3; i_2 < 16; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_17 ^= ((/* implicit */signed char) ((unsigned int) max((((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) var_1))))), (((int) var_13)))));
                                arr_15 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((unsigned int) min((arr_13 [i_0] [i_0] [i_1] [i_0] [i_2 + 2]), (arr_13 [i_2] [i_2] [i_1] [i_2] [i_2 + 2]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 4; i_5 < 15; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 2; i_6 < 17; i_6 += 4) 
                        {
                            {
                                arr_22 [i_1] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_6] [i_6] [i_6])))))) + (min((553886980U), (((/* implicit */unsigned int) var_2)))))))));
                                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_12 [i_2] [i_2 + 2] [i_2 + 2] [i_2] [i_2])))) ? (((/* implicit */int) ((unsigned char) 3741080316U))) : (((((/* implicit */_Bool) arr_13 [i_2] [i_2 + 2] [i_1] [i_1] [i_2 + 2])) ? (((/* implicit */int) arr_13 [i_2] [i_2 + 2] [i_1] [i_2 + 2] [i_1])) : (((/* implicit */int) var_2))))));
                                arr_23 [i_1] [i_1] = ((/* implicit */unsigned char) ((int) min((arr_13 [i_5 - 2] [i_5 - 2] [i_1] [i_1] [i_2 - 3]), (arr_13 [i_5 - 2] [i_5 - 2] [i_1] [i_5 - 2] [i_2 - 1]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 1; i_7 < 14; i_7 += 2) 
                    {
                        for (int i_8 = 4; i_8 < 16; i_8 += 3) 
                        {
                            {
                                arr_31 [i_8] [i_8] [i_8] [i_8] [i_8] [i_1] [i_1] = ((/* implicit */unsigned short) var_1);
                                var_19 = max((((((/* implicit */_Bool) arr_20 [i_0] [i_8 + 2] [i_8 + 2] [i_8 + 2] [i_7 + 2] [i_8 + 2] [i_8 + 2])) ? (0U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (arr_21 [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */int) arr_0 [i_0]))))))), (((/* implicit */unsigned int) ((int) 1231469224U))));
                                arr_32 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (~(max((max((4048666786U), (((/* implicit */unsigned int) arr_13 [i_0] [i_0] [i_1] [i_0] [i_0])))), (min((((/* implicit */unsigned int) arr_28 [i_0] [i_1] [i_1] [i_0] [i_1] [i_0])), (var_6)))))));
                                var_20 = ((/* implicit */int) ((unsigned char) -18LL));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}

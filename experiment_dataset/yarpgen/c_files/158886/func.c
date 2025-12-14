/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158886
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
    for (int i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (~(arr_2 [i_0 - 1] [i_0 - 2])))) >= (max((((/* implicit */unsigned long long int) arr_2 [i_0 + 1] [i_0 + 1])), (15237258967999888206ULL)))));
                    arr_8 [i_1] [i_1] [i_2] = ((/* implicit */_Bool) arr_1 [i_1]);
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_13 = 306181330U;
                                arr_15 [i_4] [(unsigned short)19] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) arr_7 [i_0] [i_0])), (min(((-(var_1))), (((/* implicit */unsigned long long int) arr_9 [i_4] [(unsigned char)6] [i_2] [6LL] [6LL]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 3; i_5 < 19; i_5 += 2) 
                    {
                        for (int i_6 = 0; i_6 < 20; i_6 += 4) 
                        {
                            {
                                arr_22 [i_5] [i_1] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_1] [i_2] [i_2] [i_1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1))));
                                var_14 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)679)) * (((((/* implicit */_Bool) (short)4233)) ? (((/* implicit */int) (short)32764)) : (((/* implicit */int) (short)4221))))));
                                arr_23 [i_0] [i_1] [(signed char)7] [i_2] [i_5] [i_5] [i_6] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) (-(arr_21 [i_1] [i_5] [i_2] [i_0])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) (-(2184206069U)));
}

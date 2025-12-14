/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136224
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
    var_17 = var_8;
    var_18 = ((/* implicit */unsigned short) var_9);
    var_19 = ((/* implicit */_Bool) var_6);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 4; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 18; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 17; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)35524)) / (2147483647))))));
                                var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) (-((-(arr_12 [i_4] [i_1] [i_2] [i_1 + 2] [i_1]))))))));
                                arr_13 [i_0 - 4] [i_1] [i_1] [i_1 + 3] [i_4] = ((/* implicit */int) (-((-(arr_6 [i_0 + 1])))));
                                var_22 = ((/* implicit */unsigned long long int) (-(0)));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_1 + 2] [(unsigned short)5] [i_2 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 5)) ? (((/* implicit */int) (signed char)-41)) : (((/* implicit */int) (((!(((/* implicit */_Bool) 4294967287U)))) && (((/* implicit */_Bool) 16U)))))));
                    arr_15 [i_0] [i_2] [i_2 - 1] = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_1]);
                    var_23 = ((/* implicit */unsigned int) arr_2 [i_0]);
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 19; i_5 += 4) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_20 [i_0 - 3] [i_1 + 1] [i_2 - 2] [i_5] [i_5] [i_6] = ((/* implicit */_Bool) (~((~(((arr_7 [i_0 + 1] [i_2 - 2] [i_5] [i_6]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [i_1 + 2]))) : (arr_4 [i_1] [i_2 - 1] [i_2 - 1])))))));
                                var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((unsigned char) (~(((/* implicit */int) (signed char)81))))))));
                                var_25 = ((/* implicit */_Bool) max((var_25), ((!((!((_Bool)1)))))));
                                var_26 = ((/* implicit */unsigned long long int) ((unsigned char) ((int) (signed char)-81)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */long long int) (~((~(((/* implicit */int) (_Bool)0))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169541
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
    var_12 = ((/* implicit */unsigned short) var_9);
    var_13 = ((/* implicit */unsigned int) max((((/* implicit */signed char) (_Bool)0)), ((signed char)0)));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 16; i_2 += 3) 
            {
                {
                    var_14 |= ((/* implicit */long long int) arr_2 [i_0]);
                    var_15 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_2 + 1])) || (((/* implicit */_Bool) arr_2 [i_2 + 1])))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) (unsigned char)56)) < (arr_9 [i_0] [i_1] [i_2] [i_3] [i_2])))), (arr_8 [i_0] [i_1] [i_2] [i_1] [i_2])))) ? (max((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))), ((~(((/* implicit */int) arr_0 [i_2])))))) : (((/* implicit */int) arr_4 [i_0]))));
                                var_17 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) % (var_4)))))))));
                                arr_10 [i_0] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned char) arr_4 [i_0 + 1])), (arr_2 [i_4])));
                                arr_11 [i_1] [i_2] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) min(((signed char)1), (((/* implicit */signed char) arr_4 [i_0 + 1])))))));
                                var_18 = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_1 [i_0 + 4])), (var_3)))) : (((((/* implicit */unsigned long long int) arr_7 [i_2 + 1])) + (1451883797274108623ULL))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}

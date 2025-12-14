/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147362
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
    var_20 -= ((/* implicit */_Bool) var_18);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 4; i_3 < 13; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_22 = arr_11 [i_0] [i_0] [i_3 - 3] [i_3 - 1];
                                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_3)), ((unsigned short)4167)))) ? (((((/* implicit */int) (unsigned short)61374)) + (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) ((((/* implicit */int) arr_6 [i_0] [i_0] [i_2])) >= (((/* implicit */int) arr_10 [i_0] [i_0] [i_0])))))))) ? ((((_Bool)0) ? (((/* implicit */int) arr_11 [i_3 - 3] [i_3 - 3] [i_4] [i_4])) : (((/* implicit */int) arr_13 [i_1] [i_3 - 2] [i_3 - 3] [i_3 - 3] [i_3 - 3])))) : (((((/* implicit */int) arr_11 [i_0] [i_3 - 1] [i_3 - 1] [i_4])) & (((/* implicit */int) arr_7 [i_0] [i_1] [i_1]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 1; i_5 < 10; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_0 [i_5 - 1]), (var_15)))) ? (((/* implicit */int) var_0)) : ((~(((/* implicit */int) arr_0 [i_5 + 1]))))));
                                var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)4167)) ? (((/* implicit */int) arr_16 [i_0] [i_0] [i_2] [i_5])) : (((/* implicit */int) arr_0 [i_2]))))) ? ((+(var_14))) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_5 + 3] [i_5 + 3] [i_0]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 589075100))))) : (max((((/* implicit */int) arr_7 [i_6] [i_6] [i_6])), (var_14))))) : (((/* implicit */int) (_Bool)0))));
                            }
                        } 
                    } 
                    arr_19 [i_0] [i_1] = ((/* implicit */long long int) (-(((arr_13 [i_0] [i_1] [i_1] [i_0] [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_0] [i_1]))) : (2318961967U)))));
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */unsigned int) ((_Bool) ((_Bool) 589075100)));
}

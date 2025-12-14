/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119272
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((var_6) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)25)))), (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)25)), ((unsigned short)1551))))))) ? (((/* implicit */long long int) ((arr_0 [i_0] [i_0]) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_0 [(signed char)5] [i_0])) : (((/* implicit */int) arr_3 [i_0]))))) : (((((/* implicit */_Bool) var_12)) ? (arr_2 [i_0] [i_1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0])))))))));
                arr_5 [i_0] [i_0] = ((/* implicit */signed char) min((var_3), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) (signed char)-33))))) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_1 [i_0])))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 15; i_2 += 3) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned char i_4 = 0; i_4 < 15; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 15; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 15; i_6 += 4) 
                        {
                            {
                                arr_18 [i_2] [i_2] [(unsigned short)4] [i_4] [i_5] [i_5] [(unsigned char)13] = ((/* implicit */unsigned char) (-((+(((/* implicit */int) arr_9 [i_2] [i_3]))))));
                                var_17 = ((/* implicit */unsigned short) (_Bool)1);
                            }
                        } 
                    } 
                    arr_19 [i_4] [i_2] [7] [i_4] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? ((-(((/* implicit */int) var_16)))) : (((/* implicit */int) var_6))))), (((var_0) * (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2] [i_2])))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */long long int) max((((((/* implicit */_Bool) 5465002544554853043LL)) ? (((/* implicit */int) (signed char)25)) : (((/* implicit */int) (unsigned char)236)))), (((/* implicit */int) var_10))));
    var_19 *= ((/* implicit */unsigned long long int) var_8);
    var_20 = ((/* implicit */unsigned char) var_9);
}

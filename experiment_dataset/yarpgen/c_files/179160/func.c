/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179160
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
    var_19 = ((/* implicit */_Bool) (+((+(((/* implicit */int) var_7))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 3; i_3 < 11; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            {
                                arr_11 [i_0] [i_3 + 4] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) (unsigned short)16503);
                                arr_12 [i_0] [(unsigned short)3] [i_1] [i_2] [i_0] [i_0] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_6 [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (3723593047U)))))))) : (((((arr_4 [i_0] [i_0]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [i_3 - 2]))))) ? (((var_10) ? (arr_3 [i_2]) : (((/* implicit */long long int) arr_7 [i_0 - 1] [i_1] [i_0] [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                                var_20 = ((/* implicit */unsigned int) var_17);
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((int) 1534109866U)))));
                    arr_13 [i_0] [i_0] = ((/* implicit */_Bool) ((int) ((arr_8 [i_1 + 2] [i_1 + 1] [i_0 - 1] [i_0 - 1] [(unsigned short)6] [i_0 - 1]) ? (((/* implicit */int) arr_8 [(unsigned char)8] [i_1 - 1] [i_0 - 1] [i_0] [(unsigned char)8] [i_0 - 1])) : (((/* implicit */int) (unsigned short)32767)))));
                    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */unsigned int) arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0])) : (arr_4 [i_0 - 1] [i_0 - 1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1534109860U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [i_1]))) : (1715171673U)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (1934063687) : (arr_10 [i_0] [8LL] [i_2]))))))) : (((((/* implicit */int) (unsigned short)49034)) / (((((/* implicit */int) var_3)) - (var_14))))))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)198)) & (-1837161565)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (2760857433U))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-94))) : (665121202U)))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((((/* implicit */int) var_15)) <= ((-(((/* implicit */int) (unsigned char)239)))))))));
}

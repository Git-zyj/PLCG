/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105050
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
    for (unsigned char i_0 = 4; i_0 < 19; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_10 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 3]))) - (arr_5 [i_1] [i_1 - 2] [i_1 - 2] [i_1 + 1])))) ? (((((/* implicit */_Bool) arr_5 [i_1] [i_1 - 2] [i_1 - 2] [i_1 + 1])) ? (((/* implicit */long long int) -888360207)) : (-7903206904346199156LL))) : (min((arr_5 [i_1] [i_1 - 2] [i_1 - 2] [i_1 + 1]), (((/* implicit */long long int) arr_1 [i_0 - 3]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_11 = max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-28)) ? (((/* implicit */int) (_Bool)1)) : (-993156035)))) : (16791490041247921246ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1))))));
                                var_12 = ((/* implicit */signed char) 993156035);
                                var_13 = ((/* implicit */unsigned char) arr_1 [i_0 + 1]);
                                var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) 993156034))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) arr_0 [i_0 - 4] [i_0 + 1])) : (((int) 0LL))))) / ((-(4251218590664219633ULL)))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned short) var_9);
}

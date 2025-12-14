/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106638
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
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            for (short i_2 = 2; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 20; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((var_5), ((-(((/* implicit */int) arr_12 [i_0] [i_1 - 1] [(unsigned short)6] [i_3] [i_4])))))))));
                                arr_15 [i_0] [i_3] [i_1] [i_3] [i_3] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (+((+(((/* implicit */int) arr_2 [i_2]))))))), (var_2)));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_2 + 3] [i_0] [i_2 - 1] [i_1] [i_1] [i_2 - 2])) && (((/* implicit */_Bool) arr_13 [i_2 + 3] [18U] [i_0] [i_1] [i_0] [i_2 - 1]))))), (var_5)));
                    var_14 = ((/* implicit */short) var_10);
                    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((arr_11 [i_0] [i_0] [i_1 - 1] [i_2] [i_2 - 1]) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-117))))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) * (var_5))))))) ? (((((/* implicit */_Bool) arr_3 [i_1] [i_2 - 1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)6877)))) : ((~(((/* implicit */int) (short)23623))))));
                    var_16 = ((/* implicit */unsigned short) (signed char)-30);
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (long long int i_5 = 0; i_5 < 22; i_5 += 4) 
    {
        var_17 = ((/* implicit */short) 3220990191U);
        var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) 3220990181U)), (var_11)))) ? (((/* implicit */long long int) 1073977103U)) : (var_11))))));
        arr_18 [i_5] = ((/* implicit */short) ((((/* implicit */int) arr_6 [i_5])) / (((/* implicit */int) (!((_Bool)0))))));
        arr_19 [i_5] [i_5] = ((/* implicit */unsigned int) var_4);
    }
    for (signed char i_6 = 0; i_6 < 25; i_6 += 4) 
    {
        var_19 = ((/* implicit */unsigned char) max((max((arr_20 [i_6]), (arr_20 [i_6]))), (((/* implicit */long long int) (-((-(((/* implicit */int) var_9)))))))));
        var_20 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_6])))))));
    }
}

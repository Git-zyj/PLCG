/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153218
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_13 = (!(((((/* implicit */int) arr_0 [i_0 - 1])) != (((/* implicit */int) (short)-26119)))));
        arr_2 [i_0] = (~((+(arr_1 [i_0]))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_2 = 2; i_2 < 9; i_2 += 3) 
        {
            for (unsigned short i_3 = 1; i_3 < 9; i_3 += 2) 
            {
                {
                    var_14 = arr_5 [i_1 - 1] [i_2];
                    var_15 ^= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_4)), (arr_6 [i_1] [i_1])))), (min((max((11811388222109628623ULL), (((/* implicit */unsigned long long int) arr_5 [i_1 - 1] [i_1 - 1])))), (((/* implicit */unsigned long long int) var_0))))));
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned short) max((8465980060308381653ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
        arr_10 [i_1] = ((/* implicit */_Bool) (-(max((((/* implicit */long long int) (short)26119)), (arr_1 [i_1])))));
        var_17 = ((/* implicit */long long int) (-((+(((/* implicit */int) (short)-26117))))));
        /* LoopSeq 1 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            arr_14 [i_4] = ((/* implicit */signed char) var_0);
            var_18 = ((/* implicit */short) arr_4 [i_4]);
        }
    }
    var_19 |= ((/* implicit */signed char) ((((/* implicit */long long int) min((var_12), (((/* implicit */int) var_1))))) | (min((var_11), (((/* implicit */long long int) var_8))))));
}

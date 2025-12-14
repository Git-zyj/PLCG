/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175254
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
    var_14 = ((/* implicit */int) var_5);
    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((/* implicit */int) ((((int) (signed char)-127)) >= (((/* implicit */int) var_1))))) << (((var_8) + (2008039738))))))));
    /* LoopSeq 1 */
    for (short i_0 = 3; i_0 < 7; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-123)) + (((var_3) | (((/* implicit */int) (signed char)79))))))) & (((arr_0 [i_0]) / (arr_0 [i_0])))));
        arr_5 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */int) (signed char)-80)), (-1689728086)));
        /* LoopNest 3 */
        for (short i_1 = 2; i_1 < 8; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                for (unsigned int i_3 = 2; i_3 < 7; i_3 += 1) 
                {
                    {
                        var_16 += (+(((((/* implicit */_Bool) var_13)) ? (arr_3 [i_2] [i_3 + 1]) : (var_9))));
                        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_14 [(short)6] [i_2] [i_0] [(unsigned char)6] [i_3 - 1])))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_12 [7] [i_0 - 1] [i_0])) : (((/* implicit */int) ((unsigned char) (signed char)68))))) : (((/* implicit */int) max((arr_8 [i_0 + 1]), (arr_8 [i_0 + 3])))))))));
                    }
                } 
            } 
        } 
    }
    var_18 = ((/* implicit */unsigned char) (signed char)72);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182593
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
    var_12 = var_10;
    /* LoopSeq 2 */
    for (int i_0 = 4; i_0 < 10; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */int) (!(arr_0 [i_0 - 2])));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                for (int i_3 = 0; i_3 < 11; i_3 += 2) 
                {
                    {
                        var_13 = (_Bool)0;
                        arr_10 [i_0] [i_1] [i_2] [i_2] [i_1] = (+(((arr_1 [i_2]) ? (max((arr_5 [i_0 - 3] [i_0 - 3]), (arr_8 [i_0 - 1] [i_1] [i_1] [i_0 - 1] [i_0]))) : (((((/* implicit */_Bool) arr_7 [i_0] [i_2] [i_3])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) (_Bool)0)))))));
                    }
                } 
            } 
        } 
        var_14 *= ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_0 [i_0])) : (arr_9 [i_0] [i_0] [i_0 - 3] [i_0] [i_0]))), ((-(((/* implicit */int) arr_4 [i_0]))))));
        var_15 ^= ((((arr_4 [i_0]) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) ? (var_0) : (-1622047516))) : (min((((/* implicit */int) (_Bool)1)), (var_2))))) <= (((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (127)))) << (((((((/* implicit */int) arr_0 [i_0])) | (-243575466))) + (243575475))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_16 ^= ((/* implicit */int) (_Bool)1);
        var_17 *= ((/* implicit */int) (!((_Bool)1)));
    }
}

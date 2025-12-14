/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134946
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
    var_15 = var_4;
    /* LoopSeq 2 */
    for (short i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0 - 1] [i_0] [i_0] = arr_4 [i_0] [i_0];
                    arr_9 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) arr_1 [i_0 - 2] [i_0 - 2])) == (18446744073709551607ULL)))) == (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0 + 1])) >= (((/* implicit */int) arr_3 [i_0 - 2])))))));
                }
            } 
        } 
        arr_10 [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 + 1])) ? (arr_1 [i_0 - 3] [i_0 - 3]) : (((/* implicit */int) arr_2 [i_0 + 1] [i_0 - 1] [i_0 - 2])))) - (((/* implicit */int) ((((/* implicit */int) min((arr_3 [i_0]), (arr_2 [i_0] [i_0] [i_0])))) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))))))));
        var_16 = ((/* implicit */short) (((((+(((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))) / (1232053879))) % (arr_1 [i_0] [i_0 - 1])));
        arr_11 [i_0] = ((/* implicit */short) (+(max((((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_0 - 3] [i_0 - 3])) : (arr_1 [(short)8] [i_0]))), (((/* implicit */int) (short)24435))))));
    }
    /* vectorizable */
    for (short i_3 = 0; i_3 < 15; i_3 += 4) 
    {
        /* LoopNest 2 */
        for (short i_4 = 0; i_4 < 15; i_4 += 4) 
        {
            for (short i_5 = 4; i_5 < 14; i_5 += 4) 
            {
                {
                    arr_19 [i_5 - 4] = ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_5 - 3])) && (((/* implicit */_Bool) arr_16 [i_5 + 1]))));
                    arr_20 [i_4] [i_4] [i_5] = ((/* implicit */short) (~(arr_17 [i_3] [i_3] [i_3] [i_3])));
                    var_17 = ((((/* implicit */_Bool) arr_12 [i_5 - 1])) ? (((/* implicit */int) arr_15 [i_5 + 1] [i_5 - 2])) : (arr_17 [i_5 - 1] [i_4] [i_4] [i_5]));
                    arr_21 [i_3] [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1232053860))));
                    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (-(((/* implicit */int) arr_18 [(short)2] [i_5 - 2] [(short)2] [i_5])))))));
                }
            } 
        } 
        var_19 ^= ((/* implicit */short) (+((+(((/* implicit */int) arr_14 [i_3] [i_3]))))));
        var_20 = ((/* implicit */unsigned long long int) arr_14 [i_3] [i_3]);
        var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(arr_17 [i_3] [i_3] [i_3] [i_3]))))));
    }
    var_22 = ((/* implicit */short) max((((/* implicit */unsigned long long int) var_8)), (((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) * (12883819807514590093ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10)))))))));
}

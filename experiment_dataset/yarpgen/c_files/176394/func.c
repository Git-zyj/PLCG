/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176394
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */_Bool) min((var_11), (((_Bool) ((((/* implicit */_Bool) 2305841909702066176ULL)) ? (arr_6 [i_1 + 1] [i_1 - 2] [i_1 - 2] [i_2]) : (arr_6 [i_1 - 1] [i_1 - 2] [i_1 - 2] [i_2]))))));
                    var_12 = var_4;
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */_Bool) var_4);
                                var_14 = ((/* implicit */_Bool) max((var_14), (arr_12 [i_0] [i_0] [i_2] [i_3 - 1] [i_4] [i_0])));
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned int) arr_5 [i_0] [i_1] [i_2])))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned int i_5 = 0; i_5 < 18; i_5 += 4) 
        {
            for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) (+((~(((/* implicit */int) max((arr_20 [i_0] [i_5] [i_6] [i_6]), (var_8)))))))))));
                        arr_22 [i_6] [i_6] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((var_9) ? (arr_8 [i_0] [0LL] [0LL] [i_7] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0])))))))))));
                        var_16 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [i_0] [i_5])), (((2305841909702066181ULL) << (((/* implicit */int) (_Bool)0))))));
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (max((((/* implicit */long long int) ((var_9) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_14 [i_0] [i_0] [i_0]))))), (min((arr_3 [i_0] [i_0] [i_0]), (((/* implicit */long long int) arr_2 [i_0] [i_0]))))))));
    }
    /* LoopSeq 1 */
    for (long long int i_8 = 1; i_8 < 14; i_8 += 1) 
    {
        var_18 *= ((/* implicit */_Bool) ((unsigned long long int) arr_24 [(_Bool)1] [(_Bool)1]));
        var_19 = arr_0 [(_Bool)1];
    }
}

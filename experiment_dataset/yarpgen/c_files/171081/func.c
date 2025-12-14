/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171081
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
    for (unsigned long long int i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */_Bool) min((var_11), (((((/* implicit */int) (!(arr_3 [i_0] [i_1] [i_0])))) < (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [i_0 - 2] [i_1])) < (((/* implicit */int) arr_3 [i_0] [i_1] [(short)2])))))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned long long int i_4 = 2; i_4 < 15; i_4 += 3) 
                            {
                                var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0 - 2])) ? (arr_13 [i_0 - 2]) : (var_2)))) ? (arr_13 [i_0 - 1]) : (max((9796977524625931594ULL), (8649766549083620021ULL)))));
                                var_13 = ((/* implicit */_Bool) (-(arr_4 [i_0] [i_0 - 1] [i_4 - 1])));
                                var_14 = ((/* implicit */unsigned long long int) max((var_14), (var_7)));
                                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_0 - 2]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8))))) : ((~(arr_2 [i_0 - 1] [i_0 + 1] [i_4 + 1])))));
                            }
                            arr_14 [6ULL] [i_1] [i_2] [i_3] = ((/* implicit */short) (+(min((((/* implicit */int) (!(((/* implicit */_Bool) 8649766549083620022ULL))))), ((-(((/* implicit */int) arr_6 [i_0] [i_0] [i_1] [i_3]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 = max((max(((+(var_2))), (min((var_2), (((/* implicit */unsigned long long int) var_6)))))), (((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned long long int) var_9)), (9796977524625931600ULL))) != (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0)))))))));
    var_17 *= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | ((+(((((/* implicit */_Bool) (short)-2677)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7620))) : (9796977524625931594ULL)))))));
    var_18 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? ((-(((/* implicit */int) var_0)))) : (((/* implicit */int) max((var_4), (var_0))))))) ? (((((/* implicit */int) var_5)) & (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && ((_Bool)1)))))) : ((-(((/* implicit */int) max(((short)32767), (((/* implicit */short) (_Bool)1)))))))));
}

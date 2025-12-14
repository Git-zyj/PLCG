/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103174
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
    var_13 = ((/* implicit */unsigned int) max((var_13), (((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) == (var_9))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 13; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            for (unsigned int i_2 = 3; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_11 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */short) ((min((max((arr_9 [i_2 - 3] [i_0] [i_0]), (((/* implicit */unsigned int) arr_6 [i_2])))), (((/* implicit */unsigned int) arr_5 [i_1 + 1] [i_1 + 1])))) ^ (max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_3 [i_2]))))), (arr_9 [0U] [0U] [i_2])))));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        arr_15 [i_0 + 2] = ((/* implicit */short) arr_1 [i_3]);
                        arr_16 [i_3] [14U] [i_3] [i_3] = ((/* implicit */unsigned int) ((max((((/* implicit */int) arr_10 [i_0 - 2] [i_0 - 2] [i_1 - 1] [i_2 - 2])), ((+(((/* implicit */int) arr_14 [i_0])))))) == (((/* implicit */int) ((short) ((arr_2 [i_1]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_1 - 1] [i_2] [i_3])))))))));
                        var_14 = ((/* implicit */unsigned int) min((var_14), (min((((/* implicit */unsigned int) max((arr_5 [i_1] [i_3]), (max((arr_1 [i_0]), (arr_1 [i_0])))))), (min((arr_2 [(short)11]), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_10 [i_0] [i_1 - 2] [i_2] [i_3])))))))))));
                        arr_17 [i_3] [i_2] [i_1] [i_0 - 3] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned char) arr_4 [i_3] [i_1 - 1] [i_0 - 1])))))), (((unsigned int) ((short) arr_6 [i_0])))));
                    }
                    arr_18 [i_1 - 2] = ((/* implicit */unsigned int) min((((((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_1 - 2] [i_1 - 2])) + (((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_1 - 2] [i_1])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1])))))));
                }
            } 
        } 
    } 
}

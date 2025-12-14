/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119783
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
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_7 [7U] [i_1] [7U] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1 + 1] [i_1 - 2])) && (((/* implicit */_Bool) var_4)))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 3; i_4 < 20; i_4 += 1) 
                        {
                            arr_14 [i_1] = ((/* implicit */unsigned long long int) var_4);
                            arr_15 [i_0] [i_0] [i_2] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) (short)-30163);
                            var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) 1859062944)))))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_4] [i_1] [i_1] [i_1 + 1])))))));
                            arr_16 [i_1] [i_1 - 2] [i_1] [i_1 - 2] [i_3] [i_4 - 1] = ((/* implicit */long long int) (!(((arr_4 [i_1]) <= (arr_4 [i_1])))));
                            arr_17 [i_4 - 1] [i_3] [i_1] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [8U] [i_2] [i_0]))) : (var_1)))) ? ((-(14571508783617556110ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_11 [i_3] [i_0])), (var_9))))))))));
                        }
                        var_11 = ((((/* implicit */_Bool) max((((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (short)32754)))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_11 [i_2] [i_3])) : (var_7)))))) ? (((((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_1])) | (((/* implicit */int) arr_6 [i_1 - 1] [i_2] [i_1 - 1]))))) | (3583956270U))) : (((/* implicit */unsigned int) max((((/* implicit */int) ((short) arr_1 [i_0 + 2]))), (max((arr_0 [i_0 - 1]), (arr_10 [i_1] [i_1] [i_2] [14] [i_0] [i_3])))))));
                    }
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */short) ((long long int) var_9));
    var_13 = ((/* implicit */short) var_9);
}

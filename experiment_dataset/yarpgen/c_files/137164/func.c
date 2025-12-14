/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137164
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
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_2 [(signed char)0] = ((/* implicit */unsigned short) ((int) ((((/* implicit */int) arr_0 [i_0])) & (((/* implicit */int) arr_0 [i_0])))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_7 [(short)8] [6] [6] [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) min(((unsigned short)62168), (((/* implicit */unsigned short) (_Bool)1)))));
                    arr_8 [i_2 + 1] [i_0] [i_0] = arr_4 [i_0];
                    arr_9 [i_2] [(_Bool)1] [(_Bool)1] [2U] = ((/* implicit */unsigned int) (((-((-(((/* implicit */int) (signed char)-88)))))) - (((((/* implicit */_Bool) (-(0U)))) ? (((((/* implicit */int) (short)-22236)) / (((/* implicit */int) arr_4 [(unsigned short)6])))) : (((/* implicit */int) arr_4 [(signed char)0]))))));
                    arr_10 [16ULL] [i_1] [(unsigned short)6] = ((/* implicit */_Bool) arr_6 [i_1]);
                }
            } 
        } 
        arr_11 [i_0] [8ULL] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) ((((/* implicit */int) (signed char)87)) + (((/* implicit */int) arr_6 [3ULL]))))))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_15 [i_3] [i_3] = ((/* implicit */unsigned int) (_Bool)1);
        arr_16 [i_3] = ((/* implicit */int) arr_14 [i_3] [i_3]);
        arr_17 [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-122)) | (((/* implicit */int) (short)15856))));
    }
    var_18 = ((/* implicit */signed char) (~(((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)(-127 - 1))) ^ (((/* implicit */int) (_Bool)1))))) & (min((1528978210199047997ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))));
}

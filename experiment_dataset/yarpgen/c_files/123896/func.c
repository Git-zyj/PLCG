/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123896
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
    for (int i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        arr_10 [i_0] [i_0] [i_0 - 3] [5U] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_3 - 1])) ? (((4186112U) + (((/* implicit */unsigned int) 1210365123)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [19LL] [i_2]))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((var_10) >= (((/* implicit */unsigned long long int) 402653184)))) || ((!(((/* implicit */_Bool) (unsigned short)6635))))))))));
                        var_15 = ((/* implicit */unsigned char) (((_Bool)1) ? (32767U) : (((/* implicit */unsigned int) 1261474716))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            var_16 = ((/* implicit */short) arr_12 [i_0] [i_1] [(signed char)15]);
                            arr_13 [i_0 - 1] [i_0] [i_0 - 3] [i_0] [i_0] [i_0 - 3] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) arr_7 [i_0] [i_3 - 1] [(_Bool)0] [i_0])) : (var_3)))) ? (min((((/* implicit */unsigned long long int) arr_7 [i_0] [i_3 - 1] [i_2] [i_2])), (var_10))) : (((/* implicit */unsigned long long int) (+(var_4))))));
                        }
                        var_17 &= ((/* implicit */unsigned short) arr_4 [i_2] [(signed char)10]);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_5 = 3; i_5 < 20; i_5 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned int) ((arr_12 [i_0 + 1] [i_2 - 2] [i_3 - 1]) | (arr_7 [i_0] [i_2 - 2] [i_3 - 1] [i_2 - 2])));
                            arr_17 [i_0] [i_0] [i_0] [i_2] [i_0] [i_3] [i_5] = ((/* implicit */signed char) var_6);
                        }
                    }
                    var_19 = ((/* implicit */unsigned short) arr_9 [i_0] [i_1] [i_0] [i_2 - 2] [i_1] [i_1]);
                    arr_18 [i_0] [i_0] = ((/* implicit */unsigned short) min((max((arr_7 [i_0] [i_1] [i_0 - 3] [i_1]), (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0 - 3] [i_1])) ? (arr_7 [i_0] [i_0] [i_0 - 2] [i_2]) : (arr_7 [i_0] [i_1] [i_0 + 1] [i_2 - 1])))));
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)63)), (min((var_3), (((/* implicit */unsigned int) arr_5 [i_0 - 1] [i_1] [i_2]))))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((short) (!(((/* implicit */_Bool) var_13))))))));
                }
            } 
        } 
    } 
    var_21 = var_0;
}

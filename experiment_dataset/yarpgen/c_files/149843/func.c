/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149843
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
    var_12 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (((((~(((/* implicit */int) (short)32767)))) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))));
    var_13 = ((short) ((var_4) / (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_8 [i_2] [i_1] |= ((/* implicit */short) arr_0 [i_0]);
                    arr_9 [i_0] [19ULL] [19ULL] = ((/* implicit */short) (!(((/* implicit */_Bool) ((arr_2 [i_2] [i_2] [i_2 + 1]) ? (3224409287U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [11] [i_2] [i_2 + 1]))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((unsigned char) arr_1 [i_2 + 1]))), ((+(arr_3 [(unsigned char)7])))));
                                arr_15 [i_0] [i_0] [(short)4] = ((/* implicit */_Bool) arr_12 [3U] [i_3] [7] [i_0] [i_0]);
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((unsigned char) max(((~(((/* implicit */int) arr_10 [(_Bool)0] [i_2 + 1] [i_2] [i_0] [i_2] [i_0])))), (((/* implicit */int) (!(((/* implicit */_Bool) (short)-15114)))))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 2) 
    {
        var_16 = ((/* implicit */_Bool) ((((/* implicit */int) (short)-15114)) ^ (((/* implicit */int) (unsigned char)47))));
        arr_19 [i_5] [i_5] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) max((((short) (unsigned char)160)), (((/* implicit */short) max((((/* implicit */unsigned char) arr_4 [(_Bool)1])), (arr_5 [i_5] [i_5] [13])))))))));
    }
}

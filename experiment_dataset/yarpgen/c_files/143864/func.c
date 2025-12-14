/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143864
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
    var_14 = ((/* implicit */long long int) 4294967295U);
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 3; i_0 < 21; i_0 += 1) 
    {
        arr_3 [i_0] = ((short) ((((/* implicit */long long int) ((/* implicit */int) var_6))) > (6296034913225141299LL)));
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) arr_2 [i_0 - 3] [i_1 + 2]);
                    var_16 = ((/* implicit */long long int) ((arr_5 [i_1 + 2] [i_1 + 3] [i_1 - 1]) >> (((((/* implicit */int) var_6)) - (247)))));
                    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_0] [i_0 - 1] [6ULL])) ? (var_13) : (((/* implicit */long long int) (-(((/* implicit */int) arr_7 [i_0])))))));
                    var_18 -= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (short)-8596)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32767)))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 19; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) arr_12 [i_1 + 4] [i_0] [i_2] [i_1 + 4] [i_3 + 4] [i_4]);
                                var_20 = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) var_12))) ^ (((/* implicit */int) arr_1 [i_0] [i_0 - 3]))));
                                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((arr_5 [(unsigned char)16] [i_0 + 2] [i_0]) != (arr_5 [(unsigned char)3] [i_0 - 3] [i_0]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_22 = ((/* implicit */short) (((~(((/* implicit */int) (short)-14)))) > (((/* implicit */int) (!(((/* implicit */_Bool) 17LL)))))));
        var_23 &= ((/* implicit */unsigned char) ((((arr_10 [i_0] [i_0 - 3] [(short)15] [(unsigned char)19] [i_0]) | (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [5ULL] [5ULL] [i_0]))))) / (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)126))) * (758715807U))))));
    }
}

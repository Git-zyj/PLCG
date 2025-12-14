/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155879
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
    var_20 = ((/* implicit */unsigned short) var_5);
    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((var_15) / (max((max((var_9), (((/* implicit */long long int) var_18)))), (((/* implicit */long long int) ((((/* implicit */int) var_0)) * (((/* implicit */int) var_14))))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 12; i_2 += 4) 
            {
                {
                    var_22 = ((/* implicit */short) ((((/* implicit */long long int) (~(((/* implicit */int) arr_4 [i_2] [i_2] [i_0]))))) / (arr_3 [i_2] [i_1 - 1])));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [(unsigned short)5] [i_2] [(unsigned short)5] [(unsigned short)5] [(unsigned short)5] [i_2] = ((/* implicit */signed char) arr_2 [i_4] [i_3] [i_0]);
                                arr_16 [i_0] [i_0] [(short)12] [i_2] = ((/* implicit */long long int) arr_4 [i_3] [i_2] [i_0]);
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((arr_7 [i_2] [i_2] [i_0]) <= (((/* implicit */long long int) ((/* implicit */int) var_3))))))) * ((((_Bool)1) ? (3394012744410345120LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)46894)))))));
                    arr_17 [i_0] [i_1 - 1] [i_2] = var_18;
                    /* LoopSeq 1 */
                    for (long long int i_5 = 4; i_5 < 11; i_5 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_2] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_18 [i_2] [i_2] [i_2])))) || (((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_2]))));
                        var_25 = ((/* implicit */signed char) (~(((arr_7 [i_0] [i_2] [i_0]) / (arr_3 [i_5 + 3] [i_0])))));
                    }
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned short i_6 = 0; i_6 < 14; i_6 += 1) 
        {
            var_26 = ((/* implicit */long long int) ((((/* implicit */int) ((arr_3 [i_0] [i_0]) <= (var_9)))) * (((/* implicit */int) var_18))));
            arr_25 [(short)9] [i_0] [5LL] = ((/* implicit */signed char) (-(((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))));
            var_27 = ((((/* implicit */long long int) (+(((/* implicit */int) arr_12 [i_0] [i_6] [i_0] [i_0] [i_0] [(short)12]))))) ^ (var_16));
        }
    }
    var_28 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((((/* implicit */int) var_8)) * (((/* implicit */int) var_14)))))))));
}

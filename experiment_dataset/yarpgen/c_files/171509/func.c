/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171509
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
    var_15 = var_0;
    var_16 = ((/* implicit */_Bool) var_9);
    var_17 = ((/* implicit */unsigned int) var_9);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned int i_2 = 4; i_2 < 10; i_2 += 4) 
            {
                {
                    var_18 = ((-428003208) / (((/* implicit */int) (unsigned char)13)));
                    /* LoopSeq 3 */
                    for (int i_3 = 1; i_3 < 10; i_3 += 4) 
                    {
                        var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_9 [i_3] [(_Bool)1] [i_2] [(_Bool)1] [i_1])), (428003236)))) && (((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_0])))))) << (((428003220) - (428003209)))));
                        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) max((arr_9 [i_1] [(short)6] [i_2] [(unsigned char)2] [8]), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_2] [i_1] [i_3 - 1] [i_3 - 1] [i_2])) || (arr_2 [i_0])))))))));
                        arr_11 [i_0] [i_3] = ((/* implicit */short) max((((/* implicit */signed char) ((arr_7 [i_0] [i_1] [i_2] [i_3]) >= (((/* implicit */unsigned long long int) arr_0 [i_3 - 1]))))), (arr_9 [i_3] [3U] [3U] [i_3] [(short)9])));
                    }
                    /* vectorizable */
                    for (signed char i_4 = 1; i_4 < 9; i_4 += 4) 
                    {
                        var_21 = ((/* implicit */short) (~(((/* implicit */int) (short)-6685))));
                        var_22 = ((/* implicit */short) arr_13 [i_4] [9U]);
                        arr_15 [i_4] [i_2] [0U] [i_1] [i_4] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 2168601524U)) && (((/* implicit */_Bool) 8658826941397656756LL)))) || (((/* implicit */_Bool) arr_9 [i_4] [i_4 + 1] [i_4 + 1] [i_2 - 1] [i_4]))));
                        arr_16 [i_4] [2] [i_2] [i_2] = ((/* implicit */unsigned char) ((424838049U) / (((/* implicit */unsigned int) (-2147483647 - 1)))));
                        var_23 &= ((/* implicit */long long int) ((((/* implicit */int) (short)-16384)) & (((/* implicit */int) (short)-17198))));
                    }
                    for (int i_5 = 1; i_5 < 9; i_5 += 4) 
                    {
                        var_24 = ((/* implicit */short) ((unsigned int) ((arr_19 [i_2 - 1] [10U] [i_5 + 2]) * (((/* implicit */int) ((((/* implicit */int) arr_5 [i_0] [i_1] [i_2])) >= (arr_1 [i_0])))))));
                        var_25 &= ((/* implicit */short) 0ULL);
                        /* LoopSeq 1 */
                        for (short i_6 = 0; i_6 < 11; i_6 += 4) 
                        {
                            arr_24 [(_Bool)1] [i_6] [i_6] [i_6] [i_5] = max((max((arr_20 [i_6] [i_5 - 1] [i_1] [i_1] [i_1] [i_0]), (((/* implicit */short) ((arr_8 [i_0] [(signed char)10] [i_2] [i_5 + 2]) <= (((/* implicit */int) (unsigned char)89))))))), (((/* implicit */short) arr_17 [i_0] [i_0] [i_5] [i_5])));
                            arr_25 [i_0] [i_1] [7ULL] [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_5 - 1] [i_2 - 4]))) | (arr_12 [i_0] [i_1] [i_2] [i_5] [3U])));
                            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) arr_3 [6U]))));
                        }
                        arr_26 [i_0] [(unsigned char)0] [i_2] [i_2] [4U] &= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)16))) ^ (arr_6 [i_0] [(short)2])));
                    }
                    var_27 = ((/* implicit */int) (short)(-32767 - 1));
                }
            } 
        } 
    } 
}

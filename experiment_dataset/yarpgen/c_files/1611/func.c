/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1611
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
    var_17 -= ((/* implicit */signed char) ((unsigned short) 2199023255424ULL));
    var_18 = ((/* implicit */signed char) ((unsigned short) 2609478739U));
    var_19 ^= ((/* implicit */_Bool) var_12);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 7; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_2 = 1; i_2 < 10; i_2 += 3) 
                {
                    arr_9 [i_2 + 1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((short) ((unsigned int) (unsigned short)56608)));
                    /* LoopSeq 1 */
                    for (short i_3 = 4; i_3 < 9; i_3 += 3) 
                    {
                        arr_14 [9U] [9U] [i_2] [9U] [i_3] = ((short) ((((/* implicit */int) arr_5 [i_1 + 3] [i_1])) | (((/* implicit */int) arr_13 [i_1] [i_1] [i_3 + 1]))));
                        /* LoopSeq 2 */
                        for (long long int i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            arr_17 [i_0] [i_0] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */int) arr_11 [i_0] [i_2] [i_3])) / (((/* implicit */int) arr_4 [i_0] [i_1 + 3])))));
                            var_20 = ((/* implicit */unsigned short) arr_0 [i_2]);
                            var_21 *= ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) arr_2 [i_4] [i_3])) || (((/* implicit */_Bool) arr_16 [i_0] [i_1 - 1] [(short)0] [i_0])))));
                        }
                        for (short i_5 = 1; i_5 < 9; i_5 += 1) 
                        {
                            var_22 = ((unsigned short) arr_20 [i_0]);
                            arr_21 [i_1] [i_1] [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_1 + 4] [(_Bool)1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_0 [i_2])) || (((/* implicit */_Bool) arr_0 [i_2 - 1])))) || (((/* implicit */_Bool) ((unsigned int) (signed char)25)))));
                        }
                        arr_22 [i_0] [i_1] [i_2] [i_3 + 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((arr_11 [i_0] [i_1 + 4] [i_2]) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_1] [i_0]))) : (arr_20 [i_0]))) : (((/* implicit */long long int) ((((/* implicit */int) arr_0 [0U])) | (((/* implicit */int) arr_6 [(unsigned short)5] [i_1] [(_Bool)1] [i_3])))))));
                        arr_23 [i_1] [i_2] [i_1] [i_0] = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [(signed char)9] [(signed char)9]))) : (arr_3 [i_0]))));
                    }
                    arr_24 [i_0] [i_0] [i_0] [i_0] = ((unsigned int) ((arr_7 [i_0] [i_1] [i_2 - 1] [i_1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0] [i_1 + 4] [i_1] [i_2] [(short)6]))) : (arr_20 [i_1])));
                    arr_25 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) ((((15ULL) | (((/* implicit */unsigned long long int) 0U)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_20 [i_0]))))));
                    arr_26 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_16 [i_1 + 4] [i_1 + 4] [i_1 + 4] [i_1 + 3])) * (((/* implicit */int) arr_7 [i_0] [i_0] [i_1 - 1] [i_2 + 1]))))) | (((unsigned int) arr_16 [i_0] [i_0] [(unsigned short)5] [(unsigned short)10]))));
                }
                /* LoopNest 3 */
                for (unsigned int i_6 = 0; i_6 < 11; i_6 += 3) 
                {
                    for (short i_7 = 1; i_7 < 10; i_7 += 1) 
                    {
                        for (unsigned int i_8 = 4; i_8 < 10; i_8 += 4) 
                        {
                            {
                                var_23 *= ((/* implicit */unsigned int) ((unsigned long long int) ((_Bool) ((_Bool) arr_4 [i_0] [i_0]))));
                                var_24 = ((unsigned int) ((((_Bool) arr_30 [i_1])) || (((((/* implicit */_Bool) arr_29 [i_0])) || (((/* implicit */_Bool) arr_18 [i_0] [i_1 + 1] [i_6] [i_7] [i_1 + 1]))))));
                                arr_35 [i_6] = ((/* implicit */unsigned short) ((1685488551U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)51061)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 574208952489738240LL)) || (((/* implicit */_Bool) (signed char)57)))))) | (((/* implicit */int) ((signed char) ((_Bool) 1457448873U))))));
}

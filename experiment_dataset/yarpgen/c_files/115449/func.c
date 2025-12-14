/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115449
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)21488)) * (((/* implicit */int) (signed char)95))))) ? (((/* implicit */int) (signed char)-95)) : (((((/* implicit */_Bool) 7973872540045030687ULL)) ? (((/* implicit */int) (signed char)110)) : (-329708031)))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_3 = 2; i_3 < 18; i_3 += 3) 
                    {
                        arr_10 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) 6279371407385339800LL)) ? (((/* implicit */int) arr_7 [i_3 - 2] [i_3 - 1])) : (((/* implicit */int) arr_1 [i_3 - 2] [i_3 - 2]))));
                        var_15 = ((/* implicit */short) ((unsigned int) arr_4 [i_3 + 1] [i_3 + 1]));
                        var_16 += ((/* implicit */unsigned long long int) arr_3 [i_1]);
                        arr_11 [i_0] [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2])) ? (((/* implicit */int) arr_6 [i_3] [i_1] [i_2] [i_3 - 2])) : (((/* implicit */int) var_14))))));
                    }
                    for (unsigned short i_4 = 2; i_4 < 18; i_4 += 4) 
                    {
                        var_17 = ((/* implicit */_Bool) arr_9 [i_2] [i_4] [i_2]);
                        /* LoopSeq 2 */
                        for (unsigned short i_5 = 2; i_5 < 18; i_5 += 3) 
                        {
                            var_18 = ((/* implicit */int) arr_8 [1U] [i_1] [1U] [1U]);
                            var_19 = ((/* implicit */_Bool) arr_7 [i_1] [(unsigned short)3]);
                        }
                        for (unsigned long long int i_6 = 4; i_6 < 18; i_6 += 4) 
                        {
                            var_20 ^= ((/* implicit */short) (!(((/* implicit */_Bool) var_4))));
                            arr_20 [i_0] [i_1] [i_2] [(unsigned short)5] [i_2] [(unsigned short)5] [i_4] = ((/* implicit */unsigned short) (unsigned char)233);
                            arr_21 [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */short) 2623814942U);
                        }
                    }
                    arr_22 [i_2] [i_2] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) arr_17 [i_0] [i_1] [i_2] [i_0] [i_2])) : (((var_1) / (var_5)))));
                    var_21 -= ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [(unsigned short)16] [i_1] [i_1]))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_12 [i_0])));
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned char) (short)16298);
        var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_17 [8U] [(unsigned char)0] [6] [6] [(signed char)6]))));
    }
    for (int i_7 = 3; i_7 < 19; i_7 += 1) 
    {
        var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_13 [i_7 - 3] [i_7])) ? (arr_3 [i_7 + 1]) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))) & (((/* implicit */int) arr_4 [i_7 - 2] [i_7])))))));
        var_25 = ((/* implicit */_Bool) min((((/* implicit */int) (((!(((/* implicit */_Bool) arr_15 [i_7] [i_7] [19ULL] [i_7] [i_7])))) || (((/* implicit */_Bool) arr_7 [i_7] [i_7 - 2]))))), (arr_19 [i_7] [i_7] [i_7] [(signed char)17] [i_7])));
    }
    var_26 = ((/* implicit */_Bool) ((short) var_8));
    var_27 += (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_12))))) || (((/* implicit */_Bool) ((unsigned short) var_11))))));
    var_28 = ((/* implicit */int) (!(((/* implicit */_Bool) var_5))));
}

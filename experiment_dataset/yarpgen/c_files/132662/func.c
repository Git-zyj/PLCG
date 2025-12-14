/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132662
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
    var_14 = ((/* implicit */signed char) var_10);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */short) var_11);
                var_16 += ((/* implicit */unsigned long long int) arr_2 [(signed char)14] [(signed char)14]);
                var_17 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)16167)) ? (1777042369U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58462))))) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)15)))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_2 = 0; i_2 < 16; i_2 += 1) 
    {
        arr_6 [i_2] = var_9;
        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) max((arr_3 [i_2]), (min((arr_3 [i_2]), (arr_3 [i_2]))))))));
        var_19 = ((/* implicit */unsigned short) (unsigned char)240);
    }
    /* LoopNest 3 */
    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 2) 
    {
        for (short i_4 = 2; i_4 < 19; i_4 += 4) 
        {
            for (unsigned int i_5 = 3; i_5 < 20; i_5 += 3) 
            {
                {
                    arr_15 [i_3] [i_4] [i_5] [i_5] = ((/* implicit */unsigned char) min((((/* implicit */int) arr_7 [i_3])), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_9 [i_5 - 2] [i_4 - 1])) : (((/* implicit */int) arr_9 [i_5 - 2] [i_4 - 2]))))));
                    arr_16 [i_5] [i_3] [i_3] &= ((/* implicit */int) min((var_13), ((!(((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_4] [i_4])) ^ (((/* implicit */int) (unsigned char)24)))))))));
                    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_7 [i_5 + 1])), (arr_11 [9U] [i_3])))))))));
                    /* LoopSeq 3 */
                    for (unsigned char i_6 = 0; i_6 < 21; i_6 += 1) 
                    {
                        var_21 += ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_8 [i_4 + 1] [i_4 + 1]), (((/* implicit */unsigned short) arr_20 [i_5 - 3] [i_4 + 1] [i_4] [i_4 - 1]))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_4 - 1] [i_4 - 1])) && (((/* implicit */_Bool) var_11)))))));
                        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (~(var_9))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_7 = 0; i_7 < 21; i_7 += 3) 
                    {
                        arr_24 [i_3] &= ((/* implicit */unsigned short) (~(((/* implicit */int) (short)4943))));
                        arr_25 [i_7] [i_5] [i_4] [i_4] [i_4] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_5 + 1] [i_4 - 2])) ? (134217472U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_5] [i_3])) ? (((/* implicit */int) arr_8 [(_Bool)1] [(unsigned short)18])) : (((/* implicit */int) arr_20 [i_3] [i_4] [i_3] [i_7])))))));
                        var_23 = ((/* implicit */signed char) arr_18 [i_5 + 1] [i_4 + 2]);
                    }
                    for (unsigned char i_8 = 1; i_8 < 20; i_8 += 2) 
                    {
                        var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) max((var_11), (min((arr_19 [i_4] [i_4]), (((/* implicit */unsigned short) (unsigned char)5)))))))));
                        var_25 += max((arr_28 [i_3] [i_4] [17] [i_3] [i_3]), (arr_26 [(_Bool)1] [(_Bool)1]));
                    }
                }
            } 
        } 
    } 
}

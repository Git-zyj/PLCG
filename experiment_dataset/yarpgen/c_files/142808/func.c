/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142808
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
    var_19 = ((/* implicit */unsigned short) var_7);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned short) arr_0 [i_0]);
        var_21 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((-571314317) - (((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((/* implicit */int) min((arr_1 [i_0] [(signed char)17]), (((/* implicit */unsigned short) (short)18456))))) : (((/* implicit */int) arr_1 [i_0] [i_0])))) - (((/* implicit */int) min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned short) arr_0 [i_0])))))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        arr_4 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) var_3))));
        arr_5 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_2 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1])))));
        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (((!(((/* implicit */_Bool) (unsigned char)51)))) ? (((/* implicit */int) ((signed char) -2098004995))) : (((/* implicit */int) arr_1 [i_1] [i_1])))))));
    }
    var_23 = ((/* implicit */short) var_9);
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 23; i_2 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_24 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)208))));
            var_25 += ((/* implicit */short) ((unsigned short) arr_6 [i_3]));
            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_3])) ? (arr_9 [i_2]) : (arr_9 [i_3])));
            /* LoopNest 3 */
            for (unsigned long long int i_4 = 2; i_4 < 20; i_4 += 4) 
            {
                for (unsigned char i_5 = 0; i_5 < 23; i_5 += 3) 
                {
                    for (unsigned int i_6 = 0; i_6 < 23; i_6 += 3) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_8 [i_2])) & (((((/* implicit */_Bool) arr_13 [i_2] [(unsigned char)3])) ? (((/* implicit */int) (_Bool)1)) : (var_6)))));
                            var_28 = ((/* implicit */unsigned short) arr_12 [(unsigned char)18]);
                            arr_19 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) arr_18 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]);
                        }
                    } 
                } 
            } 
        }
        var_29 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_17 [i_2] [i_2] [i_2] [i_2]))));
    }
}

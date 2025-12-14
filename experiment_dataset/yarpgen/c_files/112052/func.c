/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112052
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            var_20 = ((/* implicit */unsigned int) arr_3 [i_1]);
            var_21 *= ((((/* implicit */_Bool) arr_4 [i_1] [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0])));
            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) arr_4 [i_0] [i_0] [i_1]))));
            var_23 -= (!(((/* implicit */_Bool) ((arr_1 [i_1]) ? (arr_3 [i_0]) : (var_17)))));
        }
        for (short i_2 = 0; i_2 < 18; i_2 += 2) 
        {
            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-18265)) ? (((/* implicit */long long int) ((/* implicit */int) ((short) 359873257U)))) : (arr_4 [i_2] [i_2] [i_2])));
            arr_8 [i_0] = ((_Bool) var_16);
            arr_9 [i_0] [i_2] [i_2] = ((/* implicit */long long int) var_9);
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_14 [i_0] [i_0] [i_0] = ((/* implicit */short) arr_3 [i_0]);
            /* LoopNest 3 */
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                for (unsigned char i_5 = 2; i_5 < 17; i_5 += 2) 
                {
                    for (unsigned char i_6 = 0; i_6 < 18; i_6 += 4) 
                    {
                        {
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_4] [i_5] [i_6] = ((/* implicit */unsigned char) ((short) 9223372036854775807LL));
                            var_25 += ((/* implicit */unsigned short) (~(-1735543665)));
                            var_26 &= ((/* implicit */short) (+(arr_20 [i_0] [i_0] [i_4] [i_5] [i_0] [i_6])));
                        }
                    } 
                } 
            } 
            var_27 = ((/* implicit */int) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0] [i_3] [i_3] [i_3] [i_3])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)25168)))))));
        }
        arr_22 [i_0] &= ((/* implicit */unsigned short) ((_Bool) var_16));
    }
    for (short i_7 = 3; i_7 < 21; i_7 += 1) 
    {
        var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((unsigned char) var_11))) ? (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) arr_25 [i_7])) : (var_2))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_19)) || (((/* implicit */_Bool) 9223372036854775807LL)))))))) ^ (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_24 [i_7]), (((/* implicit */unsigned long long int) arr_25 [i_7]))))))))))))));
        arr_26 [i_7] = ((/* implicit */_Bool) arr_25 [i_7 + 2]);
    }
    for (int i_8 = 0; i_8 < 21; i_8 += 3) 
    {
        var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) (-(((long long int) arr_28 [i_8] [i_8])))))));
        var_30 = ((/* implicit */_Bool) arr_29 [i_8] [i_8]);
    }
    var_31 = -9223372036854775787LL;
}

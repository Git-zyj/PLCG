/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173106
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
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 -= ((/* implicit */long long int) ((_Bool) min((max((((/* implicit */unsigned int) var_13)), (arr_1 [i_2] [13ULL]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_17)) : (var_15)))))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 1; i_3 < 14; i_3 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned char) ((signed char) -9223372036854775800LL));
                        arr_14 [i_3] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_6 [i_0 - 1] [i_3] [i_3 + 2])) : (((/* implicit */int) arr_6 [i_0 - 1] [i_3] [i_3 + 2]))))) ? (((/* implicit */unsigned long long int) var_0)) : (var_14)));
                    }
                }
            } 
        } 
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) arr_11 [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0 + 1]))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_4 = 0; i_4 < 16; i_4 += 3) 
        {
            var_23 *= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) < (var_14)));
            var_24 = (!(arr_17 [i_0] [i_0] [i_4]));
            arr_18 [(unsigned short)14] |= ((/* implicit */signed char) (~(arr_15 [i_0] [(signed char)0])));
        }
        /* vectorizable */
        for (unsigned char i_5 = 0; i_5 < 16; i_5 += 3) 
        {
            var_25 -= ((/* implicit */unsigned long long int) var_19);
            arr_21 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [(unsigned short)9])) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_11)))) : (((/* implicit */int) ((short) -2147483644)))));
        }
    }
    /* vectorizable */
    for (short i_6 = 0; i_6 < 21; i_6 += 3) 
    {
        arr_26 [i_6] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))));
        arr_27 [i_6] [i_6] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1))));
    }
    /* LoopNest 2 */
    for (short i_7 = 0; i_7 < 15; i_7 += 3) 
    {
        for (unsigned int i_8 = 0; i_8 < 15; i_8 += 4) 
        {
            {
                arr_34 [i_7] = ((/* implicit */unsigned int) ((short) min((min((var_0), (((/* implicit */int) arr_19 [i_7] [i_7] [(short)3])))), ((-(((/* implicit */int) var_12)))))));
                arr_35 [i_7] [i_7] [i_8] = ((/* implicit */int) arr_25 [i_7] [i_7]);
            }
        } 
    } 
}

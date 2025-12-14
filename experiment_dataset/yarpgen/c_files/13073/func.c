/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13073
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
    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)2996))) != (min((var_8), (((/* implicit */unsigned long long int) (unsigned char)234))))))) | (((/* implicit */int) var_13)))))));
    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (max((((/* implicit */unsigned int) ((((/* implicit */int) var_15)) * (((/* implicit */int) var_7))))), ((+(var_18)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            var_21 = ((/* implicit */unsigned short) arr_0 [i_0] [i_1]);
            arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_17)))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_7 [i_0] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (var_11))))));
            var_22 = ((/* implicit */short) var_10);
        }
        arr_8 [i_0] [i_0] = ((/* implicit */signed char) ((unsigned char) var_6));
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            /* LoopSeq 1 */
            for (int i_4 = 1; i_4 < 16; i_4 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 4) 
                {
                    var_23 = ((/* implicit */unsigned short) arr_2 [i_4 + 3]);
                    arr_16 [i_5] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_5 [i_4 + 2] [i_4 + 2] [i_4 + 2]);
                    var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) var_4))));
                    arr_17 [i_0] [i_3] [i_0] [i_0] = ((/* implicit */signed char) ((unsigned char) var_9));
                }
                for (signed char i_6 = 0; i_6 < 19; i_6 += 2) 
                {
                    var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) var_1))));
                    var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) (+(((arr_13 [i_6] [i_3]) ? (3221715252U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0]))))))))));
                }
                /* LoopNest 2 */
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    for (long long int i_8 = 0; i_8 < 19; i_8 += 2) 
                    {
                        {
                            arr_25 [i_0] [i_0] [i_8] [i_7] [6] &= ((-2454681798894916491LL) + (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_4 + 1] [(unsigned char)10] [i_7 - 1]))));
                            arr_26 [i_8] [i_8] [i_4] [i_7] [2U] &= ((/* implicit */unsigned int) ((var_2) ? (((((/* implicit */_Bool) arr_3 [i_4])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_7] [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 1])))));
                            var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_2 [i_0])) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))))));
                            var_28 = ((/* implicit */unsigned long long int) ((unsigned char) arr_9 [i_4 + 1] [i_7 - 1]));
                            arr_27 [i_0] [(_Bool)1] [i_0] = ((/* implicit */signed char) (((_Bool)0) ? (((/* implicit */int) arr_13 [i_0] [i_4 + 3])) : (((/* implicit */int) var_10))));
                        }
                    } 
                } 
            }
            arr_28 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (-((+(arr_5 [i_0] [i_0] [i_0])))));
            arr_29 [i_0] [(short)12] |= ((/* implicit */_Bool) ((arr_3 [i_3]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))));
        }
    }
    var_29 = ((/* implicit */_Bool) (-9223372036854775807LL - 1LL));
}

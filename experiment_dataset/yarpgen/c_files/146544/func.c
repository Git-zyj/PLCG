/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146544
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
    var_15 = ((/* implicit */long long int) min((var_15), (8273636941974983971LL)));
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 4; i_1 < 17; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 18; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 3; i_3 < 17; i_3 += 4) 
                    {
                        /* LoopSeq 4 */
                        for (signed char i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            arr_13 [i_2] [9LL] [(signed char)3] [9LL] [i_4] [i_0] = ((/* implicit */long long int) ((unsigned char) min((min((((/* implicit */short) (signed char)16)), (var_6))), (arr_10 [(unsigned short)9] [i_0 - 1] [i_1 - 3] [i_2 + 1] [i_3 + 1]))));
                            arr_14 [i_2] [i_2] [i_2] [i_2] [(signed char)8] = ((/* implicit */int) var_3);
                            arr_15 [i_2] [(signed char)9] [i_2 - 1] [i_1] [i_2] = ((/* implicit */long long int) (((_Bool)0) ? ((-(((/* implicit */int) ((signed char) (_Bool)1))))) : (((/* implicit */int) arr_5 [i_4] [i_3] [i_2] [i_1 - 1]))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 3) 
                        {
                            arr_18 [(unsigned char)16] [i_2] [i_2] [(unsigned char)16] [(unsigned char)16] = ((/* implicit */unsigned int) ((arr_0 [i_3 + 2]) >= (((/* implicit */int) var_2))));
                            arr_19 [i_2] [i_3] [1LL] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) -910530269)) ? (((/* implicit */int) ((short) var_5))) : (((/* implicit */int) arr_8 [i_0] [i_2] [(signed char)13] [i_2] [i_3 - 1]))));
                            var_16 = ((/* implicit */unsigned int) ((long long int) -5183868898275152474LL));
                            arr_20 [i_0] [i_1] [i_2] [i_2] [i_1] = ((/* implicit */unsigned short) ((signed char) 4655100973375211001ULL));
                        }
                        for (int i_6 = 0; i_6 < 19; i_6 += 1) 
                        {
                            arr_23 [i_0] [i_0] [(unsigned short)8] [i_0] [i_0 - 1] [i_0] [i_2] = ((/* implicit */unsigned char) (!(((((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)0)), (arr_17 [i_2])))) <= (((((/* implicit */int) arr_1 [i_1])) * (((/* implicit */int) (short)27471))))))));
                            var_17 -= ((/* implicit */unsigned char) ((((/* implicit */int) var_6)) == (((/* implicit */int) arr_17 [i_1]))));
                            var_18 *= ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)0))));
                        }
                        for (signed char i_7 = 0; i_7 < 19; i_7 += 2) 
                        {
                            arr_26 [i_0] [i_2] [i_3] [i_7] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_10 [2LL] [i_1] [i_2] [12] [i_1 + 1])) && (((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0 + 2] [i_3] [i_1 + 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_10 [(unsigned char)9] [i_3] [i_7] [i_3] [i_1 - 4])))) : ((+(313395436U)))));
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -4015807025478565526LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)35)), (var_8))))));
                            arr_27 [i_1] [(signed char)13] [i_2] [7LL] [i_2] [i_2 - 1] = ((/* implicit */long long int) -611175806);
                        }
                        var_20 = ((/* implicit */unsigned char) ((((arr_0 [i_3 + 1]) / (((/* implicit */int) (unsigned char)6)))) - (((((/* implicit */_Bool) 4341064023356877146LL)) ? (((/* implicit */int) arr_5 [i_3] [i_3 + 1] [i_3 + 2] [(unsigned char)4])) : (arr_0 [i_3 - 1])))));
                        arr_28 [i_0] [i_0 - 3] [i_0 - 3] [i_0 - 3] [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) max(((unsigned char)249), (((/* implicit */unsigned char) (_Bool)1))))) - (((/* implicit */int) ((short) min((((/* implicit */unsigned char) var_10)), (arr_16 [i_0 - 1] [i_0 - 1] [i_2] [i_2] [(_Bool)1] [i_3] [i_3])))))));
                        var_21 = ((/* implicit */int) max((var_21), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_3] [i_3 + 2] [i_2 - 1] [i_0 - 1] [i_0])) ? (((/* implicit */int) arr_10 [i_3] [i_3 + 2] [i_2 - 1] [i_0 - 1] [i_0])) : (((/* implicit */int) arr_10 [(short)3] [i_3 + 2] [i_2 - 1] [i_0 - 1] [(short)3]))))) ? ((+(min((((/* implicit */int) (_Bool)1)), (-1))))) : (((/* implicit */int) arr_6 [i_3] [i_2] [i_1] [i_0]))))));
                    }
                    for (int i_8 = 0; i_8 < 19; i_8 += 4) 
                    {
                        arr_32 [i_0] [(unsigned char)11] [i_2] [i_8] [i_2] [i_2] = ((long long int) (+(14072239535524305768ULL)));
                        arr_33 [i_2] [i_1] = ((/* implicit */unsigned short) ((signed char) arr_8 [i_0] [i_1] [i_0] [i_2] [i_0]));
                    }
                    for (signed char i_9 = 3; i_9 < 17; i_9 += 2) 
                    {
                        arr_36 [i_2] [i_2] [i_2] = ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
                        arr_37 [(signed char)12] [i_1] [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) (signed char)116);
                        arr_38 [i_2] [i_9] [i_2] [(unsigned short)14] [i_2] = ((/* implicit */signed char) arr_30 [i_2] [i_1]);
                        arr_39 [i_2] [i_0] [i_2] [i_0] = ((/* implicit */int) ((804036615U) ^ (((/* implicit */unsigned int) (+(((/* implicit */int) arr_35 [i_0] [i_0] [i_1] [i_1])))))));
                    }
                    var_22 = ((/* implicit */signed char) arr_25 [i_2] [i_2 + 1]);
                    var_23 = var_1;
                }
            } 
        } 
    } 
}

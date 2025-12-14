/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165512
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)10042))))) ? (((14658149437922098084ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_14))))) ? (((((/* implicit */int) var_1)) | (((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_7)))))) : (((/* implicit */int) (unsigned char)201))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned long long int) ((_Bool) (~(((/* implicit */int) arr_1 [i_0] [i_0])))));
        arr_4 [i_0] = ((/* implicit */_Bool) (short)23146);
        arr_5 [i_0] = ((/* implicit */short) arr_0 [i_0] [i_0]);
        arr_6 [i_0] = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0] [i_0])) * (((/* implicit */int) (short)-15786))))) & (((((/* implicit */_Bool) (unsigned char)243)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (var_10))))) >> (((((/* implicit */int) ((signed char) arr_3 [i_0]))) + (57)))));
    }
    for (signed char i_1 = 2; i_1 < 21; i_1 += 4) 
    {
        arr_10 [i_1] = ((/* implicit */signed char) ((short) ((((/* implicit */int) arr_8 [i_1 + 1])) + (((/* implicit */int) arr_8 [i_1 + 1])))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 4) 
        {
            for (unsigned int i_3 = 0; i_3 < 22; i_3 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 1; i_4 < 18; i_4 += 4) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (((_Bool)0) ? (((((/* implicit */_Bool) arr_9 [i_1] [5LL])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)-15786)))) : (((((/* implicit */int) arr_15 [i_5] [i_4] [i_3] [(short)10])) << (((((/* implicit */int) var_3)) - (127))))))))));
                                arr_21 [i_2] [i_3] [i_2] = ((/* implicit */_Bool) 536870880U);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (short i_6 = 0; i_6 < 22; i_6 += 4) 
                    {
                        var_20 = ((/* implicit */_Bool) max((var_20), (arr_12 [i_1])));
                        var_21 ^= ((/* implicit */short) max((arr_23 [i_1 + 1] [i_2] [i_2 + 2]), (((/* implicit */unsigned char) ((((/* implicit */int) arr_23 [i_1 - 2] [i_1 - 2] [i_2 + 3])) > (((/* implicit */int) arr_23 [i_1 - 1] [i_1 - 1] [i_2 + 3])))))));
                        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_7 [i_6] [i_6]))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_15 [i_1] [i_2] [i_1] [i_2])) : (((/* implicit */int) arr_11 [i_3] [i_3])))) : (((((/* implicit */_Bool) -7350542173307593885LL)) ? (((/* implicit */int) arr_20 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [(signed char)6])) : (((/* implicit */int) arr_13 [i_2 + 3] [i_2] [i_2]))))))) ? (((((/* implicit */_Bool) max((arr_9 [i_1] [i_2]), (((/* implicit */short) arr_20 [i_1] [i_1] [(short)19] [i_1] [i_1] [i_1] [i_1]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-15771)) ? (((/* implicit */int) arr_13 [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_20 [i_1] [i_2] [12ULL] [(signed char)21] [i_6] [i_6] [i_6]))))) : ((-(var_13))))) : (((/* implicit */long long int) min((arr_16 [i_1 - 1] [i_2 + 1] [i_2] [i_2 + 1]), (arr_16 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_2 + 2])))))))));
                    }
                    for (unsigned int i_7 = 1; i_7 < 20; i_7 += 4) 
                    {
                        arr_27 [i_1] [i_7] [10ULL] [i_3] [i_7 - 1] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) arr_12 [i_1])) : (((/* implicit */int) (_Bool)1))))) ? (arr_16 [i_1 + 1] [i_1] [(signed char)9] [i_1]) : (((/* implicit */int) arr_15 [(unsigned short)18] [i_2] [i_3] [8U]))))));
                        var_23 = ((/* implicit */short) (!(((((/* implicit */int) ((460267365U) == (arr_22 [i_1] [5] [i_2] [i_1] [i_1] [i_1])))) >= (((/* implicit */int) (short)-15786))))));
                        var_24 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_2 + 2] [i_1])) ? (((((/* implicit */int) (unsigned short)40888)) / (arr_16 [i_2 + 2] [i_2] [i_2 + 2] [i_2 + 1]))) : (((((/* implicit */int) arr_12 [i_1])) ^ (((/* implicit */int) arr_13 [i_2 + 3] [i_1 - 2] [i_1]))))));
                        var_25 *= ((/* implicit */_Bool) ((((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (signed char)-79)) : (((/* implicit */int) var_5))))) || (((/* implicit */_Bool) arr_7 [i_1] [i_1])))) ? ((((!(((/* implicit */_Bool) arr_22 [i_1] [i_1 - 1] [(_Bool)1] [(_Bool)1] [i_3] [i_7])))) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)204))))))) : (((/* implicit */int) ((short) (!(((/* implicit */_Bool) (unsigned short)24648))))))));
                    }
                    var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-31445)) ? (arr_24 [i_3] [i_3] [(short)20] [(short)20] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_1 + 1] [i_1 + 1] [i_3] [i_3] [i_2] [i_3])))))) || (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)-24331))) % (arr_24 [i_1] [i_1] [(unsigned short)4] [i_3] [i_3]))))))) & (((/* implicit */int) arr_15 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]))));
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 22; i_8 += 4) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 4) 
                        {
                            {
                                arr_33 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_24 [i_3] [i_8] [i_3] [i_2 + 1] [i_3]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_3] [i_8]))) : (max((((/* implicit */unsigned long long int) (short)-17095)), (4194303ULL))))))));
                                var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) arr_11 [i_1] [i_1]))));
                                arr_34 [i_1] &= ((/* implicit */unsigned long long int) (+(((((((/* implicit */_Bool) (signed char)-6)) ? (((/* implicit */int) arr_15 [i_1] [i_1] [i_8] [i_9])) : (((/* implicit */int) arr_17 [(unsigned short)10] [i_2 + 2] [i_3] [i_8])))) / ((+(((/* implicit */int) (signed char)-91))))))));
                                var_28 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_1 + 1] [i_2 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1 + 1] [i_2 + 1]))) : (arr_18 [i_1 + 1] [i_2 + 1] [i_2] [i_2 + 1] [i_8]))));
                                arr_35 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_8] [i_2 + 1] [i_8] &= (((+(((/* implicit */int) arr_20 [i_1] [i_1 - 1] [(short)18] [i_1 - 1] [i_1 - 2] [i_1 - 1] [i_1])))) + (((/* implicit */int) arr_11 [i_2] [i_2])));
                            }
                        } 
                    } 
                    arr_36 [i_1 + 1] [i_1] [i_2 + 3] [i_1] = ((/* implicit */short) (~(((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1 + 1] [i_1]))) + (16759549746294560408ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_29 [i_1] [i_1 - 1] [(unsigned short)15] [i_1 - 1] [i_3] [i_3])) == (((/* implicit */int) (_Bool)1))))))))));
                }
            } 
        } 
        arr_37 [i_1] = ((/* implicit */unsigned char) max((arr_24 [i_1] [i_1] [i_1 - 1] [(short)4] [(short)4]), (((/* implicit */long long int) ((arr_16 [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_1]) + (((/* implicit */int) arr_8 [i_1])))))));
    }
    var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) var_12))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112215
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 3; i_2 < 20; i_2 += 2) 
                {
                    for (unsigned char i_3 = 1; i_3 < 18; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (unsigned char i_4 = 0; i_4 < 21; i_4 += 1) 
                            {
                                var_11 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_1))));
                                arr_16 [i_1] [i_2] [i_2] [(unsigned short)4] [15] = ((/* implicit */unsigned char) ((short) max((arr_11 [i_2 - 2] [i_3] [i_4]), (arr_11 [i_0] [10] [i_0]))));
                                arr_17 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2]))) == (min((((/* implicit */unsigned int) -1316993266)), (arr_15 [i_2 - 1])))));
                            }
                            for (signed char i_5 = 0; i_5 < 21; i_5 += 3) 
                            {
                                var_12 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2284701787U)) ? (2517865815U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                                var_13 &= ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) ((1777101505U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0])))))) ? (((((/* implicit */_Bool) 1777101514U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (2517865781U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2010265512U)) ? (-627017598) : (((/* implicit */int) arr_14 [(unsigned char)10] [i_1] [i_1] [i_3] [i_5]))))))));
                                arr_20 [i_2] [(unsigned short)19] [i_0] [(unsigned short)19] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_1] [i_2] [i_5])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_3] [i_5])))))), ((-(var_6)))))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_1))))) : ((+(((((/* implicit */long long int) var_10)) / (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_2])))))));
                            }
                            for (int i_6 = 1; i_6 < 19; i_6 += 1) 
                            {
                                arr_23 [i_0] [i_2] [(unsigned short)9] [i_3] [(signed char)14] = ((/* implicit */signed char) max((((/* implicit */int) max((arr_10 [i_2] [(_Bool)1] [i_2] [i_3 + 2] [i_6]), ((unsigned char)103)))), ((+(((/* implicit */int) arr_19 [5] [i_1] [i_2 - 1] [i_3 + 2] [i_3] [i_6 - 1] [i_6 - 1]))))));
                                var_14 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_13 [i_0] [i_6] [i_6 + 1] [i_6] [i_6 + 1] [i_3 + 1] [i_0]) ^ (arr_13 [i_0] [i_6 + 2] [i_6] [(unsigned char)16] [i_6 + 1] [i_3 + 2] [i_0])))) ? ((~(2284701767U))) : (((((/* implicit */_Bool) max((((/* implicit */long long int) 2517865805U)), (arr_11 [i_1] [i_2] [i_1])))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) / (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0])))))));
                                var_15 = (unsigned char)7;
                            }
                            /* LoopSeq 2 */
                            for (unsigned char i_7 = 2; i_7 < 18; i_7 += 2) 
                            {
                                var_16 = ((/* implicit */unsigned short) (~(max((2010265508U), (min((((/* implicit */unsigned int) arr_24 [i_7] [i_3 + 2] [(unsigned short)4] [(unsigned short)4] [(unsigned short)4])), (2284701767U)))))));
                                var_17 = ((/* implicit */unsigned char) 2517865807U);
                                var_18 = ((/* implicit */int) min((((short) -1145312018)), (((/* implicit */short) ((signed char) (unsigned char)0)))));
                                arr_28 [i_0] [i_1] [i_2] [0] [i_7] [(unsigned char)20] &= ((/* implicit */unsigned short) var_4);
                            }
                            for (unsigned char i_8 = 3; i_8 < 18; i_8 += 2) 
                            {
                                arr_32 [i_2] = min((((/* implicit */unsigned int) (+(max((((/* implicit */int) var_4)), (var_9)))))), ((((~(arr_22 [i_1] [(signed char)18] [i_2 - 2] [i_2] [i_2]))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [4LL] [i_1] [i_1]))))));
                                arr_33 [(unsigned char)9] [i_2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)-1)) && (((/* implicit */_Bool) (unsigned char)0)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_0))) ? (((((/* implicit */_Bool) 6633853078675677095LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_8] [i_8] [i_8] [i_8] [i_8 + 3]))) : (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_8), (((/* implicit */unsigned short) arr_0 [i_1] [i_8])))))))))));
                            }
                        }
                    } 
                } 
                var_19 *= (-(((/* implicit */int) ((((/* implicit */_Bool) ((signed char) arr_26 [(signed char)10] [(signed char)8] [i_0] [(unsigned char)0] [i_1] [i_1] [(unsigned char)8]))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_0 [i_0] [i_1])))))))));
            }
        } 
    } 
    var_20 |= ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) (signed char)-13)), (219545390)))) && (((/* implicit */_Bool) min((2517865815U), (((/* implicit */unsigned int) (signed char)100)))))));
}

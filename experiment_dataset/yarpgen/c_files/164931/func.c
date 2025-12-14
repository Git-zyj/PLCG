/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164931
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
    var_16 = ((/* implicit */short) var_2);
    var_17 &= ((/* implicit */unsigned short) (-(((/* implicit */int) (short)-19897))));
    var_18 = ((/* implicit */int) max((((/* implicit */unsigned int) var_11)), (((((/* implicit */unsigned int) (-(((/* implicit */int) var_3))))) + (var_2)))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 14; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 13; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */short) (-(((((/* implicit */int) var_4)) & (((/* implicit */int) arr_0 [i_0]))))));
                    arr_9 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */int) (!(arr_0 [i_0 + 3])))) << (((/* implicit */int) arr_0 [i_0 - 3]))));
                    /* LoopSeq 4 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_20 -= ((/* implicit */unsigned long long int) (-(((((/* implicit */int) min((var_15), (((/* implicit */unsigned char) (_Bool)1))))) << (((arr_8 [(unsigned char)8] [(unsigned char)8]) - (9103024147582954029ULL)))))));
                        var_21 = ((/* implicit */unsigned long long int) var_2);
                    }
                    for (int i_4 = 0; i_4 < 17; i_4 += 2) 
                    {
                        var_22 = ((/* implicit */short) var_5);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_5 = 0; i_5 < 17; i_5 += 3) 
                        {
                            var_23 = ((/* implicit */unsigned int) (short)32764);
                            var_24 = ((/* implicit */int) ((short) ((((/* implicit */_Bool) (short)-32764)) ? (4740634080574670627ULL) : (9379767828339311287ULL))));
                        }
                        var_25 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [(unsigned short)7] [i_1] [(short)12] [i_2 + 1] [i_4]))) & ((+(max((((/* implicit */unsigned long long int) (_Bool)1)), (13706109993134880995ULL)))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_6 = 0; i_6 < 17; i_6 += 4) 
                        {
                            arr_19 [i_2] [(_Bool)1] [i_1] [7U] [(_Bool)1] = ((/* implicit */short) (-(((/* implicit */int) var_13))));
                            var_26 += ((/* implicit */short) (_Bool)1);
                            var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) max((arr_15 [i_2 + 2] [i_1] [i_0 - 1] [i_4] [i_4]), (((/* implicit */unsigned int) arr_18 [i_1] [i_2])))))));
                            var_28 = var_14;
                            var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) max((((((/* implicit */int) arr_2 [i_0 - 2])) << ((((~(arr_5 [i_4] [i_4]))) - (2429279185U))))), ((~((~(((/* implicit */int) var_1)))))))))));
                        }
                        var_30 = ((/* implicit */int) var_1);
                    }
                    /* vectorizable */
                    for (short i_7 = 1; i_7 < 14; i_7 += 2) 
                    {
                        arr_22 [i_1] [i_2 - 1] [i_1] = 3881710043U;
                        var_31 |= ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_7 + 3])) ? ((-(var_7))) : (((/* implicit */int) arr_0 [i_1]))));
                        arr_23 [i_0 - 1] [i_1] [i_1] [i_7] = arr_7 [i_1] [i_1] [i_2] [i_7 + 2];
                        arr_24 [16U] [(unsigned short)14] [16U] |= ((/* implicit */short) ((arr_0 [i_0 + 3]) ? (((/* implicit */int) arr_14 [(unsigned short)16] [i_7 + 2] [i_2 - 1] [8ULL] [i_0 - 2] [(unsigned short)16])) : (((/* implicit */int) arr_14 [i_0] [i_0] [i_7] [i_1] [i_0] [(unsigned char)6]))));
                    }
                    for (int i_8 = 0; i_8 < 17; i_8 += 4) 
                    {
                        var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) arr_26 [i_8] [i_8] [i_8] [i_8]))));
                        arr_29 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) arr_10 [5] [i_1] [i_1] [i_1] [i_1] [i_0]);
                    }
                }
            } 
        } 
    } 
}

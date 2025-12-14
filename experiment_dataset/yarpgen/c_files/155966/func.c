/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155966
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
    var_19 = ((unsigned long long int) ((short) min((((/* implicit */int) (signed char)-87)), (var_16))));
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) > (((/* implicit */int) var_1))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)44815))));
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-63)) ? (((arr_0 [i_0]) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (short)-16255)))) : (((((/* implicit */int) (unsigned char)235)) << (((((/* implicit */int) arr_1 [i_0] [i_0])) - (69)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((4294967290U) * (4294967276U)))) ? (var_2) : (var_17)))) : (arr_2 [i_0] [i_1])));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */int) arr_1 [i_3 - 1] [i_3 - 1]);
                            /* LoopSeq 2 */
                            for (short i_4 = 0; i_4 < 13; i_4 += 3) 
                            {
                                var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) arr_11 [i_0] [i_1] [i_0] [9]))) || (((/* implicit */_Bool) arr_11 [i_4] [i_1] [i_1] [i_0]))));
                                var_25 |= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0]))) | ((+(min((3537565464U), (((/* implicit */unsigned int) (unsigned char)236))))))));
                            }
                            for (short i_5 = 0; i_5 < 13; i_5 += 4) 
                            {
                                var_26 *= ((/* implicit */int) (~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_3] [i_3] [i_3] [i_3 - 1]))) : (((((/* implicit */_Bool) 24U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-63))) : (1956224065U)))))));
                                var_27 = ((/* implicit */unsigned long long int) arr_2 [i_3 - 1] [i_3]);
                                var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) (+(((/* implicit */int) min((arr_6 [i_3 - 1]), (arr_6 [i_3 - 1])))))))));
                                var_29 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((_Bool) ((((/* implicit */unsigned int) var_16)) * (var_14))))), (((arr_15 [i_3] [i_2] [i_1] [12ULL]) ? ((-(var_13))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3 - 1] [i_3 - 1])))))));
                                arr_16 [i_1] [(short)0] = ((/* implicit */signed char) 4285100928392178657ULL);
                            }
                            var_30 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)-4737)), ((unsigned short)65533))))) + (((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_3 - 1]))) - (arr_3 [i_3 - 1])))));
                            arr_17 [i_3] [(signed char)10] [(signed char)10] [i_0] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_15 [i_0] [i_3 - 1] [i_2] [i_0]) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) != (var_10)))) : (((/* implicit */int) (unsigned short)10671))))) && (((/* implicit */_Bool) var_7))));
                            var_31 = ((/* implicit */unsigned short) (-((-(((/* implicit */int) arr_6 [i_0]))))));
                        }
                    } 
                } 
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106910
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
    var_17 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_6)), (((max((var_5), (9223372036854775808ULL))) << (((((/* implicit */int) var_4)) - (92)))))));
    var_18 = (short)28310;
    var_19 = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) (signed char)72)) ? (((/* implicit */int) (short)7848)) : (var_1))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 11; i_2 += 3) 
                {
                    for (int i_3 = 3; i_3 < 12; i_3 += 2) 
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */int) ((unsigned long long int) arr_0 [i_3]));
                            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) max((-911596716), (arr_4 [2U]))))) ? (((int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)52))))) : (((/* implicit */int) (signed char)8)))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned short) max((max((max((arr_1 [i_1]), (((/* implicit */unsigned int) arr_4 [i_0])))), (arr_1 [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0])) ? (arr_0 [(_Bool)1]) : (((/* implicit */int) arr_6 [3ULL] [i_0] [i_0] [3ULL]))))) ? ((+(((/* implicit */int) arr_7 [i_0])))) : (arr_0 [i_1 + 2]))))));
                var_22 -= ((/* implicit */short) ((unsigned int) ((unsigned char) ((arr_3 [i_0]) ^ (((/* implicit */unsigned long long int) -440685997))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 14; i_4 += 2) 
                {
                    for (unsigned short i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        {
                            arr_15 [i_0] [(short)2] [5LL] [i_4] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */short) ((_Bool) var_10))), (max((var_6), (((/* implicit */short) arr_2 [i_0]))))))) ? (max((-8269020087033878791LL), (max((8269020087033878791LL), (((/* implicit */long long int) var_9)))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2076983520))))))));
                            arr_16 [i_0] [i_1] [i_1 + 1] [i_1] [7ULL] [i_1 + 2] = ((/* implicit */signed char) var_15);
                            var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((unsigned short) min((((/* implicit */long long int) (signed char)0)), (((8269020087033878791LL) | (((/* implicit */long long int) ((/* implicit */int) (signed char)-72)))))))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (arr_1 [i_0])))) ? (min((((/* implicit */long long int) arr_7 [i_0])), (8269020087033878791LL))) : (((((/* implicit */_Bool) arr_17 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-7968020697604293777LL)))))) ? (((((/* implicit */_Bool) ((unsigned long long int) (short)-7849))) ? (((/* implicit */long long int) max((((/* implicit */int) (signed char)60)), (arr_0 [i_0])))) : (arr_9 [11ULL] [i_1] [i_1] [i_1 - 2]))) : (((/* implicit */long long int) (-(((((/* implicit */_Bool) (unsigned char)113)) ? (((/* implicit */int) (signed char)112)) : (arr_0 [i_1]))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 0; i_7 < 14; i_7 += 3) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 14; i_8 += 3) 
                        {
                            {
                                arr_25 [i_0] [i_1] [(_Bool)1] [i_1] [i_0] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) ((unsigned char) (signed char)-41))) && (((/* implicit */_Bool) arr_13 [i_1 - 2] [i_1 + 1] [i_1 + 2] [i_1 + 2])))));
                                arr_26 [i_0] [i_0] [i_6] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) ^ (((((/* implicit */_Bool) -2076983520)) ? (12406889543581265778ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)21)))))))) ? ((+(((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) var_13)) : (-1443713210))))) : (((/* implicit */int) ((short) ((((/* implicit */_Bool) -1443713210)) ? (-8269020087033878791LL) : (((/* implicit */long long int) arr_17 [i_6]))))))));
                                arr_27 [i_0] [6] [i_1 - 2] [i_0] [i_7] [i_1 - 2] = ((/* implicit */long long int) arr_22 [(signed char)2] [(signed char)2] [i_1] [i_6] [(signed char)2] [i_8] [i_8]);
                                var_25 = ((/* implicit */unsigned long long int) max((var_6), (((/* implicit */short) ((signed char) ((unsigned long long int) arr_5 [i_0]))))));
                                arr_28 [i_0] [i_1] [i_6] [i_0] [i_8] = ((/* implicit */long long int) ((unsigned long long int) max((max((((/* implicit */long long int) var_13)), (8269020087033878791LL))), (((/* implicit */long long int) var_0)))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */int) var_2)) + (-2076983521))), (var_14)))) ? (((/* implicit */long long int) ((((/* implicit */int) ((short) arr_2 [12ULL]))) | (((/* implicit */int) (short)7848))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_9 [i_6] [i_6] [i_1] [i_0])), (var_5)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [2] [(signed char)11] [i_0] [i_0]))) : (-1547262708819050572LL))) : (max((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */long long int) -2076983520))))))));
                }
            }
        } 
    } 
    var_27 = ((/* implicit */signed char) ((((/* implicit */int) max((var_6), (((/* implicit */short) ((((/* implicit */_Bool) -7271045557905375407LL)) || (((/* implicit */_Bool) 12406889543581265778ULL)))))))) / (((/* implicit */int) (unsigned char)245))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116569
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
    var_20 = ((/* implicit */long long int) 1317465391U);
    var_21 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_7))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_22 = ((/* implicit */long long int) (~(max((min((((/* implicit */unsigned int) var_14)), (arr_2 [i_0]))), (arr_2 [i_0])))));
                var_23 = ((/* implicit */int) (_Bool)1);
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 8; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        {
                            arr_8 [i_3] [i_0] [i_1] [i_0] = var_10;
                            arr_9 [i_0] [i_0] [i_0] [(_Bool)1] = ((/* implicit */_Bool) var_18);
                            var_24 = ((((/* implicit */_Bool) ((unsigned char) (short)15857))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) <= (((/* implicit */int) arr_3 [i_1] [i_1] [i_1]))))), (274743689216ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_2 + 2] [7ULL] [i_2] [i_2] [i_2] [i_0])) << (((/* implicit */int) var_3))))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */unsigned short) max(((~(min((((/* implicit */long long int) arr_4 [6LL] [i_0] [i_1])), (268435328LL))))), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_17)) ? (274743689216ULL) : (((/* implicit */unsigned long long int) var_8)))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_1 [i_1])))))))));
                /* LoopSeq 2 */
                for (unsigned char i_4 = 2; i_4 < 7; i_4 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 1; i_5 < 9; i_5 += 3) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_17 [i_5 + 2])), (var_4)))) ? (((((/* implicit */_Bool) arr_14 [i_4] [i_5] [i_4] [i_1] [i_4])) ? (4729465051730557598ULL) : (10711084276309188884ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [(signed char)5])) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [1] [i_0])) : (((/* implicit */int) (signed char)-83))))))), (min((((/* implicit */unsigned long long int) var_6)), (7735659797400362731ULL)))));
                                arr_20 [i_4] [i_4] [i_4] [i_5 + 2] [i_6] [2] [i_4] = ((/* implicit */signed char) ((long long int) var_11));
                                var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_17)), (arr_18 [i_1] [i_4 + 2] [i_4 + 3] [i_4 + 4] [i_5 - 1]))))));
                                arr_21 [i_0] [i_1] [i_0] [i_4] [i_0] = ((/* implicit */int) min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) -79641506)) ? (arr_5 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)84)))))), (((((/* implicit */_Bool) var_15)) ? (var_18) : (var_18)))))), (max((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_6] [i_1] [i_1]))) : (274743689216ULL))), (((/* implicit */unsigned long long int) arr_5 [i_0]))))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */long long int) var_16);
                    /* LoopSeq 3 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        arr_24 [i_4] [i_1] [i_4] [i_7] = ((/* implicit */_Bool) arr_7 [i_4] [4LL] [i_4] [i_4 + 2] [i_4 - 1]);
                        var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 274743689216ULL)) ? (((/* implicit */unsigned long long int) var_18)) : (var_13)));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 1) 
                    {
                        arr_27 [i_0] [i_0] [i_4] [10ULL] [i_4 + 2] [i_1] &= ((/* implicit */unsigned long long int) arr_26 [(_Bool)1] [i_0] [i_1] [i_4] [i_8]);
                        var_30 = ((/* implicit */_Bool) var_18);
                    }
                    for (unsigned char i_9 = 0; i_9 < 11; i_9 += 3) 
                    {
                        arr_31 [i_0] [i_1] [i_4] [1ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((-268435326LL) + (9223372036854775807LL))) >> (((/* implicit */int) arr_19 [i_4] [i_4] [10U] [i_4 + 3] [i_4 - 1] [i_9] [i_9]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (var_19) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (6647670017481465810LL) : (var_8)))) : (min((var_1), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [0LL] [i_1] [0LL] [0LL])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [(signed char)3] [i_9] [i_4] [i_0] [i_0]))) & ((~(761593854656478904LL))))))));
                        arr_32 [i_0] [i_1] [i_4] [i_4] [4U] = ((/* implicit */_Bool) max(((+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_4] [i_9]))) : (arr_18 [i_0] [i_0] [i_0] [i_0] [(signed char)6]))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (short)32767)) > (((/* implicit */int) (signed char)72))))) >> (((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (2877378238U))) - (2877378223U))))))));
                    }
                    arr_33 [i_0] [0] [i_0] [i_4] = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((((/* implicit */int) (short)16188)) >> (((var_11) - (8055955544476019876ULL)))))) : (268435325LL))));
                    var_31 = max((((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)45511)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) 2434825115U)) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (4280376338637745645ULL))))));
                }
                for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 4) 
                {
                    var_32 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_29 [i_1])) ? (((/* implicit */int) (unsigned char)187)) : (((/* implicit */int) var_14))))));
                    /* LoopSeq 1 */
                    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                    {
                        arr_40 [i_0] [i_1] [i_11] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) -849455497044877717LL)), (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)3228))))) ? (((unsigned long long int) var_6)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (_Bool)0))))))));
                        var_33 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) 15)), (0ULL)));
                        arr_41 [i_0] [i_0] [i_0] [i_0] [i_11] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((_Bool) arr_11 [i_11 - 1] [i_11]))), (min((arr_11 [i_11 - 1] [i_11]), (arr_11 [i_11 - 1] [i_11 - 1])))));
                        var_34 = ((/* implicit */long long int) min(((~(((/* implicit */int) arr_23 [8LL] [i_0] [i_0] [(short)5] [i_0] [i_0])))), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_26 [i_0] [i_0] [i_1] [(unsigned char)1] [i_11])) ^ (var_16)))) ? (arr_17 [i_11 - 1]) : (((/* implicit */int) min((((/* implicit */unsigned short) var_7)), ((unsigned short)14254))))))));
                    }
                    arr_42 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) -5543975674055079320LL);
                }
            }
        } 
    } 
    var_35 = ((/* implicit */unsigned int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) 1778676751583278816ULL))))), (min((var_3), (((/* implicit */unsigned char) (signed char)36))))));
    var_36 = ((/* implicit */unsigned char) var_19);
}

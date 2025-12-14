/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174339
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
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (((((/* implicit */_Bool) (unsigned char)199)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)203))) : (8155215821183984004LL)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_19 -= (+(((((/* implicit */_Bool) (unsigned char)96)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) var_1)))));
                arr_6 [i_0 - 2] = ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned char) arr_2 [i_0 - 2])))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned char) ((int) (-(max((((/* implicit */long long int) var_13)), (var_12))))));
                            var_21 = ((/* implicit */long long int) min((var_21), (((((/* implicit */_Bool) max((arr_8 [i_0 - 2] [i_1] [i_2] [i_0 - 3]), (arr_3 [i_0 - 3] [i_0] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (signed char)19)) || (arr_12 [i_0] [i_2]))) || (((/* implicit */_Bool) max(((unsigned char)255), (var_13)))))))) : ((((!(((/* implicit */_Bool) (signed char)-13)))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) var_5)) : (-1766674703663969600LL))) : (min((((/* implicit */long long int) (signed char)-13)), (-12LL)))))))));
                            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-74)) ? ((-(((((/* implicit */int) var_13)) & (((/* implicit */int) (signed char)-64)))))) : (((/* implicit */int) var_8)))))));
                            arr_13 [i_3] [i_2] [i_2] [i_0] = ((/* implicit */long long int) max(((-(((/* implicit */int) arr_8 [i_0] [i_0 - 2] [i_0] [i_0 - 1])))), ((-(((/* implicit */int) var_14))))));
                        }
                    } 
                } 
                arr_14 [i_0] [i_0] [i_0] = min((var_12), (((/* implicit */long long int) var_14)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 18; i_4 += 2) 
    {
        for (long long int i_5 = 0; i_5 < 18; i_5 += 1) 
        {
            {
                var_23 = ((/* implicit */signed char) min((var_23), (arr_16 [i_5])));
                arr_20 [i_5] = ((/* implicit */unsigned char) (((((!(((/* implicit */_Bool) (signed char)-13)))) ? (arr_19 [i_5]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) + (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)120)), ((unsigned char)252)))))));
                /* LoopSeq 2 */
                for (unsigned char i_6 = 0; i_6 < 18; i_6 += 2) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                arr_28 [i_4] [i_5] [(unsigned char)16] [i_4] [i_8] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -7))));
                                var_24 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)31)) * (((/* implicit */int) var_15))))) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : (((/* implicit */int) arr_16 [i_4]))))) ? (((min((((/* implicit */long long int) (signed char)117)), (arr_18 [i_5]))) % (((/* implicit */long long int) (~(((/* implicit */int) arr_16 [i_4]))))))) : (((((var_3) ^ (((/* implicit */long long int) ((/* implicit */int) var_0))))) ^ (((arr_21 [11LL] [i_6] [i_6] [(unsigned char)14]) ^ (arr_19 [i_4])))))));
                                var_25 = ((/* implicit */long long int) (+((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_4] [i_5])))))))));
                                arr_29 [i_4] [i_4] [i_5] [i_4] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) arr_25 [(unsigned char)11] [i_6] [i_5] [i_4]))) : (max((((/* implicit */long long int) ((((/* implicit */int) var_11)) >> (((((/* implicit */int) (unsigned char)158)) - (139)))))), (((var_4) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_19 [i_5])))))));
                            }
                        } 
                    } 
                    var_26 += ((/* implicit */unsigned char) (+(((((/* implicit */long long int) (-(((/* implicit */int) var_0))))) + (((var_3) | (((/* implicit */long long int) var_5))))))));
                }
                /* vectorizable */
                for (long long int i_9 = 4; i_9 < 14; i_9 += 4) 
                {
                    var_27 &= ((/* implicit */signed char) (~((~(arr_19 [i_4])))));
                    /* LoopSeq 2 */
                    for (unsigned char i_10 = 0; i_10 < 18; i_10 += 4) /* same iter space */
                    {
                        arr_34 [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)117)) ^ (((/* implicit */int) arr_24 [i_10] [i_10] [(unsigned char)0] [(unsigned char)5] [i_9 - 3]))));
                        var_28 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) var_13))) && (((/* implicit */_Bool) (+(((/* implicit */int) var_0)))))));
                        arr_35 [i_5] [i_10] = var_9;
                    }
                    for (unsigned char i_11 = 0; i_11 < 18; i_11 += 4) /* same iter space */
                    {
                        arr_40 [i_4] [i_5] [i_5] [i_11] [i_11] = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_16 [i_4]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -1766674703663969592LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9))))));
                        arr_41 [i_4] [i_5] [i_4] = ((unsigned char) ((((/* implicit */_Bool) arr_30 [(unsigned char)14] [(unsigned char)14] [i_5] [(unsigned char)14])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)7))) : (4503599627370480LL)));
                        arr_42 [i_5] [i_4] [i_4] [i_5] = ((/* implicit */unsigned char) arr_38 [i_4] [i_5] [i_9 - 4] [i_5]);
                        var_29 = ((/* implicit */int) (+((~(arr_38 [i_4] [i_4] [i_4] [i_9])))));
                        arr_43 [i_4] [i_5] [i_9] [i_5] = ((/* implicit */unsigned char) arr_30 [i_11] [i_5] [i_5] [i_4]);
                    }
                    var_30 ^= ((unsigned char) var_1);
                    /* LoopSeq 2 */
                    for (unsigned char i_12 = 0; i_12 < 18; i_12 += 1) 
                    {
                        arr_47 [i_5] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_37 [(_Bool)1] [i_4] [i_9] [i_9] [i_5] [i_9]))));
                        arr_48 [i_4] [i_5] [i_5] [i_5] [i_12] [i_5] = ((((/* implicit */_Bool) arr_37 [i_4] [i_9 + 4] [i_9 - 2] [i_12] [i_5] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_9]))) : (arr_23 [i_4] [i_5]));
                    }
                    for (long long int i_13 = 4; i_13 < 15; i_13 += 4) 
                    {
                        arr_52 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_46 [i_4] [i_5] [i_9] [i_13 - 1]))))) ? (((/* implicit */int) arr_31 [i_4] [i_5] [i_5])) : (((/* implicit */int) (unsigned char)124))));
                        arr_53 [i_5] [i_5] [i_9] = ((/* implicit */signed char) ((((((/* implicit */_Bool) 7721667692498306689LL)) ? (-453543926) : (((/* implicit */int) (unsigned char)0)))) <= (((/* implicit */int) arr_33 [(unsigned char)15] [(unsigned char)15] [i_13 - 3] [i_13] [i_9 - 4]))));
                        var_31 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_51 [i_4] [i_9 - 1] [i_4] [i_13 + 1]))) ^ ((-(4014021946648702434LL)))));
                    }
                }
            }
        } 
    } 
    var_32 = ((((var_3) / (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-117))))))) - (((((var_3) + (((/* implicit */long long int) ((/* implicit */int) (signed char)-102))))) / (((((/* implicit */_Bool) (signed char)116)) ? (19LL) : (5793832620491120594LL))))));
    var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) (+(((/* implicit */int) var_8)))))));
}

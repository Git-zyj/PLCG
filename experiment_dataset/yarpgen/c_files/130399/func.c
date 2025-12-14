/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130399
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
    var_12 = ((/* implicit */signed char) var_0);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned short) arr_9 [i_0] [i_1] [(signed char)11]);
                            /* LoopSeq 4 */
                            for (long long int i_4 = 0; i_4 < 12; i_4 += 1) 
                            {
                                var_14 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */int) (signed char)56)) : (((/* implicit */int) arr_3 [i_1] [i_1]))))));
                                var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) (~(((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((((/* implicit */_Bool) arr_9 [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (2359085003U))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_0] [i_1] [i_1] [i_3])) | (((/* implicit */int) (unsigned short)52813))))))))))));
                                arr_16 [(unsigned char)4] [(unsigned char)4] [11LL] [i_1] [i_3] [(unsigned short)10] [i_4] = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)12722)) / (((/* implicit */int) (unsigned char)85))))) * (((((/* implicit */long long int) 1678038057U)) / (arr_6 [i_1]))))) != (((/* implicit */long long int) (+(((/* implicit */int) arr_9 [0U] [i_1] [i_2])))))));
                                var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_8 [i_0] [i_3] [i_0]), (arr_8 [i_0] [i_0] [i_0])))) ? (((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2])) ? (((/* implicit */int) arr_8 [i_2] [i_3] [i_2])) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0])))) : (((((/* implicit */_Bool) (short)13818)) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_8 [i_2] [i_2] [i_2]))))));
                                var_17 = ((/* implicit */_Bool) min((arr_14 [i_0] [i_1] [4LL] [i_0] [4LL]), (((/* implicit */long long int) ((signed char) arr_4 [i_0] [i_3] [i_4])))));
                            }
                            for (unsigned int i_5 = 0; i_5 < 12; i_5 += 2) /* same iter space */
                            {
                                var_18 = ((unsigned short) ((long long int) ((unsigned long long int) arr_8 [i_0] [i_0] [i_0])));
                                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) arr_12 [i_0] [i_0] [i_0] [3U]))));
                            }
                            for (unsigned int i_6 = 0; i_6 < 12; i_6 += 2) /* same iter space */
                            {
                                var_20 = (~(((/* implicit */int) arr_7 [i_3] [i_1] [i_2] [i_3])));
                                var_21 ^= ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_5 [i_0] [i_1])))) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)116)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_4 [i_6] [10ULL] [10ULL]))))), (((((/* implicit */_Bool) arr_4 [i_0] [(short)7] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_1]))) : (arr_5 [i_0] [i_2]))))));
                            }
                            for (long long int i_7 = 0; i_7 < 12; i_7 += 3) 
                            {
                                arr_28 [i_0] [i_0] [i_2] [i_0] [i_0] [0] [i_1] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (unsigned char)233)) ? (((/* implicit */int) (short)-19374)) : (((/* implicit */int) (unsigned char)188))))));
                                var_22 = ((/* implicit */int) ((((_Bool) ((((/* implicit */int) arr_11 [0LL] [i_1] [i_1] [i_1] [i_1])) + (((/* implicit */int) arr_2 [i_7]))))) && (((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))));
                                var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)22)) ? (4285646081U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)14)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((1827213186U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)18)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)83)) ? (((/* implicit */int) arr_0 [i_3])) : (((/* implicit */int) (short)23283))))) : ((~(arr_26 [(unsigned short)4] [i_1] [i_1] [i_0])))))) : (min((((var_8) & (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_3]))))), (((/* implicit */long long int) ((unsigned short) arr_23 [i_0] [(_Bool)1] [i_0] [(_Bool)1] [i_7] [i_7]))))));
                            }
                            /* LoopSeq 3 */
                            for (signed char i_8 = 0; i_8 < 12; i_8 += 4) 
                            {
                                var_24 *= ((/* implicit */unsigned char) ((arr_24 [i_0] [i_8]) ? (((((/* implicit */_Bool) arr_21 [i_0] [i_0] [(unsigned short)8] [i_0] [10ULL])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_8]))) : (arr_21 [i_8] [(unsigned char)9] [i_2] [i_1] [0LL]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_3] [i_2] [i_1] [i_0])) ? (((/* implicit */int) arr_12 [i_0] [10LL] [10LL] [i_8])) : (((/* implicit */int) arr_12 [(unsigned short)5] [i_0] [(unsigned short)5] [(unsigned short)5])))))));
                                arr_31 [i_1] [i_1] [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_24 [i_1] [i_1])))) : ((~(arr_14 [8] [(unsigned char)10] [(unsigned short)1] [i_3] [i_8]))));
                                arr_32 [i_1] [3ULL] [i_2] [i_3] = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_29 [(_Bool)1] [(unsigned char)2] [i_2] [7ULL] [(_Bool)1] [i_1]))))))));
                            }
                            for (unsigned int i_9 = 0; i_9 < 12; i_9 += 4) 
                            {
                                var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_26 [i_0] [(_Bool)1] [i_1] [(unsigned char)7])), (arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [(signed char)6] [(signed char)6])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_30 [11ULL] [7LL] [7LL]))) != (arr_10 [9] [9] [i_2] [0LL] [(unsigned short)8]))))) : (arr_10 [i_0] [i_0] [i_2] [i_2] [0ULL])))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((arr_27 [i_3] [i_1] [6LL] [(unsigned short)5] [i_1] [i_1] [i_1]) <= (405704169U))))) >= (((((/* implicit */_Bool) 2091612149290268670LL)) ? (arr_14 [i_1] [9U] [i_1] [i_1] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))))) : ((-(((/* implicit */int) arr_13 [(unsigned short)0] [(unsigned short)0] [(unsigned short)0] [2U] [i_3] [i_1] [i_2]))))));
                                arr_37 [i_0] [i_0] [i_1] [4LL] [i_2] [4LL] [i_1] = ((/* implicit */unsigned short) arr_34 [i_0] [i_0] [i_0] [i_1] [i_0]);
                                var_26 -= ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) max((arr_0 [i_9]), (arr_36 [i_0] [i_1] [i_2] [i_9]))))) | (((/* implicit */int) ((short) max((((/* implicit */short) arr_35 [i_0] [i_1] [6U] [4U] [6U])), ((short)-888)))))));
                            }
                            for (unsigned int i_10 = 0; i_10 < 12; i_10 += 3) 
                            {
                                arr_41 [i_3] [i_2] [i_2] [i_3] [i_10] |= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 9008053440839839114ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_3]))) : (arr_26 [i_0] [(signed char)6] [i_3] [i_0])))) ? (((((/* implicit */_Bool) 2856493929U)) ? (((/* implicit */long long int) arr_26 [i_1] [i_1] [i_3] [i_3])) : (arr_21 [i_0] [i_1] [i_2] [i_3] [i_10]))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) arr_29 [i_0] [i_0] [(_Bool)1] [i_3] [i_3] [i_3])) : (-8360334228663493517LL))))) - (min((var_8), (arr_22 [i_1] [(signed char)9])))));
                                var_27 = ((/* implicit */signed char) max((((/* implicit */unsigned short) (unsigned char)139)), ((unsigned short)12722)));
                                var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_19 [0LL] [i_3] [i_3] [i_3] [i_10])) << (((((/* implicit */int) arr_19 [i_2] [i_3] [i_2] [i_2] [i_2])) - (123)))))) ? (((((/* implicit */int) arr_19 [i_0] [i_3] [i_0] [i_0] [i_0])) & (((/* implicit */int) arr_19 [i_0] [i_3] [i_0] [10] [i_0])))) : (((/* implicit */int) ((signed char) arr_19 [i_0] [i_3] [i_3] [i_3] [i_3]))))))));
                            }
                        }
                    } 
                } 
                var_29 = ((/* implicit */signed char) min((((/* implicit */long long int) arr_4 [i_0] [11ULL] [(signed char)7])), (((((/* implicit */_Bool) (~(1438473367U)))) ? (((((/* implicit */_Bool) arr_15 [i_0] [3ULL] [i_0] [i_0] [i_0] [i_1] [(signed char)2])) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_21 [(unsigned short)4] [i_1] [i_0] [i_0] [(short)0]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))));
                arr_42 [3] [i_1] [i_1] = ((/* implicit */signed char) (((+(((/* implicit */int) ((unsigned char) arr_29 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1]))))) ^ (((/* implicit */int) var_5))));
                arr_43 [i_1] = ((/* implicit */long long int) ((((((/* implicit */int) arr_8 [i_0] [i_0] [1LL])) <= (((/* implicit */int) arr_8 [i_0] [i_0] [i_1])))) ? (((/* implicit */int) max((arr_8 [i_0] [i_1] [i_1]), (arr_8 [i_0] [i_0] [i_0])))) : (((/* implicit */int) arr_8 [i_1] [i_0] [i_0]))));
            }
        } 
    } 
    var_30 = ((/* implicit */signed char) ((((int) (!(((/* implicit */_Bool) (unsigned short)45177))))) < (((/* implicit */int) (unsigned short)47232))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161681
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
    var_14 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-48))))) ? (((/* implicit */int) (unsigned char)48)) : (((var_10) ? (((/* implicit */int) (short)-27561)) : (((/* implicit */int) var_10)))))), (1653985361)));
    var_15 = ((/* implicit */unsigned long long int) var_3);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (signed char)0);
        var_16 *= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (signed char)42)))) ? (max((arr_0 [i_0 - 2] [i_0 - 3]), (((/* implicit */long long int) var_7)))) : (max((((((/* implicit */_Bool) arr_1 [i_0] [i_0 + 1])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_1))))), (((arr_0 [i_0 - 2] [i_0 - 2]) & (arr_0 [i_0] [0])))))));
        var_17 = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 - 2] [i_0 + 1])))))));
        var_18 = ((/* implicit */int) arr_0 [i_0] [i_0]);
    }
    for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) max((((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) arr_5 [i_1] [i_1])) : (((/* implicit */int) arr_6 [i_1])))), (((((/* implicit */int) arr_6 [i_1])) * (((/* implicit */int) arr_6 [i_1])))))))));
        var_20 = (-((((_Bool)1) ? ((+(((/* implicit */int) var_1)))) : (((/* implicit */int) arr_6 [i_1])))));
    }
    /* LoopNest 2 */
    for (short i_2 = 4; i_2 < 20; i_2 += 3) 
    {
        for (unsigned short i_3 = 0; i_3 < 21; i_3 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (int i_4 = 0; i_4 < 21; i_4 += 3) 
                {
                    var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2])) ? (((/* implicit */int) arr_9 [i_2])) : (((/* implicit */int) arr_9 [i_2])))))));
                    /* LoopSeq 2 */
                    for (int i_5 = 2; i_5 < 20; i_5 += 4) /* same iter space */
                    {
                        arr_16 [i_3] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 501649872))));
                        var_22 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_2] [i_5 + 1] [i_5])) ? (((14313396452409080695ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))));
                    }
                    /* vectorizable */
                    for (int i_6 = 2; i_6 < 20; i_6 += 4) /* same iter space */
                    {
                        arr_20 [i_2] [i_2] [12U] [i_2] [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-2702))) - ((+(arr_13 [i_2] [i_2] [5] [i_6 - 1])))));
                        var_23 ^= ((/* implicit */int) var_9);
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 21; i_7 += 1) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 4) 
                        {
                            {
                                var_24 += ((/* implicit */short) (!(var_10)));
                                var_25 = ((/* implicit */int) var_6);
                            }
                        } 
                    } 
                }
                for (unsigned short i_9 = 1; i_9 < 20; i_9 += 1) /* same iter space */
                {
                    var_26 ^= ((/* implicit */int) ((((/* implicit */_Bool) (short)20813)) && (((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))));
                    arr_30 [i_2] [i_3] [i_2] = ((/* implicit */long long int) max((((unsigned char) arr_13 [i_9 + 1] [i_2] [i_2 - 1] [i_2])), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_13 [i_9 + 1] [i_2] [i_2 - 4] [i_2])))))));
                    arr_31 [i_2] [i_3] [i_2] = ((((/* implicit */_Bool) ((unsigned int) (unsigned short)40756))) ? (((((/* implicit */_Bool) arr_9 [i_2])) ? (((/* implicit */int) arr_9 [i_2])) : (((/* implicit */int) arr_9 [i_2])))) : ((-(((/* implicit */int) var_1)))));
                    arr_32 [i_2 - 1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])) ? (-665920368) : (((/* implicit */int) ((1702761469) < (((/* implicit */int) var_7)))))));
                    var_27 = ((/* implicit */int) arr_24 [i_2] [i_3] [i_3] [i_2]);
                }
                for (unsigned short i_10 = 1; i_10 < 20; i_10 += 1) /* same iter space */
                {
                    var_28 = ((/* implicit */int) (unsigned short)25811);
                    var_29 = ((/* implicit */_Bool) arr_28 [i_2] [i_2] [i_10] [i_2 + 1]);
                }
                for (unsigned short i_11 = 1; i_11 < 20; i_11 += 1) /* same iter space */
                {
                    arr_37 [i_2] [i_2] [i_11 + 1] [i_2] = ((/* implicit */unsigned int) ((((arr_28 [i_2 - 3] [i_2] [i_11 - 1] [i_11 + 1]) & (arr_28 [i_2 - 4] [i_2] [i_11 + 1] [i_11 - 1]))) != ((+(arr_28 [i_2 - 4] [i_2] [i_11 - 1] [i_11 + 1])))));
                    /* LoopNest 2 */
                    for (signed char i_12 = 0; i_12 < 21; i_12 += 4) 
                    {
                        for (unsigned short i_13 = 0; i_13 < 21; i_13 += 4) 
                        {
                            {
                                var_30 = ((/* implicit */signed char) min((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) 0)) : (arr_7 [i_2])))), (-7296957596206490954LL)));
                                var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) min(((~(((/* implicit */int) arr_19 [i_2] [i_2] [i_2 + 1] [i_11] [i_11] [i_12])))), (((/* implicit */int) ((signed char) arr_19 [(_Bool)1] [(_Bool)1] [i_2 - 3] [10U] [i_3] [i_12]))))))));
                                var_32 = ((/* implicit */long long int) -1883278279);
                            }
                        } 
                    } 
                    var_33 = ((/* implicit */signed char) ((int) ((((((/* implicit */int) var_7)) == (-317103862))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_11]))) : (arr_35 [i_2] [i_3] [i_11]))));
                    arr_43 [i_2] [i_2] [i_2] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_35 [i_2] [(unsigned short)4] [i_2])) ? (((/* implicit */unsigned int) arr_21 [i_11 + 1] [i_2] [i_11 + 1])) : (((((/* implicit */_Bool) (unsigned char)243)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_11)))))), (((((/* implicit */_Bool) 0)) ? (((/* implicit */unsigned long long int) arr_10 [i_2])) : (17330721206099432630ULL)))));
                }
                var_34 = ((/* implicit */unsigned short) arr_23 [i_2] [(short)15] [(unsigned short)17] [(short)15] [(short)15] [i_3]);
                arr_44 [i_2] [i_2] = (+((~((-(((/* implicit */int) var_5)))))));
                arr_45 [i_2] [i_3] [i_2] = ((/* implicit */long long int) ((short) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)47372)) ? (-1899592286) : (((/* implicit */int) (signed char)-1))))));
                /* LoopSeq 3 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    var_35 *= ((/* implicit */unsigned char) var_10);
                    var_36 = ((/* implicit */signed char) var_0);
                }
                for (unsigned char i_15 = 0; i_15 < 21; i_15 += 1) 
                {
                    var_37 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_9 [8LL])))), (arr_18 [i_2] [17U] [i_2 - 2] [i_15])))) || (((((/* implicit */_Bool) (signed char)-51)) || (((/* implicit */_Bool) arr_40 [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_2 - 2] [13LL]))))));
                    arr_51 [i_2] = ((/* implicit */signed char) max(((+(((/* implicit */int) arr_12 [i_2] [i_2 - 4] [i_2])))), ((~(((/* implicit */int) arr_12 [i_15] [i_2 - 4] [i_2]))))));
                    arr_52 [15] [i_2] [i_2] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (+(((/* implicit */int) arr_24 [1ULL] [i_3] [i_3] [i_2]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_2] [i_2] [i_3] [i_15] [i_3] [i_2]))))) : (((((/* implicit */int) arr_42 [i_2] [i_2] [i_2])) & (((/* implicit */int) arr_49 [(unsigned short)14] [i_15] [i_2] [i_15]))))))));
                }
                /* vectorizable */
                for (unsigned short i_16 = 1; i_16 < 20; i_16 += 3) 
                {
                    arr_56 [i_2] [i_2] [i_2] [i_16] = ((int) 1348802719);
                    var_38 = ((/* implicit */unsigned int) (~(arr_47 [i_2] [i_2 - 4] [i_2] [i_2])));
                    var_39 = ((/* implicit */int) var_4);
                    var_40 = ((/* implicit */unsigned char) (~(4578147736392941352LL)));
                    var_41 ^= ((/* implicit */short) ((((/* implicit */int) arr_15 [i_2 - 2] [i_2 - 1] [(unsigned char)14] [i_2 - 1] [i_2 - 2])) | (((/* implicit */int) arr_15 [i_2 - 2] [i_2 - 2] [0ULL] [i_2 - 4] [i_2 - 4]))));
                }
            }
        } 
    } 
    var_42 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(-1911720054))))));
}

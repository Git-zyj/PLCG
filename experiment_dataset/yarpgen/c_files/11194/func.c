/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11194
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
    var_20 = var_0;
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        var_21 |= ((/* implicit */unsigned int) min((((/* implicit */long long int) ((_Bool) ((_Bool) var_1)))), (max((((long long int) arr_0 [(unsigned char)0])), (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_1 [i_0 - 1] [i_0])) : (((/* implicit */int) var_16)))))))));
        arr_2 [i_0] = (((-(((/* implicit */int) arr_0 [i_0])))) == (((/* implicit */int) max((arr_0 [i_0]), (((/* implicit */short) (_Bool)1))))));
        arr_3 [i_0] [i_0] = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_5) : (((/* implicit */int) arr_0 [i_0]))))) ? (min((((/* implicit */int) var_1)), (4194303))) : (((/* implicit */int) arr_0 [i_0])))), (((((/* implicit */_Bool) arr_1 [i_0] [i_0 - 1])) ? (((((/* implicit */int) var_16)) & (((/* implicit */int) arr_1 [19ULL] [(unsigned short)18])))) : (((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1])))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_22 = ((/* implicit */long long int) (unsigned char)163);
        /* LoopSeq 3 */
        for (unsigned short i_2 = 0; i_2 < 19; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (short i_3 = 0; i_3 < 19; i_3 += 1) 
            {
                for (int i_4 = 3; i_4 < 15; i_4 += 1) 
                {
                    {
                        arr_14 [i_4 + 3] [i_1] [i_1] [i_3] [i_1] [i_1] = (~(min((((/* implicit */long long int) (~(3782690367U)))), (((long long int) var_10)))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_5 = 1; i_5 < 16; i_5 += 1) 
                        {
                            arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (((_Bool)1) || (((/* implicit */_Bool) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) ^ (arr_11 [i_4] [i_3] [i_2] [i_1])))))));
                            var_23 += ((/* implicit */unsigned short) min((((/* implicit */int) ((short) arr_15 [i_3] [(_Bool)1] [i_4 + 4] [i_5 + 3] [i_5]))), ((((_Bool)1) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (short)19431))))));
                        }
                        var_24 = ((/* implicit */unsigned long long int) var_3);
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (long long int i_6 = 0; i_6 < 19; i_6 += 1) 
            {
                var_25 = ((/* implicit */long long int) min((min((min((((/* implicit */unsigned long long int) (unsigned char)183)), (1659914746184954050ULL))), (((/* implicit */unsigned long long int) var_13)))), (((/* implicit */unsigned long long int) (-(1585600986))))));
                var_26 = ((/* implicit */signed char) var_5);
                var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_9 [i_1])) : (((/* implicit */int) var_10))))), (min((((/* implicit */unsigned int) var_4)), (arr_4 [(_Bool)1] [i_6])))))) && (((((/* implicit */_Bool) arr_1 [i_1] [i_1])) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_20 [i_6] [i_1] [i_1])), (arr_5 [16U])))))))))));
                /* LoopSeq 2 */
                for (unsigned int i_7 = 2; i_7 < 18; i_7 += 1) 
                {
                    arr_24 [i_1] [i_1] [i_6] [i_6] = ((/* implicit */signed char) min((((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) < (((((/* implicit */int) var_12)) & (((/* implicit */int) arr_21 [i_2] [i_1] [(unsigned short)0] [i_2] [(unsigned short)3]))))))), (arr_22 [(unsigned short)9])));
                    var_28 = ((/* implicit */int) (+(((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (((unsigned int) var_15))))));
                    arr_25 [i_2] [i_1] = ((/* implicit */_Bool) min((min((((/* implicit */long long int) (_Bool)1)), (var_8))), (((/* implicit */long long int) arr_16 [i_1] [i_1] [i_1] [i_1] [i_1]))));
                }
                for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 1) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_9 = 0; i_9 < 19; i_9 += 1) 
                    {
                        arr_31 [i_1] [i_1] [i_1] [i_1] [i_9] = (-(min((((/* implicit */long long int) arr_4 [i_1] [i_2])), (arr_10 [i_1] [(unsigned short)14] [i_1]))));
                        var_29 = ((/* implicit */int) (-(min((min((arr_5 [i_1]), (((/* implicit */unsigned long long int) arr_20 [i_1] [i_1] [i_1])))), (((/* implicit */unsigned long long int) min((arr_26 [i_9]), (((/* implicit */unsigned char) (_Bool)1)))))))));
                    }
                    for (signed char i_10 = 1; i_10 < 15; i_10 += 1) 
                    {
                        var_30 ^= ((/* implicit */signed char) var_17);
                        var_31 = ((/* implicit */unsigned char) min((((/* implicit */long long int) max((((/* implicit */int) ((unsigned short) arr_7 [i_1] [i_1]))), (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) arr_7 [i_1] [i_1])) : (((/* implicit */int) var_18))))))), (min((((long long int) arr_1 [i_1] [i_6])), (((/* implicit */long long int) min((((/* implicit */unsigned char) arr_16 [i_10 + 1] [i_1] [i_1] [i_1] [i_1])), (var_0))))))));
                    }
                    arr_35 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))), ((~(arr_6 [i_8])))));
                    var_32 = ((/* implicit */long long int) 17075852063243929617ULL);
                    arr_36 [i_6] [i_1] [i_6] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_32 [7ULL] [i_6] [i_1] [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_1]))) : (((long long int) arr_0 [i_1])))) / (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) min((8715392121586587604ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))))));
                    var_33 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((unsigned short) arr_23 [i_1]))) ? (((/* implicit */long long int) ((/* implicit */int) min(((signed char)22), (((/* implicit */signed char) (_Bool)0)))))) : (((long long int) var_17)))), ((+(arr_32 [i_1] [i_1] [i_2] [i_6] [i_2])))));
                }
            }
            /* LoopSeq 1 */
            for (int i_11 = 0; i_11 < 19; i_11 += 1) 
            {
                arr_39 [i_1] [i_2] [i_1] = arr_11 [i_11] [i_2] [i_1] [i_1];
                var_34 = ((/* implicit */int) var_16);
                var_35 = ((/* implicit */unsigned short) min((min((arr_29 [i_1] [i_11] [i_11] [i_2] [i_2] [i_2] [i_2]), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) ((_Bool) (signed char)74)))));
                var_36 = ((/* implicit */int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_18))) > (min((((/* implicit */unsigned int) (_Bool)1)), (var_14))))))));
            }
            var_37 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_1] [i_1] [i_1] [i_1])) ? (min((((/* implicit */long long int) var_16)), (arr_27 [i_1] [i_1]))) : (arr_23 [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_2]))) : (((((/* implicit */_Bool) ((signed char) arr_26 [i_1]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_7)), (var_0))))) : (((((/* implicit */_Bool) arr_33 [i_1] [i_1] [i_1] [(unsigned short)13] [i_2])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))))))));
        }
        /* vectorizable */
        for (unsigned long long int i_12 = 4; i_12 < 18; i_12 += 1) /* same iter space */
        {
            var_38 = ((/* implicit */signed char) ((_Bool) arr_9 [i_12 - 3]));
            var_39 = ((/* implicit */_Bool) var_7);
            var_40 = ((/* implicit */int) var_14);
            var_41 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_12 + 1] [i_1] [i_12 + 1] [i_12 - 4] [i_12 - 1]))) / (var_14)));
        }
        /* vectorizable */
        for (unsigned long long int i_13 = 4; i_13 < 18; i_13 += 1) /* same iter space */
        {
            var_42 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_32 [i_1] [i_13] [i_1] [i_1] [i_13 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_32 [i_1] [(unsigned char)5] [i_13] [i_1] [i_13])))) : (3782690365U)));
            var_43 = ((/* implicit */short) ((((/* implicit */_Bool) arr_26 [i_13 + 1])) ? (arr_6 [i_13 - 3]) : (arr_6 [i_13 + 1])));
            var_44 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 9343379818600104756ULL)) ? (((/* implicit */int) (short)32767)) : (arr_8 [i_13 - 4] [(_Bool)1])));
        }
        arr_44 [i_1] = ((/* implicit */unsigned long long int) ((int) ((long long int) (~(var_14)))));
    }
    var_45 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) var_9)) ? (var_19) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))))));
    var_46 = ((/* implicit */int) var_17);
}

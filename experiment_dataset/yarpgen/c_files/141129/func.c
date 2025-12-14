/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141129
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
    var_20 = ((/* implicit */signed char) max((((((/* implicit */_Bool) (-(0LL)))) ? (((/* implicit */int) var_13)) : (((((/* implicit */int) (unsigned short)9015)) | (((/* implicit */int) (unsigned short)9036)))))), (1571456720)));
    var_21 = ((/* implicit */_Bool) (~(max((var_14), (((/* implicit */unsigned int) (unsigned short)9008))))));
    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) var_17))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_23 = ((/* implicit */short) arr_0 [i_0]);
        /* LoopSeq 3 */
        for (long long int i_1 = 4; i_1 < 13; i_1 += 1) /* same iter space */
        {
            var_24 = ((/* implicit */long long int) ((((((/* implicit */int) (short)25700)) & (((/* implicit */int) (unsigned char)8)))) | (((/* implicit */int) max((((/* implicit */unsigned short) ((-9223372036854775791LL) <= (((/* implicit */long long int) ((/* implicit */int) arr_1 [8])))))), ((unsigned short)9015))))));
            var_25 = var_8;
            var_26 = ((/* implicit */signed char) (short)2);
            var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) (~(arr_2 [i_1 + 1])))))))));
        }
        for (long long int i_2 = 4; i_2 < 13; i_2 += 1) /* same iter space */
        {
            var_28 = ((/* implicit */signed char) max(((-(var_14))), (((/* implicit */unsigned int) var_16))));
            arr_10 [i_0] [i_2] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_13), (((/* implicit */unsigned short) var_0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) ((unsigned char) arr_0 [(unsigned char)6]))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(short)1]))) : (2218567533U)))));
            arr_11 [i_0] [i_2] = ((/* implicit */short) var_10);
            /* LoopSeq 2 */
            for (unsigned int i_3 = 2; i_3 < 11; i_3 += 2) 
            {
                arr_14 [i_2] = ((/* implicit */unsigned int) (((-(((var_0) ? (((/* implicit */int) (unsigned short)9009)) : (((/* implicit */int) var_16)))))) - ((~(((/* implicit */int) max((arr_6 [i_2]), (((/* implicit */unsigned char) (signed char)0)))))))));
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (short i_5 = 0; i_5 < 14; i_5 += 2) 
                    {
                        {
                            var_29 &= ((/* implicit */signed char) var_7);
                            var_30 = min((((arr_4 [i_2 - 1]) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)56486))))), (((/* implicit */long long int) (~(((/* implicit */int) (short)-25716))))));
                            var_31 = ((/* implicit */_Bool) ((unsigned long long int) (unsigned short)56478));
                        }
                    } 
                } 
            }
            for (int i_6 = 0; i_6 < 14; i_6 += 1) 
            {
                var_32 = ((/* implicit */short) (+(((/* implicit */int) (short)16704))));
                var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65534)) >> (((min((2076399762U), (2076399770U))) - (2076399737U)))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) (signed char)22))))))) : ((+(((/* implicit */int) arr_6 [i_2]))))));
                arr_22 [i_2] = ((/* implicit */unsigned int) var_8);
                arr_23 [i_2] [i_2 - 1] [i_2] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_13 [(signed char)8] [i_2] [i_2] [i_2]))) - (var_4)))))) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)9036)) % (((((((/* implicit */int) var_6)) + (2147483647))) >> (((((/* implicit */int) (short)-32675)) + (32677))))))))));
                var_34 = ((/* implicit */unsigned int) (((!(((((/* implicit */int) (unsigned char)89)) > (var_19))))) ? (min((((/* implicit */unsigned long long int) min((((/* implicit */short) var_16)), ((short)25713)))), (((((/* implicit */unsigned long long int) 2218567526U)) / (var_18))))) : (((/* implicit */unsigned long long int) 2682285053U))));
            }
            var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)56479)) ? (((/* implicit */int) (short)-4096)) : (((/* implicit */int) (unsigned short)9040))));
        }
        for (long long int i_7 = 4; i_7 < 13; i_7 += 1) /* same iter space */
        {
            arr_27 [i_7] [i_7] = ((((/* implicit */_Bool) max((((/* implicit */int) min((((/* implicit */unsigned short) var_6)), (arr_0 [i_7])))), (((((/* implicit */_Bool) arr_0 [i_7 - 3])) ? (((/* implicit */int) arr_1 [(short)7])) : (((/* implicit */int) (unsigned short)56473))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((min((2987064921U), (((/* implicit */unsigned int) var_16)))) != (((/* implicit */unsigned int) ((/* implicit */int) max((arr_3 [i_0]), (((/* implicit */unsigned short) var_6)))))))))) : (min((((/* implicit */long long int) ((unsigned int) (unsigned short)56520))), (((-1LL) - (((/* implicit */long long int) arr_7 [i_7] [i_7 - 4] [i_7])))))));
            /* LoopSeq 1 */
            for (unsigned short i_8 = 1; i_8 < 13; i_8 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_9 = 0; i_9 < 14; i_9 += 1) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        arr_38 [i_7 - 2] [i_9] [i_0] [i_8] [6U] &= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) -1413844566)), (arr_32 [i_8 + 1] [i_8 + 1] [i_8] [i_8] [i_8 + 1])));
                        var_36 = ((/* implicit */int) arr_24 [i_7] [i_7 + 1] [i_8]);
                        var_37 = ((/* implicit */short) (~(max((((/* implicit */int) min((((/* implicit */signed char) arr_18 [i_7] [i_7] [i_7 - 1] [i_7 + 1] [i_7] [i_7 - 3] [i_7])), (var_5)))), (min((var_3), (((/* implicit */int) (unsigned short)65535))))))));
                    }
                    var_38 *= ((/* implicit */signed char) min((((/* implicit */unsigned int) arr_20 [i_8 - 1] [i_8 + 1])), ((-(2076399753U)))));
                    arr_39 [i_7] [i_7 - 4] [i_7] [i_7] [i_7] [i_7 - 1] = ((/* implicit */unsigned char) max(((unsigned short)56495), (((/* implicit */unsigned short) (_Bool)0))));
                }
                var_39 = ((/* implicit */int) (_Bool)1);
                arr_40 [i_7] [i_7 - 4] [i_8] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)0))));
                var_40 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) min((((/* implicit */long long int) var_11)), (var_4)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_18 [i_8 + 1] [i_8 + 1] [i_8] [(short)7] [i_8] [(short)4] [i_8 + 1]))))));
            }
        }
    }
    /* vectorizable */
    for (short i_11 = 0; i_11 < 13; i_11 += 3) 
    {
        /* LoopNest 3 */
        for (long long int i_12 = 0; i_12 < 13; i_12 += 4) 
        {
            for (int i_13 = 0; i_13 < 13; i_13 += 2) 
            {
                for (unsigned long long int i_14 = 0; i_14 < 13; i_14 += 2) 
                {
                    {
                        arr_49 [i_12] [0LL] [i_12] [i_12] [i_12] [i_12] = ((/* implicit */unsigned short) ((int) (unsigned short)56479));
                        /* LoopSeq 1 */
                        for (unsigned char i_15 = 0; i_15 < 13; i_15 += 1) 
                        {
                            var_41 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2076399774U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_15]))) : (var_12)));
                            var_42 = ((/* implicit */signed char) min((var_42), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) (unsigned short)9040))) ? (1023) : ((-(((/* implicit */int) (signed char)68)))))))));
                        }
                    }
                } 
            } 
        } 
        arr_52 [i_11] = ((/* implicit */unsigned short) arr_46 [i_11] [i_11]);
    }
    for (short i_16 = 0; i_16 < 13; i_16 += 1) 
    {
        var_43 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned short)9038)))) ? (((((/* implicit */_Bool) var_19)) ? (2076399774U) : (((/* implicit */unsigned int) var_19)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)-25723)) != (((/* implicit */int) (short)25723))))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) min((var_3), (((/* implicit */int) var_0))))) || (((/* implicit */_Bool) arr_55 [i_16]))))) : ((-(((/* implicit */int) var_9))))));
        arr_57 [i_16] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) var_16)), ((short)32669))))) > ((+(var_14)))))) < (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_43 [i_16]), (var_6)))))))));
    }
    var_44 = ((/* implicit */signed char) 2218567533U);
}

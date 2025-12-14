/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17749
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_19 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) var_10))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 4439267541175164034ULL)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0]))))) : ((~(((long long int) 4439267541175164033ULL))))));
        var_20 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (+(854153845)))) ? (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4528))) : (900232504U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0])))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_4 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 4439267541175164015ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)20728))));
        /* LoopSeq 4 */
        for (signed char i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            /* LoopSeq 2 */
            for (int i_3 = 1; i_3 < 9; i_3 += 2) 
            {
                arr_11 [i_1] [i_2] [i_3] = ((/* implicit */int) (((-9223372036854775807LL - 1LL)) & (((/* implicit */long long int) ((((/* implicit */_Bool) (-(12043677392263320705ULL)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-123)))))));
                arr_12 [i_1] [i_1] [i_1] = ((/* implicit */int) var_12);
                var_21 = ((/* implicit */unsigned int) max((((/* implicit */int) max((((/* implicit */short) var_12)), (arr_2 [i_3 + 1])))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_7 [i_3] [i_2] [i_3 - 1] [i_3])) : (-854153846)))));
            }
            /* vectorizable */
            for (unsigned short i_4 = 0; i_4 < 10; i_4 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_5 = 1; i_5 < 6; i_5 += 1) 
                {
                    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((_Bool) (_Bool)1)) ? (((/* implicit */int) (short)11521)) : (var_13))))));
                    arr_19 [i_4] [i_2] [i_4] [i_2] = (!(arr_0 [i_5 + 3]));
                    var_23 = ((/* implicit */long long int) (-(((/* implicit */int) arr_17 [i_1] [i_4] [i_5 + 1] [i_5] [i_5] [i_5]))));
                }
                for (short i_6 = 3; i_6 < 8; i_6 += 1) 
                {
                    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [i_1] [i_2] [i_4] [i_6 + 1] [i_6 - 2] [i_6 + 1])) ? (((/* implicit */int) (short)11550)) : (arr_9 [i_6 - 3] [i_2] [i_4] [(short)8])));
                    arr_22 [i_1] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1] [i_1])) ? ((-2147483647 - 1)) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) (_Bool)1)) : ((+(((/* implicit */int) var_6))))));
                }
                var_25 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_20 [i_4] [i_4] [i_2] [i_1] [i_1]))));
            }
            var_26 = ((/* implicit */unsigned short) min((((long long int) arr_20 [i_1] [i_1] [i_1] [i_2] [i_2])), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-11562))))) ? (((/* implicit */int) min((arr_8 [i_1] [i_1] [i_2]), ((short)14581)))) : (((/* implicit */int) arr_15 [i_2] [i_2] [i_1])))))));
        }
        for (short i_7 = 2; i_7 < 8; i_7 += 1) 
        {
            var_27 *= ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) -854153838))))) % (var_13)));
            arr_26 [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_8 [i_7 + 2] [i_7 + 2] [i_7 - 2]))))) || (((/* implicit */_Bool) (~(6773151559118511811LL))))));
            arr_27 [i_7] [i_7] [i_1] = ((/* implicit */int) ((((arr_16 [i_7 + 1] [i_7 - 1] [i_7 + 2]) - (arr_16 [i_7 + 1] [i_7] [i_7]))) & (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_7 - 1] [i_7] [i_7]))))))));
        }
        for (unsigned long long int i_8 = 2; i_8 < 9; i_8 += 3) 
        {
            var_28 |= ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)2016)) <= (((/* implicit */int) (unsigned short)2016))));
            var_29 = (((((-((+(((/* implicit */int) (unsigned short)2002)))))) + (2147483647))) >> (((arr_14 [i_1] [i_8]) - (33077422))));
            var_30 ^= ((/* implicit */unsigned int) (+(((/* implicit */int) (short)-11550))));
            var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) (+(((((unsigned long long int) 14328733177863399383ULL)) >> (((min((var_13), (((/* implicit */int) (unsigned short)49152)))) - (49100))))))))));
        }
        /* vectorizable */
        for (unsigned int i_9 = 0; i_9 < 10; i_9 += 2) 
        {
            arr_32 [i_1] [i_9] [i_9] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_15)) ? (2957944909U) : (2957944909U))) - ((-(arr_18 [i_1] [i_1] [i_1] [i_1] [i_9])))));
            /* LoopSeq 2 */
            for (long long int i_10 = 0; i_10 < 10; i_10 += 2) 
            {
                var_32 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)11557))));
                var_33 = ((/* implicit */unsigned short) ((signed char) arr_2 [i_1]));
                arr_36 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) ((arr_10 [i_10] [i_1]) >= (arr_10 [i_9] [i_10])));
            }
            for (int i_11 = 1; i_11 < 9; i_11 += 1) 
            {
                var_34 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)90))));
                var_35 = ((/* implicit */long long int) (+(2192419670U)));
                var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) var_16)) - (60880)))))) % ((~(arr_3 [i_1]))))))));
                var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_11 - 1] [i_11 - 1] [i_11 + 1] [i_11 - 1] [i_11 - 1] [i_11 + 1])) ? (((/* implicit */long long int) arr_21 [i_11 - 1] [i_11 - 1] [i_11 + 1] [i_11 - 1] [i_11 - 1] [i_11 + 1])) : (-9223372036854775798LL))))));
                var_38 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) 2957944932U)) && (((/* implicit */_Bool) (short)11009))))) | (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)90)))))));
            }
            arr_40 [i_1] |= ((/* implicit */long long int) ((unsigned short) arr_2 [i_1]));
            arr_41 [i_1] [i_9] |= ((/* implicit */_Bool) ((8832205563871848932LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2018)))));
            var_39 = ((/* implicit */_Bool) ((((unsigned int) arr_37 [i_1] [i_1] [i_1] [i_9])) * (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_9])))));
        }
        /* LoopNest 2 */
        for (long long int i_12 = 2; i_12 < 9; i_12 += 1) 
        {
            for (unsigned int i_13 = 0; i_13 < 10; i_13 += 3) 
            {
                {
                    arr_47 [i_12] [i_12] = ((((/* implicit */unsigned int) (+((~(((/* implicit */int) var_10))))))) != ((((!(((/* implicit */_Bool) var_2)))) ? ((+(2957944947U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-40)))))))));
                    var_40 = ((/* implicit */short) min((var_40), (((/* implicit */short) (!(((/* implicit */_Bool) ((arr_18 [i_12] [i_12] [i_12] [i_12 + 1] [i_12]) / (arr_18 [i_12] [i_12] [(_Bool)1] [i_12 + 1] [i_12])))))))));
                }
            } 
        } 
    }
    for (unsigned short i_14 = 1; i_14 < 11; i_14 += 1) 
    {
        arr_50 [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_14 + 1] [i_14 - 1])) ? (((/* implicit */int) arr_1 [i_14] [i_14 - 1])) : (((/* implicit */int) arr_49 [i_14 - 1]))))) ? (((/* implicit */unsigned long long int) ((-854153846) | (((/* implicit */int) arr_0 [i_14 - 1]))))) : (((unsigned long long int) min((((/* implicit */long long int) arr_0 [i_14])), (4161536LL))))));
        var_41 = ((/* implicit */signed char) min((((((/* implicit */int) (signed char)115)) * (((/* implicit */int) (unsigned short)17518)))), (((/* implicit */int) max((var_16), (var_18))))));
        var_42 = ((/* implicit */unsigned int) min((var_42), (((/* implicit */unsigned int) ((long long int) ((((((/* implicit */_Bool) arr_49 [i_14 - 1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4)))) > ((-(((/* implicit */int) var_10))))))))));
        arr_51 [i_14] = ((/* implicit */_Bool) -854153850);
    }
    var_43 = ((/* implicit */long long int) ((_Bool) var_16));
    var_44 = ((/* implicit */long long int) var_16);
    var_45 = ((/* implicit */unsigned short) (+(((((12345627362229324734ULL) * (((/* implicit */unsigned long long int) var_17)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4836)))))));
    var_46 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (signed char)-99)), (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 2102547620U)) ? (((/* implicit */int) var_11)) : (var_2)))), (var_17)))));
}

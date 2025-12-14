/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161429
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
    for (long long int i_0 = 1; i_0 < 14; i_0 += 2) /* same iter space */
    {
        var_14 = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_0 [i_0 + 1] [i_0]), (((/* implicit */unsigned short) var_7))))) ? (((((/* implicit */_Bool) ((unsigned int) var_3))) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_0)))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) var_4))))), (((short) var_7))))))));
        arr_2 [i_0] = max((((/* implicit */long long int) ((unsigned short) arr_0 [i_0 + 2] [i_0 + 2]))), ((((!(((/* implicit */_Bool) var_7)))) ? (((((/* implicit */_Bool) var_11)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (max((((/* implicit */long long int) var_8)), (var_0))))));
        var_15 *= ((/* implicit */unsigned char) ((((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)73)) ? (((/* implicit */int) (signed char)73)) : (1027047240)))), (arr_1 [i_0])))) + (((var_11) + ((+(var_0)))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            var_16 *= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (short)-14313)) ? (((/* implicit */unsigned long long int) 1830107623U)) : (8490047266493031730ULL)))));
            var_17 &= ((/* implicit */unsigned long long int) min(((+(((((/* implicit */_Bool) 0U)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_9))))), (((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (var_13) : (var_2)))))));
            var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_0 [i_0] [i_1])), (arr_3 [i_0 + 1])))))))));
        }
    }
    for (long long int i_2 = 1; i_2 < 14; i_2 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_3 = 1; i_3 < 13; i_3 += 3) 
        {
            var_19 = ((/* implicit */short) arr_3 [i_2]);
            arr_9 [i_2] [i_3] = ((/* implicit */signed char) (-(((/* implicit */int) ((((var_2) / (var_0))) != (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2] [i_3]))) % (-5298845216019746980LL))))))));
        }
        var_20 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(max((((/* implicit */int) (short)31)), (-1991644783)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((((/* implicit */_Bool) arr_1 [i_2])) || (var_10))))))) : (1071188693U)));
        var_21 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_0) - (((/* implicit */long long int) (+(var_8))))))) ? (((/* implicit */long long int) (+((+(((/* implicit */int) var_12))))))) : (var_0)));
        var_22 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((arr_1 [i_2]) + (((/* implicit */unsigned int) var_3))))), ((+(arr_3 [i_2 + 1])))));
        arr_10 [i_2] [i_2] = ((/* implicit */long long int) max((((((/* implicit */_Bool) var_5)) ? (arr_1 [i_2 + 3]) : (arr_6 [i_2 + 2]))), (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))));
    }
    /* vectorizable */
    for (short i_4 = 2; i_4 < 16; i_4 += 2) 
    {
        var_23 = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) / (var_5)))) ? (((/* implicit */long long int) var_5)) : (((((/* implicit */_Bool) arr_12 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_11 [i_4]))));
        var_24 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_4]))) / (var_8))) < ((-(var_5)))));
        /* LoopSeq 1 */
        for (long long int i_5 = 0; i_5 < 20; i_5 += 4) 
        {
            var_25 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) 2637450503808166948LL)) ? (var_0) : (var_11))));
            var_26 = (((~(((/* implicit */int) var_7)))) & ((~(((/* implicit */int) var_7)))));
        }
    }
    /* LoopSeq 1 */
    for (long long int i_6 = 3; i_6 < 10; i_6 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_7 = 0; i_7 < 11; i_7 += 3) 
        {
            var_27 = ((/* implicit */unsigned char) (~(-9223372036854775790LL)));
            /* LoopNest 3 */
            for (signed char i_8 = 0; i_8 < 11; i_8 += 2) 
            {
                for (unsigned long long int i_9 = 1; i_9 < 10; i_9 += 1) 
                {
                    for (unsigned int i_10 = 3; i_10 < 7; i_10 += 1) 
                    {
                        {
                            var_28 &= ((/* implicit */unsigned char) arr_4 [i_6 - 2] [i_9 - 1]);
                            var_29 = ((/* implicit */unsigned int) var_9);
                            var_30 = ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_13 [i_6])))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_22 [i_6] [i_10 - 2] [i_10])));
                            arr_29 [i_8] [i_6] [i_8] [i_9] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? ((+(var_2))) : (((/* implicit */long long int) (+(((/* implicit */int) var_7)))))));
                            var_31 &= ((/* implicit */short) (!(((/* implicit */_Bool) var_3))));
                        }
                    } 
                } 
            } 
            var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_6 - 3] [i_6 - 3] [i_6])) ? (arr_15 [i_7] [i_6 - 3] [18LL]) : (var_8)));
        }
        for (signed char i_11 = 0; i_11 < 11; i_11 += 3) 
        {
            var_33 ^= ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) : (var_4))) / (((/* implicit */unsigned int) arr_16 [i_6] [i_11])));
            var_34 *= ((/* implicit */short) ((min((min((((/* implicit */unsigned int) var_3)), (arr_6 [i_6]))), (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) / (((/* implicit */int) arr_0 [i_6] [i_11]))))))) > (((/* implicit */unsigned int) var_3))));
            var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)73)))))));
        }
        arr_32 [i_6] = min((((/* implicit */long long int) var_6)), (((((/* implicit */_Bool) (~(9U)))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_6))))) : (var_0))));
        var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) var_6))));
        var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_28 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]), (arr_8 [i_6 - 1] [i_6 - 1])))) ? ((+(((/* implicit */int) arr_28 [i_6] [i_6] [9U] [i_6] [i_6] [i_6] [i_6])))) : (((((/* implicit */_Bool) arr_21 [i_6] [i_6 - 1] [i_6])) ? (((/* implicit */int) arr_8 [i_6] [i_6])) : (arr_21 [i_6 - 3] [i_6] [i_6 - 3])))));
        /* LoopSeq 3 */
        for (short i_12 = 0; i_12 < 11; i_12 += 2) 
        {
            var_38 = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (signed char)-73))))));
            /* LoopNest 3 */
            for (unsigned long long int i_13 = 1; i_13 < 8; i_13 += 3) 
            {
                for (long long int i_14 = 0; i_14 < 11; i_14 += 1) 
                {
                    for (short i_15 = 0; i_15 < 11; i_15 += 4) 
                    {
                        {
                            var_39 += ((/* implicit */unsigned short) max((((/* implicit */int) var_12)), ((-(((/* implicit */int) ((arr_17 [i_15] [i_15]) != (var_0))))))));
                            var_40 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3621863247911842349ULL)) ? (((/* implicit */int) (unsigned char)113)) : (((/* implicit */int) (unsigned short)15))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)84)))))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (short i_16 = 0; i_16 < 11; i_16 += 2) /* same iter space */
        {
            arr_47 [i_6] [i_6] [i_16] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_13 [i_16]))));
            arr_48 [i_6] [i_6] = ((/* implicit */unsigned short) ((signed char) (-(((/* implicit */int) var_1)))));
            arr_49 [i_6] [i_6] [(_Bool)1] = ((/* implicit */unsigned int) var_10);
            arr_50 [i_16] [i_6] [i_6] &= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_6 + 1]))));
            arr_51 [i_6] = ((/* implicit */_Bool) var_1);
        }
        for (short i_17 = 0; i_17 < 11; i_17 += 2) /* same iter space */
        {
            arr_56 [i_6] [i_6] [i_6] = ((/* implicit */int) (((((-(var_4))) + (var_4))) / (((/* implicit */unsigned int) (-(((/* implicit */int) var_1)))))));
            var_41 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) min((4294967274U), (2313033862U)))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (-8112744099948513358LL) : (((/* implicit */long long int) var_3))))))));
            arr_57 [i_6] = ((/* implicit */unsigned long long int) var_5);
            var_42 = ((/* implicit */unsigned short) var_0);
        }
    }
    /* LoopNest 3 */
    for (unsigned int i_18 = 1; i_18 < 21; i_18 += 4) 
    {
        for (unsigned char i_19 = 0; i_19 < 22; i_19 += 2) 
        {
            for (unsigned int i_20 = 0; i_20 < 22; i_20 += 2) 
            {
                {
                    var_43 = ((/* implicit */long long int) min((var_43), (((((/* implicit */_Bool) ((((/* implicit */long long int) (-(((/* implicit */int) (signed char)-74))))) + (var_9)))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) (short)20014)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) : (((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))))))));
                    arr_68 [i_18] [i_18] [i_18] [i_18] = ((/* implicit */signed char) ((((/* implicit */long long int) (~((~(var_5)))))) & (((((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) arr_65 [5LL] [5LL] [i_18]))) : (var_2))) ^ (((/* implicit */long long int) var_8))))));
                }
            } 
        } 
    } 
    var_44 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (~(var_3)))), (var_8)))) ? ((-(((var_0) & (((/* implicit */long long int) var_3)))))) : (var_0)));
}

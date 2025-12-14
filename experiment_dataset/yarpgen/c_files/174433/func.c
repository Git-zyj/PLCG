/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174433
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
    var_19 = var_7;
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 13; i_0 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned int) min((((arr_1 [i_0] [i_0]) < (arr_1 [i_0] [i_0]))), ((!(((/* implicit */_Bool) ((unsigned char) var_7)))))));
        var_21 = ((/* implicit */unsigned int) (~(((((var_10) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)196))))) ? (arr_1 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))))));
        var_22 = (~(arr_1 [i_0] [i_0]));
    }
    for (short i_1 = 0; i_1 < 13; i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned int i_2 = 1; i_2 < 10; i_2 += 3) 
        {
            for (short i_3 = 3; i_3 < 10; i_3 += 4) 
            {
                for (unsigned int i_4 = 0; i_4 < 13; i_4 += 1) 
                {
                    {
                        var_23 = ((/* implicit */unsigned char) (signed char)117);
                        var_24 = ((/* implicit */unsigned short) var_4);
                        var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(min((arr_1 [i_1] [i_1]), (((/* implicit */long long int) (unsigned char)59))))))))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned char i_5 = 1; i_5 < 12; i_5 += 2) 
        {
            var_26 |= ((/* implicit */unsigned char) ((long long int) var_8));
            var_27 = ((/* implicit */short) ((2022038974) >> (((((/* implicit */int) (short)128)) - (118)))));
            var_28 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_5 - 1])) ? (((/* implicit */int) arr_11 [i_5 - 1])) : (((/* implicit */int) (unsigned char)209))))) ? ((+(((/* implicit */int) (unsigned char)107)))) : (((/* implicit */int) var_15))));
            var_29 = ((/* implicit */unsigned char) ((min((arr_10 [i_5 + 1] [i_5 - 1] [i_5 + 1] [i_5 - 1]), (arr_10 [i_5 + 1] [(unsigned char)2] [(unsigned char)2] [i_5 - 1]))) > (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_1])))));
        }
    }
    for (short i_6 = 0; i_6 < 13; i_6 += 1) /* same iter space */
    {
        var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_11 [i_6])), (max((((/* implicit */long long int) var_6)), (var_13)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_6] [i_6]))) < (max((((/* implicit */unsigned int) arr_4 [i_6] [i_6])), (arr_10 [i_6] [i_6] [i_6] [i_6]))))))) : (max((((/* implicit */unsigned long long int) max((arr_16 [i_6]), (((/* implicit */long long int) arr_12 [i_6] [i_6] [i_6]))))), ((~(6482506232378716149ULL)))))));
        /* LoopSeq 4 */
        for (unsigned short i_7 = 0; i_7 < 13; i_7 += 1) 
        {
            var_31 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) / (var_7)))) ? (((((/* implicit */_Bool) arr_11 [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_18))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_6] [i_7]))))), (((/* implicit */unsigned int) ((((/* implicit */int) var_12)) >> (((((/* implicit */int) var_1)) - (19158))))))));
            var_32 = ((/* implicit */unsigned long long int) min((var_32), (max((arr_0 [(short)2]), (((/* implicit */unsigned long long int) min((((-6002733491946383595LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65534))))), (((/* implicit */long long int) 2022038973)))))))));
        }
        for (long long int i_8 = 0; i_8 < 13; i_8 += 3) /* same iter space */
        {
            var_33 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) ((16777212U) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)15)))))) || (((/* implicit */_Bool) -2022038951)))));
            /* LoopSeq 1 */
            for (unsigned short i_9 = 0; i_9 < 13; i_9 += 4) 
            {
                var_34 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_16))) / (max((((/* implicit */long long int) var_7)), (arr_1 [i_6] [i_6])))));
                var_35 = ((/* implicit */int) ((((/* implicit */_Bool) max((4307775795950941320LL), (((/* implicit */long long int) (unsigned char)80))))) ? (((((var_17) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_13 [i_6] [i_8] [i_8] [i_9] [i_9])) - (17853))))) : (((/* implicit */long long int) ((/* implicit */int) ((short) arr_13 [i_8] [i_8] [i_8] [i_6] [i_6]))))));
                var_36 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6002733491946383597LL)) ? (((/* implicit */unsigned long long int) 4294967285U)) : (18446744073709551615ULL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((arr_27 [i_9] [i_9]) & (((/* implicit */unsigned long long int) arr_5 [i_6]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_6] [i_6] [1LL])) ? (((/* implicit */unsigned long long int) var_6)) : (arr_0 [i_9]))))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((var_17) <= (var_17))))) == (754510248074700923LL))))));
            }
        }
        for (long long int i_10 = 0; i_10 < 13; i_10 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_11 = 2; i_11 < 10; i_11 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_12 = 3; i_12 < 11; i_12 += 4) 
                {
                    for (short i_13 = 0; i_13 < 13; i_13 += 4) 
                    {
                        {
                            var_37 = ((/* implicit */unsigned char) arr_22 [i_10] [i_10]);
                            var_38 += max((max((var_17), (((/* implicit */long long int) var_12)))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)29016)) / (((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (unsigned short)22051)) - (22023)))))))));
                            var_39 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_13)) ? (arr_0 [i_6]) : (((/* implicit */unsigned long long int) arr_39 [i_6] [i_6] [i_11 - 1] [i_12] [i_11 - 1] [i_12] [i_13])))) << (((/* implicit */int) ((short) var_16))))) + (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) arr_38 [i_6] [i_6] [i_11 + 3] [i_11 + 3] [i_11 + 3]))))))));
                            var_40 = ((/* implicit */_Bool) ((max((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned short)65521)))), (((/* implicit */int) max((((/* implicit */unsigned short) var_9)), (var_2)))))) << (((((/* implicit */int) arr_21 [i_12 - 3] [i_11 - 1])) - (491)))));
                            var_41 &= ((/* implicit */long long int) (unsigned short)22433);
                        }
                    } 
                } 
                var_42 = ((/* implicit */short) ((((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_11 + 1] [i_11 + 3]))))) + (((arr_14 [i_6] [i_10]) / (((/* implicit */long long int) (~(((/* implicit */int) var_2)))))))));
            }
            var_43 = (~(((/* implicit */int) ((unsigned char) (~(((/* implicit */int) (unsigned short)62397)))))));
            var_44 |= ((/* implicit */unsigned int) max((1125762467889152LL), (((/* implicit */long long int) (unsigned char)150))));
        }
        for (long long int i_14 = 0; i_14 < 13; i_14 += 3) /* same iter space */
        {
            var_45 = max((((/* implicit */int) (unsigned short)22051)), ((~((+(((/* implicit */int) arr_11 [i_14])))))));
            var_46 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_6] [i_6] [i_14]))) : (var_18))) <= (var_10))))));
            var_47 = ((/* implicit */unsigned int) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_6] [(unsigned short)5]))) != (((arr_10 [i_6] [i_6] [i_6] [(_Bool)1]) / (var_18))))));
            var_48 = ((/* implicit */unsigned long long int) max((var_48), (((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)255))) / (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_6] [i_14]))) : (11729525662421384885ULL))))) | (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned short)30691)), (-7056070178741446058LL))))))));
        }
    }
    var_49 -= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) >> (((((((((/* implicit */int) (signed char)-23)) + (2147483647))) >> (((var_17) + (6803047520538922096LL))))) - (524287)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (((((var_10) & (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))));
    var_50 = ((/* implicit */long long int) var_7);
}

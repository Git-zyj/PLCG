/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169058
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
    for (unsigned char i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        var_10 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) var_8)) > (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))))))));
        arr_2 [i_0 + 3] [i_0 + 3] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) * (var_4)))) ? ((~(((/* implicit */int) var_2)))) : (((/* implicit */int) arr_0 [i_0]))))));
        var_11 = (!(((/* implicit */_Bool) ((var_5) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) (_Bool)1))))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 10; i_1 += 2) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [i_1 + 1])) == (((((/* implicit */_Bool) arr_4 [i_1 - 1])) ? (((/* implicit */int) arr_4 [i_1 - 2])) : (((/* implicit */int) (short)17120)))))))));
        var_13 ^= ((/* implicit */unsigned short) arr_1 [i_1]);
        var_14 = (+(((/* implicit */int) max((((/* implicit */unsigned char) arr_0 [i_1 - 2])), (arr_3 [i_1 - 1])))));
    }
    for (unsigned long long int i_2 = 2; i_2 < 10; i_2 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 2; i_4 < 10; i_4 += 4) 
            {
                for (unsigned char i_5 = 3; i_5 < 8; i_5 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_6 = 0; i_6 < 11; i_6 += 1) 
                        {
                            var_15 = ((/* implicit */signed char) ((unsigned char) (-(((/* implicit */int) arr_18 [9ULL] [9ULL] [i_6] [i_5 - 2] [2U])))));
                            var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2]))) * (var_9))) == (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))))) % (((/* implicit */int) (!(((((/* implicit */_Bool) (unsigned short)65132)) && ((_Bool)0))))))));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 11; i_7 += 1) 
                        {
                            arr_23 [i_2 + 1] [i_5] [i_2 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (signed char)-48)) : (((/* implicit */int) (unsigned char)123))))) ? (((/* implicit */int) arr_12 [i_2] [i_2] [i_2 - 1] [i_2])) : ((~(((/* implicit */int) (unsigned short)56650))))));
                            var_17 = ((/* implicit */signed char) arr_22 [(unsigned char)0] [i_5] [i_4] [i_5] [i_7] [i_2] [i_3]);
                        }
                        /* vectorizable */
                        for (unsigned long long int i_8 = 2; i_8 < 10; i_8 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)192)) * (((/* implicit */int) (unsigned short)41446))))) ? (((arr_7 [i_2] [i_3]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24080))) : (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) arr_5 [i_2] [i_5 - 3]))));
                            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */int) (signed char)-71)) : (((/* implicit */int) (signed char)-48))))) ? (((/* implicit */int) arr_9 [i_2 - 1] [i_2 - 1])) : ((-(((/* implicit */int) (unsigned char)247))))));
                            arr_27 [i_2] [i_2] [i_5] [i_5] [i_8 - 2] [i_2] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_5))));
                        }
                        var_20 = ((/* implicit */short) max(((-(((/* implicit */int) (signed char)70)))), (((/* implicit */int) max((arr_19 [i_2] [i_3] [i_2 + 1] [i_5] [i_4 + 1]), (arr_19 [i_4] [i_3] [i_2 + 1] [i_5] [i_4 + 1]))))));
                        var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) (((~(9264628088837395431ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_2] [i_3] [i_2] [i_5] [i_5] [i_5]))))))));
                        var_22 -= ((/* implicit */short) ((arr_10 [i_3]) || ((!(((/* implicit */_Bool) (unsigned short)41445))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned char i_9 = 0; i_9 < 11; i_9 += 3) 
            {
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 9; i_10 += 1) 
                {
                    for (long long int i_11 = 1; i_11 < 8; i_11 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_2] [i_2 - 2]))));
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)58871)) + (((/* implicit */int) var_5))));
                            var_25 = ((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_1 [i_2 + 1])) + (((/* implicit */int) arr_18 [i_2] [i_2] [i_2 - 1] [(_Bool)1] [i_2 - 2])))), (0)));
                        }
                    } 
                } 
                arr_37 [i_2] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */int) ((short) (~(4294967295U))))) + (((/* implicit */int) min((arr_32 [i_2 + 1] [i_2 + 1] [i_2 - 1] [(unsigned short)8]), (((/* implicit */unsigned short) var_6)))))));
            }
        }
        for (unsigned char i_12 = 0; i_12 < 11; i_12 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned char i_13 = 0; i_13 < 11; i_13 += 1) 
            {
                for (unsigned short i_14 = 0; i_14 < 11; i_14 += 2) 
                {
                    for (unsigned char i_15 = 0; i_15 < 11; i_15 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned char) (((((~(((/* implicit */int) var_2)))) & (((/* implicit */int) (signed char)102)))) & (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)-79)) : (((/* implicit */int) var_5))))));
                            var_27 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) 524287ULL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_13]))) / (arr_16 [i_2] [(signed char)7] [i_14])))) : (((((/* implicit */_Bool) (unsigned char)13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)135))) : (1425790837563184686ULL)))))));
                        }
                    } 
                } 
            } 
            var_28 = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned short)41446)) : (((/* implicit */int) (short)32767))))) ? (((/* implicit */int) ((unsigned short) (signed char)47))) : ((~(((/* implicit */int) (unsigned short)24089)))))));
        }
        for (unsigned short i_16 = 0; i_16 < 11; i_16 += 3) 
        {
            arr_51 [i_16] = ((/* implicit */unsigned char) (((~(((/* implicit */int) min((((/* implicit */short) var_3)), (arr_33 [i_2] [i_2] [i_2 - 1])))))) > (((/* implicit */int) arr_7 [i_2 - 1] [i_16]))));
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 11; i_17 += 4) 
            {
                for (long long int i_18 = 1; i_18 < 8; i_18 += 4) 
                {
                    {
                        var_29 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_14 [i_2] [i_16] [i_17] [i_18 + 1] [i_18 + 3]))));
                        /* LoopSeq 4 */
                        for (long long int i_19 = 1; i_19 < 10; i_19 += 3) 
                        {
                            var_30 = ((/* implicit */unsigned long long int) (~(max((((/* implicit */int) arr_12 [i_2] [i_16] [i_17] [i_2 - 2])), (arr_41 [i_18 - 1] [i_16] [i_17] [i_16])))));
                            var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(var_9)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_3)))) : (max((((/* implicit */unsigned int) arr_1 [i_18 - 1])), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_4)))))));
                        }
                        /* vectorizable */
                        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) /* same iter space */
                        {
                            var_32 -= ((/* implicit */long long int) (signed char)-79);
                            var_33 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_8 [4ULL]))))));
                        }
                        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) /* same iter space */
                        {
                            var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_8) ? (((/* implicit */int) arr_29 [i_18] [i_18 + 2] [i_18 - 1] [i_18])) : (((/* implicit */int) arr_29 [i_18] [i_18 + 1] [i_18 - 1] [i_18 + 3]))))) ? (max((((/* implicit */unsigned int) var_5)), (arr_31 [i_18] [(signed char)4] [i_18 - 1] [i_18] [i_18]))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_29 [i_18] [i_18] [i_18 - 1] [i_18 + 3])))))));
                            arr_64 [i_21] [i_18] [i_16] [i_16] [(signed char)8] [i_2] = ((/* implicit */signed char) arr_39 [i_2] [i_17] [i_16]);
                        }
                        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) /* same iter space */
                        {
                            var_35 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_42 [i_2] [i_16] [i_17] [i_18]))));
                            var_36 = ((/* implicit */signed char) (((+(((/* implicit */int) ((signed char) 1U))))) * (((/* implicit */int) ((((18446744073709551615ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)66))))) == (((/* implicit */unsigned long long int) max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (unsigned short)32736))))))))));
                        }
                    }
                } 
            } 
            var_37 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_29 [(_Bool)1] [i_16] [i_16] [i_2 + 1])) : (((/* implicit */int) arr_36 [i_2 + 1] [i_16] [i_2 - 2] [i_16] [i_16])))) | (((((/* implicit */int) max((((/* implicit */unsigned char) var_3)), ((unsigned char)77)))) + ((-(-820309389)))))));
            var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) -820309389)) ? (((/* implicit */int) arr_20 [i_16] [i_16] [i_2 + 1] [i_2] [i_2] [i_2 + 1])) : (((/* implicit */int) (unsigned short)43810)))), (((/* implicit */int) var_2))))) ? (((((/* implicit */int) arr_68 [i_2] [i_2 - 2] [i_2 - 1] [i_2 - 2] [i_16])) * (((/* implicit */int) arr_68 [i_16] [i_16] [i_16] [i_16] [i_2])))) : (((((/* implicit */int) arr_29 [i_2] [i_16] [i_2 - 1] [i_2])) | (((/* implicit */int) arr_29 [i_2 + 1] [9U] [i_2 + 1] [i_2 + 1]))))));
        }
        /* LoopNest 2 */
        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
        {
            for (unsigned short i_24 = 3; i_24 < 10; i_24 += 4) 
            {
                {
                    arr_74 [i_2 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) (~(278643659)))) ? (((((/* implicit */int) var_7)) << (((((/* implicit */int) arr_61 [i_2 - 1] [i_23] [i_24 - 2] [i_23] [i_24] [i_24] [i_24 - 1])) - (174))))) : (((/* implicit */int) min((arr_61 [i_24 - 2] [i_24 - 2] [i_24] [i_23] [i_23] [i_2] [i_24 - 2]), (arr_61 [i_24] [i_23] [5] [i_23] [i_23] [(signed char)4] [i_24 - 3]))))));
                    arr_75 [i_24] = ((/* implicit */short) ((((((var_5) || ((_Bool)1))) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [(short)1] [i_23] [i_2] [(signed char)6]))) : (((((/* implicit */_Bool) (signed char)120)) ? (arr_16 [i_2] [(unsigned char)2] [i_24 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))) | (((/* implicit */long long int) ((((/* implicit */_Bool) arr_67 [i_2] [(signed char)2] [i_24 - 1] [i_2])) ? (((1280266067) << (((((arr_58 [i_2] [i_23] [(unsigned char)7]) + (1710462224))) - (15))))) : (((/* implicit */int) max(((unsigned short)32725), ((unsigned short)39629)))))))));
                }
            } 
        } 
        arr_76 [i_2] = ((/* implicit */_Bool) arr_13 [i_2 - 2] [i_2 - 2]);
    }
    var_39 = ((/* implicit */unsigned short) var_2);
}

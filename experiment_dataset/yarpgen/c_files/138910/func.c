/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138910
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = (-((~(((/* implicit */int) (_Bool)1)))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            var_10 -= ((/* implicit */unsigned int) ((((var_2) + (2147483647))) >> (((var_6) - (17631512957140001107ULL)))));
            arr_6 [0] [0] [i_1] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? ((-(183657107))) : (((int) arr_2 [(unsigned char)1] [(unsigned char)12]))));
            arr_7 [i_1] &= ((/* implicit */unsigned int) var_5);
            var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1)))))))));
        }
    }
    for (unsigned long long int i_2 = 3; i_2 < 15; i_2 += 1) 
    {
        var_12 ^= ((/* implicit */unsigned long long int) ((signed char) (-(((/* implicit */int) (unsigned short)52488)))));
        var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)0)), (13216871760525738165ULL))))));
        /* LoopSeq 2 */
        for (signed char i_3 = 0; i_3 < 16; i_3 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (signed char i_4 = 0; i_4 < 16; i_4 += 1) 
            {
                for (unsigned short i_5 = 0; i_5 < 16; i_5 += 3) 
                {
                    for (unsigned long long int i_6 = 2; i_6 < 15; i_6 += 2) 
                    {
                        {
                            var_14 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_2 - 1] [i_6 + 1])) ? (((((/* implicit */_Bool) 7ULL)) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) (_Bool)1)))) : (((int) arr_2 [i_2] [i_2]))))) ? ((+(((/* implicit */int) var_3)))) : ((((-(((/* implicit */int) var_3)))) / (((/* implicit */int) var_9))))));
                            arr_21 [14ULL] [i_3] [14ULL] [i_5] [i_5] &= ((/* implicit */unsigned int) ((unsigned char) (!(((/* implicit */_Bool) 183657107)))));
                            arr_22 [i_4] = ((/* implicit */signed char) (unsigned short)52508);
                        }
                    } 
                } 
            } 
            var_15 += ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) arr_11 [i_2 - 3] [5ULL] [11U])))));
            var_16 ^= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)13036)) + (((/* implicit */int) (unsigned short)13001))))) + (((((/* implicit */_Bool) arr_4 [i_2 - 2])) ? (((((/* implicit */_Bool) arr_16 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)52509))) : (arr_5 [i_3] [i_3] [i_3]))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13022)))))));
            arr_23 [i_2] = ((/* implicit */unsigned long long int) min((((/* implicit */int) arr_13 [i_2] [i_2 - 1])), ((~(((/* implicit */int) ((signed char) arr_17 [i_2] [i_3] [i_3] [i_3] [i_3])))))));
        }
        for (signed char i_7 = 0; i_7 < 16; i_7 += 2) /* same iter space */
        {
            /* LoopSeq 2 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                var_17 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_19 [i_2 - 1] [i_7]))))) ? (var_4) : (((/* implicit */int) arr_29 [13U]))));
                arr_30 [(_Bool)1] [i_7] [(_Bool)1] &= ((/* implicit */unsigned int) min((4686064100705765086ULL), (((/* implicit */unsigned long long int) (unsigned char)27))));
            }
            for (unsigned short i_9 = 1; i_9 < 15; i_9 += 4) 
            {
                arr_33 [i_7] [i_7] |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((var_6) % (1ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 17U)))))))));
                var_18 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_27 [i_2] [i_2 - 3] [i_9 + 1]))) ? ((~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_0 [i_2])) : (var_7))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [16] [(unsigned char)4])) ? (var_4) : (((/* implicit */int) arr_29 [i_9]))))) ? (((/* implicit */int) ((unsigned char) var_1))) : (((/* implicit */int) arr_1 [i_9 - 1]))))));
                var_19 = arr_26 [(unsigned short)6] [i_7] [(unsigned char)1];
            }
            var_20 = ((/* implicit */unsigned char) ((unsigned long long int) ((unsigned int) 183657107)));
            /* LoopSeq 1 */
            for (unsigned short i_10 = 1; i_10 < 14; i_10 += 3) 
            {
                arr_38 [i_7] [i_2] [i_7] &= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)13000))));
                var_21 *= ((/* implicit */_Bool) var_8);
                arr_39 [i_10] [i_7] [i_10] [i_7] &= (((+(var_1))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_16 [i_7])) : (((/* implicit */int) arr_19 [i_7] [i_10 - 1]))))))))));
            }
            var_22 = ((/* implicit */unsigned long long int) arr_19 [i_2 - 3] [i_2 - 3]);
        }
        var_23 = ((/* implicit */_Bool) arr_1 [i_2 - 2]);
    }
    for (unsigned short i_11 = 1; i_11 < 18; i_11 += 3) 
    {
        var_24 ^= ((/* implicit */signed char) ((((/* implicit */unsigned int) (+(var_4)))) > (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) (~(var_4)))) : (arr_40 [i_11 + 1])))));
        var_25 ^= ((((/* implicit */_Bool) min((4686064100705765094ULL), (((/* implicit */unsigned long long int) arr_41 [i_11 + 1]))))) ? (min((((/* implicit */unsigned long long int) (unsigned short)52534)), (18446744073709551608ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)113))));
        arr_42 [i_11] = ((/* implicit */int) min(((_Bool)1), ((_Bool)1)));
        arr_43 [i_11] = ((_Bool) ((((/* implicit */_Bool) arr_40 [i_11 - 1])) ? (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_40 [i_11])))) : ((~(var_1)))));
    }
    for (unsigned int i_12 = 0; i_12 < 17; i_12 += 1) 
    {
        arr_47 [i_12] = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) ((4706070932344971014ULL) << (((((/* implicit */int) arr_0 [i_12])) - (46185)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_12]))) : ((-(var_5))))));
        /* LoopSeq 2 */
        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
        {
            var_26 = ((/* implicit */unsigned short) (unsigned char)123);
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 17; i_14 += 1) 
            {
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    {
                        var_27 &= ((/* implicit */unsigned char) ((arr_49 [i_13 - 1] [i_13 - 1]) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_49 [i_13 - 1] [i_13 - 1]))))));
                        arr_55 [i_12] [i_13] [i_15] [(_Bool)1] [i_15] &= ((/* implicit */_Bool) var_7);
                        var_28 -= ((/* implicit */unsigned char) ((((_Bool) var_9)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))) : (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)48606))))), (50495915278269709ULL)))));
                        arr_56 [i_12] [i_15] [i_12] [i_12] = ((/* implicit */unsigned long long int) (((~(min((((/* implicit */unsigned long long int) (signed char)-97)), (50495915278269709ULL))))) > (((unsigned long long int) (~(var_6))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_16 = 2; i_16 < 15; i_16 += 3) 
            {
                for (signed char i_17 = 0; i_17 < 17; i_17 += 3) 
                {
                    {
                        arr_62 [i_12] [i_12] [i_16] [i_17] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) var_0))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_1) << (((((/* implicit */int) arr_50 [i_12] [(_Bool)1] [i_12])) - (76)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_40 [(unsigned char)12]))))) : (((/* implicit */int) (!((_Bool)1))))))) : (min((min((var_5), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) ((_Bool) var_6)))))));
                        var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) (+(var_8))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_18 = 0; i_18 < 17; i_18 += 1) 
            {
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    {
                        var_30 ^= min((11127096510687227847ULL), (min((((/* implicit */unsigned long long int) (_Bool)1)), (15747882128489114662ULL))));
                        arr_67 [16ULL] [1ULL] [i_13 - 1] [i_12] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((_Bool) arr_40 [i_18])))));
                        var_31 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) min((var_7), (var_4)))), (((unsigned int) arr_44 [i_18]))))) ? (((/* implicit */int) min((arr_46 [i_13 - 1]), (arr_46 [i_13 - 1])))) : (((((/* implicit */int) arr_64 [i_12])) - (var_8)))));
                        var_32 += ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */int) arr_50 [i_13 - 1] [i_13 - 1] [i_13 - 1])) - (((/* implicit */int) arr_50 [i_13 - 1] [i_13 - 1] [i_13 - 1])))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_20 = 0; i_20 < 17; i_20 += 1) 
            {
                for (unsigned char i_21 = 0; i_21 < 17; i_21 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                        {
                            var_33 *= ((((/* implicit */_Bool) min(((unsigned char)116), ((unsigned char)14)))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)90)) != (((/* implicit */int) arr_72 [i_12] [i_12] [i_13 - 1] [(unsigned short)10] [(unsigned short)10] [i_12]))))) : (((/* implicit */int) (unsigned char)52)));
                            var_34 = ((/* implicit */unsigned int) min((var_34), (arr_5 [i_22] [i_20] [(unsigned char)11])));
                            arr_76 [i_12] [i_21] [i_20] [i_21] [i_22] [(_Bool)1] [i_13] = ((/* implicit */unsigned char) min((((((((/* implicit */unsigned long long int) 1594650461U)) <= (var_6))) ? (((((/* implicit */_Bool) 4836930976057511507ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_73 [i_20])))), (((/* implicit */int) min((arr_69 [i_20] [i_13 - 1] [i_20]), (arr_69 [i_20] [i_13 - 1] [i_20]))))));
                        }
                        var_35 ^= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_48 [i_13 - 1] [i_13])) : (((/* implicit */int) arr_48 [i_13 - 1] [i_13]))))));
                    }
                } 
            } 
        }
        for (unsigned short i_23 = 0; i_23 < 17; i_23 += 3) 
        {
            arr_81 [(_Bool)1] [i_23] [i_23] = ((/* implicit */unsigned long long int) (-(301282704U)));
            arr_82 [i_12] [i_12] [i_12] = ((/* implicit */unsigned short) min((min((arr_41 [i_12]), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)53812)) - (((/* implicit */int) (signed char)107))))))), (((/* implicit */unsigned int) arr_48 [i_12] [(_Bool)1]))));
            var_36 *= ((/* implicit */unsigned int) (((~(((((/* implicit */_Bool) var_7)) ? (arr_58 [i_12] [2ULL] [(_Bool)1] [i_23]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)122))))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_74 [(unsigned char)10]))))))));
            var_37 = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (unsigned char)171)) : (((/* implicit */int) (unsigned char)136))));
            /* LoopNest 3 */
            for (unsigned int i_24 = 0; i_24 < 17; i_24 += 3) 
            {
                for (unsigned short i_25 = 0; i_25 < 17; i_25 += 3) 
                {
                    for (unsigned long long int i_26 = 0; i_26 < 17; i_26 += 3) 
                    {
                        {
                            var_38 = min((arr_83 [i_24] [i_12] [10ULL] [i_12]), (((((/* implicit */_Bool) 50495915278269723ULL)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (9422391284981219385ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_50 [i_26] [(unsigned char)2] [8ULL]))))));
                            arr_90 [i_24] [(unsigned short)14] = ((/* implicit */unsigned long long int) ((unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_2 [i_24] [i_24]))))))));
                        }
                    } 
                } 
            } 
        }
    }
    var_39 = ((/* implicit */_Bool) (~((~((~(((/* implicit */int) var_3))))))));
    var_40 = ((/* implicit */unsigned short) (!((_Bool)1)));
    var_41 *= ((/* implicit */unsigned char) (~(var_5)));
}

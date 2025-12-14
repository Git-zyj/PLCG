/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11927
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned short) ((int) (+(((/* implicit */int) (short)-28134)))));
        var_18 = min((((/* implicit */unsigned int) ((((/* implicit */long long int) ((int) (short)28124))) < ((~(var_5)))))), ((~(min((var_11), (((/* implicit */unsigned int) arr_3 [i_0])))))));
        arr_4 [(short)16] &= ((unsigned int) (+(((/* implicit */int) (signed char)88))));
        arr_5 [i_0] = ((/* implicit */unsigned int) (((-(((int) var_10)))) % ((-(((/* implicit */int) var_2))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) /* same iter space */
    {
        arr_9 [i_1] = (~(((/* implicit */int) ((short) min((((/* implicit */unsigned long long int) var_9)), (var_15))))));
        var_19 &= ((/* implicit */unsigned char) min((max(((signed char)-89), ((signed char)88))), ((signed char)-82)));
    }
    /* LoopSeq 4 */
    for (int i_2 = 0; i_2 < 21; i_2 += 2) /* same iter space */
    {
        var_20 &= ((/* implicit */int) (~(((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_2 [i_2])))) - (((unsigned int) (short)28141))))));
        /* LoopSeq 3 */
        for (int i_3 = 0; i_3 < 21; i_3 += 2) 
        {
            arr_15 [i_2] = ((/* implicit */unsigned char) (-(((/* implicit */int) (((~(((/* implicit */int) (signed char)-58)))) < (((/* implicit */int) ((_Bool) 4294967295U))))))));
            var_21 = (~(((unsigned int) 3679462018U)));
            arr_16 [i_2] [i_3] = ((/* implicit */signed char) ((unsigned int) (+(((/* implicit */int) (signed char)63)))));
            /* LoopNest 2 */
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                for (long long int i_5 = 0; i_5 < 21; i_5 += 2) 
                {
                    {
                        var_22 ^= ((/* implicit */short) min((((/* implicit */unsigned int) (((+(((/* implicit */int) (unsigned char)134)))) | (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) < (arr_2 [i_2]))))))), (((((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2]))) ^ (360173250U))) >> (min((((/* implicit */unsigned long long int) (_Bool)1)), (4703930390049589160ULL)))))));
                        arr_22 [i_2] [i_3] [i_4] [i_4 - 1] [i_4] = ((/* implicit */unsigned int) ((unsigned char) ((unsigned int) ((arr_7 [i_3] [i_5]) * (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))));
                        var_23 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) var_5))) && (((/* implicit */_Bool) ((unsigned int) (unsigned char)134)))));
                        arr_23 [i_4] [i_3] [i_4 - 1] [i_3] [i_4] [i_5] = ((/* implicit */unsigned int) min((((/* implicit */int) min((((unsigned short) (unsigned short)2047)), (((/* implicit */unsigned short) ((signed char) var_7)))))), (((int) (unsigned char)113))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_6 = 4; i_6 < 20; i_6 += 4) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 3) 
                        {
                            arr_32 [i_2] [i_2] [i_2] [i_7] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) min(((unsigned short)32779), (((/* implicit */unsigned short) (unsigned char)121))))) < (((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) (signed char)-89))))));
                            var_24 ^= ((/* implicit */unsigned int) ((short) (+((-(((/* implicit */int) var_8)))))));
                            arr_33 [i_6] [i_7] [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */signed char) (~((+(((/* implicit */int) ((unsigned short) (short)28133)))))));
                        }
                        var_25 ^= ((/* implicit */int) ((max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_9))))), (((unsigned int) 3919030274230802619ULL)))) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 + 1]))) == (3919030274230802619ULL)))))));
                    }
                } 
            } 
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            var_26 = ((/* implicit */_Bool) max((1713998020U), (((/* implicit */unsigned int) (_Bool)1))));
            var_27 &= ((/* implicit */long long int) ((unsigned short) ((unsigned int) (-(-9689490)))));
        }
        /* vectorizable */
        for (unsigned short i_10 = 3; i_10 < 17; i_10 += 3) 
        {
            var_28 = ((/* implicit */unsigned short) ((int) ((arr_18 [i_2] [i_2] [i_2] [i_2]) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))));
            /* LoopSeq 2 */
            for (int i_11 = 0; i_11 < 21; i_11 += 1) 
            {
                var_29 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_6 [i_10 + 1]))));
                arr_42 [i_2] [i_2] [i_10] = ((/* implicit */unsigned int) (-(arr_21 [i_11] [i_10] [i_11] [i_10 + 3])));
            }
            for (unsigned short i_12 = 0; i_12 < 21; i_12 += 2) 
            {
                arr_45 [i_10] [i_10 - 2] [i_2] [i_10] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)79)))))));
                arr_46 [i_2] [i_10] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_8))));
                var_30 &= ((/* implicit */unsigned short) (-(((/* implicit */int) arr_20 [i_10 + 2] [i_12]))));
                arr_47 [i_10] [i_10] [i_12] = ((/* implicit */unsigned char) ((3919030274230802619ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_2] [i_2] [i_10 + 3])))));
            }
        }
        var_31 ^= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((unsigned int) (~(((/* implicit */int) arr_26 [i_2] [i_2] [i_2])))))), (((3919030274230802606ULL) | (arr_18 [i_2] [i_2] [i_2] [i_2])))));
        var_32 ^= ((/* implicit */unsigned char) min((((var_5) + (((/* implicit */long long int) (+(((/* implicit */int) arr_28 [i_2] [i_2] [i_2]))))))), (((/* implicit */long long int) max((2147483642), (-9689511))))));
    }
    for (int i_13 = 0; i_13 < 21; i_13 += 2) /* same iter space */
    {
        var_33 ^= ((/* implicit */_Bool) (+(((/* implicit */int) min((var_8), (((/* implicit */unsigned short) var_7)))))));
        arr_51 [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) (+(((/* implicit */int) (_Bool)1)))))) | (((/* implicit */int) ((unsigned char) ((var_11) >= (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))));
    }
    /* vectorizable */
    for (unsigned int i_14 = 0; i_14 < 17; i_14 += 3) 
    {
        var_34 ^= ((/* implicit */unsigned long long int) ((short) arr_29 [i_14] [i_14] [i_14]));
        var_35 ^= ((/* implicit */signed char) (+(((/* implicit */int) arr_44 [i_14] [i_14] [i_14] [i_14]))));
        var_36 &= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) == ((-(4294967295U)))));
        /* LoopNest 3 */
        for (unsigned int i_15 = 4; i_15 < 16; i_15 += 3) 
        {
            for (unsigned short i_16 = 3; i_16 < 14; i_16 += 4) 
            {
                for (unsigned int i_17 = 0; i_17 < 17; i_17 += 1) 
                {
                    {
                        var_37 = ((/* implicit */unsigned long long int) ((long long int) arr_19 [i_14] [i_15]));
                        /* LoopSeq 1 */
                        for (unsigned int i_18 = 1; i_18 < 13; i_18 += 2) 
                        {
                            arr_62 [i_14] [i_14] [i_16 + 3] [i_14] [6U] = ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)1))));
                            var_38 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(958598469))))));
                        }
                        var_39 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)248)) + (((/* implicit */int) (_Bool)1))));
                        /* LoopSeq 2 */
                        for (unsigned char i_19 = 0; i_19 < 17; i_19 += 4) 
                        {
                            arr_67 [i_14] [i_15 - 3] [i_19] [i_17] [(unsigned char)10] &= ((/* implicit */unsigned long long int) ((int) arr_34 [i_19] [i_16 - 3] [i_19]));
                            var_40 ^= ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) (unsigned short)36520))) - (((/* implicit */int) ((((/* implicit */int) arr_27 [i_19] [i_17] [i_14])) < (((/* implicit */int) var_7)))))));
                            var_41 ^= ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) 14527713799478748996ULL)))))));
                        }
                        for (unsigned short i_20 = 0; i_20 < 17; i_20 += 4) 
                        {
                            var_42 = ((/* implicit */_Bool) (-(arr_66 [i_15 - 2] [i_15 - 1] [i_15] [i_16 + 2] [i_14])));
                            var_43 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) var_1)) > (((/* implicit */int) arr_44 [i_16 - 2] [i_16 - 2] [i_16 + 1] [i_17])))))));
                        }
                        var_44 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)134))));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_21 = 0; i_21 < 20; i_21 += 2) 
    {
        var_45 ^= ((/* implicit */unsigned short) ((int) (~(((/* implicit */int) (_Bool)1)))));
        /* LoopNest 3 */
        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
        {
            for (int i_23 = 3; i_23 < 18; i_23 += 1) 
            {
                for (unsigned int i_24 = 0; i_24 < 20; i_24 += 3) 
                {
                    {
                        arr_82 [i_21] [i_22] [i_22] [i_22] &= ((/* implicit */unsigned char) max(((!(((/* implicit */_Bool) ((int) var_13))))), ((!(((/* implicit */_Bool) (+(var_15))))))));
                        var_46 = ((/* implicit */short) ((unsigned short) ((unsigned int) (~(3115621709U)))));
                    }
                } 
            } 
        } 
        var_47 &= ((/* implicit */unsigned int) (((-(((/* implicit */int) (_Bool)1)))) | (min((arr_81 [i_21] [16] [i_21] [i_21]), (((/* implicit */int) var_12))))));
        arr_83 [i_21] [i_21] = ((/* implicit */int) ((unsigned char) max((arr_81 [i_21] [i_21] [i_21] [i_21]), (((/* implicit */int) arr_28 [i_21] [i_21] [i_21])))));
    }
    var_48 = ((/* implicit */short) (-(((/* implicit */int) var_7))));
    var_49 ^= ((/* implicit */unsigned short) var_11);
}

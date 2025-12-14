/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118472
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)110))) % (16784313666960592613ULL)));
        arr_2 [(short)4] [i_0] = ((/* implicit */unsigned int) (((!((!(((/* implicit */_Bool) (unsigned short)33861)))))) && (var_11)));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            var_17 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_0 [i_0])) <= (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))))), (((var_14) >> (((((/* implicit */int) var_7)) - (85)))))))));
            var_18 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
            var_19 ^= ((/* implicit */short) ((unsigned int) ((short) (-(((/* implicit */int) (short)27521))))));
            arr_5 [19ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) -5476054408134212787LL)) | (16784313666960592620ULL))) & (var_5)))) ? ((((-9223372036854775807LL - 1LL)) | (((/* implicit */long long int) ((/* implicit */int) (short)-27519))))) : (((/* implicit */long long int) (~((~(((/* implicit */int) var_13)))))))));
        }
        var_20 = ((/* implicit */unsigned short) ((3U) + (((((/* implicit */_Bool) ((unsigned short) var_10))) ? (729142967U) : (((/* implicit */unsigned int) ((var_3) << (((var_2) - (970796313U))))))))));
        var_21 = ((/* implicit */unsigned int) ((signed char) 18ULL));
    }
    for (long long int i_2 = 0; i_2 < 17; i_2 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned short i_3 = 0; i_3 < 17; i_3 += 2) 
        {
            for (unsigned short i_4 = 0; i_4 < 17; i_4 += 4) 
            {
                for (unsigned char i_5 = 0; i_5 < 17; i_5 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            var_22 = ((/* implicit */short) var_4);
                            arr_19 [i_2] [i_3] [i_4] [i_5] [i_6] = ((/* implicit */signed char) (-(min((((/* implicit */long long int) var_10)), (min((((/* implicit */long long int) (unsigned short)6731)), (arr_10 [i_5] [i_3])))))));
                        }
                        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) 3U))));
                    }
                } 
            } 
        } 
        var_24 = ((((/* implicit */int) max(((short)-29994), (((/* implicit */short) (unsigned char)54))))) - (((((/* implicit */int) ((((/* implicit */int) (unsigned short)128)) > (((/* implicit */int) (unsigned short)18168))))) ^ (((/* implicit */int) arr_16 [i_2] [i_2] [i_2])))));
    }
    for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 4) 
    {
        /* LoopSeq 4 */
        for (unsigned int i_8 = 0; i_8 < 16; i_8 += 2) 
        {
            var_25 ^= ((/* implicit */unsigned long long int) var_3);
            var_26 = var_15;
            var_27 ^= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) arr_20 [i_7] [3U])) != (arr_7 [i_7]))))) * (arr_13 [i_7] [i_8])));
            var_28 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 873296244)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_11 [i_7] [i_7] [i_7] [i_7]))))))) ? (((((((/* implicit */_Bool) -873296244)) || (((/* implicit */_Bool) -3)))) ? (((/* implicit */int) (unsigned short)62747)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_7] [i_7] [13])) && (((/* implicit */_Bool) arr_15 [i_7] [i_8] [i_8] [14ULL] [i_8] [i_8]))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
            var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) var_12))));
        }
        for (unsigned short i_9 = 0; i_9 < 16; i_9 += 2) /* same iter space */
        {
            var_30 ^= ((/* implicit */short) (((!(((/* implicit */_Bool) max((-6354791483427638053LL), (((/* implicit */long long int) var_1))))))) && ((!((!(((/* implicit */_Bool) (unsigned char)21))))))));
            /* LoopNest 3 */
            for (short i_10 = 0; i_10 < 16; i_10 += 2) 
            {
                for (unsigned short i_11 = 0; i_11 < 16; i_11 += 2) 
                {
                    for (signed char i_12 = 0; i_12 < 16; i_12 += 4) 
                    {
                        {
                            var_31 = ((/* implicit */int) var_4);
                            var_32 ^= ((/* implicit */unsigned char) (~((+(arr_12 [i_7] [i_9] [i_10] [10])))));
                        }
                    } 
                } 
            } 
            arr_36 [i_7] [(short)15] = ((/* implicit */_Bool) (~((~(arr_18 [i_7] [i_9] [(unsigned short)16] [i_9] [i_7] [i_9] [(unsigned short)9])))));
            /* LoopNest 2 */
            for (unsigned long long int i_13 = 0; i_13 < 16; i_13 += 2) 
            {
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    {
                        var_33 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((+(((/* implicit */int) var_7)))) | ((-(var_10)))))) ? (((/* implicit */int) (signed char)115)) : (((/* implicit */int) ((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_4 [i_7])))) != (((arr_3 [i_7] [(unsigned short)6] [(signed char)18]) % (arr_33 [i_7] [i_9] [i_13] [i_14]))))))));
                        var_34 ^= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)152))))) & (((unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)107))) : (6024819048298038691ULL))))));
                    }
                } 
            } 
            var_35 = ((/* implicit */_Bool) (+(32U)));
        }
        for (unsigned short i_15 = 0; i_15 < 16; i_15 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned short i_16 = 0; i_16 < 16; i_16 += 4) 
            {
                for (unsigned short i_17 = 0; i_17 < 16; i_17 += 2) 
                {
                    {
                        var_36 = ((/* implicit */unsigned short) (-((-(((/* implicit */int) var_11))))));
                        var_37 ^= ((/* implicit */unsigned long long int) min((((/* implicit */signed char) ((var_0) || (((/* implicit */_Bool) var_12))))), (var_9)));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned char i_18 = 0; i_18 < 16; i_18 += 4) 
            {
                for (unsigned short i_19 = 0; i_19 < 16; i_19 += 4) 
                {
                    {
                        var_38 = ((/* implicit */_Bool) arr_27 [i_19] [(unsigned short)9] [i_15]);
                        arr_56 [i_7] [i_7] [i_18] [i_19] = ((/* implicit */int) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [(short)2]))) / (-3820361606704264595LL))));
                        var_39 ^= ((/* implicit */short) (-(9223372036854775791LL)));
                        var_40 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))))))));
                    }
                } 
            } 
        }
        for (unsigned short i_20 = 0; i_20 < 16; i_20 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned int i_21 = 0; i_21 < 16; i_21 += 2) 
            {
                for (unsigned int i_22 = 1; i_22 < 13; i_22 += 4) 
                {
                    for (unsigned short i_23 = 0; i_23 < 16; i_23 += 2) 
                    {
                        {
                            var_41 = ((/* implicit */unsigned short) ((((/* implicit */int) var_12)) != (((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_9))) + (455034579U))) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28916))))))));
                            var_42 = ((/* implicit */unsigned short) ((int) (-(min((((/* implicit */unsigned long long int) var_12)), (13592640729635453141ULL))))));
                            arr_67 [i_20] [(_Bool)1] [i_23] [i_21] [i_23] = ((/* implicit */unsigned char) ((max((((6354791483427638060LL) << (((var_10) - (1291650821))))), (((/* implicit */long long int) arr_26 [i_22])))) ^ (((/* implicit */long long int) ((/* implicit */int) var_4)))));
                        }
                    } 
                } 
            } 
            arr_68 [i_7] [i_7] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_6 [i_7]) < (arr_6 [i_7]))))) - (min((arr_6 [i_20]), (((/* implicit */unsigned long long int) var_8))))));
            var_43 ^= ((/* implicit */unsigned int) arr_28 [13] [i_20]);
            /* LoopNest 2 */
            for (unsigned short i_24 = 0; i_24 < 16; i_24 += 2) 
            {
                for (unsigned char i_25 = 0; i_25 < 16; i_25 += 2) 
                {
                    {
                        var_44 = var_0;
                        arr_73 [i_7] [i_20] [3] [i_25] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) var_0)))));
                    }
                } 
            } 
        }
        var_45 = ((/* implicit */unsigned long long int) max((((/* implicit */int) var_9)), (max(((~(arr_24 [i_7]))), (1205786577)))));
    }
    var_46 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) max((((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_13)))), (-1205786576)))), (((((/* implicit */_Bool) (-(-2069255933)))) ? (((3703470091U) * (((/* implicit */unsigned int) var_3)))) : (((/* implicit */unsigned int) min((1205786582), (((/* implicit */int) (unsigned char)73)))))))));
    /* LoopSeq 1 */
    for (unsigned short i_26 = 0; i_26 < 16; i_26 += 4) 
    {
        var_47 ^= ((/* implicit */int) (unsigned short)49791);
        arr_77 [i_26] = ((/* implicit */unsigned short) (~((+((+(-6354791483427638061LL)))))));
        /* LoopNest 3 */
        for (unsigned int i_27 = 0; i_27 < 16; i_27 += 4) 
        {
            for (int i_28 = 0; i_28 < 16; i_28 += 4) 
            {
                for (unsigned long long int i_29 = 0; i_29 < 16; i_29 += 2) 
                {
                    {
                        var_48 ^= ((/* implicit */unsigned short) ((1895941901) | ((~((~(var_3)))))));
                        var_49 = var_14;
                        var_50 = ((/* implicit */unsigned char) max((var_50), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned int) var_15)), (4294967288U))), (3320826826U)))) / ((+(arr_6 [i_27]))))))));
                    }
                } 
            } 
        } 
        arr_85 [i_26] = ((/* implicit */unsigned char) ((1453875636U) + (((/* implicit */unsigned int) ((/* implicit */int) (short)-4566)))));
        /* LoopNest 3 */
        for (unsigned char i_30 = 0; i_30 < 16; i_30 += 2) 
        {
            for (unsigned char i_31 = 0; i_31 < 16; i_31 += 2) 
            {
                for (int i_32 = 2; i_32 < 14; i_32 += 4) 
                {
                    {
                        var_51 = ((/* implicit */unsigned int) (unsigned short)33124);
                        var_52 = ((/* implicit */unsigned long long int) max(((-(arr_8 [i_32 + 2] [i_32 + 1]))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) == (2266900689U))))));
                    }
                } 
            } 
        } 
    }
    var_53 = ((/* implicit */unsigned char) min((var_53), (((/* implicit */unsigned char) var_11))));
}

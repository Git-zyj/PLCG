/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100872
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
    /* vectorizable */
    for (unsigned int i_0 = 3; i_0 < 24; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 25; i_1 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                for (unsigned int i_3 = 1; i_3 < 23; i_3 += 3) 
                {
                    for (long long int i_4 = 0; i_4 < 25; i_4 += 1) 
                    {
                        {
                            var_20 &= ((/* implicit */unsigned int) (-(-1424949353)));
                            var_21 *= ((/* implicit */unsigned short) (unsigned char)124);
                        }
                    } 
                } 
            } 
            var_22 = arr_2 [i_0] [i_0 - 3];
            var_23 = ((/* implicit */signed char) (~(2704065129U)));
            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0 + 1] [i_1])) ? (arr_4 [i_0 + 1] [i_0] [i_0 - 3]) : (((/* implicit */long long int) (-(((/* implicit */int) arr_8 [i_0 - 3] [(unsigned char)12] [i_0] [i_0] [(unsigned char)17])))))));
            /* LoopSeq 2 */
            for (unsigned int i_5 = 2; i_5 < 22; i_5 += 2) 
            {
                var_25 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)120))));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 25; i_6 += 2) 
                {
                    for (unsigned char i_7 = 0; i_7 < 25; i_7 += 1) 
                    {
                        {
                            arr_22 [(short)11] [i_1] [i_7] [11LL] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_14)) * (((/* implicit */int) (unsigned char)212))))) || (((/* implicit */_Bool) ((var_7) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45326))))))));
                            arr_23 [i_0] [i_0] [i_7] [i_0] [i_7] = ((((/* implicit */int) arr_8 [i_0] [18LL] [i_0 - 3] [i_5 + 3] [i_7])) < (((/* implicit */int) arr_8 [i_0] [(unsigned char)14] [i_0 + 1] [i_5 + 2] [(unsigned char)14])));
                        }
                    } 
                } 
            }
            for (signed char i_8 = 0; i_8 < 25; i_8 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_9 = 1; i_9 < 23; i_9 += 1) 
                {
                    for (signed char i_10 = 0; i_10 < 25; i_10 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned char) ((-32779342541843916LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)8)))));
                            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)45326)) ? (((/* implicit */int) var_8)) : (((((/* implicit */int) var_14)) << (((arr_4 [i_8] [i_9] [21]) - (7010136635738707317LL)))))));
                            var_28 = ((/* implicit */unsigned int) arr_7 [(unsigned short)13] [i_9] [i_9 + 2]);
                            arr_30 [i_0 - 3] [(signed char)10] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2079863490U)) ? (2147483647) : (129090688)))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned char)85)))) : (arr_9 [i_9 + 1] [i_0 - 2])));
                            arr_31 [i_0] [i_0] [i_0] [i_0 - 2] [i_0] = ((/* implicit */_Bool) ((arr_10 [i_0 - 1] [i_0] [i_1] [i_0 - 2]) & (arr_13 [i_0] [i_1] [i_8] [i_9 + 1] [i_0])));
                        }
                    } 
                } 
                var_29 = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) arr_14 [i_1] [(short)1] [15]))))));
            }
        }
        for (signed char i_11 = 0; i_11 < 25; i_11 += 2) /* same iter space */
        {
            arr_35 [i_0] [i_11] = ((/* implicit */signed char) (~(arr_3 [i_0 - 1] [i_0] [i_0 + 1])));
            arr_36 [i_0] [i_11] [i_0] = var_12;
        }
        /* LoopSeq 3 */
        for (short i_12 = 3; i_12 < 24; i_12 += 2) 
        {
            var_30 = ((/* implicit */unsigned char) 10131773683877131239ULL);
            var_31 = ((/* implicit */int) min((var_31), ((~(((/* implicit */int) (unsigned char)111))))));
            /* LoopNest 2 */
            for (unsigned char i_13 = 1; i_13 < 23; i_13 += 1) 
            {
                for (unsigned int i_14 = 1; i_14 < 21; i_14 += 2) 
                {
                    {
                        var_32 = ((/* implicit */unsigned int) (_Bool)0);
                        arr_46 [i_0] [i_12] [i_0 - 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)67)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-74))) : (5693274939296707087LL)));
                    }
                } 
            } 
            var_33 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_17 [i_0])) ? (((/* implicit */int) arr_17 [i_0])) : (((/* implicit */int) (signed char)73))))));
        }
        for (signed char i_15 = 2; i_15 < 24; i_15 += 3) /* same iter space */
        {
            arr_49 [i_0] [i_15 - 1] = ((/* implicit */unsigned char) arr_29 [i_0] [i_0 - 2] [i_0] [19] [(unsigned short)4]);
            var_34 -= ((((/* implicit */unsigned int) -1239580951)) & ((-(arr_44 [(unsigned char)8] [i_15]))));
            var_35 = ((/* implicit */long long int) max((var_35), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)124)) / (((((/* implicit */_Bool) 3166054089U)) ? (arr_37 [16ULL] [16ULL]) : (((/* implicit */int) var_8)))))))));
        }
        for (signed char i_16 = 2; i_16 < 24; i_16 += 3) /* same iter space */
        {
            var_36 = ((/* implicit */unsigned char) ((long long int) ((arr_26 [(unsigned char)15] [i_16]) ? (((/* implicit */int) (short)-32747)) : (((/* implicit */int) (signed char)96)))));
            var_37 = ((/* implicit */long long int) min((var_37), (((/* implicit */long long int) 3065045433U))));
        }
    }
    /* vectorizable */
    for (int i_17 = 0; i_17 < 23; i_17 += 3) 
    {
        var_38 = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) (signed char)-61)))) < (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-60))) < (805306368U))))));
        /* LoopNest 2 */
        for (unsigned int i_18 = 0; i_18 < 23; i_18 += 1) 
        {
            for (long long int i_19 = 0; i_19 < 23; i_19 += 3) 
            {
                {
                    arr_59 [i_17] [i_18] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((var_19) ? (((/* implicit */long long int) var_3)) : (arr_27 [i_17] [i_17] [i_18] [i_18] [i_17]))) : (((/* implicit */long long int) ((/* implicit */int) var_14)))));
                    arr_60 [i_17] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_17))))) ? (arr_29 [i_17] [8U] [i_18] [(unsigned char)5] [i_19]) : ((-(arr_42 [16U] [i_18] [i_18])))));
                    arr_61 [i_17] [i_17] = ((/* implicit */int) var_12);
                }
            } 
        } 
        arr_62 [i_17] = ((((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (unsigned char)120)) : (((/* implicit */int) arr_18 [5U] [i_17] [20] [i_17])))) & (arr_45 [i_17] [0ULL] [i_17]));
    }
    var_39 = ((/* implicit */unsigned long long int) max((var_39), (((/* implicit */unsigned long long int) var_19))));
}

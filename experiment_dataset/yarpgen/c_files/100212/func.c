/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100212
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 23; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    arr_7 [i_2] [i_2] [i_2] = ((/* implicit */long long int) (short)-30300);
                    arr_8 [i_2] = ((/* implicit */unsigned short) (short)-30306);
                }
            } 
        } 
    } 
    var_10 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)2))) % (var_8))) << (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) : (var_5)))));
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 10; i_3 += 2) 
    {
        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_5 = 3; i_5 < 9; i_5 += 4) 
                {
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 10; i_6 += 3) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 10; i_7 += 3) 
                        {
                            {
                                arr_24 [i_5] [i_5] [i_3] = ((/* implicit */int) (short)-30291);
                                var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) (-((-(((/* implicit */int) (short)322)))))))));
                                var_12 = (!(((/* implicit */_Bool) max((((((/* implicit */int) var_1)) | (((/* implicit */int) arr_21 [i_7] [i_6] [i_5 - 2] [i_4] [i_3])))), ((+(((/* implicit */int) var_9))))))));
                                var_13 -= ((/* implicit */long long int) arr_4 [(short)17] [i_4] [(short)17]);
                            }
                        } 
                    } 
                    arr_25 [(_Bool)1] [i_3] [(unsigned short)0] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))))), (var_5)))) ? (max((arr_0 [i_4 + 1]), (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_19 [i_4] [i_4 + 1] [i_4 + 1] [i_4 + 1]) || (((/* implicit */_Bool) arr_4 [i_4] [i_4 + 1] [i_4 + 1]))))))));
                    arr_26 [i_3] [i_5] = arr_0 [i_5];
                    arr_27 [i_5 - 1] [i_3] [i_5] = ((/* implicit */unsigned long long int) (!(arr_19 [i_3] [i_4] [i_3] [i_5])));
                }
                for (unsigned short i_8 = 0; i_8 < 10; i_8 += 4) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_9 = 2; i_9 < 9; i_9 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            var_14 -= ((/* implicit */long long int) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) arr_23 [i_3]))));
                            arr_36 [i_3] [i_4 + 1] [i_8] [i_9 + 1] [(signed char)5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775803LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_9] [i_9 - 1] [i_9 - 2] [i_8]))) : (var_3)));
                            var_15 -= ((/* implicit */unsigned short) ((_Bool) (+(((/* implicit */int) var_0)))));
                        }
                        for (long long int i_11 = 2; i_11 < 7; i_11 += 3) /* same iter space */
                        {
                            arr_39 [4LL] [i_4] [4LL] [i_9] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_5 [15LL] [i_8] [i_8] [i_8])) && (arr_32 [i_3] [i_4] [i_8] [i_9 - 1] [i_3] [i_4])))) & (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
                            var_16 = ((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)8)) << (((((/* implicit */int) var_4)) - (95))))) >> ((((+(var_8))) - (3910581612U)))));
                        }
                        for (long long int i_12 = 2; i_12 < 7; i_12 += 3) /* same iter space */
                        {
                            var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-98)) % (((/* implicit */int) arr_2 [i_4 + 1]))));
                            arr_42 [i_3] [i_3] [1ULL] [i_9] [(unsigned short)0] |= ((/* implicit */unsigned long long int) (unsigned char)13);
                            arr_43 [i_3] [i_4] [i_4 + 1] [i_3] [i_8] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (arr_6 [i_3] [(signed char)0]) : (((/* implicit */int) var_4))));
                            arr_44 [i_3] [i_4] [i_8] [i_9] [i_12] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)10)) : (((/* implicit */int) (short)30309))))));
                            arr_45 [i_3] [i_3] = arr_6 [i_3] [i_8];
                        }
                        for (long long int i_13 = 2; i_13 < 7; i_13 += 3) /* same iter space */
                        {
                            arr_48 [i_3] [i_4] [i_8] = ((/* implicit */unsigned long long int) ((arr_13 [i_3] [i_3]) != (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-19))) % (var_5)))));
                            arr_49 [i_3] [(short)2] [i_3] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)17342)) : (((/* implicit */int) var_7)))) == (((/* implicit */int) ((short) var_2)))));
                            arr_50 [i_4] [i_4 + 1] [i_4] [i_4] [i_4] [4ULL] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_18 [i_13 + 1])) : (((/* implicit */int) var_7))));
                            var_18 = ((/* implicit */unsigned long long int) ((arr_22 [i_3] [i_3] [i_8] [i_3] [i_13 + 3]) && (((/* implicit */_Bool) var_0))));
                        }
                        arr_51 [i_3] = ((/* implicit */short) (-(arr_5 [i_9 - 2] [i_9 - 2] [i_9] [4LL])));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_14 = 0; i_14 < 10; i_14 += 1) 
                    {
                        for (unsigned long long int i_15 = 0; i_15 < 10; i_15 += 1) 
                        {
                            {
                                arr_58 [i_3] [i_15] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) -5591932049328578719LL)) || (((/* implicit */_Bool) (unsigned short)42675))));
                                var_19 = ((/* implicit */short) (-(((/* implicit */int) ((unsigned short) arr_19 [i_4 + 1] [i_4 + 1] [4U] [i_8])))));
                                arr_59 [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_3), (((/* implicit */long long int) ((unsigned char) var_2)))))) ? ((((_Bool)1) ? (arr_37 [i_4 + 1] [i_15] [i_4 + 1] [i_4] [i_15]) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)30298))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (short)15235)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9)))))))));
                                arr_60 [i_15] [i_15] [i_8] [i_15] [i_3] = (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_18 [i_15])) : (((/* implicit */int) (unsigned short)10824))))))) ? (((((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) (unsigned short)42660)))) ? (((arr_4 [i_3] [i_4 + 1] [i_8]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_3] [i_3] [i_8] [i_14] [(short)4]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)-6321), (((/* implicit */short) var_7)))))))) : (7522160460669276299ULL));
                                arr_61 [i_3] [i_3] [i_4] [i_15] [0LL] [i_15] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_3)))) ? ((-(((arr_11 [i_3] [i_4] [i_14]) / (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_8] [i_8] [i_15]))))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                            }
                        } 
                    } 
                    arr_62 [7ULL] [i_4] = ((/* implicit */unsigned long long int) (+(((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)22833))))) / (arr_47 [i_8] [i_8] [i_8] [i_8] [i_8])))));
                }
                arr_63 [5U] [i_4] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) min((arr_35 [i_4]), ((unsigned short)42667)))) : ((-(((/* implicit */int) var_9))))))));
                arr_64 [i_4] [(short)4] = ((/* implicit */_Bool) ((unsigned long long int) var_1));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) var_3);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172139
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_0]))))) : (min((((/* implicit */unsigned long long int) var_2)), (5621944355656824590ULL))))) : (max(((+(arr_1 [1LL]))), (((((/* implicit */_Bool) 5621944355656824590ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : (var_13)))))));
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)156)))) : ((~(((/* implicit */int) var_1)))))) : (((/* implicit */int) var_11))));
    }
    /* vectorizable */
    for (short i_1 = 2; i_1 < 10; i_1 += 2) 
    {
        var_15 = ((/* implicit */int) arr_1 [i_1 + 1]);
        arr_6 [i_1] = ((/* implicit */signed char) 4294967295U);
        var_16 = ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1 - 1]))) * (var_10));
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 3; i_2 < 8; i_2 += 3) 
        {
            var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [i_1 - 2])) < (((/* implicit */int) arr_5 [i_1 - 1]))));
            var_18 = ((/* implicit */signed char) var_5);
            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_1 + 1])) ? (12824799718052727025ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1 + 1])))));
            /* LoopSeq 2 */
            for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 1) 
            {
                var_20 = (~(((/* implicit */int) var_1)));
                var_21 = ((/* implicit */unsigned char) ((long long int) var_10));
            }
            for (unsigned short i_4 = 0; i_4 < 11; i_4 += 4) 
            {
                arr_14 [i_1] [i_2] = var_8;
                var_22 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_2))));
                var_23 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_2 [i_1 + 1]))));
                var_24 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)13))) <= (12824799718052727019ULL)));
            }
        }
        for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 1) 
        {
            arr_19 [8LL] [i_5] [i_1 + 1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-19))));
            /* LoopSeq 1 */
            for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 4) 
            {
                /* LoopNest 2 */
                for (long long int i_7 = 1; i_7 < 10; i_7 += 2) 
                {
                    for (unsigned int i_8 = 0; i_8 < 11; i_8 += 1) 
                    {
                        {
                            arr_26 [i_5] [i_5] [i_6] [i_7] [i_5] [i_8] = ((/* implicit */signed char) (~(((/* implicit */int) var_6))));
                            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) var_7))) ? (((/* implicit */int) arr_11 [i_7] [(_Bool)1] [i_7 + 1] [i_7])) : (((((/* implicit */_Bool) (unsigned char)156)) ? (arr_15 [i_8] [i_8] [i_8]) : (((/* implicit */int) var_4))))));
                            arr_27 [i_1 - 2] [i_5] [i_6] [i_7 - 1] [i_8] = ((/* implicit */short) ((((/* implicit */int) arr_16 [i_7 - 1] [i_1 - 2])) | (((/* implicit */int) arr_16 [i_7 - 1] [i_1 - 1]))));
                            var_26 = ((/* implicit */unsigned int) ((signed char) (signed char)86));
                            var_27 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_11 [i_8] [i_8] [i_8] [i_8]) ? (((/* implicit */int) (unsigned short)13640)) : (((/* implicit */int) (unsigned char)99))))) && (((/* implicit */_Bool) arr_2 [i_1]))));
                        }
                    } 
                } 
                arr_28 [i_5] [i_5] [i_5] [i_6] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_1))));
                /* LoopNest 2 */
                for (unsigned int i_9 = 1; i_9 < 10; i_9 += 3) 
                {
                    for (unsigned short i_10 = 0; i_10 < 11; i_10 += 4) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_29 [i_1] [i_5] [i_6]))));
                            var_29 += ((/* implicit */signed char) 12824799718052727038ULL);
                        }
                    } 
                } 
                var_30 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_20 [i_1 - 1] [i_1 - 2] [i_1 - 2] [i_6])));
                var_31 = ((/* implicit */unsigned char) (~((-(((/* implicit */int) (signed char)-34))))));
            }
            /* LoopSeq 2 */
            for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 2) 
            {
                var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))));
                arr_37 [i_1] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-33)) ? (arr_9 [i_1 - 1] [i_1 + 1] [i_1 - 2]) : (arr_9 [i_1 - 2] [i_1 - 2] [i_1 - 1])));
                var_33 = ((((/* implicit */int) (signed char)-64)) <= (((/* implicit */int) (short)-22960)));
                var_34 = ((/* implicit */unsigned short) arr_0 [i_11]);
            }
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                var_35 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) <= (var_10)))) : (((/* implicit */int) var_2))));
                var_36 = ((/* implicit */_Bool) var_10);
            }
            var_37 = ((/* implicit */short) ((_Bool) arr_11 [i_5] [i_5] [i_5] [i_1 - 1]));
        }
    }
    var_38 = ((/* implicit */long long int) (short)-19);
}

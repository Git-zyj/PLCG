/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112652
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) 3361866U))));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((arr_1 [i_0] [i_0]) >= (arr_1 [i_0] [i_0])));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            arr_6 [(_Bool)1] [(signed char)2] [i_1] = 0ULL;
            arr_7 [i_0] [i_0] |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_1 [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-98))) : (var_8))) ^ (((/* implicit */unsigned long long int) ((unsigned int) var_7)))));
            arr_8 [i_1] [i_1] = ((_Bool) (signed char)-105);
            var_13 *= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])))))) < (((((/* implicit */_Bool) var_1)) ? (arr_5 [i_0] [i_0] [10ULL]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
            arr_9 [i_1] = ((/* implicit */unsigned char) (+(arr_5 [i_1] [i_0] [i_0])));
        }
        for (short i_2 = 1; i_2 < 19; i_2 += 3) 
        {
            arr_13 [(unsigned short)16] [i_0] [i_0] = ((/* implicit */unsigned char) (+(var_5)));
            /* LoopNest 3 */
            for (short i_3 = 0; i_3 < 21; i_3 += 4) 
            {
                for (short i_4 = 3; i_4 < 20; i_4 += 2) 
                {
                    for (unsigned int i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        {
                            arr_22 [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)32767))))) || (arr_10 [i_0])));
                            arr_23 [i_4] [i_4] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                            arr_24 [i_4] = ((/* implicit */unsigned int) (short)-11714);
                        }
                    } 
                } 
            } 
            arr_25 [i_2] [i_0] = ((/* implicit */unsigned int) (short)-11714);
        }
        /* LoopSeq 2 */
        for (unsigned char i_6 = 2; i_6 < 20; i_6 += 1) /* same iter space */
        {
            var_14 += ((/* implicit */signed char) ((unsigned char) ((((/* implicit */int) (signed char)-36)) % (((/* implicit */int) arr_12 [i_0])))));
            /* LoopSeq 1 */
            for (unsigned short i_7 = 1; i_7 < 20; i_7 += 4) 
            {
                arr_31 [i_7] [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_7] [i_7] [0ULL] [i_7] [i_7] [i_7] [i_7 + 1]))) : (var_8))))));
                arr_32 [10LL] = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_7 - 1] [i_7 - 1])) ? (((var_8) >> (((arr_28 [i_7]) - (3803871381U))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)99)) && (((/* implicit */_Bool) var_0))))))));
                arr_33 [i_0] [i_0] = ((/* implicit */short) var_10);
            }
        }
        for (unsigned char i_8 = 2; i_8 < 20; i_8 += 1) /* same iter space */
        {
            arr_37 [i_8] [i_8] = ((arr_21 [i_8 + 1] [i_8 + 1] [i_8 - 1] [i_8 - 2] [i_8 - 1] [i_8 - 1] [i_8 - 1]) && (((/* implicit */_Bool) var_1)));
            var_15 = ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) - (var_3));
        }
    }
    /* vectorizable */
    for (short i_9 = 0; i_9 < 17; i_9 += 4) 
    {
        arr_40 [i_9] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_9]))) > (var_8)));
        arr_41 [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)36)) | (158111424)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14899))) > (var_5)))) : (((/* implicit */int) arr_15 [i_9]))));
    }
    /* LoopNest 2 */
    for (unsigned int i_10 = 0; i_10 < 19; i_10 += 3) 
    {
        for (unsigned short i_11 = 0; i_11 < 19; i_11 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_12 = 1; i_12 < 18; i_12 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_13 = 1; i_13 < 17; i_13 += 1) 
                    {
                        for (unsigned char i_14 = 1; i_14 < 18; i_14 += 2) 
                        {
                            {
                                var_16 ^= ((/* implicit */unsigned int) ((signed char) (-(((((/* implicit */_Bool) var_9)) ? (arr_48 [i_10] [12U]) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))));
                                arr_56 [i_10] = ((/* implicit */long long int) ((((((/* implicit */_Bool) max((arr_18 [10LL] [i_12] [i_11] [i_10]), (((/* implicit */long long int) (unsigned short)14939))))) ? (((((arr_26 [i_10]) + (9223372036854775807LL))) >> (((/* implicit */int) arr_49 [i_10] [i_10] [i_10] [i_10])))) : (((/* implicit */long long int) ((/* implicit */int) (short)32748))))) >= (((/* implicit */long long int) ((((/* implicit */int) ((18446744073709551615ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-36)))))) >> (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (signed char)26))))))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */int) ((((unsigned long long int) (~(var_5)))) | (arr_54 [i_10] [i_10] [i_10] [i_10] [i_10])));
                    /* LoopSeq 2 */
                    for (short i_15 = 2; i_15 < 18; i_15 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_16 = 0; i_16 < 19; i_16 += 4) 
                        {
                            var_18 *= ((/* implicit */unsigned short) (+(((((/* implicit */unsigned long long int) ((((arr_59 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]) + (2147483647))) >> (((var_8) - (8561814077341800856ULL)))))) / (var_4)))));
                            arr_62 [i_10] [7ULL] [i_12] = ((/* implicit */short) -2512772678347057147LL);
                        }
                        arr_63 [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) 7524885221758386695LL)) || (((/* implicit */_Bool) (unsigned short)43730))));
                    }
                    for (unsigned long long int i_17 = 0; i_17 < 19; i_17 += 2) 
                    {
                        var_19 = ((/* implicit */short) (!((!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)68)))))))));
                        arr_66 [i_10] [i_12 - 1] [i_11] [i_10] = ((/* implicit */signed char) (!(max((arr_21 [i_12 + 1] [i_12] [i_12] [i_12 + 1] [i_12 - 1] [i_12] [i_12 - 1]), (arr_21 [i_12 + 1] [(unsigned char)10] [i_12] [i_12 + 1] [i_12] [i_12 + 1] [i_12 + 1])))));
                        arr_67 [i_10] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) >> (((41093393) - (41093384))))) ^ (((/* implicit */int) (short)11722))))), (((((unsigned int) arr_17 [i_10])) >> (((((unsigned int) 3675585567U)) - (3675585556U)))))));
                    }
                }
                var_20 *= ((/* implicit */unsigned long long int) (unsigned short)11888);
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142798
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            var_18 ^= (-2147483647 - 1);
            arr_7 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_0 [i_0])) : (2147483641)))) > (((((/* implicit */_Bool) 2305843009213693952LL)) ? (((/* implicit */unsigned long long int) -2147483647)) : (3112955206770800376ULL)))));
        }
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_3 = 0; i_3 < 24; i_3 += 1) 
            {
                for (long long int i_4 = 1; i_4 < 23; i_4 += 3) 
                {
                    {
                        arr_15 [(short)4] [(unsigned char)2] [i_2] [i_3] [i_4] [i_4] = ((/* implicit */long long int) (~(((/* implicit */int) ((signed char) (~(((/* implicit */int) arr_9 [i_0] [i_2] [i_3]))))))));
                        /* LoopSeq 3 */
                        for (long long int i_5 = 0; i_5 < 24; i_5 += 4) 
                        {
                            arr_18 [i_2] [i_3] [(unsigned char)15] = ((/* implicit */unsigned char) (~(((2305843009213693952LL) >> (((arr_16 [i_4] [i_4] [i_4 + 1] [i_4 + 1] [i_5]) - (2832665794049233450LL)))))));
                            var_19 = ((/* implicit */short) 15726012715522820826ULL);
                            var_20 = ((/* implicit */short) -2147483641);
                        }
                        for (short i_6 = 1; i_6 < 22; i_6 += 4) /* same iter space */
                        {
                            var_21 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_17)) || ((!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0]))))));
                            arr_23 [i_0] [i_2] [i_3] [i_4 - 1] [(unsigned char)23] [i_0] = -2147483647;
                            arr_24 [i_4 + 1] [i_4] [i_4] [i_4 - 1] [i_4] = ((((/* implicit */int) arr_9 [i_0] [9] [i_3])) << (((((/* implicit */int) min((var_13), (((/* implicit */unsigned char) (signed char)-76))))) - (169))));
                            arr_25 [i_0] [i_2] [i_0] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_4 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-81))) : (min((arr_2 [i_4 + 1]), (arr_2 [i_4 + 1])))));
                        }
                        /* vectorizable */
                        for (short i_7 = 1; i_7 < 22; i_7 += 4) /* same iter space */
                        {
                            var_22 *= ((/* implicit */short) ((((arr_12 [(unsigned char)16] [i_4] [i_3]) + (9223372036854775807LL))) << ((((~(var_3))) - (10065340967172252217ULL)))));
                            arr_28 [i_0] [i_2] [i_3] [i_2] [i_7 + 2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-70)) ? (((/* implicit */long long int) (-2147483647 - 1))) : (arr_16 [i_7] [i_7] [i_4] [i_7] [i_7 + 2])))) ? (((((/* implicit */_Bool) 17875726066117818990ULL)) ? (var_11) : (arr_16 [(unsigned char)6] [i_2] [(unsigned char)6] [i_2] [i_2]))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_4))));
                        }
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_15)) ? (((long long int) (~(var_14)))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_26 [i_4 - 1] [i_4] [i_2] [i_2] [i_0] [i_2] [i_0]))))));
                    }
                } 
            } 
            arr_29 [i_0] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((var_15) ^ (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2147483630)))))))))));
            var_24 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((((/* implicit */int) var_13)) ^ (((/* implicit */int) arr_8 [(short)17] [2ULL] [2ULL])))))))));
            arr_30 [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0])))))) <= (arr_10 [i_2])));
        }
    }
    for (signed char i_8 = 0; i_8 < 13; i_8 += 2) 
    {
        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((2147483644) > (2147483643))))));
        /* LoopNest 3 */
        for (signed char i_9 = 3; i_9 < 12; i_9 += 2) 
        {
            for (long long int i_10 = 1; i_10 < 12; i_10 += 2) 
            {
                for (unsigned long long int i_11 = 0; i_11 < 13; i_11 += 1) 
                {
                    {
                        var_26 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)59)) ? ((+(-2147483643))) : (min((max((((/* implicit */int) (signed char)-84)), (-2147483645))), (((/* implicit */int) var_1))))));
                        var_27 = ((/* implicit */short) 2147483643);
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (short i_12 = 0; i_12 < 13; i_12 += 2) 
        {
            var_28 = ((/* implicit */unsigned char) var_4);
            arr_44 [i_8] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) var_0))) ? (((/* implicit */int) min((arr_17 [i_8] [i_8] [(signed char)4] [i_8] [i_8] [i_8]), (((/* implicit */short) var_0))))) : (((/* implicit */int) (signed char)2))));
            var_29 = arr_16 [i_8] [i_8] [i_12] [i_12] [(short)17];
            arr_45 [i_8] [i_12] [i_8] = ((/* implicit */int) (~(var_7)));
            /* LoopSeq 1 */
            for (short i_13 = 0; i_13 < 13; i_13 += 3) 
            {
                arr_50 [i_8] [i_13] [(short)4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_42 [i_8] [i_8] [i_13])) ? (((/* implicit */long long int) (+(((/* implicit */int) (signed char)38))))) : (max((arr_16 [17LL] [17LL] [i_13] [i_12] [12]), (((/* implicit */long long int) arr_42 [i_8] [i_8] [i_13]))))));
                /* LoopNest 2 */
                for (short i_14 = 1; i_14 < 12; i_14 += 3) 
                {
                    for (signed char i_15 = 0; i_15 < 13; i_15 += 4) 
                    {
                        {
                            arr_58 [(unsigned char)1] [i_12] [i_13] [(short)3] [i_15] [i_12] [i_13] = ((/* implicit */long long int) arr_1 [i_14 - 1] [i_8]);
                            var_30 = ((/* implicit */int) ((((/* implicit */_Bool) (+(max((((/* implicit */long long int) arr_3 [0LL])), (arr_16 [7LL] [7LL] [i_13] [i_12] [12LL])))))) || (((/* implicit */_Bool) min((arr_38 [i_14 + 1] [i_14 + 1] [i_14 + 1] [i_14 + 1]), (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_8] [i_8] [i_8]))) : (var_5))))))));
                            arr_59 [(unsigned char)9] [i_13] [i_13] [i_13] [i_8] = ((/* implicit */unsigned char) ((2147483644) - (2147483637)));
                            arr_60 [i_13] [i_13] = ((/* implicit */unsigned long long int) (+(max((8022307126565150420LL), (((/* implicit */long long int) (signed char)53))))));
                            arr_61 [i_8] [i_8] [i_8] [i_13] [i_8] = ((/* implicit */unsigned long long int) var_12);
                        }
                    } 
                } 
                var_31 ^= ((/* implicit */short) var_15);
            }
        }
        for (short i_16 = 0; i_16 < 13; i_16 += 4) 
        {
            var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) var_3))));
            arr_64 [i_8] [(unsigned char)8] = ((/* implicit */signed char) ((((long long int) (signed char)-6)) >= (max((((/* implicit */long long int) max((-2147483630), (var_10)))), ((~(var_11)))))));
        }
    }
    for (long long int i_17 = 0; i_17 < 12; i_17 += 4) 
    {
        var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) (+(-2284001147193645708LL))))));
        arr_67 [i_17] [i_17] = ((/* implicit */unsigned long long int) min(((unsigned char)62), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_1 [i_17] [i_17])))))));
    }
    /* vectorizable */
    for (int i_18 = 1; i_18 < 19; i_18 += 4) 
    {
        var_34 = (short)29018;
        var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) var_1))));
    }
    var_36 = ((/* implicit */int) (~(((min((((/* implicit */unsigned long long int) var_6)), (var_3))) >> (((18446744073709551600ULL) - (18446744073709551569ULL)))))));
    var_37 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) max((var_16), (((/* implicit */int) var_13)))))))) << (((var_7) - (2138480452729972913ULL)))));
}

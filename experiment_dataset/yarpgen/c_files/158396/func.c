/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158396
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
    var_18 = min((min((max((((/* implicit */long long int) (_Bool)1)), (-7744277113268180073LL))), (7744277113268180072LL))), (var_1));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            arr_4 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (short)30840)))))));
            /* LoopSeq 3 */
            for (short i_2 = 2; i_2 < 13; i_2 += 3) 
            {
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (long long int i_4 = 0; i_4 < 15; i_4 += 3) 
                    {
                        {
                            arr_13 [i_0] [i_0] = var_3;
                            var_19 = ((/* implicit */unsigned int) var_14);
                            arr_14 [i_2] [i_0] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_2 - 2] [i_3] [i_4])) && (((/* implicit */_Bool) (-(var_13))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (long long int i_5 = 0; i_5 < 15; i_5 += 3) 
                {
                    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((((-7744277113268180054LL) + (((/* implicit */long long int) ((/* implicit */int) (short)22230))))) + (9223372036854775807LL))) >> (((arr_6 [i_1 - 1] [(_Bool)1] [(_Bool)1]) + (6001475671961278130LL))))))));
                    /* LoopSeq 3 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        arr_22 [i_2] [(_Bool)1] &= (-(var_12));
                        var_21 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_7))));
                        var_22 *= ((/* implicit */unsigned int) var_16);
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        arr_27 [i_0] [i_0] [i_0] [i_0] [14LL] = ((((/* implicit */int) (unsigned char)110)) >= (((/* implicit */int) (_Bool)1)));
                        var_23 = ((/* implicit */long long int) var_9);
                    }
                    for (unsigned char i_8 = 0; i_8 < 15; i_8 += 3) 
                    {
                        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551588ULL))))))))));
                        var_25 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_30 [10LL]))));
                    }
                }
                arr_31 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((var_12) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)145))))) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) == (var_13)))))));
            }
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                arr_36 [i_0] [i_1 - 1] [i_0] [(signed char)4] |= arr_34 [i_0] [i_1] [i_9] [i_1 + 1];
                arr_37 [i_0] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_8)))) ? (7744277113268180053LL) : ((-(7744277113268180031LL)))));
            }
            for (short i_10 = 0; i_10 < 15; i_10 += 3) 
            {
                arr_41 [i_0] [i_0] = ((/* implicit */int) var_6);
                var_26 = ((/* implicit */_Bool) ((arr_18 [(short)7] [i_1 + 2] [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 1]) - (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0])))));
                arr_42 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) arr_32 [i_0] [i_1 + 1] [i_10] [3LL])) : (var_17)));
                arr_43 [i_0] [7ULL] [i_10] = ((/* implicit */short) var_7);
            }
            /* LoopSeq 1 */
            for (unsigned int i_11 = 0; i_11 < 15; i_11 += 3) 
            {
                var_27 = ((/* implicit */long long int) (-(((/* implicit */int) var_15))));
                /* LoopNest 2 */
                for (int i_12 = 2; i_12 < 13; i_12 += 3) 
                {
                    for (short i_13 = 0; i_13 < 15; i_13 += 3) 
                    {
                        {
                            arr_52 [i_0] [i_1] [i_11] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 7744277113268180089LL)) ? (((/* implicit */unsigned long long int) 7744277113268180054LL)) : (27ULL)));
                            var_28 = (+(arr_32 [i_0] [i_12 - 1] [i_1 - 1] [i_12]));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned char i_14 = 0; i_14 < 15; i_14 += 3) 
                {
                    var_29 = (i_0 % 2 == 0) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_24 [i_0] [i_1] [(unsigned char)5] [i_1 + 1] [i_1 - 1] [(unsigned char)5] [i_0])) + (2147483647))) << (((/* implicit */int) var_15))))) : (((/* implicit */unsigned long long int) ((((((((/* implicit */int) arr_24 [i_0] [i_1] [(unsigned char)5] [i_1 + 1] [i_1 - 1] [(unsigned char)5] [i_0])) - (2147483647))) + (2147483647))) << (((/* implicit */int) var_15)))));
                    arr_55 [i_0] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 7744277113268180046LL)))))) < (((((/* implicit */_Bool) (signed char)-66)) ? (arr_38 [i_0] [i_0] [i_11] [i_14]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
                }
            }
            var_30 = (!(((/* implicit */_Bool) arr_9 [i_1] [i_1 - 1] [i_0])));
            arr_56 [i_0] [i_0] = ((/* implicit */_Bool) -2155924963887916576LL);
        }
        for (unsigned int i_15 = 0; i_15 < 15; i_15 += 3) 
        {
            var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) arr_19 [i_0] [10U] [i_0] [i_0] [i_0]))));
            arr_59 [(signed char)10] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((arr_18 [i_15] [i_0] [i_15] [i_15] [i_0] [i_0]) <= (((/* implicit */long long int) ((/* implicit */int) var_9)))))) >= (((/* implicit */int) (signed char)19))));
            /* LoopSeq 1 */
            for (signed char i_16 = 0; i_16 < 15; i_16 += 3) 
            {
                var_32 = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)-20))));
                arr_62 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) : (((/* implicit */int) (unsigned char)134))));
                arr_63 [i_0] [i_15] [i_16] = ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)119)) : (((/* implicit */int) (signed char)19)));
            }
            arr_64 [i_0] [i_0] = (-(var_17));
            arr_65 [i_15] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (short)-22702)) & (((/* implicit */int) (_Bool)1))));
        }
        for (short i_17 = 0; i_17 < 15; i_17 += 3) 
        {
            var_33 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0] [i_17])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_2 [i_17] [i_0]))));
            var_34 ^= ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (short)22702))));
        }
        var_35 *= ((/* implicit */unsigned int) (-(((/* implicit */int) (short)22702))));
    }
    for (signed char i_18 = 0; i_18 < 11; i_18 += 3) 
    {
        var_36 ^= ((/* implicit */unsigned int) ((((var_1) | (((/* implicit */long long int) max((arr_0 [(unsigned char)6] [(unsigned char)6]), (((/* implicit */unsigned int) (signed char)-41))))))) + (var_2)));
        var_37 = ((/* implicit */signed char) min(((_Bool)1), (((((/* implicit */long long int) ((/* implicit */int) (short)30840))) > (-2155924963887916591LL)))));
        arr_70 [i_18] = ((/* implicit */signed char) var_17);
        /* LoopSeq 1 */
        for (signed char i_19 = 0; i_19 < 11; i_19 += 3) 
        {
            var_38 -= (((+(((/* implicit */int) (short)22220)))) <= ((-(2147483647))));
            var_39 += (!(((/* implicit */_Bool) var_7)));
            arr_75 [i_18] [i_19] [i_19] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-45))));
            var_40 = var_8;
        }
        arr_76 [i_18] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)22222)) ? ((~(var_1))) : (min((-2155924963887916576LL), (6758066884887520445LL)))))) || (((/* implicit */_Bool) min((((/* implicit */short) (signed char)-111)), ((short)11563))))));
    }
    var_41 = ((/* implicit */long long int) var_7);
}

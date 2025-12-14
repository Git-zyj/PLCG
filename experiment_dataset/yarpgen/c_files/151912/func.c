/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151912
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
    var_14 = ((/* implicit */unsigned short) (-(min((((var_11) ? (12319901700815815836ULL) : (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) ((var_3) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) var_9);
        arr_4 [i_0] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (+(((long long int) -3317434409602567910LL))))), (((unsigned long long int) max((-2197161321664839239LL), (((/* implicit */long long int) var_6)))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_11 [i_0] [i_2] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */int) ((short) (signed char)-127))) & ((+(((/* implicit */int) var_7))))));
                    arr_12 [i_2] [0] = ((/* implicit */long long int) ((unsigned long long int) max((arr_6 [i_0]), (((int) 12319901700815815836ULL)))));
                    var_15 = ((/* implicit */_Bool) ((unsigned short) (short)-14816));
                }
            } 
        } 
    }
    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 1) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 1) 
        {
            var_16 += ((/* implicit */unsigned char) ((_Bool) (short)14810));
            /* LoopSeq 3 */
            for (signed char i_5 = 0; i_5 < 11; i_5 += 4) 
            {
                arr_20 [i_3] [i_3] [i_4] [(signed char)2] = ((/* implicit */long long int) arr_10 [i_3] [i_4] [i_3] [i_3]);
                arr_21 [i_3] [i_3] [(short)4] = ((/* implicit */unsigned long long int) var_1);
                var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) var_13))));
                var_18 += ((/* implicit */int) var_5);
                arr_22 [i_3] [2U] [i_5] = ((/* implicit */_Bool) ((((6126842372893735779ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) >> (((((int) var_13)) + (1448936875)))));
            }
            for (unsigned int i_6 = 2; i_6 < 8; i_6 += 4) 
            {
                var_19 = ((/* implicit */unsigned short) ((arr_16 [i_6 + 3] [i_6 + 2] [i_6 - 1]) >= (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
                /* LoopSeq 2 */
                for (unsigned long long int i_7 = 1; i_7 < 9; i_7 += 1) 
                {
                    arr_30 [i_3] [10LL] [i_3] [i_7] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_26 [i_6 + 2] [i_7 + 1] [i_6 + 3])) ? (arr_26 [i_6 - 2] [i_7 + 2] [i_6]) : (((/* implicit */int) var_8))));
                    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) var_12))));
                    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_7 [5] [i_4])))) ? (((/* implicit */int) var_7)) : ((-(((/* implicit */int) (signed char)0))))));
                    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_3] [i_4] [i_7 + 1] [i_6])) / (((/* implicit */int) (unsigned short)31)))))));
                }
                for (int i_8 = 3; i_8 < 9; i_8 += 2) 
                {
                    arr_34 [i_3] [i_6] [i_4] [i_3] = ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((((/* implicit */_Bool) (short)14810)) && (((/* implicit */_Bool) arr_14 [i_3]))))));
                    var_23 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) arr_31 [i_4] [i_4] [i_6 + 3])) : (((/* implicit */int) arr_25 [i_3] [i_4] [(short)0] [i_8]))));
                    var_24 &= ((/* implicit */short) (~(arr_14 [i_6 + 2])));
                }
                var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)0)) || (((/* implicit */_Bool) (signed char)127))));
            }
            for (long long int i_9 = 0; i_9 < 11; i_9 += 4) 
            {
                var_26 = ((short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_6))));
                var_27 = ((/* implicit */int) var_6);
            }
        }
        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) /* same iter space */
        {
            var_28 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) (signed char)-1))) ? (((/* implicit */int) ((12319901700815815822ULL) > (((/* implicit */unsigned long long int) 19U))))) : (((/* implicit */int) min((arr_9 [i_3] [i_10] [i_3] [i_10]), (((/* implicit */short) (!(((/* implicit */_Bool) (short)-14810))))))))));
            var_29 = ((/* implicit */_Bool) var_8);
            /* LoopSeq 4 */
            /* vectorizable */
            for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
            {
                arr_44 [i_3] [i_10 - 1] [i_11 - 1] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 614808456)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)31))) : (18446744073709551589ULL)))) || (var_11)));
                arr_45 [i_3] [i_10] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)-1))));
                /* LoopSeq 2 */
                for (int i_12 = 1; i_12 < 10; i_12 += 1) 
                {
                    arr_48 [i_3] [i_3] [i_11] [i_12] = ((/* implicit */_Bool) arr_10 [i_3] [i_10] [9] [i_3]);
                    arr_49 [(signed char)4] [i_10] [i_3] [i_12 + 1] = ((/* implicit */long long int) ((unsigned int) arr_7 [i_10 - 1] [i_12 + 1]));
                    var_30 = (~(2139521949926193377ULL));
                    var_31 = ((/* implicit */_Bool) ((long long int) (-(((/* implicit */int) arr_43 [i_3] [i_10] [i_10] [i_12])))));
                }
                for (short i_13 = 0; i_13 < 11; i_13 += 4) 
                {
                    var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_31 [i_11] [i_11 - 1] [i_11 - 1])) ? (((/* implicit */int) (signed char)-44)) : (((/* implicit */int) arr_31 [i_11] [i_11 - 1] [i_11]))));
                    var_33 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_10 [i_3] [i_3] [i_3] [i_3]))));
                    var_34 = arr_41 [i_10] [i_3] [i_11 - 1] [i_13];
                    arr_52 [i_3] = ((/* implicit */_Bool) (+(((/* implicit */int) var_2))));
                    var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) ((_Bool) arr_23 [i_11 - 1] [i_11 - 1] [i_10 - 1] [i_10 - 1])))));
                }
            }
            for (unsigned int i_14 = 0; i_14 < 11; i_14 += 1) 
            {
                var_36 = ((/* implicit */signed char) ((((var_3) > (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (unsigned short)11)))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) (unsigned short)27069)) < (((/* implicit */int) arr_39 [i_3] [i_10])))))))) : ((-(arr_1 [(unsigned char)9])))));
                arr_56 [i_3] = ((/* implicit */unsigned int) (+(((/* implicit */int) min((var_2), (((/* implicit */short) ((2197161321664839238LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)27066)))))))))));
                arr_57 [i_3] [(signed char)0] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7))))), (((((/* implicit */unsigned int) ((/* implicit */int) (short)-14820))) * (arr_53 [i_10 - 1])))));
            }
            /* vectorizable */
            for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
            {
                arr_60 [i_3] [i_10] [i_3] [i_15] = ((_Bool) ((-104004145) <= (((/* implicit */int) var_2))));
                var_37 -= ((/* implicit */_Bool) ((unsigned int) -947964239));
            }
            for (short i_16 = 0; i_16 < 11; i_16 += 1) 
            {
                arr_64 [8LL] [(_Bool)1] [(short)2] |= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((short) 8430790119449242075LL))), (((((/* implicit */_Bool) -2197161321664839239LL)) ? (arr_59 [i_10 - 1] [i_10 - 1] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_10 - 1])))))));
                arr_65 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) -1390701030)) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (var_10))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) arr_26 [i_16] [i_10] [i_3])) : (2197161321664839250LL))))));
                var_38 = (~(((((/* implicit */_Bool) var_9)) ? (arr_28 [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [(_Bool)1])))))))));
            }
        }
        for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) /* same iter space */
        {
            arr_68 [(_Bool)1] [6] [(_Bool)1] &= (+(((/* implicit */int) arr_25 [0ULL] [(unsigned char)2] [0ULL] [2])));
            var_39 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */unsigned int) 280466499)) ^ (2214053222U))));
        }
        var_40 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) min((var_3), (var_13)))) ? (((/* implicit */int) ((((/* implicit */long long int) var_0)) != (arr_23 [i_3] [i_3] [i_3] [i_3])))) : ((~(((/* implicit */int) var_8)))))));
    }
}

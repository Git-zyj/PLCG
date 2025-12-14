/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127930
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
    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) (+(((935508754) + (((/* implicit */int) (signed char)75)))))))));
    var_16 |= ((/* implicit */unsigned long long int) ((var_1) != (var_5)));
    var_17 ^= ((/* implicit */unsigned short) var_10);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 22; i_2 += 4) 
            {
                for (unsigned char i_3 = 3; i_3 < 21; i_3 += 4) 
                {
                    {
                        var_18 = var_11;
                        var_19 = ((/* implicit */unsigned char) ((signed char) (+(arr_0 [i_0] [i_2 - 1]))));
                        arr_9 [i_0] [5LL] [5LL] [i_3] = ((/* implicit */unsigned long long int) max(((+(3902548673342701634LL))), (((/* implicit */long long int) (unsigned short)0))));
                        arr_10 [i_0] [i_2] [i_2] [i_0] [i_0] [i_0] = (-(((((/* implicit */long long int) ((/* implicit */int) var_6))) % (var_1))));
                    }
                } 
            } 
        } 
        var_20 *= ((/* implicit */unsigned long long int) arr_2 [i_0]);
        arr_11 [i_0] [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (signed char)-100)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-3))) : (3205727715U)))));
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        arr_15 [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) arr_5 [i_4] [6LL] [i_4] [i_4])))));
        var_21 *= ((/* implicit */signed char) (-(var_13)));
        /* LoopSeq 1 */
        for (signed char i_5 = 0; i_5 < 24; i_5 += 3) 
        {
            arr_18 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [i_4])) ? (((/* implicit */unsigned long long int) var_0)) : (((var_13) + (((/* implicit */unsigned long long int) arr_6 [(signed char)19] [(signed char)19] [i_5] [(signed char)19]))))));
            /* LoopSeq 2 */
            for (long long int i_6 = 0; i_6 < 24; i_6 += 3) 
            {
                arr_23 [i_4] [i_5] [0LL] [0LL] |= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) 1162017473U)) : (-4897615635985883947LL)))) < (((arr_14 [(unsigned char)7]) ^ (((/* implicit */unsigned long long int) arr_0 [(short)10] [(short)10]))))));
                arr_24 [i_4] [(signed char)4] [(signed char)4] = ((/* implicit */unsigned int) arr_13 [i_6]);
                var_22 = ((/* implicit */signed char) ((arr_6 [i_5] [i_6] [i_5] [i_4]) <= (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                arr_25 [i_4] [i_4] [i_4] = ((/* implicit */short) (+(arr_6 [i_4] [i_5] [i_6] [i_4])));
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 4) 
                {
                    for (signed char i_8 = 0; i_8 < 24; i_8 += 2) 
                    {
                        {
                            var_23 ^= ((/* implicit */signed char) var_14);
                            var_24 |= ((/* implicit */int) (!(((/* implicit */_Bool) var_11))));
                            var_25 = ((/* implicit */unsigned short) 3373761381U);
                        }
                    } 
                } 
            }
            for (unsigned long long int i_9 = 3; i_9 < 22; i_9 += 4) 
            {
                var_26 = ((/* implicit */long long int) min((var_26), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -3902548673342701610LL)) ? (3038280802U) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_4] [i_5]))) : (((var_11) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-100)))))))));
                arr_33 [i_4] [i_5] [i_5] [(signed char)22] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)75))) / (3742684899U))) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-100)))));
                var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) arr_1 [i_4] [i_4]))));
            }
            arr_34 [i_4] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */int) var_6)) + (((/* implicit */int) arr_8 [i_4] [i_4] [i_4] [i_4] [i_4]))));
            var_28 = ((long long int) var_1);
        }
        var_29 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_4] [i_4]))) < (var_13)))) <= (((/* implicit */int) ((signed char) (signed char)-96)))));
        /* LoopSeq 1 */
        for (short i_10 = 0; i_10 < 24; i_10 += 2) 
        {
            arr_39 [i_4] = ((((/* implicit */_Bool) (signed char)-66)) || (((/* implicit */_Bool) -1775571383638764830LL)));
            arr_40 [i_4] [i_4] = ((((/* implicit */int) var_6)) + (((/* implicit */int) (signed char)(-127 - 1))));
            /* LoopNest 3 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                for (long long int i_12 = 0; i_12 < 24; i_12 += 4) 
                {
                    for (short i_13 = 1; i_13 < 23; i_13 += 2) 
                    {
                        {
                            var_30 = ((/* implicit */long long int) arr_30 [i_13 - 1] [i_13 + 1]);
                            var_31 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (unsigned short)511)))) || (((/* implicit */_Bool) var_5))));
                            var_32 |= ((/* implicit */_Bool) (-(3902548673342701634LL)));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned long long int i_14 = 0; i_14 < 24; i_14 += 3) 
            {
                arr_55 [20U] [i_10] [i_4] [i_4] = ((/* implicit */long long int) ((((((((/* implicit */_Bool) arr_43 [i_10])) ? (((/* implicit */int) arr_48 [i_4] [i_10] [i_14] [i_4] [i_10] [(signed char)13] [i_10])) : (((/* implicit */int) (unsigned short)46526)))) + (2147483647))) << (((((unsigned long long int) var_1)) - (10682906904289699913ULL)))));
                /* LoopSeq 1 */
                for (unsigned long long int i_15 = 3; i_15 < 23; i_15 += 2) 
                {
                    arr_58 [i_4] [i_10] [i_14] [i_15] [i_10] [i_14] = ((/* implicit */_Bool) var_6);
                    /* LoopSeq 1 */
                    for (short i_16 = 0; i_16 < 24; i_16 += 4) 
                    {
                        arr_61 [i_15] [i_16] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_4] [i_4])) ? (((/* implicit */int) arr_3 [i_4] [i_4] [i_15])) : (((/* implicit */int) var_12))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -476834243)))))) : (((((/* implicit */_Bool) 552282406U)) ? (arr_12 [i_4] [i_4]) : (((/* implicit */unsigned int) -1445857882))))));
                        arr_62 [i_4] [i_15] [i_4] [i_4] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (-3902548673342701641LL) : (((/* implicit */long long int) arr_7 [i_10] [i_10] [i_15 + 1] [i_15]))));
                        var_33 ^= ((/* implicit */_Bool) (+(((/* implicit */int) arr_53 [i_4] [i_15 - 2]))));
                    }
                }
                arr_63 [4U] [i_14] = ((/* implicit */unsigned char) ((unsigned short) 0ULL));
            }
            arr_64 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3902548673342701648LL)) ? (2536804160U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_49 [i_10] [i_10] [i_10])))));
        }
    }
}

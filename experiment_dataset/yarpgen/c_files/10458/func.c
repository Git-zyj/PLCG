/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10458
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_15 = ((/* implicit */signed char) (+(34634616274944ULL)));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            var_16 = ((/* implicit */signed char) arr_4 [i_1 + 2] [i_1 + 1] [i_1]);
            arr_7 [i_0] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_8))));
            var_17 = ((/* implicit */unsigned long long int) arr_6 [i_0]);
            var_18 = ((/* implicit */short) (~((+(((/* implicit */int) var_13))))));
        }
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) 30303523))));
            var_20 -= ((/* implicit */unsigned short) ((var_1) ^ (((((/* implicit */_Bool) arr_10 [i_2 - 1] [i_0])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
        }
        for (unsigned int i_3 = 2; i_3 < 21; i_3 += 1) 
        {
            var_21 = ((/* implicit */unsigned short) ((unsigned char) ((((int) var_2)) / (((((/* implicit */_Bool) arr_8 [i_3])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)32767)))))));
            var_22 &= ((/* implicit */unsigned short) ((long long int) (signed char)0));
            var_23 |= ((/* implicit */signed char) min((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)249))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [2LL] [i_0])) || (((/* implicit */_Bool) arr_11 [i_3] [(signed char)17]))))) : (arr_1 [i_3 - 1] [i_3 - 2]))), (((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_4 [i_3] [i_0] [i_0])))))))));
            var_24 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) arr_12 [i_3] [i_3 - 2])) + (((/* implicit */int) arr_12 [i_3 + 1] [i_3 + 1])))));
            var_25 = ((/* implicit */unsigned long long int) min((var_25), (((((/* implicit */_Bool) min((((/* implicit */long long int) arr_5 [i_0] [i_0])), (arr_4 [i_3 - 2] [i_3 + 1] [i_3])))) ? (arr_9 [i_0]) : (((/* implicit */unsigned long long int) arr_8 [i_3]))))));
        }
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 1) 
    {
        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) (!(var_13))))));
        var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_4] [i_4] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)174))) : (arr_4 [i_4] [i_4] [i_4])));
    }
    /* vectorizable */
    for (unsigned char i_5 = 0; i_5 < 15; i_5 += 1) 
    {
        arr_20 [i_5] = ((/* implicit */unsigned short) arr_10 [i_5] [i_5]);
        arr_21 [i_5] [i_5] = ((/* implicit */unsigned int) (-(arr_8 [i_5])));
        arr_22 [i_5] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_5] [i_5])) ? (arr_13 [i_5] [i_5]) : (arr_13 [i_5] [i_5])));
        /* LoopSeq 2 */
        for (signed char i_6 = 1; i_6 < 14; i_6 += 1) /* same iter space */
        {
            var_28 = ((/* implicit */unsigned char) (-(-3486449312639427814LL)));
            var_29 = ((/* implicit */signed char) arr_0 [i_6 - 1]);
            /* LoopNest 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (short i_8 = 0; i_8 < 15; i_8 += 4) 
                {
                    {
                        var_30 -= ((/* implicit */unsigned int) ((arr_19 [i_6 + 1] [i_6 + 1]) & ((-(3383933122310332947ULL)))));
                        /* LoopSeq 3 */
                        for (short i_9 = 2; i_9 < 13; i_9 += 2) 
                        {
                            var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) (+(18064271385342974958ULL))))));
                            var_32 = ((/* implicit */int) (unsigned short)65535);
                            arr_34 [5U] [(unsigned char)3] [(unsigned char)3] [i_6 - 1] [i_5] = ((/* implicit */unsigned char) (-(arr_4 [i_9] [i_9] [i_6 + 1])));
                            arr_35 [i_9] [i_8] [i_7] [i_5] [i_5] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)65535))));
                        }
                        for (short i_10 = 0; i_10 < 15; i_10 += 2) 
                        {
                            var_33 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_29 [(unsigned char)11]))));
                            var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) arr_27 [6ULL] [(unsigned char)11] [i_5] [i_5]))));
                            var_35 = ((/* implicit */signed char) ((arr_4 [10ULL] [i_7] [i_6 + 1]) <= (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_6 + 1] [i_6 + 1] [i_6 - 1])))));
                            var_36 = ((/* implicit */signed char) (+(((/* implicit */int) arr_30 [i_6 + 1] [i_6 - 1] [i_6] [i_6] [i_6] [i_6 - 1] [i_6]))));
                        }
                        for (unsigned char i_11 = 1; i_11 < 11; i_11 += 1) 
                        {
                            var_37 = ((/* implicit */short) (+(((/* implicit */int) arr_5 [i_8] [i_6 + 1]))));
                            var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (3383933122310332947ULL) : (5105304606702676658ULL)))) ? (((/* implicit */unsigned int) arr_8 [i_6 + 1])) : (arr_25 [i_6 + 1] [i_6] [i_6 + 1])));
                            var_39 = arr_10 [i_5] [i_5];
                        }
                        /* LoopSeq 1 */
                        for (short i_12 = 0; i_12 < 15; i_12 += 1) 
                        {
                            var_40 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)9896)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))));
                            var_41 = (-(arr_43 [i_12] [i_8] [i_7] [i_6] [12U]));
                            arr_44 [i_12] [(signed char)5] [i_5] [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_41 [i_12] [i_8] [i_7] [i_6] [i_8] [i_5]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (arr_32 [i_12] [i_12] [i_12] [i_6 + 1] [i_5])));
                        }
                        var_42 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_31 [i_8] [9] [i_8] [(unsigned short)8] [i_7] [i_6 - 1]))));
                    }
                } 
            } 
            var_43 = ((/* implicit */short) (!(((/* implicit */_Bool) 15062810951399218669ULL))));
        }
        for (signed char i_13 = 1; i_13 < 14; i_13 += 1) /* same iter space */
        {
            var_44 *= ((/* implicit */signed char) ((unsigned char) arr_8 [i_13 - 1]));
            var_45 &= ((/* implicit */signed char) (+(var_5)));
            var_46 = ((15062810951399218668ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (unsigned char)59)))));
        }
        var_47 ^= ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_1)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_5] [i_5] [4U] [i_5] [i_5] [i_5])))))));
    }
    var_48 *= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_10)), (var_12)));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133049
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
    var_12 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 2080374784U))))))))));
            var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((14670767015093225799ULL) / (((/* implicit */unsigned long long int) -5656312598023478191LL)))))));
            arr_6 [i_1] [16ULL] [i_0] = ((/* implicit */unsigned int) (+((((!(((/* implicit */_Bool) var_1)))) ? (var_4) : (((/* implicit */unsigned long long int) 1859374392064326360LL))))));
            arr_7 [i_0] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */int) max((((/* implicit */unsigned short) arr_2 [i_0 + 3])), (var_0)))) * (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (arr_2 [i_0 + 3]))))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned int i_3 = 1; i_3 < 18; i_3 += 1) 
            {
                arr_13 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2160430147U)) ? (-9075620737170347769LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
                var_15 ^= ((/* implicit */long long int) (+(arr_5 [i_3 + 3] [i_0 + 1])));
                var_16 *= ((/* implicit */signed char) ((((((/* implicit */int) arr_1 [i_0])) ^ (((/* implicit */int) var_9)))) >> (((((((/* implicit */_Bool) var_6)) ? (402653184U) : (var_3))) - (402653184U)))));
                arr_14 [i_0] [i_2] [i_0] = ((/* implicit */unsigned int) arr_12 [(_Bool)1] [(_Bool)1] [(_Bool)1]);
            }
            for (int i_4 = 0; i_4 < 22; i_4 += 2) 
            {
                var_17 ^= ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_8 [i_0 - 1] [i_0 + 2])) : (((/* implicit */int) var_6))))), (((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0 + 2] [i_0 - 1]))) / (9075620737170347769LL)))));
                arr_17 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)364))))) ? (arr_10 [i_0]) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_8 [i_0] [i_2])))))))) : (max((arr_12 [i_0 + 1] [i_0 + 3] [i_0 + 2]), (((/* implicit */unsigned long long int) (~(-3570284388145068308LL))))))));
                var_18 = ((/* implicit */int) min((var_18), ((+(((/* implicit */int) ((18446744073709551615ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)13501))))))))));
                var_19 = ((/* implicit */long long int) var_1);
            }
            for (short i_5 = 0; i_5 < 22; i_5 += 1) 
            {
                arr_20 [i_0 + 2] [i_2] [i_2] [i_0 + 2] = ((/* implicit */long long int) min((arr_10 [i_5]), (((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) 2160430147U)) ? (((/* implicit */int) (signed char)1)) : (801951011)))))));
                arr_21 [2U] [3ULL] [5ULL] [3ULL] = ((/* implicit */unsigned int) min(((+(arr_12 [i_0 + 3] [i_0 + 3] [i_5]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_0 + 1] [i_0 + 1] [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)-365)) < (((/* implicit */int) (_Bool)0)))))) : ((~(3570284388145068306LL))))))));
                /* LoopNest 2 */
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    for (unsigned int i_7 = 0; i_7 < 22; i_7 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))));
                            var_21 ^= ((/* implicit */unsigned int) (+((+(((/* implicit */int) (short)14366))))));
                            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (~(arr_3 [i_0] [i_2] [i_2]))))));
                        }
                    } 
                } 
            }
            var_23 |= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) 18446744073709551615ULL)))) ? (max((((/* implicit */long long int) max((arr_3 [i_0] [i_2] [i_0]), (var_1)))), (7651058865419397692LL))) : (((/* implicit */long long int) (+(2944960053U))))));
        }
        /* vectorizable */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)28299)))))));
            /* LoopNest 2 */
            for (long long int i_9 = 2; i_9 < 20; i_9 += 2) 
            {
                for (long long int i_10 = 0; i_10 < 22; i_10 += 2) 
                {
                    {
                        var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((((/* implicit */long long int) 2214592512U)) <= (arr_30 [i_9 - 1]))))));
                        var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) arr_24 [i_0] [i_10] [i_9] [i_10] [i_10]))));
                        var_27 = ((((((/* implicit */_Bool) 6860516407801770380ULL)) ? (2160430175U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) >> ((((-(arr_15 [i_0] [18U] [i_0] [(_Bool)1]))) - (4222682674U))));
                        var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_9 - 2] [i_9 - 2]))) > (arr_12 [i_9 - 2] [i_9] [i_0 + 2]))))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                for (short i_12 = 3; i_12 < 19; i_12 += 2) 
                {
                    for (signed char i_13 = 0; i_13 < 22; i_13 += 4) 
                    {
                        {
                            var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) ((((/* implicit */int) arr_4 [i_0 + 2] [i_0 + 3] [i_12 - 2])) * (((/* implicit */int) arr_4 [i_0 + 2] [i_0 + 3] [i_12 - 3])))))));
                            var_30 ^= ((/* implicit */short) var_11);
                            var_31 = ((/* implicit */unsigned char) 2080374783U);
                            var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 4056993689U)) && (((/* implicit */_Bool) (signed char)81)))))));
                        }
                    } 
                } 
            } 
        }
        /* LoopNest 3 */
        for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
        {
            for (unsigned short i_15 = 1; i_15 < 21; i_15 += 1) 
            {
                for (short i_16 = 0; i_16 < 22; i_16 += 1) 
                {
                    {
                        var_33 ^= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (-(((unsigned int) var_9))))) < (min((arr_30 [i_0 - 1]), (arr_30 [i_0 + 2])))));
                        arr_52 [i_14] [i_14] [i_15] [i_15] [i_15] [i_14] = ((/* implicit */signed char) max((27ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1331867265U)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 1331867265U)) ? (arr_10 [i_0]) : (((/* implicit */unsigned int) arr_50 [i_0 + 1] [i_14] [i_0 + 1]))))) : (var_10))))));
                        var_34 -= ((/* implicit */signed char) min(((+((-(2134537112U))))), (((/* implicit */unsigned int) max(((unsigned char)126), ((unsigned char)195))))));
                        arr_53 [i_16] [i_15] [i_15] [0ULL] [i_0] [i_0] = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) 5656312598023478191LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_9)) == (((/* implicit */int) (unsigned short)12288)))))) : (arr_37 [i_0] [i_0] [i_14] [i_15 - 1] [i_16]))));
                    }
                } 
            } 
        } 
        var_35 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0] [i_0 - 1] [(unsigned short)15])) ? (arr_16 [i_0] [i_0 - 1] [i_0]) : (((/* implicit */unsigned long long int) 2214592512U)))))));
        var_36 ^= ((/* implicit */_Bool) ((unsigned int) 5656312598023478190LL));
    }
    var_37 = ((/* implicit */int) ((short) var_6));
}

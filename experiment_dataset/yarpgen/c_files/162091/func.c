/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162091
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
    var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((long long int) min(((~(((/* implicit */int) (unsigned char)76)))), (((/* implicit */int) ((unsigned char) (unsigned char)193)))))))));
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) ((unsigned long long int) arr_2 [i_0]))))))));
        var_18 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)48))));
        var_19 = ((/* implicit */signed char) (unsigned char)208);
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_0 [i_0])) >= (5602672382974975519ULL)))), (min((var_8), (((/* implicit */long long int) arr_2 [i_0]))))))) ? (min((2064384), (((/* implicit */int) (unsigned char)78)))) : (min(((~(((/* implicit */int) (unsigned char)57)))), (((/* implicit */int) max(((unsigned char)15), ((unsigned char)75))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_2 = 1; i_2 < 17; i_2 += 3) /* same iter space */
        {
            var_21 -= ((/* implicit */long long int) max(((~(((/* implicit */int) arr_3 [i_2 + 2])))), (((/* implicit */int) max((arr_3 [i_2 - 1]), (arr_3 [i_2 - 1]))))));
            arr_8 [13LL] [(unsigned short)2] [i_2 - 1] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (min((arr_6 [i_1] [i_2]), (((/* implicit */unsigned long long int) var_12)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))))), (((/* implicit */unsigned long long int) ((unsigned char) min(((signed char)-120), (((/* implicit */signed char) var_3))))))));
        }
        for (unsigned char i_3 = 1; i_3 < 17; i_3 += 3) /* same iter space */
        {
            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) min((((/* implicit */long long int) (-(((/* implicit */int) var_11))))), (-5433737992300567486LL))))));
            arr_11 [i_1] [i_1] = ((/* implicit */short) max((((/* implicit */unsigned int) (+(((/* implicit */int) arr_7 [i_1] [i_3 + 1]))))), ((-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (var_7)))))));
            var_23 = ((/* implicit */unsigned long long int) 7279677967779202463LL);
            var_24 = ((/* implicit */long long int) ((min((arr_6 [i_3] [i_3 + 1]), (arr_6 [i_1] [i_3]))) | (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) >= (var_4))) ? (((((/* implicit */int) (_Bool)0)) >> (((/* implicit */int) (unsigned char)0)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_9 [i_1])) <= (arr_5 [i_1])))))))));
            var_25 = ((/* implicit */unsigned char) ((short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), (arr_3 [i_1])))))));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_26 = ((int) arr_12 [i_1] [i_4]);
            /* LoopSeq 4 */
            for (signed char i_5 = 0; i_5 < 19; i_5 += 3) 
            {
                arr_17 [i_1] [i_4] [i_4] [i_5] = ((/* implicit */unsigned short) max((max((arr_10 [i_1]), (var_14))), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_5] [i_4])) >> (((var_6) - (17778465386261367593ULL)))))) && (((/* implicit */_Bool) arr_6 [i_1] [i_1])))))));
                var_27 |= (unsigned char)44;
            }
            for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 1) 
            {
                var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) ((((/* implicit */_Bool) max(((~(var_10))), (max((((/* implicit */long long int) (unsigned char)24)), (var_5)))))) ? (max((max((((/* implicit */unsigned long long int) arr_18 [i_1] [i_1] [i_1] [i_1])), (arr_5 [i_1]))), (((/* implicit */unsigned long long int) arr_13 [i_1] [i_4] [i_4])))) : ((((~(arr_4 [i_1] [i_4]))) >> (((((16507318068876253293ULL) & (((/* implicit */unsigned long long int) var_1)))) - (562073686ULL))))))))));
                var_29 = ((/* implicit */unsigned short) (~((((-(((/* implicit */int) var_3)))) / (((/* implicit */int) var_14))))));
            }
            /* vectorizable */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(-1902160462)))) ? (arr_21 [i_7] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned char)62))))));
                var_31 = ((/* implicit */short) var_7);
            }
            for (unsigned short i_8 = 2; i_8 < 15; i_8 += 3) 
            {
                arr_24 [i_8] = ((/* implicit */signed char) ((unsigned char) (unsigned char)204));
                arr_25 [i_8] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned char) (~(arr_15 [i_1] [i_1])))))));
                var_32 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)66))));
            }
        }
        var_33 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) -2064385)) ? (((/* implicit */int) var_12)) : (-2064385)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 6879098501574026983LL)))) : (((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1]))) ^ (-7279677967779202464LL))))) << ((~((~(((/* implicit */int) (_Bool)1)))))));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 19; i_9 += 3) 
        {
            for (long long int i_10 = 3; i_10 < 18; i_10 += 2) 
            {
                {
                    var_34 = ((/* implicit */unsigned char) (-(((/* implicit */int) max((arr_23 [i_10 - 1] [i_10 + 1] [i_10]), (arr_23 [i_10 + 1] [i_10 - 3] [i_10 - 3]))))));
                    var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) -7279677967779202473LL)))))));
                }
            } 
        } 
        arr_30 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)133))) | (max(((~(arr_16 [i_1] [i_1]))), (((/* implicit */long long int) ((unsigned char) (short)28873)))))));
    }
    for (short i_11 = 2; i_11 < 13; i_11 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_12 = 0; i_12 < 14; i_12 += 4) 
        {
            for (int i_13 = 0; i_13 < 14; i_13 += 4) 
            {
                {
                    var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) min((((/* implicit */int) ((((/* implicit */int) arr_23 [i_11 - 2] [i_11 + 1] [i_11 - 1])) >= (arr_33 [i_11 - 2] [i_11 - 1])))), (max((arr_33 [i_11 - 1] [i_11 - 1]), (arr_33 [i_11 - 1] [i_11 + 1]))))))));
                    var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 11277241032239041880ULL)) ? (((/* implicit */unsigned long long int) var_7)) : (var_6))))))) / (((((((/* implicit */_Bool) var_2)) ? (arr_27 [i_11] [i_11] [i_13]) : (((/* implicit */int) arr_13 [i_13] [i_12] [i_12])))) ^ (arr_9 [i_11]))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_14 = 2; i_14 < 12; i_14 += 3) 
        {
            for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
            {
                {
                    var_38 = ((/* implicit */long long int) ((int) (!((_Bool)1))));
                    arr_45 [i_11 - 2] [i_14] [i_14] [i_15] = ((/* implicit */unsigned char) ((unsigned long long int) min((((int) -7279677967779202464LL)), (arr_33 [i_15 - 1] [i_14 - 1]))));
                    var_39 = ((/* implicit */unsigned char) (+(min((((/* implicit */long long int) ((unsigned char) 18446744073709551615ULL))), (((((/* implicit */_Bool) 10051810711512871009ULL)) ? (((/* implicit */long long int) -1502241858)) : (arr_16 [i_11 - 1] [i_11 - 1])))))));
                    arr_46 [i_11] [i_11] [i_11 - 2] [i_11] = ((/* implicit */unsigned short) var_9);
                }
            } 
        } 
    }
    for (unsigned long long int i_16 = 0; i_16 < 18; i_16 += 4) 
    {
        arr_50 [i_16] = ((/* implicit */short) arr_16 [i_16] [i_16]);
        var_40 = ((/* implicit */int) -6590165858703063019LL);
        arr_51 [i_16] = ((/* implicit */long long int) ((((long long int) ((((/* implicit */_Bool) arr_48 [i_16])) ? (-1) : (arr_9 [i_16])))) > (((/* implicit */long long int) ((((int) var_6)) ^ (((/* implicit */int) arr_13 [18ULL] [i_16] [18ULL])))))));
        var_41 -= ((/* implicit */_Bool) min((((/* implicit */long long int) -1827957780)), (min((max((arr_16 [i_16] [i_16]), (((/* implicit */long long int) (short)-22829)))), (((/* implicit */long long int) var_13))))));
    }
    var_42 = ((/* implicit */long long int) ((((max((var_7), (var_7))) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)42215))))) >= (((/* implicit */unsigned int) ((((-1827957772) ^ (((/* implicit */int) var_3)))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))))));
}

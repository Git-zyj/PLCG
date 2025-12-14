/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106504
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
    var_15 = ((/* implicit */unsigned long long int) var_0);
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 22; i_1 += 4) /* same iter space */
        {
            var_16 &= ((/* implicit */int) (((+(var_14))) < (((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_1])))))));
            var_17 = ((((/* implicit */int) var_13)) ^ (-1079948766));
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 21; i_2 += 3) 
            {
                for (int i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    {
                        var_18 &= ((((/* implicit */_Bool) 1469891642)) ? (((/* implicit */int) (unsigned short)25071)) : (arr_6 [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]));
                        var_19 = ((/* implicit */short) (+(18446744073709551590ULL)));
                        var_20 = ((1469891646) / (-1587124530));
                    }
                } 
            } 
            var_21 -= ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)0))));
            /* LoopNest 3 */
            for (unsigned int i_4 = 0; i_4 < 22; i_4 += 4) 
            {
                for (long long int i_5 = 0; i_5 < 22; i_5 += 4) 
                {
                    for (unsigned int i_6 = 0; i_6 < 22; i_6 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */int) 30ULL);
                            var_23 = (-(arr_5 [i_0] [i_0] [i_0]));
                            var_24 ^= ((/* implicit */int) ((((/* implicit */int) arr_20 [i_1] [i_5] [i_1] [i_1])) <= (1469891650)));
                            var_25 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 234881024)) ? (29ULL) : (((/* implicit */unsigned long long int) var_8)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)48752)))));
                        }
                    } 
                } 
            } 
        }
        for (int i_7 = 0; i_7 < 22; i_7 += 4) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 22; i_8 += 4) 
            {
                for (int i_9 = 2; i_9 < 19; i_9 += 2) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3U)) ? (-828121197) : (-1036794147)))) || (((/* implicit */_Bool) 21ULL)))))));
                            var_27 ^= ((/* implicit */unsigned int) (-(-234881025)));
                            var_28 = ((/* implicit */int) min((var_28), ((~(((/* implicit */int) (unsigned short)23432))))));
                            arr_31 [(unsigned short)0] [(unsigned short)0] [i_7] [i_9 + 3] [(unsigned short)0] [(unsigned short)0] &= ((/* implicit */long long int) (~(18446744073709551585ULL)));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 22; i_12 += 2) 
                {
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0] [i_7] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17658))) : (var_7)))))))));
                            arr_40 [i_0] [i_7] [i_7] [i_12] [i_0] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_13)) ? (-1469891653) : (37919562)))));
                            var_30 = ((/* implicit */unsigned short) (+((-(arr_26 [i_0] [i_0] [i_11])))));
                            var_31 |= ((/* implicit */int) ((((/* implicit */unsigned int) var_0)) - (arr_33 [i_11])));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned long long int i_14 = 0; i_14 < 22; i_14 += 2) 
                {
                    var_32 ^= ((/* implicit */long long int) (+(25ULL)));
                    var_33 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [i_0] [i_7] [i_14]))));
                    var_34 = ((/* implicit */unsigned int) (~(14ULL)));
                }
                for (unsigned int i_15 = 1; i_15 < 20; i_15 += 4) 
                {
                    var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)32525)) ? (((/* implicit */unsigned long long int) -1142697103)) : (18446744073709551573ULL)));
                    var_36 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) -234881001)))) == (14ULL)));
                    var_37 += ((/* implicit */_Bool) (~(var_8)));
                    arr_48 [i_0] [i_0] [i_0] [i_0] = (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)14))))));
                }
                for (int i_16 = 0; i_16 < 22; i_16 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_17 = 0; i_17 < 22; i_17 += 2) 
                    {
                        var_38 = ((/* implicit */short) ((var_7) == (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))));
                        var_39 = ((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) 23ULL)))));
                        var_40 += ((/* implicit */long long int) (((~(-1969750845))) | (((var_6) ^ (1142697105)))));
                    }
                    arr_55 [i_0] [i_0] [i_7] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (+(arr_17 [i_0] [i_7] [i_7] [i_16] [i_16])));
                }
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 22; i_18 += 3) 
                {
                    for (unsigned short i_19 = 0; i_19 < 22; i_19 += 2) 
                    {
                        {
                            var_41 |= ((/* implicit */unsigned short) ((arr_41 [i_18]) / (((((/* implicit */long long int) 2147483392)) - (3508720165007416449LL)))));
                            var_42 ^= ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
                            arr_62 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) (-(arr_41 [i_0])));
                        }
                    } 
                } 
            }
        }
        var_43 = ((/* implicit */int) max((var_43), (((/* implicit */int) ((((/* implicit */_Bool) arr_58 [i_0] [16ULL] [i_0] [16ULL] [i_0] [i_0])) ? (arr_43 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) 845931474)))))));
        var_44 += ((/* implicit */long long int) (+(((/* implicit */int) ((41ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)34307))))))));
    }
    var_45 -= ((/* implicit */int) (~(min((((/* implicit */unsigned long long int) ((-9177737238819887649LL) <= (((/* implicit */long long int) 234881022))))), (11625047881217831133ULL)))));
}

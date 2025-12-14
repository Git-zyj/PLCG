/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184179
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
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)37770)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-86))) : (9223372036854775801LL)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_12 |= ((/* implicit */short) (+(((/* implicit */int) ((unsigned short) arr_0 [i_0] [i_0])))));
        var_13 = ((/* implicit */short) arr_0 [i_0] [i_0]);
        arr_3 [i_0] = ((/* implicit */short) (-(-1462348917818265524LL)));
        var_14 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 924185310275169689LL)) ? (var_0) : (9223372036854775807LL)))) ? ((+(((/* implicit */int) var_7)))) : (((/* implicit */int) arr_2 [i_0]))));
        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) << (((((/* implicit */int) arr_0 [i_0] [i_0])) - (48183)))))) && (((/* implicit */_Bool) arr_1 [(unsigned short)15]))));
    }
    /* LoopSeq 1 */
    for (long long int i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            var_16 = ((/* implicit */long long int) (short)32767);
            arr_10 [(unsigned short)6] [i_2] = ((/* implicit */long long int) (short)32766);
            var_17 = ((/* implicit */unsigned char) var_10);
            var_18 += ((/* implicit */short) (-(((/* implicit */int) arr_0 [i_1] [i_1]))));
            var_19 += ((/* implicit */long long int) (unsigned short)59307);
        }
        /* vectorizable */
        for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 3) 
        {
            arr_13 [i_1] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) arr_12 [i_3 - 1] [i_1] [i_1])) : (((/* implicit */int) (signed char)8)))));
            var_20 = (~(-4611686018427387904LL));
            var_21 = ((/* implicit */long long int) (-(((/* implicit */int) (signed char)7))));
            var_22 |= ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned long long int) var_0)) : (var_6)))));
        }
        for (long long int i_4 = 0; i_4 < 10; i_4 += 2) 
        {
            var_23 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_7)))))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_11 [i_4] [i_1]))))), (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned long long int) var_9)) : (7ULL)))))));
            var_24 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */int) var_4)) - (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)124)))))))), (min((((((/* implicit */_Bool) (short)-30435)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_6 [i_1] [(short)3] [i_1]))), (((/* implicit */long long int) ((short) -924185310275169689LL)))))));
            var_25 = ((short) (-(((/* implicit */int) ((unsigned short) (short)4095)))));
            /* LoopSeq 3 */
            for (long long int i_5 = 0; i_5 < 10; i_5 += 2) 
            {
                arr_20 [i_1] [i_4] [(signed char)3] [i_5] = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */int) var_1)) > (((((/* implicit */_Bool) -6133601903388670338LL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3))))))), ((-(((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) arr_11 [i_4] [(signed char)1])) : (((/* implicit */int) arr_11 [i_1] [i_5]))))))));
                /* LoopNest 2 */
                for (signed char i_6 = 0; i_6 < 10; i_6 += 1) 
                {
                    for (signed char i_7 = 0; i_7 < 10; i_7 += 3) 
                    {
                        {
                            arr_25 [i_1] [i_4] [(short)3] = ((/* implicit */unsigned short) (+(arr_1 [i_1])));
                            var_26 = ((/* implicit */signed char) min((((/* implicit */long long int) ((arr_16 [i_7] [i_6] [i_5] [i_1]) != (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))), (-1122815956058342611LL)));
                        }
                    } 
                } 
            }
            for (unsigned char i_8 = 0; i_8 < 10; i_8 += 1) 
            {
                arr_28 [(short)7] [i_4] = ((/* implicit */unsigned char) ((var_6) > (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) / ((-(arr_6 [i_4] [i_4] [i_4]))))))));
                var_27 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((short) (+(((/* implicit */int) (short)-6672))))))));
            }
            for (long long int i_9 = 0; i_9 < 10; i_9 += 2) 
            {
                var_28 = ((/* implicit */unsigned short) min((var_28), ((unsigned short)6228)));
                arr_32 [i_4] [i_1] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) 1122815956058342611LL)) ? (((/* implicit */int) arr_9 [i_9])) : (((/* implicit */int) var_5)))), (((/* implicit */int) ((short) arr_9 [i_1])))));
            }
            arr_33 [i_4] [i_1] = ((/* implicit */signed char) min(((~(((/* implicit */int) arr_14 [i_1])))), (((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) 4611686018423193600LL))))))));
        }
        for (signed char i_10 = 0; i_10 < 10; i_10 += 4) 
        {
            arr_36 [i_10] [i_1] [6LL] = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) 924185310275169688LL)) ? (arr_17 [i_1] [i_10] [i_10] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)59887))))));
            var_29 = var_7;
            var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_8)) ? (var_10) : (arr_17 [i_1] [i_1] [i_10] [i_1])))))) ? (6504105313808332418LL) : (((/* implicit */long long int) (~(((((/* implicit */int) (short)-30435)) & (((/* implicit */int) arr_30 [i_1] [(short)8] [i_10]))))))))))));
            var_31 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (-((-(((/* implicit */int) (unsigned short)65535))))))), (((((/* implicit */_Bool) arr_29 [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (1122815956058342611LL)))));
        }
        var_32 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_1])) ? (arr_4 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-124)))))) ? (((/* implicit */int) arr_12 [i_1] [(signed char)7] [i_1])) : (((/* implicit */int) (short)32767))))));
        arr_37 [i_1] = (unsigned short)35286;
        arr_38 [(unsigned short)6] = ((/* implicit */long long int) ((signed char) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_1]))))), (arr_16 [i_1] [i_1] [i_1] [9LL]))));
        var_33 = ((/* implicit */unsigned long long int) (-(var_2)));
    }
}

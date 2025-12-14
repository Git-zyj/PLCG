/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108525
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
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (signed char i_2 = 2; i_2 < 15; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 15; i_3 += 3) 
                {
                    for (signed char i_4 = 0; i_4 < 18; i_4 += 3) 
                    {
                        {
                            var_13 -= (+(0LL));
                            var_14 = ((/* implicit */signed char) (-(var_10)));
                            arr_12 [i_1 + 1] [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((arr_8 [i_0 - 3] [(signed char)4]) + (2147483647))) << (((((/* implicit */int) arr_1 [i_3 - 1])) - (31)))))) ? (arr_3 [i_0 - 3] [i_4]) : (((/* implicit */long long int) (~(((/* implicit */int) var_4)))))));
                            arr_13 [i_3] [i_1 + 1] [i_0 - 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1691958269180168329LL)) ? (((/* implicit */int) var_7)) : (0)))) ? (arr_8 [i_1 + 1] [i_0]) : (((/* implicit */int) arr_10 [i_2 + 2] [i_1 + 1] [1LL] [(short)9] [0LL] [i_0 - 1] [i_2 + 2]))));
                        }
                    } 
                } 
            } 
            var_15 += ((/* implicit */unsigned long long int) arr_5 [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 - 1]);
        }
        for (unsigned char i_5 = 1; i_5 < 17; i_5 += 3) /* same iter space */
        {
            arr_16 [i_0 - 1] [i_0 - 1] = ((/* implicit */unsigned char) 4153243329866309637ULL);
            var_16 &= ((((/* implicit */_Bool) (+(0)))) ? (max((arr_7 [i_0 - 3] [i_0 - 3] [i_0 + 1] [i_0 - 3]), (((/* implicit */long long int) arr_8 [i_0 - 3] [i_0 - 3])))) : (var_12));
            var_17 = ((/* implicit */unsigned char) max((max((min((((/* implicit */long long int) var_10)), (arr_14 [4] [4]))), (min((-1LL), (((/* implicit */long long int) var_10)))))), (1048575LL)));
            /* LoopNest 2 */
            for (long long int i_6 = 2; i_6 < 17; i_6 += 1) 
            {
                for (long long int i_7 = 0; i_7 < 18; i_7 += 3) 
                {
                    {
                        var_18 |= ((/* implicit */signed char) ((((arr_8 [i_7] [(short)5]) + (2147483647))) << (((var_6) - (7494442684881305408LL)))));
                        var_19 ^= ((/* implicit */unsigned long long int) (+((-((~(((/* implicit */int) var_8))))))));
                        var_20 = ((/* implicit */signed char) min((min((arr_18 [i_0 + 1] [i_5 - 1] [i_0 + 1]), (arr_18 [i_0 - 3] [i_5 + 1] [i_6]))), (((((/* implicit */_Bool) var_6)) ? (arr_18 [i_0 + 1] [i_5 - 1] [i_5 - 1]) : (arr_18 [i_0 - 2] [i_5 + 1] [i_0 - 2])))));
                        arr_22 [i_7] [i_6 - 2] [i_0 - 3] [i_0 - 3] = ((/* implicit */short) max(((+(7947294323540481085LL))), (((/* implicit */long long int) (unsigned char)207))));
                        arr_23 [i_0 - 2] [i_5 - 1] [i_6 - 1] [i_5] = ((((/* implicit */_Bool) -1LL)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (signed char)1))));
                    }
                } 
            } 
            /* LoopSeq 3 */
            /* vectorizable */
            for (signed char i_8 = 0; i_8 < 18; i_8 += 1) 
            {
                var_21 -= ((/* implicit */unsigned long long int) arr_3 [i_5 + 1] [i_0 - 2]);
                arr_28 [(signed char)13] = (~(arr_9 [i_0 - 3] [i_5 - 1] [i_0 - 3] [9LL] [i_5 - 1]));
            }
            for (long long int i_9 = 0; i_9 < 18; i_9 += 3) 
            {
                var_22 ^= ((/* implicit */long long int) arr_10 [i_0] [2LL] [(unsigned char)2] [i_5 - 1] [i_5 - 1] [i_9] [i_9]);
                var_23 -= min((min((min((((/* implicit */long long int) 8)), (var_6))), (((/* implicit */long long int) max(((signed char)-90), ((signed char)0)))))), ((-(max((-15LL), (((/* implicit */long long int) arr_10 [i_0] [15] [i_5 + 1] [i_5] [i_5] [i_9] [i_5 + 1])))))));
                arr_33 [(signed char)4] [i_5] = ((/* implicit */short) var_0);
                /* LoopNest 2 */
                for (long long int i_10 = 3; i_10 < 15; i_10 += 3) 
                {
                    for (long long int i_11 = 0; i_11 < 18; i_11 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */int) min((((/* implicit */unsigned long long int) max((-1LL), (-1568744359236764436LL)))), (min((((/* implicit */unsigned long long int) arr_34 [i_5 + 1] [i_5 + 1] [i_0 + 1] [i_10 - 2])), (arr_19 [i_5 + 1] [i_11] [i_0 + 1] [i_10 - 2])))));
                            arr_40 [i_11] [i_11] [i_11] = (+(min((arr_9 [i_0 + 1] [i_5 - 1] [11] [i_10 + 2] [i_10 + 3]), (((/* implicit */long long int) var_1)))));
                            arr_41 [i_11] [i_10] [11LL] [i_9] [i_5 - 1] [i_0] = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1LL))))) : ((-(0)))))), (max((max((var_9), (((/* implicit */long long int) var_7)))), (((/* implicit */long long int) arr_24 [i_5 - 1] [i_0 - 2]))))));
                            arr_42 [i_0 - 1] = var_7;
                            var_25 = ((/* implicit */unsigned char) max((((long long int) 0)), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */int) arr_25 [i_10 - 2] [i_5 - 1] [i_5 - 1] [i_0 - 3])) : (((/* implicit */int) ((arr_30 [i_5]) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))))));
                        }
                    } 
                } 
                var_26 *= ((/* implicit */short) min((max((arr_7 [(unsigned char)3] [1ULL] [i_9] [i_5 + 1]), (arr_7 [i_0 - 2] [i_9] [i_9] [i_5 + 1]))), (max((var_6), (((/* implicit */long long int) var_3))))));
            }
            for (int i_12 = 1; i_12 < 17; i_12 += 3) 
            {
                var_27 ^= max((max((var_5), (min((4LL), (5344528597067167396LL))))), (((/* implicit */long long int) var_7)));
                /* LoopNest 2 */
                for (long long int i_13 = 0; i_13 < 18; i_13 += 3) 
                {
                    for (unsigned char i_14 = 3; i_14 < 16; i_14 += 3) 
                    {
                        {
                            arr_54 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_13] [i_0 - 1] [i_5 - 1] [i_5 - 1] = ((/* implicit */int) var_4);
                            arr_55 [i_0] [i_0] [i_0] [i_0 - 1] [i_0] [i_0 - 2] [(signed char)16] = ((/* implicit */unsigned char) max(((+(2LL))), (min((((/* implicit */long long int) (~(((/* implicit */int) arr_4 [i_0 - 2]))))), (max((var_11), (((/* implicit */long long int) var_3))))))));
                            arr_56 [i_0] [i_5 + 1] [1LL] [i_13] [14LL] &= ((/* implicit */signed char) ((var_9) != (((/* implicit */long long int) (+(((/* implicit */int) (short)25327)))))));
                        }
                    } 
                } 
            }
        }
        for (long long int i_15 = 2; i_15 < 15; i_15 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_16 = 2; i_16 < 17; i_16 += 1) 
            {
                for (long long int i_17 = 1; i_17 < 17; i_17 += 3) 
                {
                    {
                        var_28 = min((((/* implicit */long long int) (signed char)-37)), (-4909621641424185957LL));
                        var_29 = arr_53 [i_0] [i_15 + 1] [i_15 + 1];
                        var_30 = (-(arr_14 [i_17] [i_17]));
                        var_31 = var_10;
                    }
                } 
            } 
            var_32 = ((/* implicit */short) (+((+(1203184960811013202ULL)))));
        }
        var_33 = ((/* implicit */unsigned long long int) min((var_33), (((((/* implicit */_Bool) min((7875810251042907607ULL), (((/* implicit */unsigned long long int) (short)32750))))) ? (arr_30 [i_0]) : (((/* implicit */unsigned long long int) ((int) max((24LL), (((/* implicit */long long int) var_8))))))))));
        arr_67 [i_0 + 1] [i_0 + 1] = max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_12))))), (((((/* implicit */_Bool) arr_45 [i_0 - 1] [i_0 + 1] [(unsigned char)2] [i_0])) ? (arr_45 [i_0 + 1] [8LL] [i_0 + 1] [2LL]) : (arr_45 [i_0 - 2] [i_0 - 2] [i_0] [5LL]))));
    }
    var_34 = ((/* implicit */long long int) ((unsigned long long int) min((var_2), (((long long int) var_8)))));
}

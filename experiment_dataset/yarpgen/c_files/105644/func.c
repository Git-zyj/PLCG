/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105644
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned long long int) 32766U))))) ? (((/* implicit */long long int) 32783U)) : (((((/* implicit */_Bool) var_4)) ? (var_3) : (var_6)))))) ? (((/* implicit */unsigned long long int) var_6)) : (arr_0 [i_0] [i_0]));
        var_12 = min((arr_0 [i_0] [i_0]), (((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */unsigned long long int) var_1)) >= (arr_1 [i_0] [i_0]))))));
    }
    for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        /* LoopSeq 4 */
        for (signed char i_2 = 0; i_2 < 22; i_2 += 4) 
        {
            var_13 -= ((/* implicit */unsigned short) ((unsigned int) 7620071212068727653ULL));
            /* LoopNest 3 */
            for (long long int i_3 = 2; i_3 < 21; i_3 += 2) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 2) 
                {
                    for (long long int i_5 = 0; i_5 < 22; i_5 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_2)), (var_6)))), (var_10)))) ? (((((/* implicit */_Bool) arr_7 [i_3 - 1] [i_1] [i_1] [i_3 - 1])) ? (-1478991891) : (var_9))) : (((/* implicit */int) (unsigned char)218))));
                            var_15 = arr_10 [i_1] [i_2];
                            var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) (-((+(((((/* implicit */_Bool) (signed char)-29)) ? (((/* implicit */int) (signed char)-29)) : (var_1))))))))));
                            var_17 = ((/* implicit */unsigned int) min((max((((/* implicit */signed char) (!(((/* implicit */_Bool) var_4))))), (((signed char) var_0)))), (((/* implicit */signed char) arr_5 [i_4] [i_4] [i_4]))));
                            arr_13 [i_1] [i_2] [6U] [i_1] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_2)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_3 - 2] [i_1]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) var_6)))))) : (((/* implicit */int) var_0))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_7 = 1; i_7 < 20; i_7 += 4) /* same iter space */
            {
                var_18 = (!(((/* implicit */_Bool) var_0)));
                var_19 = ((/* implicit */unsigned long long int) ((short) (short)15010));
                var_20 -= ((/* implicit */unsigned long long int) ((unsigned char) 2147483647));
            }
            for (unsigned int i_8 = 1; i_8 < 20; i_8 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 3) 
                {
                    for (unsigned short i_10 = 0; i_10 < 22; i_10 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned short) arr_25 [i_1] [i_1] [i_8] [i_1] [i_1] [i_9]);
                            var_22 = (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)58183))) + (var_5))));
                            var_23 += ((/* implicit */short) var_5);
                        }
                    } 
                } 
                var_24 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) (signed char)-26)) ? (((/* implicit */int) arr_5 [i_1] [i_1] [(unsigned short)16])) : (((/* implicit */int) (unsigned char)209)))));
                /* LoopSeq 1 */
                for (int i_11 = 0; i_11 < 22; i_11 += 4) 
                {
                    var_25 = ((/* implicit */unsigned long long int) (signed char)-52);
                    var_26 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(-1523992979))))));
                }
            }
            var_27 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_1] [i_6])) ? (arr_10 [i_1] [i_6]) : (arr_10 [i_1] [i_6])));
        }
        /* vectorizable */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) arr_16 [i_12] [i_1])) : (3661744417U)))) ? (((/* implicit */unsigned long long int) arr_3 [i_1])) : (arr_24 [i_1] [i_1] [i_1] [i_1] [i_12] [i_12] [i_12]))))));
            /* LoopSeq 3 */
            for (unsigned long long int i_13 = 0; i_13 < 22; i_13 += 4) 
            {
                /* LoopNest 2 */
                for (long long int i_14 = 4; i_14 < 19; i_14 += 3) 
                {
                    for (signed char i_15 = 0; i_15 < 22; i_15 += 3) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned long long int) ((((long long int) 5813445248052673298ULL)) <= (((/* implicit */long long int) (~(arr_26 [i_14] [i_14 - 1] [i_14] [i_14]))))));
                            var_30 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) (~(var_1)))) : ((~(18446744073709551602ULL)))));
                        }
                    } 
                } 
                arr_38 [i_1] [i_1] [i_13] = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)38))));
            }
            for (int i_16 = 0; i_16 < 22; i_16 += 3) /* same iter space */
            {
                var_31 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) (unsigned char)31)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 3858749690U)) || (((/* implicit */_Bool) var_3))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_20 [i_1] [i_12] [i_12] [i_1])))))));
                arr_41 [i_1] [i_1] [i_12] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_9 [i_12])) : (((/* implicit */int) var_4))));
            }
            for (int i_17 = 0; i_17 < 22; i_17 += 3) /* same iter space */
            {
                var_32 = ((/* implicit */int) arr_15 [i_1]);
                var_33 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) 18446744073709551607ULL)))));
                var_34 = ((/* implicit */long long int) ((signed char) (signed char)111));
                var_35 = ((/* implicit */unsigned long long int) ((int) 1405430839));
            }
            var_36 = ((/* implicit */unsigned char) -2059365801);
        }
        for (long long int i_18 = 2; i_18 < 20; i_18 += 2) 
        {
            arr_47 [i_1] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_18 - 2] [i_18] [i_18 - 2] [i_18 + 2] [i_1] [i_18 - 2]))) : (4155032175766228874LL))));
            var_37 = ((/* implicit */_Bool) -1152664099);
            var_38 = ((/* implicit */unsigned long long int) var_7);
            var_39 |= ((/* implicit */unsigned char) var_0);
        }
        var_40 = ((/* implicit */unsigned char) (-(3032497277483413679ULL)));
    }
    var_41 = ((/* implicit */_Bool) ((unsigned long long int) var_8));
    var_42 += ((/* implicit */unsigned char) var_3);
    var_43 = (-(min(((-(var_5))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned short)57577)), (var_6)))))));
}

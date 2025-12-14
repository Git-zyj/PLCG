/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12680
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
    var_10 = ((/* implicit */unsigned short) ((signed char) var_0));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        var_11 = ((/* implicit */long long int) 12571705983668830034ULL);
        var_12 = ((/* implicit */int) ((arr_0 [i_0 + 1]) - (arr_0 [i_0 + 1])));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0 + 2] [i_0 + 1])) ? (arr_2 [i_0 + 2] [i_0]) : (arr_2 [i_0 + 1] [i_0])));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned int) -8482237858305173918LL);
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            for (signed char i_3 = 3; i_3 < 9; i_3 += 3) 
            {
                {
                    var_14 = var_3;
                    var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) var_4))));
                    var_16 = ((/* implicit */unsigned int) (-((-(arr_10 [(_Bool)1] [i_2] [i_1] [i_1])))));
                }
            } 
        } 
        arr_11 [i_1] = ((/* implicit */long long int) (_Bool)0);
        arr_12 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) arr_4 [i_1])) : (1687247256700928232ULL)));
        var_17 = ((/* implicit */unsigned int) arr_6 [i_1] [i_1] [(unsigned char)3]);
    }
    for (unsigned short i_4 = 0; i_4 < 13; i_4 += 3) /* same iter space */
    {
        /* LoopSeq 4 */
        for (unsigned int i_5 = 2; i_5 < 11; i_5 += 3) 
        {
            arr_18 [i_4] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_9)), (-8482237858305173918LL)))) : (min(((~(var_0))), (((/* implicit */unsigned long long int) arr_1 [i_5 + 1] [i_5 + 2]))))));
            arr_19 [10U] &= var_0;
        }
        for (long long int i_6 = 0; i_6 < 13; i_6 += 2) /* same iter space */
        {
            var_18 &= ((/* implicit */unsigned char) (-(((/* implicit */int) var_6))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_7 = 0; i_7 < 13; i_7 += 4) 
            {
                arr_26 [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) ((_Bool) arr_4 [i_4]));
                var_19 = ((/* implicit */long long int) arr_15 [i_4] [i_7]);
            }
            var_20 -= var_6;
        }
        /* vectorizable */
        for (long long int i_8 = 0; i_8 < 13; i_8 += 2) /* same iter space */
        {
            var_21 = ((/* implicit */int) ((12571705983668830034ULL) == (12571705983668830044ULL)));
            /* LoopSeq 2 */
            for (unsigned int i_9 = 0; i_9 < 13; i_9 += 2) 
            {
                var_22 = ((/* implicit */long long int) arr_17 [i_4] [i_8] [i_9]);
                var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_8] [i_8])) ? (var_5) : (((/* implicit */unsigned int) arr_5 [i_4] [i_4]))));
                arr_32 [i_4] = ((/* implicit */long long int) ((unsigned int) arr_23 [i_4] [i_9]));
                var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) var_5))));
            }
            for (unsigned int i_10 = 1; i_10 < 11; i_10 += 3) 
            {
                /* LoopNest 2 */
                for (long long int i_11 = 0; i_11 < 13; i_11 += 4) 
                {
                    for (unsigned short i_12 = 0; i_12 < 13; i_12 += 4) 
                    {
                        {
                            var_25 = (_Bool)1;
                            var_26 = ((/* implicit */unsigned int) (-(arr_2 [i_11] [i_4])));
                            arr_42 [i_4] [i_8] [i_10] [i_8] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) 5875038090040721582ULL)) ? (var_3) : (arr_0 [i_10 - 1])));
                        }
                    } 
                } 
                arr_43 [i_4] [i_4] = ((/* implicit */unsigned int) ((long long int) arr_8 [i_4] [i_8] [i_8] [i_10 + 2]));
                /* LoopSeq 2 */
                for (unsigned int i_13 = 3; i_13 < 12; i_13 += 2) 
                {
                    var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_40 [11LL] [i_13] [i_13 + 1] [i_13])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) : (arr_44 [i_13 - 3] [4ULL] [i_13 + 1] [i_13 - 2]))))));
                    arr_46 [i_4] [i_8] [i_4] [i_8] [8ULL] [i_8] &= ((unsigned short) arr_14 [i_4] [i_10 + 1]);
                }
                for (long long int i_14 = 1; i_14 < 12; i_14 += 2) 
                {
                    arr_49 [i_4] [i_4] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((var_0) != (((/* implicit */unsigned long long int) arr_39 [i_4])))))));
                    arr_50 [3LL] = ((/* implicit */unsigned long long int) ((signed char) arr_24 [i_14 + 1] [i_14] [(unsigned short)2] [i_14]));
                    arr_51 [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) 5516392052050276712ULL)) ? (((/* implicit */int) arr_22 [i_10 + 1] [i_14 + 1] [8LL])) : (((/* implicit */int) var_1))));
                    arr_52 [i_14 - 1] [i_10 - 1] [i_4] [i_4] = ((/* implicit */unsigned short) var_1);
                }
                var_28 -= ((/* implicit */_Bool) ((unsigned int) var_8));
                var_29 = ((/* implicit */signed char) var_3);
            }
            arr_53 [i_4] [7] [i_8] = ((/* implicit */int) 3421109871083461623LL);
        }
        /* vectorizable */
        for (long long int i_15 = 0; i_15 < 13; i_15 += 2) /* same iter space */
        {
            var_30 = (-(var_4));
            /* LoopSeq 2 */
            for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
            {
                arr_59 [(unsigned char)1] [i_4] [1U] [i_16] = ((/* implicit */unsigned int) ((_Bool) var_9));
                var_31 = ((/* implicit */long long int) 406286392U);
                var_32 = ((/* implicit */unsigned long long int) ((2199023255551LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)36562)))));
            }
            for (unsigned char i_17 = 0; i_17 < 13; i_17 += 3) 
            {
                arr_62 [11LL] [3U] [i_15] [i_17] = ((/* implicit */int) (_Bool)1);
                /* LoopSeq 1 */
                for (long long int i_18 = 0; i_18 < 13; i_18 += 3) 
                {
                    var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) ((long long int) var_6)))));
                    arr_67 [i_4] [6ULL] [i_4] = (+(arr_9 [i_15]));
                }
                arr_68 [i_4] [(unsigned short)6] [(unsigned short)6] [i_17] = ((/* implicit */unsigned long long int) arr_14 [i_15] [i_4]);
                var_34 ^= ((/* implicit */_Bool) arr_61 [10LL] [i_15] [i_17] [i_17]);
            }
        }
        arr_69 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (arr_16 [i_4] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        arr_70 [i_4] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_57 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_4] [i_4]))) : (((unsigned int) var_4))))));
    }
    var_35 = (~((((-(242414386963317303LL))) * (((/* implicit */long long int) ((/* implicit */int) var_8))))));
    var_36 = ((/* implicit */long long int) var_1);
}

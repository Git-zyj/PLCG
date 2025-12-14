/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141707
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
    for (short i_0 = 2; i_0 < 20; i_0 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 23; i_3 += 4) 
                {
                    {
                        var_13 |= ((/* implicit */short) max((((/* implicit */unsigned int) 12)), (var_6)));
                        var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((((((((/* implicit */_Bool) arr_5 [(signed char)0] [i_0] [6] [6])) ? (12) : (((/* implicit */int) (signed char)(-127 - 1))))) >> (((/* implicit */int) ((368092532U) == (((/* implicit */unsigned int) -36))))))) > (((/* implicit */int) ((1728858162385878016ULL) == (((/* implicit */unsigned long long int) arr_8 [i_1] [i_1] [i_0 + 2] [i_3]))))))))));
                        var_15 = ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_0]))) - ((-(max((var_1), (((/* implicit */long long int) var_11)))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned int i_4 = 0; i_4 < 23; i_4 += 1) 
        {
            for (short i_5 = 2; i_5 < 21; i_5 += 4) 
            {
                for (signed char i_6 = 0; i_6 < 23; i_6 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_7 = 1; i_7 < 19; i_7 += 4) /* same iter space */
                        {
                            var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) 12)), (min((((((/* implicit */_Bool) var_2)) ? (arr_7 [i_5] [i_4] [22U] [i_4] [(signed char)4]) : (((/* implicit */unsigned long long int) -12)))), (min((((/* implicit */unsigned long long int) 1073741824U)), (arr_12 [i_7 - 1] [i_5 - 2] [i_0]))))))))));
                            var_17 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((5948878381132433100LL) + (((/* implicit */long long int) arr_11 [i_0] [i_0] [i_0])))))));
                            var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((arr_12 [i_7] [i_5] [i_0]) & (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))))))))))));
                        }
                        for (unsigned int i_8 = 1; i_8 < 19; i_8 += 4) /* same iter space */
                        {
                            var_19 -= ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */signed char) ((((/* implicit */unsigned int) var_0)) > (1731728684U)))), (arr_3 [i_6] [i_6] [i_6])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0]))) : (max(((+(arr_12 [i_5] [21] [i_5]))), (((/* implicit */unsigned long long int) arr_0 [i_8]))))));
                            var_20 -= ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) arr_20 [i_0] [19ULL] [i_4] [i_0 - 2] [i_8])) ? (((/* implicit */int) arr_20 [i_0 + 1] [i_4] [i_4] [i_0 - 2] [i_8])) : (((/* implicit */int) arr_20 [21] [i_4] [i_5] [i_0 - 2] [i_8 + 2])))));
                        }
                        var_21 ^= ((/* implicit */long long int) (-(((/* implicit */int) ((4746385056279563336LL) > (var_1))))));
                    }
                } 
            } 
        } 
        arr_23 [i_0] = ((/* implicit */unsigned int) arr_11 [i_0] [i_0] [4U]);
        var_22 = ((/* implicit */signed char) (-(((/* implicit */int) arr_13 [i_0] [i_0] [i_0]))));
        var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) arr_14 [i_0 + 2] [(short)2]))));
    }
    for (short i_9 = 2; i_9 < 20; i_9 += 2) /* same iter space */
    {
        var_24 = ((/* implicit */short) min((var_24), (arr_18 [i_9])));
        arr_27 [i_9] = ((/* implicit */unsigned int) (-((+(var_10)))));
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 23; i_10 += 4) 
        {
            for (short i_11 = 3; i_11 < 20; i_11 += 3) 
            {
                {
                    var_25 = ((/* implicit */unsigned int) var_10);
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 1; i_12 < 22; i_12 += 3) 
                    {
                        for (unsigned int i_13 = 0; i_13 < 23; i_13 += 2) 
                        {
                            {
                                var_26 |= ((/* implicit */int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) -12)) ? (((/* implicit */int) arr_20 [i_9] [(_Bool)1] [(_Bool)1] [i_9 + 2] [i_9 + 3])) : (((/* implicit */int) var_3))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) - (4294967291U)))) : (((min((((/* implicit */unsigned long long int) arr_32 [i_13] [i_11] [i_10] [i_9])), (18446744073709551613ULL))) >> (((/* implicit */int) ((((/* implicit */int) arr_16 [i_11])) > (((/* implicit */int) arr_19 [i_9] [i_9 + 3] [i_9] [i_9])))))))));
                                arr_38 [i_12] = ((/* implicit */signed char) var_10);
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_14 = 0; i_14 < 23; i_14 += 1) 
        {
            for (int i_15 = 2; i_15 < 22; i_15 += 4) 
            {
                {
                    var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) 5948878381132433079LL))));
                    var_28 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_14] [i_14] [i_15 + 1] [i_15])) ? (((/* implicit */int) arr_13 [i_9] [i_9 + 3] [11])) : (((/* implicit */int) (short)-12626))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)48))) : (min((min((5948878381132433100LL), (((/* implicit */long long int) 1250264156U)))), (((((/* implicit */_Bool) -5948878381132433101LL)) ? (arr_37 [i_9] [i_9] [i_9]) : (5948878381132433079LL)))))));
                    var_29 |= ((/* implicit */short) ((((0U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_9 - 2] [i_14]))))) <= (((unsigned int) arr_37 [i_15 - 2] [i_14] [i_9 + 1]))));
                }
            } 
        } 
    }
    /* LoopSeq 2 */
    for (short i_16 = 0; i_16 < 23; i_16 += 2) 
    {
        arr_47 [i_16] = ((/* implicit */unsigned int) (+(max((((/* implicit */int) ((5948878381132433068LL) <= (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_16])))))), (((((/* implicit */int) (_Bool)0)) - (var_9)))))));
        arr_48 [i_16] [18LL] = ((/* implicit */unsigned int) ((2) % (((/* implicit */int) var_12))));
        var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) var_10))));
    }
    for (short i_17 = 1; i_17 < 10; i_17 += 2) 
    {
        var_31 *= ((/* implicit */unsigned int) (+(max((((((-5948878381132433079LL) + (9223372036854775807LL))) << (((((((/* implicit */int) (signed char)-28)) + (64))) - (36))))), (((/* implicit */long long int) arr_13 [i_17] [i_17 + 1] [i_17 + 1]))))));
        /* LoopSeq 1 */
        for (int i_18 = 0; i_18 < 14; i_18 += 1) 
        {
            /* LoopNest 3 */
            for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
            {
                for (short i_20 = 0; i_20 < 14; i_20 += 3) 
                {
                    for (signed char i_21 = 0; i_21 < 14; i_21 += 2) 
                    {
                        {
                            var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) (!(((/* implicit */_Bool) arr_56 [i_17 + 1] [i_17 + 1] [i_17 + 1])))))));
                            var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) max(((~(-9223372036854775797LL))), (((/* implicit */long long int) (short)4753))))))))));
                            var_34 = var_9;
                            var_35 += ((/* implicit */short) min((((/* implicit */int) (short)4753)), ((-(((-1) - (((/* implicit */int) arr_5 [i_17] [i_21] [i_21] [i_20]))))))));
                        }
                    } 
                } 
            } 
            var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) (short)16352))));
            var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) 6575240180373689256LL)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_61 [i_17] [i_18] [i_17] [i_18] [i_17 + 3]) == (arr_61 [i_17 + 2] [i_18] [i_17 + 2] [i_17] [i_17 + 3])))))));
        }
        var_38 = ((/* implicit */long long int) min((4294967295U), (((/* implicit */unsigned int) (-(arr_21 [i_17] [i_17 + 2] [5] [i_17 + 2] [i_17]))))));
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122861
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
    /* vectorizable */
    for (long long int i_0 = 3; i_0 < 24; i_0 += 4) 
    {
        var_17 |= ((/* implicit */long long int) var_8);
        arr_2 [i_0] = var_13;
    }
    var_18 = ((/* implicit */long long int) ((_Bool) ((((6163748617060294510LL) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) -1742812455128654521LL)))) : (var_9))));
    /* LoopSeq 2 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) arr_4 [i_1]))));
        var_20 = ((/* implicit */unsigned long long int) (_Bool)1);
        var_21 = ((/* implicit */long long int) arr_3 [i_1] [8ULL]);
        arr_6 [i_1] [i_1] = ((/* implicit */_Bool) min((min((arr_0 [i_1]), (((((/* implicit */_Bool) arr_4 [i_1])) ? (var_14) : (arr_0 [i_1]))))), (min((var_11), (((/* implicit */long long int) (_Bool)1))))));
        var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2777374140842354294LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_1]))) : (var_6)))) || (arr_3 [i_1] [i_1]));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_23 *= arr_3 [(_Bool)1] [2ULL];
        arr_9 [i_2] = ((/* implicit */_Bool) var_11);
        /* LoopSeq 4 */
        for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 4) 
        {
            /* LoopNest 3 */
            for (long long int i_4 = 1; i_4 < 12; i_4 += 1) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            arr_23 [i_6] [5ULL] [i_4] [i_4 - 1] [i_5] [i_6] = ((/* implicit */long long int) ((_Bool) ((arr_3 [i_2] [i_6]) ? (((/* implicit */int) arr_20 [i_2] [i_3] [i_4] [9ULL] [i_6])) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [4LL] [i_3]))) == (var_2)))))));
                            arr_24 [i_6] [i_6] [(_Bool)1] [i_6] [i_2] = ((/* implicit */_Bool) min((var_1), (((arr_22 [i_2] [i_6] [i_4] [i_5] [i_3] [i_4 - 1]) - (arr_22 [i_4] [(_Bool)1] [12ULL] [i_6] [i_6] [i_4 - 1])))));
                            arr_25 [(_Bool)1] [i_6] [(_Bool)1] [(_Bool)1] = ((/* implicit */_Bool) (-(((/* implicit */int) (((((_Bool)1) ? (((/* implicit */unsigned long long int) var_11)) : (18446744073709551615ULL))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_15)))))))));
                        }
                    } 
                } 
            } 
            var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((arr_11 [i_3] [i_3]) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_3] [(_Bool)1]))) : (((var_15) - (var_7)))))), (((arr_12 [i_3] [(_Bool)1] [i_2]) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) : (18401093526335652258ULL))))))));
            arr_26 [1ULL] [i_3] [i_3] = ((unsigned long long int) var_6);
        }
        for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 1) /* same iter space */
        {
            arr_29 [i_7] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_2] [i_2] [i_7] [i_7])) + (((/* implicit */int) arr_15 [i_2] [5LL] [i_7] [i_7])))))));
            arr_30 [i_7] = ((((/* implicit */_Bool) ((((min((((/* implicit */long long int) arr_14 [i_2] [i_2] [i_2])), (var_7))) + (9223372036854775807LL))) << (((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (832229655520996541LL))) - (832229655520996541LL)))))) ? ((((!(arr_17 [i_2] [i_2] [i_2] [i_2]))) ? (9223372036854775807LL) : (arr_22 [i_7] [(_Bool)1] [i_2] [i_2] [i_2] [i_2]))) : (((((((/* implicit */_Bool) 17553229399310150913ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_2] [1LL] [i_2]))) : (var_9))) + (((/* implicit */long long int) ((/* implicit */int) var_0))))));
        }
        for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 1) /* same iter space */
        {
            arr_34 [i_8] [i_8] [i_8] = ((/* implicit */unsigned long long int) (_Bool)0);
            var_25 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? (((arr_16 [i_2] [i_2] [i_2]) >> (((6163748617060294505LL) - (6163748617060294502LL))))) : (34084860461056LL)))));
        }
        for (long long int i_9 = 1; i_9 < 10; i_9 += 2) 
        {
            arr_38 [i_2] [i_2] [i_2] = var_4;
            /* LoopNest 3 */
            for (long long int i_10 = 0; i_10 < 13; i_10 += 1) 
            {
                for (unsigned long long int i_11 = 0; i_11 < 13; i_11 += 1) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        {
                            arr_45 [i_12] [i_11] [i_10] [i_11] = ((((/* implicit */unsigned long long int) ((arr_3 [i_2] [i_9 + 2]) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2] [i_9 + 1]))) : (var_13)))) == (((((/* implicit */_Bool) arr_4 [3ULL])) ? (arr_21 [i_9 - 1] [i_9 + 1] [i_9 + 2] [i_9 + 2] [i_9 + 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_9 + 2] [i_9 + 3] [i_9] [i_11] [i_9 - 1]))))));
                            arr_46 [i_10] [i_9] [i_10] [i_9] [i_11] = ((/* implicit */_Bool) 12697745752594556776ULL);
                            arr_47 [i_2] [i_9] [i_11] [i_12] [i_11] = ((/* implicit */long long int) (_Bool)1);
                            arr_48 [i_2] [i_2] [i_9] [i_10] [10LL] [8LL] [i_12] |= ((/* implicit */long long int) (+(((/* implicit */int) var_0))));
                        }
                    } 
                } 
            } 
        }
    }
    var_26 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (-(-354091671926116311LL)))) ? (var_4) : (((/* implicit */unsigned long long int) ((var_3) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
    var_27 = var_9;
}

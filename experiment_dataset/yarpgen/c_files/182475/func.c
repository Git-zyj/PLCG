/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182475
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
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        arr_4 [(unsigned short)6] &= ((/* implicit */signed char) arr_2 [14U] [i_0 + 1]);
        /* LoopSeq 3 */
        for (long long int i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_2 = 1; i_2 < 19; i_2 += 3) 
            {
                arr_10 [i_0] [i_0] = ((/* implicit */_Bool) var_7);
                /* LoopSeq 1 */
                for (int i_3 = 1; i_3 < 19; i_3 += 2) 
                {
                    var_20 = ((/* implicit */unsigned int) (((+(((/* implicit */int) (short)8731)))) <= (((/* implicit */int) (_Bool)1))));
                    var_21 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-29343))));
                    /* LoopSeq 2 */
                    for (long long int i_4 = 0; i_4 < 22; i_4 += 2) 
                    {
                        arr_15 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] [18U] = ((/* implicit */unsigned int) 9223372036854775807LL);
                        var_22 = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) arr_3 [i_1 + 1])) <= (((/* implicit */int) var_3)))))));
                        var_23 = ((/* implicit */unsigned short) -7726800207191065258LL);
                    }
                    for (int i_5 = 0; i_5 < 22; i_5 += 4) 
                    {
                        arr_18 [i_0] [i_0 + 1] = ((/* implicit */unsigned int) ((long long int) arr_17 [i_0] [i_0] [i_2 + 2] [i_0] [i_0]));
                        var_24 = ((/* implicit */_Bool) 18446744073709551615ULL);
                        var_25 *= ((/* implicit */unsigned int) var_3);
                        var_26 = ((/* implicit */signed char) min((((/* implicit */int) ((unsigned short) var_18))), (min((((/* implicit */int) ((arr_7 [i_0 + 1] [i_0] [i_0 - 1]) <= (((/* implicit */long long int) 3925833711U))))), (var_18)))));
                        var_27 -= ((/* implicit */short) ((((int) var_3)) == (((/* implicit */int) var_11))));
                    }
                }
                var_28 *= ((/* implicit */int) var_4);
            }
            var_29 *= ((/* implicit */_Bool) arr_13 [(unsigned short)2] [(unsigned short)2] [(short)8] [i_1] [i_1 + 1]);
        }
        for (unsigned char i_6 = 1; i_6 < 21; i_6 += 2) 
        {
            arr_23 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((unsigned short) arr_2 [i_0] [i_6]))) ? (((/* implicit */int) ((((/* implicit */int) var_14)) == (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]))))) : (((/* implicit */int) var_19))))));
            arr_24 [i_0] [i_6] [i_0] = ((/* implicit */unsigned long long int) min((var_3), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_2 [i_0] [(unsigned char)11]), (((/* implicit */unsigned char) var_19)))))) == ((~(0ULL))))))));
            arr_25 [i_6] [i_6] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) ((signed char) var_17)))));
        }
        for (long long int i_7 = 0; i_7 < 22; i_7 += 3) 
        {
            /* LoopNest 3 */
            for (long long int i_8 = 0; i_8 < 22; i_8 += 4) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                    {
                        {
                            arr_37 [i_8] [i_0] [i_8] [(signed char)6] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) arr_31 [i_0 - 1] [i_0 - 1] [i_0] [15ULL])) ? (((/* implicit */unsigned long long int) ((((7580369460327834150LL) | (((/* implicit */long long int) -282617008)))) | (7223039789719893703LL)))) : (((arr_20 [i_0 + 1] [i_0]) << (((arr_34 [17] [17] [(_Bool)1] [17]) - (468940293U)))))));
                            var_30 &= ((/* implicit */int) ((((/* implicit */_Bool) var_17)) ? (((unsigned int) ((((/* implicit */_Bool) arr_2 [i_8] [i_9])) || (((/* implicit */_Bool) 0ULL))))) : (((/* implicit */unsigned int) 1))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_11 = 1; i_11 < 21; i_11 += 2) 
            {
                for (signed char i_12 = 0; i_12 < 22; i_12 += 2) 
                {
                    {
                        arr_42 [i_0] = ((/* implicit */long long int) arr_35 [i_0 + 1]);
                        arr_43 [(signed char)15] [(unsigned char)11] [i_7] [i_11] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(arr_19 [i_0])))) < (((/* implicit */int) ((unsigned char) ((unsigned short) var_9))))));
                    }
                } 
            } 
        }
        /* LoopSeq 1 */
        for (unsigned int i_13 = 0; i_13 < 22; i_13 += 2) 
        {
            var_31 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)45730))));
            arr_47 [i_0] = (+(((/* implicit */int) (_Bool)1)));
        }
    }
    var_32 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) 1596856523)) : (var_6))))));
    var_33 -= ((/* implicit */short) 934271068);
    var_34 = ((/* implicit */signed char) var_0);
    /* LoopNest 3 */
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
    {
        for (unsigned int i_15 = 4; i_15 < 10; i_15 += 4) 
        {
            for (unsigned int i_16 = 2; i_16 < 10; i_16 += 1) 
            {
                {
                    var_35 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_2 [i_15] [i_16 - 1])))))));
                    var_36 = ((/* implicit */int) (unsigned short)2475);
                }
            } 
        } 
    } 
}

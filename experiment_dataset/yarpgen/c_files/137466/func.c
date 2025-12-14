/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137466
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_14 = ((/* implicit */short) arr_3 [i_0] [9LL]);
        var_15 = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) | (var_5)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [15U]))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0]))))), (((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0] [i_0])) & (((/* implicit */int) arr_3 [i_0] [i_0])))))));
    }
    for (unsigned int i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        var_16 = ((((/* implicit */_Bool) (~((~(((/* implicit */int) (unsigned short)57401))))))) ? (((((/* implicit */_Bool) (~(arr_4 [i_1])))) ? ((~(arr_1 [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) ((short) arr_2 [i_1])))))) : ((~(((long long int) arr_6 [i_1])))));
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [(short)18] [i_1])) ? ((~((~(arr_4 [i_1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1])))));
    }
    for (unsigned int i_2 = 1; i_2 < 9; i_2 += 3) 
    {
        /* LoopSeq 3 */
        for (long long int i_3 = 3; i_3 < 8; i_3 += 4) 
        {
            var_18 = ((/* implicit */unsigned short) ((long long int) (((~(((/* implicit */int) arr_6 [i_2 - 1])))) - (((/* implicit */int) min((arr_0 [i_2] [i_2 + 1]), (arr_5 [i_3 - 1])))))));
            var_19 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2 + 1] [i_2 + 1])) ? (arr_1 [2LL]) : (arr_1 [(unsigned char)0]))))));
            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) arr_5 [i_3 - 1]))));
            var_21 -= ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [(_Bool)1]))) | (arr_4 [i_2])))) ? (((/* implicit */unsigned long long int) (+(arr_4 [i_2 + 1])))) : (min((0ULL), (((/* implicit */unsigned long long int) (unsigned short)30720)))))) % (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_10 [i_3 + 2] [i_2 + 1])))))));
        }
        /* vectorizable */
        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 3) 
        {
            var_22 = ((/* implicit */unsigned short) arr_6 [i_2 - 1]);
            var_23 = var_7;
            var_24 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_4] [i_2])) <= (((/* implicit */int) arr_5 [7U])))))) == (((arr_12 [2LL]) / (((/* implicit */long long int) ((/* implicit */int) arr_9 [2LL] [i_2 + 1])))))));
            var_25 |= arr_4 [i_2];
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_6 = 2; i_6 < 9; i_6 += 1) 
            {
                for (unsigned short i_7 = 0; i_7 < 10; i_7 += 4) 
                {
                    {
                        var_26 *= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [(short)5])) || (((/* implicit */_Bool) arr_16 [i_7] [(unsigned short)0])))))) != (var_3))))));
                        var_27 = ((/* implicit */short) (+(((/* implicit */int) ((unsigned short) arr_3 [i_2] [i_2 - 1])))));
                        var_28 = ((/* implicit */unsigned int) arr_3 [(unsigned short)20] [i_7]);
                    }
                } 
            } 
            var_29 *= ((/* implicit */signed char) min((min((((unsigned int) arr_2 [i_2 + 1])), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_20 [i_2] [i_5] [(short)8] [i_2]))))))), (((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) var_6)))))))));
            var_30 = ((/* implicit */short) (-(min((arr_17 [i_2 - 1] [i_2 - 1] [i_2 + 1]), (((/* implicit */long long int) var_7))))));
            var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) (+((-(max((arr_1 [(short)0]), (((/* implicit */long long int) arr_6 [i_2])))))))))));
        }
        var_32 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_14 [(signed char)6]))))), (((arr_16 [i_2 - 1] [i_2 + 1]) & (((/* implicit */unsigned long long int) ((long long int) var_0)))))));
        var_33 -= ((/* implicit */short) arr_17 [(unsigned short)6] [i_2] [i_2]);
    }
    var_34 = ((/* implicit */long long int) (-(((/* implicit */int) var_0))));
    var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (((/* implicit */int) var_8)) : ((~((~(((/* implicit */int) var_11))))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151386
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
    var_13 = ((min((((/* implicit */int) ((((/* implicit */int) var_8)) <= (((/* implicit */int) var_0))))), ((+(((/* implicit */int) (_Bool)1)))))) < (var_6));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            arr_6 [i_0] [2] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (arr_5 [7] [i_1]) : (((/* implicit */int) var_8))))) - (((unsigned long long int) max((((/* implicit */int) (signed char)127)), (-2147483641))))));
            arr_7 [i_0] [14ULL] = ((/* implicit */_Bool) var_7);
            var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((-1695533991), (((/* implicit */int) (short)25850))))) ? (min((arr_4 [i_0] [i_1]), (((/* implicit */unsigned int) var_9)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (arr_5 [i_1] [i_0]) : (arr_5 [i_0] [i_1]))))));
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                for (int i_3 = 0; i_3 < 16; i_3 += 4) 
                {
                    {
                        arr_12 [i_3] [i_2] [i_0] [i_0] = ((/* implicit */int) (+(((arr_4 [i_1] [i_1]) >> (((arr_4 [i_3] [i_2]) - (4155915987U)))))));
                        var_15 += max((((/* implicit */int) (!(((/* implicit */_Bool) ((3426132714570456654LL) | (-4589793367000842439LL))))))), (((((/* implicit */_Bool) (+(var_11)))) ? (((((/* implicit */_Bool) arr_3 [i_2] [i_2])) ? (((/* implicit */int) (_Bool)1)) : (arr_5 [(short)1] [i_1]))) : (((/* implicit */int) var_0)))));
                        arr_13 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned short) ((((var_11) - (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_11)))))) - (((/* implicit */long long int) (((!((_Bool)1))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
                    }
                } 
            } 
        }
        for (long long int i_4 = 0; i_4 < 16; i_4 += 3) 
        {
            /* LoopSeq 1 */
            for (signed char i_5 = 0; i_5 < 16; i_5 += 3) 
            {
                var_16 = ((/* implicit */_Bool) (unsigned short)42829);
                arr_19 [i_5] [10] [i_0] [i_5] = ((/* implicit */unsigned int) arr_5 [i_0] [i_0]);
            }
            /* LoopNest 2 */
            for (long long int i_6 = 1; i_6 < 13; i_6 += 1) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 16; i_8 += 1) 
                        {
                            arr_28 [i_0] [i_6] [i_4] [i_6] [i_7] [i_8] = ((/* implicit */unsigned short) ((int) arr_0 [i_7]));
                            var_17 = ((/* implicit */_Bool) (unsigned char)176);
                        }
                        var_18 = ((/* implicit */unsigned short) arr_0 [i_0]);
                    }
                } 
            } 
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_9 = 0; i_9 < 16; i_9 += 4) 
        {
            arr_31 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_23 [2ULL] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_8 [i_0])) : (((/* implicit */int) var_8))));
            arr_32 [i_0] [(unsigned short)2] [i_9] = ((/* implicit */unsigned long long int) (((+(var_6))) - (((/* implicit */int) arr_20 [i_9] [i_9] [i_0] [i_9]))));
            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_9] [i_0])) ? (((/* implicit */int) arr_17 [i_0] [i_9])) : (((/* implicit */int) arr_17 [i_0] [i_0]))));
            /* LoopSeq 1 */
            for (signed char i_10 = 0; i_10 < 16; i_10 += 4) 
            {
                var_20 = ((/* implicit */int) var_2);
                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_21 [i_9] [i_10])) ? (((/* implicit */int) arr_21 [i_0] [i_9])) : (((/* implicit */int) var_10))));
                var_22 = ((/* implicit */long long int) arr_27 [10] [i_9] [i_9] [i_0]);
            }
            arr_36 [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_17 [i_0] [i_9]))));
        }
        /* vectorizable */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            var_23 = ((/* implicit */int) 9223372036854775807LL);
            var_24 = arr_5 [i_11] [i_0];
        }
        var_25 = ((/* implicit */short) (+(9223372036854775807LL)));
        var_26 = ((/* implicit */unsigned int) -1);
    }
}

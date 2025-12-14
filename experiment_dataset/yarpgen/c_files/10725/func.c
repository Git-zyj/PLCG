/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10725
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
    var_20 = ((/* implicit */unsigned int) var_4);
    var_21 = ((/* implicit */unsigned long long int) min((((var_10) & (((((/* implicit */_Bool) var_9)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_11))))))), (var_12)));
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_15))));
    var_23 = ((/* implicit */int) ((((((/* implicit */_Bool) var_11)) ? (((unsigned long long int) var_11)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned long long int) var_19))))) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (((var_3) | (((/* implicit */long long int) ((/* implicit */int) var_15))))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_24 ^= ((/* implicit */int) ((((/* implicit */_Bool) min((arr_1 [i_0 + 1] [i_0 + 1]), (((/* implicit */int) var_7))))) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_0 [14]) == (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1)))))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 3; i_1 < 21; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    {
                        var_25 = ((/* implicit */long long int) arr_2 [i_0]);
                        /* LoopSeq 1 */
                        for (int i_4 = 1; i_4 < 21; i_4 += 2) 
                        {
                            arr_12 [i_0] [i_1] [i_2] [i_2] [i_3] [i_4] = ((/* implicit */_Bool) (signed char)-1);
                            var_26 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_4] [(_Bool)1] [i_2] [i_1] [i_0])) ? (arr_0 [i_2]) : (((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_2] [i_3] [i_3] [i_4] [10U]))))) ? (((/* implicit */int) (unsigned short)25589)) : ((((_Bool)1) ? (((/* implicit */int) arr_5 [i_0 + 1] [i_1 - 2] [i_0 + 1])) : (arr_1 [i_0] [i_1])))));
                            arr_13 [i_0] [(_Bool)1] [18] [i_2] [i_4] = ((/* implicit */unsigned long long int) var_14);
                            var_27 *= ((/* implicit */short) ((long long int) arr_3 [i_3] [i_3]));
                        }
                        var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((561055762887163794ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2] [i_3])))))));
                    }
                } 
            } 
            var_29 = ((/* implicit */short) var_7);
            var_30 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_1 - 2] [i_0 + 1] [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) arr_6 [i_1 + 1] [i_1 - 1] [i_0 + 1] [i_0])) : (((/* implicit */int) arr_6 [i_1 - 2] [i_1 - 1] [i_0 + 1] [i_0]))));
            var_31 = ((/* implicit */unsigned short) ((((/* implicit */long long int) arr_2 [i_0])) & (((((/* implicit */long long int) ((/* implicit */int) arr_5 [(unsigned short)10] [(unsigned short)20] [i_0]))) ^ (arr_4 [i_0] [(_Bool)1] [i_1])))));
            var_32 = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_0 + 1] [i_1 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_10 [i_0] [i_1 - 2] [i_0 + 1] [15U] [i_1 + 1])));
        }
    }
}

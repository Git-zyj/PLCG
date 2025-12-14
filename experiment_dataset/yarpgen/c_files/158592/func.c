/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158592
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
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)49152)) : (((/* implicit */int) (unsigned short)49152))))), (var_9))) : (((/* implicit */long long int) ((/* implicit */int) (short)20812)))));
    var_15 = ((/* implicit */short) var_13);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_16 -= ((/* implicit */unsigned short) var_9);
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            var_17 += ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_12), ((short)20812)))) ? (((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_0])))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [i_1] [i_0])), (arr_0 [i_0]))))));
            /* LoopNest 2 */
            for (unsigned short i_2 = 4; i_2 < 9; i_2 += 4) 
            {
                for (long long int i_3 = 0; i_3 < 10; i_3 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        for (int i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            var_18 += ((/* implicit */long long int) arr_7 [i_4] [i_1] [7] [i_1]);
                            arr_13 [i_3] [i_3] [i_2] [i_1] [i_3] = ((/* implicit */int) var_8);
                            var_19 = ((/* implicit */long long int) var_5);
                        }
                        for (long long int i_5 = 0; i_5 < 10; i_5 += 4) 
                        {
                            arr_16 [(_Bool)0] [i_3] [i_3] [i_3] [i_5] [(_Bool)0] = ((/* implicit */_Bool) arr_4 [i_2] [i_2 + 1] [i_2]);
                            var_20 *= ((/* implicit */short) ((signed char) arr_8 [i_0] [i_1] [3] [(unsigned short)8] [6] [i_0]));
                            arr_17 [i_0] [i_1] [i_0] [i_3] [i_3] [i_1] = ((/* implicit */int) arr_8 [i_5] [i_3] [i_2] [i_1] [i_0] [i_0]);
                            arr_18 [i_3] [i_3] [i_2] [i_2] [i_0] = 796236486;
                            var_21 = ((/* implicit */unsigned short) max((((/* implicit */long long int) arr_6 [i_5] [i_2] [i_2])), (max((max((var_9), (((/* implicit */long long int) var_3)))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2 + 1] [i_0] [i_1] [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_15 [i_0])))))))));
                        }
                        for (signed char i_6 = 0; i_6 < 10; i_6 += 4) 
                        {
                            arr_22 [i_0] [i_0] [i_3] [i_0] = min((((/* implicit */unsigned short) ((_Bool) ((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (var_13) : (var_13))))), (min(((unsigned short)17910), (((/* implicit */unsigned short) (signed char)126)))));
                            arr_23 [i_6] [i_3] [(unsigned char)4] [i_1] [i_3] [i_0] = ((/* implicit */short) min((max((((/* implicit */long long int) max((-1), (((/* implicit */int) (unsigned char)88))))), (arr_11 [i_3]))), (((/* implicit */long long int) max((((var_2) | (((/* implicit */int) arr_15 [i_2])))), (((((/* implicit */_Bool) -666981506)) ? (-2) : (((/* implicit */int) arr_0 [i_3])))))))));
                            var_22 &= ((/* implicit */long long int) max(((unsigned short)47632), (((/* implicit */unsigned short) ((short) arr_8 [i_0] [i_1] [i_2 - 4] [i_3] [i_0] [i_1])))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_7 = 0; i_7 < 10; i_7 += 4) 
                        {
                            var_23 -= ((/* implicit */unsigned char) arr_0 [i_3]);
                            arr_27 [(signed char)9] [(signed char)9] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_1 [i_0] [i_0])), (arr_19 [i_2] [i_2 - 4] [i_2 - 4] [i_2 + 1] [i_2])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_3] [i_0] [(short)0]))) : (arr_11 [i_3])));
                            arr_28 [i_7] [i_1] [i_1] [i_3] [i_7] &= ((/* implicit */signed char) var_4);
                        }
                    }
                } 
            } 
        }
    }
}

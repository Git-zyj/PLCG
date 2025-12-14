/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144045
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */long long int) (~(max((((/* implicit */int) arr_2 [i_0 + 2] [(_Bool)1] [i_0 + 1])), (((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) arr_2 [6LL] [i_0] [6LL])) : (((/* implicit */int) var_6))))))));
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 19; i_2 += 2) 
                {
                    for (long long int i_3 = 2; i_3 < 16; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (int i_4 = 2; i_4 < 18; i_4 += 4) 
                            {
                                var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_5)) ? ((-9223372036854775807LL - 1LL)) : (arr_10 [i_0] [i_1] [(unsigned char)11] [i_3] [i_0] [i_4]))), (((/* implicit */long long int) arr_7 [i_0] [i_4] [i_1]))))) ? (((((/* implicit */_Bool) (short)23362)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_8 [i_4 - 2] [i_4 + 2] [i_4] [(short)7] [i_4 + 1]))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_11 [i_2 + 1] [i_1] [i_2] [i_3 - 2] [i_4 + 1])), (max((0U), (((/* implicit */unsigned int) arr_5 [i_1])))))))));
                                var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) ((arr_8 [i_3] [9] [i_3] [16U] [i_3]) != (((/* implicit */long long int) ((/* implicit */int) var_11)))))), (arr_7 [i_2 + 1] [i_3 + 4] [i_3 + 1])))) ? (((/* implicit */int) max((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]), (min((var_13), (arr_2 [i_2] [i_2] [i_2])))))) : (min(((+(((/* implicit */int) arr_2 [i_1] [i_1] [i_4])))), (((/* implicit */int) var_13)))))))));
                            }
                            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                            {
                                var_18 = ((/* implicit */long long int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]);
                                arr_14 [0LL] [i_1] [(unsigned char)5] [i_1] [0LL] [i_1] = min((max((arr_3 [i_5 - 1] [i_2 + 1] [i_0 + 1]), (((/* implicit */short) arr_2 [i_5 - 1] [i_2 + 1] [i_0 + 1])))), (max((arr_3 [i_5 - 1] [i_2 + 1] [i_0 + 1]), (((/* implicit */short) var_2)))));
                            }
                            for (short i_6 = 3; i_6 < 16; i_6 += 1) 
                            {
                                arr_18 [i_0] [i_6] [i_6] [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [(_Bool)1] [12LL] [i_3] [i_3])) ? (arr_9 [i_0] [12U] [16LL] [12U] [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_2 + 1] [i_2 + 1])))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4)))))));
                                var_19 = ((/* implicit */unsigned int) (+(max((arr_10 [i_6 + 2] [i_6] [(_Bool)1] [i_6] [i_6 + 2] [i_6 - 3]), (arr_10 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 - 2] [i_6 + 4])))));
                            }
                            arr_19 [i_0 - 1] [i_0 - 1] [i_2] [i_2 + 1] = ((/* implicit */unsigned char) var_0);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (unsigned char i_8 = 2; i_8 < 17; i_8 += 2) 
                    {
                        {
                            arr_26 [(short)11] [i_1] [i_1] [i_1] [i_7] = ((/* implicit */unsigned int) min((((unsigned long long int) arr_13 [i_8 - 1] [i_8] [i_8 + 3] [i_0 + 2] [i_0 + 2])), (((/* implicit */unsigned long long int) max((max((arr_12 [i_8 - 1] [i_7] [i_7] [i_1] [i_1] [i_0] [i_0]), (((/* implicit */int) var_3)))), (((/* implicit */int) (short)(-32767 - 1))))))));
                            arr_27 [9] [i_7] [9] [14ULL] = ((/* implicit */unsigned int) ((((unsigned long long int) ((((/* implicit */_Bool) arr_10 [7ULL] [10ULL] [7ULL] [i_7] [7ULL] [7ULL])) ? (9223372036854775807LL) : (arr_15 [i_7] [i_1] [i_1] [i_1] [i_1] [i_1])))) / (((/* implicit */unsigned long long int) min((arr_6 [i_0 + 2] [i_0 - 1] [i_0 + 2]), (min((((/* implicit */long long int) arr_16 [i_0] [(_Bool)0] [i_0 + 1] [i_0] [i_0 - 1])), (arr_9 [i_0] [i_0] [i_0] [(_Bool)1] [(unsigned char)2]))))))));
                            var_20 += ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)159)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))) : (var_0))))))), (max((((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (9223372036854775785LL) : (9007061815787520LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)32613)) ? (((/* implicit */int) arr_3 [3ULL] [i_1] [i_7])) : (((/* implicit */int) arr_7 [i_0] [(_Bool)1] [i_7])))))))));
                            var_21 -= ((/* implicit */long long int) ((min((max((-1851560025), (((/* implicit */int) arr_2 [(short)12] [i_1] [(unsigned char)14])))), (((/* implicit */int) ((short) var_8))))) & ((~(((/* implicit */int) arr_0 [i_0] [i_0 + 1]))))));
                            var_22 = ((/* implicit */unsigned char) max((2028629436U), (((/* implicit */unsigned int) (short)32743))));
                        }
                    } 
                } 
                arr_28 [(unsigned char)15] [i_1] = ((/* implicit */_Bool) max(((+(((((/* implicit */_Bool) arr_25 [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0] [i_0] [i_0 - 1] [i_0] [i_0]))) : (-9223372036854775807LL))))), (min(((+(var_0))), (var_0)))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_4)))))));
}

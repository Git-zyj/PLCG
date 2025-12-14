/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153458
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
    var_19 = ((/* implicit */_Bool) max((max((((/* implicit */unsigned int) var_6)), (((var_9) + (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))), (max((var_1), (((/* implicit */unsigned int) var_0))))));
    var_20 -= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)38)) ? (var_13) : (((((/* implicit */_Bool) 16620787654368045083ULL)) ? (((/* implicit */int) (short)-12262)) : (((/* implicit */int) (unsigned short)65535))))))));
    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) var_17))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 24; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 21; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 23; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_1] [i_4 + 2] |= ((/* implicit */long long int) arr_6 [(unsigned short)13] [i_3] [i_1]);
                                var_22 &= ((/* implicit */unsigned int) arr_3 [i_3]);
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned long long int) max((-1644314206055665131LL), (((/* implicit */long long int) arr_4 [i_0]))));
                    arr_14 [i_2] [i_1] [i_2] = ((/* implicit */unsigned char) arr_12 [i_0] [i_2] [i_0] [i_0]);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        arr_17 [i_2] [i_2] = ((/* implicit */short) ((((((/* implicit */int) arr_2 [i_0])) <= (((/* implicit */int) arr_15 [i_0] [i_1 - 1] [i_2] [i_5])))) ? (((/* implicit */int) ((arr_16 [i_0] [i_2] [i_2] [15U] [i_0] [i_5]) < (((/* implicit */unsigned long long int) arr_12 [6U] [6U] [i_2] [i_5]))))) : (((/* implicit */int) ((((/* implicit */long long int) 3959524776U)) < (arr_11 [i_0] [i_0] [i_1] [i_2] [(unsigned short)0]))))));
                        /* LoopSeq 1 */
                        for (signed char i_6 = 0; i_6 < 25; i_6 += 3) 
                        {
                            var_24 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) (short)-26595))));
                            arr_20 [i_0] [i_2] [(_Bool)1] [i_5] [i_6] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_0] [i_1] [i_2] [i_0])) << (((/* implicit */int) (signed char)5))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) + (var_3))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_6 [i_1] [i_2] [i_2]))));
                            var_25 = ((((/* implicit */int) var_16)) / (var_0));
                            var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((((/* implicit */int) var_18)) * (((/* implicit */int) var_10)))))));
                            var_27 ^= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_12))) / (arr_8 [i_2] [i_0] [i_1 - 2] [i_0])));
                        }
                    }
                    var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) max((max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) | (arr_10 [i_0] [i_0] [i_1] [i_1] [i_1] [i_2])))), (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))), (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) 335442520U)) : (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [20ULL]))) : (0ULL))))))))));
                }
            } 
        } 
    } 
}

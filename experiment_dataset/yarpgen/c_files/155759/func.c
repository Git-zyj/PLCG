/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155759
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
    var_12 ^= ((/* implicit */unsigned char) ((((/* implicit */int) var_1)) | (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_3))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_13 += ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((unsigned char) 11322298810211685691ULL))), (((((/* implicit */_Bool) arr_10 [i_0] [3ULL] [i_1 + 1] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [(unsigned char)11]))) : (7124445263497865926ULL)))));
                                var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) 11322298810211685677ULL)) ? ((+(min((var_0), (((/* implicit */unsigned int) (unsigned short)57394)))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) arr_11 [i_3] [(_Bool)1])) ? (((/* implicit */int) arr_13 [i_3] [i_2] [i_1 + 1])) : (((/* implicit */int) arr_1 [i_3])))) : (((/* implicit */int) arr_11 [(short)3] [i_0]))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 21; i_5 += 1) 
                    {
                        for (short i_6 = 0; i_6 < 21; i_6 += 2) 
                        {
                            {
                                var_15 += ((/* implicit */short) ((((/* implicit */_Bool) ((arr_12 [i_0] [i_1 + 1] [i_1 + 1] [(short)4] [i_1 + 1]) / (arr_7 [i_1 + 1])))) ? ((~(arr_7 [i_1 + 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_7 [i_1 + 1]) <= (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))));
                                var_16 = ((((/* implicit */_Bool) max((((arr_13 [i_1] [i_2] [i_1]) ? (((/* implicit */int) arr_2 [16U] [15LL])) : (((/* implicit */int) arr_14 [i_0] [i_1] [18] [20])))), (((/* implicit */int) var_6))))) ? (((7124445263497865917ULL) - (((8407205333772724175ULL) - (7124445263497865908ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) arr_9 [i_1])))) || (((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_1] [i_2] [i_1] [i_6])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((1131696601015009463ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32748))));
}

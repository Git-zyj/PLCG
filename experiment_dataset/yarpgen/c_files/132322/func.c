/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132322
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
    var_11 = ((/* implicit */unsigned char) var_4);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_11 [i_3] [i_2] [i_3] [i_1] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_10 [i_3]))));
                            var_12 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((2012824879U), (((/* implicit */unsigned int) (!(arr_6 [(_Bool)1])))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_4 = 0; i_4 < 13; i_4 += 2) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 13; i_6 += 3) 
                        {
                            {
                                arr_21 [i_4] &= ((/* implicit */int) arr_3 [i_6] [4]);
                                var_13 = ((/* implicit */_Bool) min((((arr_8 [i_6] [i_5] [(short)6] [10] [i_0]) * (((/* implicit */int) arr_6 [i_5])))), ((+(((/* implicit */int) arr_0 [i_6]))))));
                                var_14 = ((/* implicit */_Bool) (+(max((max((1203463047), (arr_4 [i_4] [i_1]))), (((((/* implicit */int) arr_6 [i_1])) & (arr_8 [(unsigned short)11] [i_5] [i_0] [(signed char)5] [i_0])))))));
                                var_15 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_17 [i_6] [i_5] [i_4] [i_4] [i_1] [i_0]) : (((/* implicit */int) arr_6 [10LL]))))) ? (((((/* implicit */_Bool) arr_14 [i_5])) ? (((/* implicit */int) arr_14 [i_4])) : (((/* implicit */int) arr_14 [i_4])))) : ((+(((/* implicit */int) (unsigned char)231))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_7 = 0; i_7 < 13; i_7 += 2) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (signed char i_9 = 0; i_9 < 13; i_9 += 4) 
                        {
                            {
                                var_16 &= ((/* implicit */int) arr_3 [i_8] [6ULL]);
                                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_7])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((/* implicit */int) arr_24 [i_0] [(unsigned short)7] [i_7] [i_8])))))));
                                var_18 = ((/* implicit */unsigned int) (-(max((((/* implicit */int) arr_23 [(signed char)3] [i_8] [i_7] [i_1])), ((-(((/* implicit */int) (signed char)122))))))));
                                var_19 = ((/* implicit */int) max((arr_27 [i_8]), (((3077626952600884887LL) / (((/* implicit */long long int) ((/* implicit */int) (short)-8931)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}

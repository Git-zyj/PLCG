/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122601
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
    for (int i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (min((((/* implicit */unsigned long long int) (~(arr_1 [i_1])))), (arr_2 [i_0]))) : (((((((/* implicit */int) arr_0 [i_1] [i_1])) >= (((/* implicit */int) arr_3 [i_0 - 2] [9])))) ? (arr_2 [i_1]) : (((((/* implicit */_Bool) (unsigned char)118)) ? (((/* implicit */unsigned long long int) 248791948U)) : (12611035414183736340ULL))))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 3; i_2 < 13; i_2 += 2) 
                {
                    for (unsigned int i_3 = 3; i_3 < 11; i_3 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned long long int) max((var_14), (arr_8 [i_1] [i_3])));
                            /* LoopSeq 1 */
                            for (short i_4 = 0; i_4 < 14; i_4 += 2) 
                            {
                                arr_12 [i_2] [i_2 - 3] [i_2] [i_2 - 2] [i_1] [i_2 - 2] [i_2] |= ((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_4 [i_0 - 1] [i_2 + 1] [i_2 - 2] [i_3 - 1]))))));
                                var_15 |= ((/* implicit */unsigned int) arr_11 [i_3] [i_1] [i_3] [i_3 + 1]);
                            }
                            var_16 -= ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_2 + 1] [i_3] [i_3])))))));
                            var_17 *= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0] [i_0]))))) ? (((/* implicit */int) max((arr_5 [i_0] [i_0] [i_2]), (arr_5 [i_0] [i_0] [(signed char)3])))) : (((/* implicit */int) max((arr_11 [i_2] [i_1] [8U] [(short)6]), (((/* implicit */short) arr_0 [i_1] [i_2]))))))) % (((/* implicit */int) (((+(arr_2 [i_0]))) >= (((/* implicit */unsigned long long int) arr_1 [i_1])))))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) arr_8 [i_0] [i_0 - 2]))));
                var_19 = (i_0 % 2 == zero) ? (((/* implicit */unsigned char) ((((((/* implicit */_Bool) (+(arr_7 [i_0] [i_1] [(short)2] [6] [i_1])))) ? (((/* implicit */unsigned long long int) (+(arr_9 [9] [i_0] [i_0] [i_1])))) : (((((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_1] [i_1])) | (arr_8 [i_0 - 2] [i_1]))))) >> (((((((248791927U) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-32))))) % (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1] [i_0] [i_0] [i_0]))))) - (6086U)))))) : (((/* implicit */unsigned char) ((((((/* implicit */_Bool) (+(arr_7 [i_0] [i_1] [(short)2] [6] [i_1])))) ? (((/* implicit */unsigned long long int) (+(arr_9 [9] [i_0] [i_0] [i_1])))) : (((((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_1] [i_1])) | (arr_8 [i_0 - 2] [i_1]))))) >> (((((((((248791927U) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-32))))) % (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1] [i_0] [i_0] [i_0]))))) - (6086U))) - (628586785U))))));
            }
        } 
    } 
    var_20 &= ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (var_5) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_2)))))));
}

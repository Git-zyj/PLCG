/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183709
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
    for (long long int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 4; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        {
                            var_10 = ((/* implicit */_Bool) (+(((max((var_7), (((/* implicit */long long int) 1641166097)))) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) != (var_5)))))))));
                            arr_12 [i_3] [i_1] [i_3] [i_1 - 3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_7 [i_0 + 2] [i_0 + 1] [i_0 + 1] [i_0 - 1])) : (((/* implicit */int) arr_7 [i_0 - 1] [i_0 + 2] [i_0 + 1] [i_0 + 1]))))) ? (((/* implicit */int) max((arr_7 [i_0 - 1] [i_0 + 2] [i_0 - 1] [i_0 + 2]), (arr_7 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 + 2])))) : (((/* implicit */int) ((unsigned short) (short)-22909)))));
                            arr_13 [i_0] [i_3] [(_Bool)1] [i_0] = ((/* implicit */unsigned int) arr_2 [i_0 + 1]);
                            var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) var_4))));
                        }
                    } 
                } 
                var_12 = ((/* implicit */unsigned int) (((-(arr_1 [i_0 - 1] [i_0 + 1]))) << (((((/* implicit */int) min((((/* implicit */short) arr_6 [i_0 - 1] [i_1 - 2])), ((short)-22909)))) + (22909)))));
                var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_1 + 3] [i_0 - 1] [(signed char)20])) && (((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0 - 1] [i_1 - 2])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1 - 4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [i_1 - 3] [i_1 - 3] [i_0]))) : (arr_3 [i_0 + 1])))) : (((unsigned long long int) 15204060905485231619ULL)))))));
            }
        } 
    } 
    var_14 = ((/* implicit */int) var_1);
    /* LoopNest 2 */
    for (unsigned char i_4 = 0; i_4 < 19; i_4 += 2) 
    {
        for (short i_5 = 3; i_5 < 16; i_5 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 19; i_6 += 1) 
                {
                    for (long long int i_7 = 1; i_7 < 18; i_7 += 4) 
                    {
                        {
                            arr_23 [i_5] [i_5] = ((((/* implicit */int) min((min((((/* implicit */unsigned short) var_2)), ((unsigned short)37580))), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_3 [(unsigned char)6])))))))) & (((/* implicit */int) ((_Bool) ((int) arr_21 [1LL] [i_5] [i_5])))));
                            var_15 = ((((((/* implicit */int) arr_19 [i_5] [i_7 + 1] [i_7 - 1])) <= (((/* implicit */int) arr_19 [i_5] [i_7 - 1] [i_7 - 1])))) ? (((/* implicit */int) ((var_7) <= (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_5] [i_7 + 1] [i_7 + 1])))))) : (((/* implicit */int) ((short) arr_7 [i_5 + 1] [i_6] [i_7] [i_7 + 1]))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_8 = 0; i_8 < 19; i_8 += 3) 
                {
                    var_16 *= ((/* implicit */unsigned char) (~(var_9)));
                    arr_26 [i_4] [i_5] [i_5] [i_5] = (i_5 % 2 == 0) ? (((/* implicit */long long int) ((arr_3 [i_4]) >> (((((/* implicit */int) arr_24 [i_5])) + (843)))))) : (((/* implicit */long long int) ((arr_3 [i_4]) >> (((((((/* implicit */int) arr_24 [i_5])) + (843))) - (14159))))));
                    arr_27 [i_5] [i_5] = ((((((((/* implicit */_Bool) (signed char)-30)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) + (9223372036854775807LL))) >> ((((+(((/* implicit */int) (unsigned short)31461)))) - (31401))));
                }
                var_17 = ((/* implicit */long long int) max((min((var_2), (((/* implicit */short) (!(((/* implicit */_Bool) 3242683168224319987ULL))))))), (var_2)));
                var_18 &= ((/* implicit */unsigned char) ((signed char) var_2));
                var_19 = ((min(((_Bool)0), (arr_11 [i_5] [i_5 - 3] [i_5]))) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_4] [i_5] [i_4] [i_5 - 3]))) : (min((((((/* implicit */_Bool) arr_18 [(short)9] [i_5] [i_5] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_4] [i_5] [i_5]))) : (var_4))), (((((/* implicit */long long int) ((/* implicit */int) var_8))) / (5848857503615080267LL))))));
            }
        } 
    } 
    var_20 ^= ((/* implicit */int) var_1);
}

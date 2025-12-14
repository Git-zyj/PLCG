/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141673
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
    for (short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 13; i_2 += 3) 
                {
                    for (short i_3 = 3; i_3 < 11; i_3 += 4) 
                    {
                        {
                            var_13 *= ((/* implicit */short) min((max((((((/* implicit */_Bool) (unsigned char)246)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (3814853856557958153LL))), (((/* implicit */long long int) arr_3 [i_2 + 2] [i_2] [i_3 - 1])))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_3] [i_2 - 1] [i_1] [i_0])) ? (((/* implicit */int) arr_4 [i_2 - 1] [(unsigned char)3])) : (((/* implicit */int) arr_9 [i_1] [i_1] [i_2 - 2] [i_2 - 2]))))) ? (((/* implicit */int) arr_12 [i_0] [i_1] [i_3] [i_3 + 4])) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_3] [i_2 - 1] [i_1])))))));
                            var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) min((min((((/* implicit */int) min((arr_12 [i_0] [i_2] [i_1] [i_0]), (arr_9 [i_1] [(signed char)0] [14U] [i_3 - 2])))), (min((-1955921214), (((/* implicit */int) (unsigned char)3)))))), (min((((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [7LL] [i_2 + 1] [i_3])) : (58282044))), (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_2] [i_3 + 3])) : (((/* implicit */int) arr_5 [i_0] [i_0])))))))))));
                            var_15 = (unsigned char)40;
                        }
                    } 
                } 
                arr_13 [i_0] = ((/* implicit */unsigned short) (unsigned char)215);
                /* LoopSeq 4 */
                for (unsigned long long int i_4 = 1; i_4 < 13; i_4 += 4) 
                {
                    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)31)), (arr_11 [i_0] [i_1] [8] [10] [i_1])))), (((unsigned long long int) (~(((/* implicit */int) (short)13467))))))))));
                    var_17 -= arr_3 [(short)4] [(short)4] [i_0];
                    var_18 *= ((/* implicit */short) max((((((/* implicit */int) arr_10 [i_4] [i_4] [(unsigned short)7] [i_4] [(_Bool)1] [i_4 + 1])) ^ (((/* implicit */int) arr_9 [i_1] [i_4] [i_1] [10])))), (((/* implicit */int) max((arr_10 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 + 2] [i_4] [i_4 + 1]), (arr_10 [i_4] [13ULL] [i_4] [i_4] [i_4 + 2] [i_4 + 1]))))));
                }
                for (int i_5 = 0; i_5 < 15; i_5 += 2) 
                {
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_0] [(signed char)1] [i_5])) ? (arr_16 [i_5] [i_1] [i_0] [i_0]) : (max((((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (-202026988870305415LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)41))))), (((/* implicit */long long int) (unsigned char)233))))));
                    arr_20 [i_0] [i_1] [i_5] [i_5] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) -4391530211769385659LL))));
                    var_20 = ((/* implicit */int) max((arr_7 [i_0] [i_1] [i_5] [i_5]), (((/* implicit */unsigned long long int) ((long long int) arr_7 [6] [i_5] [i_5] [i_0])))));
                }
                for (unsigned int i_6 = 0; i_6 < 15; i_6 += 2) 
                {
                    var_21 *= ((/* implicit */short) max((((/* implicit */int) (!(((/* implicit */_Bool) (short)-13470))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)240)) ? (((/* implicit */int) (_Bool)1)) : (2147483634)))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-13458))))));
                    var_22 = ((((/* implicit */_Bool) max((((/* implicit */long long int) ((short) -1466132781))), (max((arr_21 [i_0] [i_0] [i_6]), (((/* implicit */long long int) (unsigned char)222))))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)205))) : (min((min((((/* implicit */long long int) arr_8 [i_0] [i_0] [11U] [i_0])), (-3411078683891123476LL))), (arr_18 [i_0] [i_1] [i_6] [i_6]))));
                }
                for (long long int i_7 = 0; i_7 < 15; i_7 += 3) 
                {
                    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [2U])) ? (((/* implicit */int) (short)32755)) : ((-(2147483647)))))) ? (((int) arr_5 [i_0] [i_0])) : (max((((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_7] [i_7] [i_1] [i_0])) ? (((/* implicit */int) (short)13467)) : (((/* implicit */int) (_Bool)1)))), (min((589247696), (((/* implicit */int) arr_5 [i_7] [14]))))))));
                    var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) arr_3 [i_0] [i_1] [i_7]))));
                }
                arr_26 [i_1] = ((/* implicit */short) ((_Bool) arr_11 [i_0] [i_1] [0U] [i_0] [i_0]));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_8 = 0; i_8 < 17; i_8 += 2) 
    {
        for (long long int i_9 = 1; i_9 < 16; i_9 += 1) 
        {
            {
                arr_32 [i_8] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */int) (short)13462)) * (((/* implicit */int) (short)-13455))))) ? (var_0) : (min((((/* implicit */long long int) arr_27 [i_9])), (-9223372036854775795LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)13469)) ? (((/* implicit */int) arr_31 [i_9 + 1] [i_9 - 1])) : (((/* implicit */int) min(((unsigned char)25), ((unsigned char)248)))))))));
                arr_33 [i_9] = ((/* implicit */long long int) 25);
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_10 = 1; i_10 < 12; i_10 += 4) 
    {
        for (unsigned long long int i_11 = 1; i_11 < 12; i_11 += 2) 
        {
            {
                arr_38 [(short)0] [i_11] [i_10 - 1] = ((/* implicit */unsigned short) (short)-13443);
                var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)96)) ? (max((-550805875), (-1977395775))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_4 [i_10 + 1] [i_11 + 2])) : (((/* implicit */int) arr_4 [i_10 + 2] [i_11 + 2]))))));
            }
        } 
    } 
}

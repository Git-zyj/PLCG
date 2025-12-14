/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142346
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
    for (unsigned char i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_1] = ((/* implicit */int) arr_4 [i_1] [i_1]);
                var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) var_7))));
                var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) (~(((((/* implicit */_Bool) (signed char)88)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (signed char)-30)) + (36)))))) : (max((((/* implicit */unsigned long long int) -273061560)), (13814843419495576405ULL))))))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_18 *= ((/* implicit */unsigned int) ((arr_13 [i_0] [i_1] [i_2] [i_3] [i_3] [i_2]) >= (((/* implicit */unsigned int) max((((/* implicit */int) (_Bool)1)), (min((var_6), (((/* implicit */int) arr_3 [i_2] [i_1])))))))));
                                var_19 = ((/* implicit */int) var_12);
                            }
                        } 
                    } 
                } 
                arr_15 [i_1] = ((/* implicit */short) (+(((((/* implicit */unsigned long long int) var_9)) + (arr_7 [i_0 + 1] [i_1] [i_0] [i_0])))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */unsigned long long int) min((var_12), (((/* implicit */long long int) ((var_9) << (((10561911036159252314ULL) - (10561911036159252314ULL))))))))) : ((((!(((/* implicit */_Bool) 3662347617U)))) ? (var_1) : (((/* implicit */unsigned long long int) ((unsigned int) var_15)))))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 21; i_5 += 3) 
    {
        for (int i_6 = 4; i_6 < 18; i_6 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_7 = 3; i_7 < 20; i_7 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 21; i_8 += 4) 
                    {
                        for (long long int i_9 = 2; i_9 < 20; i_9 += 1) 
                        {
                            {
                                arr_27 [i_5] [i_7] = ((/* implicit */int) arr_20 [i_5] [i_8] [i_9]);
                                arr_28 [i_5] [i_6] [i_7] [i_9] [i_5] [i_6] [i_7] = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_22 [i_9] [i_5] [i_6 + 3] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)64))) : (arr_22 [i_5] [i_5] [i_5] [(unsigned short)3])))));
                                var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)25)) >> (((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                    arr_29 [19LL] [19LL] [i_7] = ((/* implicit */unsigned int) (short)-29717);
                }
                for (unsigned char i_10 = 0; i_10 < 21; i_10 += 1) 
                {
                    arr_34 [i_5] [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_5] [i_6])) ? (((/* implicit */int) (unsigned short)14241)) : (((/* implicit */int) arr_30 [i_5] [i_5] [i_5] [14ULL]))))) ? ((+(3662347617U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [i_6 + 2] [i_6 - 3] [i_6] [i_6 + 2] [i_6 - 2])) ? (((/* implicit */int) arr_25 [i_6 + 2] [i_6 - 3] [i_6 - 2] [i_6 + 2] [i_6 - 2])) : (((/* implicit */int) arr_25 [i_6 + 2] [i_6 - 3] [i_6 - 2] [i_6 + 2] [i_6 - 2])))))));
                    var_22 = ((/* implicit */short) 10561911036159252314ULL);
                }
                var_23 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)121))));
            }
        } 
    } 
    var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) var_2))));
}

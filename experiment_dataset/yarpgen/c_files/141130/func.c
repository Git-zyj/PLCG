/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141130
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */_Bool) var_10);
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_2 [i_0])) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-31232))))), (((/* implicit */unsigned int) (signed char)78))));
                arr_6 [i_0] [i_0] |= ((/* implicit */unsigned short) (+((-(((((/* implicit */_Bool) (signed char)-75)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        {
                            arr_11 [i_2] [i_2] = ((/* implicit */short) (+(((unsigned int) (((_Bool)0) || (((/* implicit */_Bool) arr_2 [i_0])))))));
                            var_18 ^= ((/* implicit */long long int) (+(((/* implicit */int) var_14))));
                            /* LoopSeq 1 */
                            for (unsigned char i_4 = 1; i_4 < 13; i_4 += 4) 
                            {
                                var_19 = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) var_12)) == (16234149968848640782ULL))) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [8LL] [i_2])))))))));
                                var_20 += ((/* implicit */_Bool) (-(((/* implicit */int) max((arr_4 [i_0] [i_4 - 1]), (((/* implicit */unsigned char) arr_1 [i_4 - 1])))))));
                                var_21 ^= var_15;
                            }
                            var_22 = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_2 [i_1])))) && (((/* implicit */_Bool) ((((/* implicit */int) (signed char)-84)) + (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)202))))))))));
                            arr_14 [13] [i_2] [i_2] [i_0] = ((/* implicit */unsigned long long int) (+(min((((/* implicit */long long int) var_8)), (((((/* implicit */_Bool) arr_3 [i_0] [(_Bool)1] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)11779))) : (var_6)))))));
                        }
                    } 
                } 
                arr_15 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_1])) + (((/* implicit */int) var_16)))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) 3186653744U);
}

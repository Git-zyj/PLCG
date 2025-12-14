/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179705
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
    var_11 = ((/* implicit */long long int) (!((_Bool)0)));
    var_12 = ((/* implicit */_Bool) (-((-(((/* implicit */int) (unsigned short)34230))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 4; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 2; i_2 < 16; i_2 += 2) 
                {
                    var_13 = ((/* implicit */short) ((32704ULL) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((signed char)0), ((signed char)-1)))) ? (max((((/* implicit */long long int) (short)-576)), (7469489555729319073LL))) : (((((/* implicit */_Bool) arr_6 [(signed char)17] [i_1] [(unsigned short)8] [5U])) ? (var_1) : (((/* implicit */long long int) arr_1 [i_1] [i_2])))))))));
                    var_14 = ((/* implicit */unsigned long long int) (~(((unsigned int) min((((/* implicit */short) var_8)), ((short)576))))));
                }
                /* LoopNest 3 */
                for (unsigned short i_3 = 0; i_3 < 18; i_3 += 3) 
                {
                    for (signed char i_4 = 3; i_4 < 17; i_4 += 1) 
                    {
                        for (long long int i_5 = 0; i_5 < 18; i_5 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((long long int) var_0))) ? (((/* implicit */int) arr_6 [i_0] [i_3] [i_4] [i_5])) : (((int) var_9))))));
                                arr_17 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 204017122U)) || (((/* implicit */_Bool) ((int) max((2685462918U), (((/* implicit */unsigned int) (short)13600))))))));
                                var_16 ^= ((/* implicit */long long int) min((((/* implicit */int) ((signed char) arr_1 [9U] [i_4]))), ((~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_10 [(_Bool)1] [(_Bool)1] [3LL] [6U] [1U] [i_3])) : (arr_13 [6ULL] [6ULL] [(short)9] [14LL] [(short)2] [i_5])))))));
                                var_17 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) (!(((/* implicit */_Bool) var_9)))))) ? (((/* implicit */long long int) (~(((/* implicit */int) min((arr_6 [i_1] [i_3] [i_4] [15]), (((/* implicit */unsigned short) arr_2 [i_0])))))))) : (max((((long long int) 65011712U)), (((/* implicit */long long int) (short)-576))))));
                                var_18 *= 4090950173U;
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [(signed char)2] [i_0] [i_0]))) : (var_5)))) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) max((var_8), ((unsigned char)255))))))), (max((max((-8737934471859995386LL), (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)239))))))))))));
            }
        } 
    } 
}

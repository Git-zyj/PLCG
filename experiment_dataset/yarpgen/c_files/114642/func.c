/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114642
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */_Bool) (-(1179626249976240738ULL)));
                var_21 = var_19;
                /* LoopNest 3 */
                for (unsigned char i_2 = 3; i_2 < 16; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                arr_13 [i_3] [i_1] [i_2] [9U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((11606223181054392487ULL), (arr_5 [i_0] [i_2] [i_0] [i_3])))) ? (((/* implicit */int) ((unsigned char) var_7))) : (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) arr_1 [i_1 + 1] [i_3 + 1])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_8 [i_0]))))) : (((var_13) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [(signed char)7]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2] [(unsigned char)11] [i_1] [i_2 - 2])))));
                                arr_14 [i_3] [i_0] [i_1] [16ULL] [(unsigned char)15] [i_4] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_1)) ? (arr_3 [i_1 - 1]) : (arr_3 [i_1 - 2])))));
                                arr_15 [i_0] [i_4] [i_3] [i_4] [i_4] [i_3 + 1] [15ULL] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_17)), ((-(max((6840520892655159128ULL), (((/* implicit */unsigned long long int) var_17))))))));
                                var_22 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (unsigned char)4)) : (70480838)));
                            }
                        } 
                    } 
                } 
                var_23 = ((/* implicit */unsigned char) (-9223372036854775807LL - 1LL));
            }
        } 
    } 
    var_24 = var_18;
}

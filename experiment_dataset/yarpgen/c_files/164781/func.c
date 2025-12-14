/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164781
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                arr_5 [i_0] [(short)9] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_0 [i_0] [(signed char)6])) ? (((((/* implicit */long long int) var_10)) | (9223372036854775799LL))) : (9223372036854775777LL))) - (((/* implicit */long long int) var_4))));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned int) arr_0 [4] [11U]);
                var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0]))));
                var_19 = (signed char)117;
                var_20 |= ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */int) arr_1 [i_1])) < (((((/* implicit */int) (signed char)125)) - (((/* implicit */int) (short)1536)))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_2 = 0; i_2 < 21; i_2 += 1) 
    {
        for (signed char i_3 = 0; i_3 < 21; i_3 += 2) 
        {
            for (int i_4 = 0; i_4 < 21; i_4 += 2) 
            {
                {
                    arr_15 [i_2] [i_2] [i_2] = ((/* implicit */short) var_5);
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 0; i_5 < 21; i_5 += 2) 
                    {
                        arr_20 [i_5] [i_4] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) 14979088842210651001ULL);
                        arr_21 [i_4] = ((/* implicit */int) ((var_8) < (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_12 [i_2] [i_5] [i_4]))))));
                        arr_22 [i_5] [i_3] [i_3] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) arr_14 [i_4] [i_5]))) ? (min((((((/* implicit */_Bool) arr_12 [i_5] [i_2] [i_2])) ? (9223372036854775777LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) (+(arr_19 [i_5] [i_4] [i_3] [i_2])))))) : (arr_18 [i_5] [i_4] [i_4] [i_3] [i_2] [i_2])));
                    }
                }
            } 
        } 
    } 
}

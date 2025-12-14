/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186373
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
    var_12 ^= ((/* implicit */unsigned char) 2334523223U);
    var_13 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((signed char) var_0))))) + (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)-26058))))), (((((/* implicit */_Bool) var_4)) ? (2334523223U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))));
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_3))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */int) (signed char)0)) <= (((/* implicit */int) var_4)))))) : (((min((var_11), (var_6))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((-9205228648840982839LL) < (((/* implicit */long long int) ((/* implicit */int) var_3))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    for (signed char i_3 = 1; i_3 < 23; i_3 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (signed char)0)), (9223372036854775807LL)));
                            var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) var_6)) >> (((/* implicit */int) arr_2 [i_0]))))), (((((/* implicit */long long int) ((/* implicit */int) var_8))) * (var_5)))))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_6 [i_0] [(unsigned short)18] [i_2] [i_3 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_3 + 1] [i_1]))))))) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_3 - 1])))))));
                            arr_10 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((long long int) (-(arr_3 [i_0] [i_3]))));
                            arr_11 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_7 [i_0] [i_1] [i_3 - 1] [i_3]), (arr_7 [i_0] [i_3 + 2] [i_3 + 2] [i_3])))) ? (((((/* implicit */int) arr_7 [i_0] [i_1] [i_3 - 1] [i_2])) | (((/* implicit */int) arr_7 [i_0] [i_2] [i_3 - 1] [i_3 + 2])))) : (((/* implicit */int) min((arr_7 [i_3 + 1] [i_1] [i_3 - 1] [i_3 + 1]), (arr_7 [i_0] [i_1] [i_3 + 2] [i_2]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 25; i_4 += 1) 
                {
                    for (int i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */_Bool) ((((/* implicit */int) var_6)) << (((((arr_5 [i_0] [i_5] [i_4]) & (((arr_12 [i_0] [i_1] [i_5]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64))) : (arr_5 [i_0] [i_0] [i_0]))))) - (893366281936482193ULL)))));
                            arr_17 [i_0] [i_1] [i_5] [i_5] &= ((/* implicit */signed char) min((((arr_2 [i_0]) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0])))), (((/* implicit */int) ((((/* implicit */int) var_1)) < (((/* implicit */int) arr_2 [i_1])))))));
                            var_18 += max((((/* implicit */int) (!(((/* implicit */_Bool) ((short) var_7)))))), ((~(((/* implicit */int) ((((/* implicit */int) var_10)) > (((/* implicit */int) arr_4 [i_0] [i_4] [i_5]))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_6 = 0; i_6 < 25; i_6 += 1) 
                {
                    for (short i_7 = 0; i_7 < 25; i_7 += 2) 
                    {
                        {
                            arr_22 [i_0] [i_0] [i_1] [i_1] [i_7] = ((/* implicit */short) var_10);
                            var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_1] [i_1])) ? (((/* implicit */int) arr_13 [i_0] [i_1])) : (((/* implicit */int) arr_13 [i_0] [i_1]))))) ? (arr_5 [i_1] [i_6] [i_7]) : (((((/* implicit */_Bool) ((((/* implicit */int) var_1)) & (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_6] [i_7])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_6]))))) : (arr_5 [i_0] [i_6] [i_7]))));
                            arr_23 [i_1] = ((/* implicit */_Bool) ((unsigned char) min((arr_0 [i_0] [i_6]), (arr_0 [i_7] [i_6]))));
                        }
                    } 
                } 
            }
        } 
    } 
}

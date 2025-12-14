/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141924
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
    for (long long int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */long long int) ((signed char) (((~(((/* implicit */int) arr_0 [(_Bool)1])))) & (((/* implicit */int) ((arr_2 [i_0 + 3]) > (arr_2 [i_0 + 3])))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */long long int) (+(((/* implicit */int) min((((var_3) < (((/* implicit */unsigned long long int) arr_5 [i_1] [i_1] [i_1])))), ((!(((/* implicit */_Bool) arr_0 [(signed char)19])))))))));
                            var_15 = min((((arr_3 [i_0 + 1]) - (((/* implicit */int) (signed char)-32)))), ((-(arr_3 [i_0 + 3]))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_4 = 1; i_4 < 17; i_4 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_5 = 2; i_5 < 20; i_5 += 3) 
        {
            for (long long int i_6 = 0; i_6 < 21; i_6 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 21; i_7 += 3) 
                    {
                        for (signed char i_8 = 2; i_8 < 20; i_8 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */_Bool) (~(arr_23 [i_6] [i_5 - 1] [i_6] [i_6] [12U])))) || (((/* implicit */_Bool) (-(arr_5 [i_5 - 1] [i_5 - 1] [i_6])))))))));
                                var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) arr_20 [(unsigned short)2] [i_4 + 1] [i_6] [(unsigned short)2] [16]))));
                                arr_24 [i_6] [i_6] [(signed char)10] [i_7] [(signed char)18] [10] = ((/* implicit */_Bool) (signed char)58);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (short i_9 = 0; i_9 < 21; i_9 += 1) 
                    {
                        arr_27 [i_9] [i_6] [i_9] [i_5 - 1] [i_6] [i_6] = ((/* implicit */unsigned int) min(((-(((/* implicit */int) (signed char)-62)))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_4 + 2] [i_5 - 2] [i_5 - 2] [i_9] [(signed char)11]))) <= ((-(var_0))))))));
                        arr_28 [i_6] [i_6] [i_6] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_4 - 1])) ? ((+(((/* implicit */int) arr_25 [i_4 + 4] [i_9] [(signed char)11] [(signed char)11] [i_6] [i_9])))) : (arr_3 [i_6])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) (short)-24525)), (arr_20 [i_4 + 4] [2] [0LL] [i_6] [i_9])))) + ((+(arr_3 [i_4 - 1])))))) : ((~(max((((/* implicit */unsigned long long int) arr_18 [i_4 + 2] [i_5 - 1])), (arr_22 [17U] [17U] [17U] [i_9] [i_9] [i_9] [(_Bool)1])))))));
                        var_18 &= ((/* implicit */int) (+(((((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [(signed char)16] [17ULL] [(unsigned short)6] [i_6] [i_9])) ? (((/* implicit */int) arr_14 [i_4 + 1])) : (((/* implicit */int) arr_9 [i_5] [i_9]))))) / (((((/* implicit */_Bool) arr_22 [i_4 + 3] [i_5 + 1] [(signed char)7] [i_5 - 1] [i_4 + 3] [i_6] [i_9])) ? (arr_5 [6] [i_6] [6]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_5])))))))));
                        var_19 = ((/* implicit */unsigned short) arr_4 [i_4 + 2] [14LL] [i_6] [(_Bool)1]);
                    }
                }
            } 
        } 
        var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_8))));
        var_21 = ((/* implicit */unsigned int) 8190);
    }
}

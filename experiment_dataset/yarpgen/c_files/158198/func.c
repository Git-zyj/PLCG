/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158198
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_18 = ((short) max((((/* implicit */unsigned int) (((_Bool)1) || (((/* implicit */_Bool) 1475191953U))))), ((~(arr_0 [(unsigned char)1])))));
                var_19 = ((/* implicit */short) arr_3 [i_1] [i_0] [i_0]);
                arr_5 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) arr_2 [i_1])) ? (((unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_4 [(_Bool)1] [i_1] [i_0]) : (arr_0 [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_1]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 17; i_2 += 1) 
    {
        for (unsigned int i_3 = 1; i_3 < 20; i_3 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 21; i_4 += 4) 
                {
                    for (unsigned int i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        {
                            var_20 = arr_6 [14ULL];
                            arr_14 [i_2 - 1] [i_2 - 1] [i_2] [18ULL] [i_4] [(unsigned short)0] = max((((/* implicit */unsigned char) ((((/* implicit */int) arr_10 [i_2] [(signed char)3])) >= (((/* implicit */int) arr_10 [i_2] [i_3]))))), (min((arr_10 [i_2] [i_3]), (arr_10 [i_2] [(_Bool)1]))));
                            arr_15 [i_2] [16ULL] [i_4] [i_2] = ((/* implicit */unsigned short) arr_10 [i_2] [i_3 + 1]);
                        }
                    } 
                } 
                arr_16 [i_2] [i_2] = ((/* implicit */unsigned int) max((arr_6 [(unsigned char)17]), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_10 [i_2] [i_3])) ? (arr_9 [i_2]) : (arr_1 [i_2]))) * (((((/* implicit */_Bool) arr_11 [i_2] [i_2] [i_2 + 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_3 + 1]))) : (arr_0 [i_3]))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_6 = 1; i_6 < 21; i_6 += 4) 
    {
        for (unsigned short i_7 = 1; i_7 < 18; i_7 += 1) 
        {
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                {
                    var_21 = max((((((/* implicit */_Bool) arr_18 [i_7 - 1] [i_6 + 1])) ? (arr_18 [i_7 - 1] [i_6 + 1]) : (arr_18 [i_7 - 1] [i_6 + 1]))), (((/* implicit */unsigned long long int) arr_4 [i_6 + 1] [i_7] [(short)23])));
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_6] [i_8 - 1] [i_8 - 1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_0 [i_8]) >= (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_22 [i_7] [i_7] [i_7])), (arr_2 [i_7 - 1]))))))))) : (((((/* implicit */_Bool) ((unsigned int) arr_2 [i_8 - 1]))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_6 - 1] [i_6] [i_6 + 1]))) : (((((/* implicit */_Bool) arr_3 [i_6] [i_6 + 1] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_6 - 1]))) : (arr_4 [i_6] [i_7] [i_8])))))));
                }
            } 
        } 
    } 
}

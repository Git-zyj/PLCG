/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141948
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 4; i_2 < 9; i_2 += 2) 
                {
                    for (unsigned short i_3 = 3; i_3 < 9; i_3 += 2) 
                    {
                        {
                            arr_10 [i_2] [i_2 - 2] [i_2] = ((/* implicit */unsigned short) ((unsigned long long int) max((((/* implicit */long long int) (+(((/* implicit */int) arr_5 [i_0]))))), (arr_6 [i_0] [8ULL] [i_2] [i_0]))));
                            /* LoopSeq 1 */
                            for (int i_4 = 0; i_4 < 11; i_4 += 2) 
                            {
                                arr_15 [i_1] [i_1] [i_3] = ((/* implicit */short) min((((((/* implicit */int) arr_4 [i_0] [i_2 - 3] [i_3 + 1])) + (((int) 9002801208229888ULL)))), ((~(((/* implicit */int) (signed char)-114))))));
                                arr_16 [5] [i_3 - 3] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) var_13);
                                arr_17 [(short)1] [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_3 [4] [i_1] [i_3 + 2])), (arr_9 [i_0] [i_2 - 4] [i_3] [4ULL] [i_2 - 4] [i_3 + 1]))))));
                            }
                        }
                    } 
                } 
                var_17 = arr_8 [i_1] [i_0];
            }
        } 
    } 
    var_18 -= ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((int) (_Bool)1))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) ((((/* implicit */unsigned int) var_13)) <= (var_3))))))) <= (var_1)));
    /* LoopNest 2 */
    for (unsigned short i_5 = 2; i_5 < 11; i_5 += 2) 
    {
        for (long long int i_6 = 2; i_6 < 11; i_6 += 4) 
        {
            {
                var_19 = ((/* implicit */signed char) (+((~(((((/* implicit */_Bool) var_6)) ? (var_13) : (((/* implicit */int) (short)-2387))))))));
                arr_23 [i_5] [i_6] = ((/* implicit */int) ((short) ((arr_22 [i_5 + 2] [i_6 - 1]) - (arr_22 [i_5 + 2] [i_6 - 1]))));
                var_20 = ((/* implicit */long long int) ((_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_19 [i_5])) : (arr_22 [i_5] [i_5])))), (max((var_2), (3349176006U))))));
                var_21 ^= ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_21 [0] [(_Bool)1] [0])), (arr_18 [i_5] [i_6 - 2])))))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) arr_18 [i_5] [i_6 + 1])) : (max((var_1), (((/* implicit */long long int) var_5))))))));
            }
        } 
    } 
    var_22 -= ((/* implicit */short) var_16);
}

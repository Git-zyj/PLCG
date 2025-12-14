/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152227
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
    var_10 = ((/* implicit */short) 16750055243042811115ULL);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) arr_0 [i_0])), (((((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1 - 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (84381362U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)135)))))) : (min((((/* implicit */unsigned long long int) var_2)), (var_7)))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 2; i_2 < 20; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_3] [(unsigned short)21] [i_4] [i_4] = ((/* implicit */unsigned char) arr_4 [i_0]);
                                var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [(signed char)18] [i_1] [i_2] [i_3] [(short)9] [(signed char)18]))) | (((((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ^ (var_7))))))))));
                            }
                        } 
                    } 
                } 
                arr_14 [4LL] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_12 [i_1 + 1] [i_1] [i_1 - 2] [i_1] [i_1]), (((/* implicit */unsigned long long int) arr_3 [i_1]))))) ? (((((/* implicit */int) (unsigned char)252)) & (((/* implicit */int) var_2)))) : (((/* implicit */int) arr_10 [i_1] [i_1] [14] [i_1] [i_0] [14]))));
            }
        } 
    } 
    var_13 = ((/* implicit */long long int) var_7);
    /* LoopNest 3 */
    for (signed char i_5 = 2; i_5 < 23; i_5 += 2) 
    {
        for (long long int i_6 = 3; i_6 < 23; i_6 += 2) 
        {
            for (short i_7 = 4; i_7 < 23; i_7 += 4) 
            {
                {
                    arr_23 [i_5] [i_7 - 4] = ((/* implicit */unsigned long long int) (+(min((((/* implicit */long long int) (~(-1721602242)))), (max((((/* implicit */long long int) 1721602248)), (arr_16 [(_Bool)1])))))));
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 24; i_8 += 4) 
                    {
                        for (signed char i_9 = 0; i_9 < 24; i_9 += 4) 
                        {
                            {
                                arr_31 [i_9] [i_7] [i_7] [i_7] [i_5 - 2] [i_5 - 2] [i_5 - 2] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_5 - 2])) && (((/* implicit */_Bool) arr_18 [i_6 - 3]))))) % (((/* implicit */int) (unsigned char)81))));
                                var_14 = ((/* implicit */short) max((max((((arr_19 [i_5]) == (((/* implicit */int) arr_30 [i_7] [i_7])))), ((_Bool)1))), (((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) 1721602242))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 = var_2;
}

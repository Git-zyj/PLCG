/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162438
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
    for (long long int i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_7), (arr_3 [i_1])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (857587428) : (((/* implicit */int) (unsigned short)39846))))) : (var_7)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (-489419938) : (((/* implicit */int) arr_5 [i_0] [i_1]))))) ? ((+(((/* implicit */int) arr_0 [5] [5])))) : (((/* implicit */int) arr_5 [i_0] [i_1 + 1])))) : ((-(-2018194834))))))));
                arr_6 [i_0] [i_1] [i_1] &= ((((4194304) - (((/* implicit */int) arr_0 [i_0 + 2] [i_1 - 1])))) + (arr_2 [i_0] [i_1]));
                arr_7 [i_0] = ((/* implicit */unsigned short) var_7);
                var_12 = ((/* implicit */short) var_3);
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_2 = 0; i_2 < 24; i_2 += 1) 
    {
        for (long long int i_3 = 0; i_3 < 24; i_3 += 4) 
        {
            for (unsigned char i_4 = 0; i_4 < 24; i_4 += 1) 
            {
                {
                    var_13 += ((/* implicit */unsigned short) ((min((var_0), (((((/* implicit */_Bool) -6813922947703535315LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_15 [i_2] [i_2] [i_2] [i_4]))))) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -8639911827788077142LL)) && (((/* implicit */_Bool) arr_14 [2LL] [2LL] [i_3]))))))));
                    var_14 = ((((/* implicit */_Bool) arr_16 [i_2])) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)57596)) & (((((((/* implicit */int) var_4)) + (2147483647))) >> (((var_10) + (1314462520)))))))) : (((((/* implicit */_Bool) ((long long int) arr_10 [i_2] [i_3]))) ? (((/* implicit */long long int) arr_11 [i_2] [i_2])) : (((((/* implicit */_Bool) var_8)) ? (arr_10 [i_2] [(unsigned short)19]) : (arr_10 [i_2] [i_2]))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_5 = 3; i_5 < 15; i_5 += 4) 
    {
        for (unsigned short i_6 = 0; i_6 < 17; i_6 += 1) 
        {
            {
                arr_24 [i_5] = arr_2 [i_5 + 1] [(_Bool)1];
                arr_25 [i_5 - 2] [i_5 - 2] [i_5 - 2] = ((/* implicit */_Bool) (-((~(arr_14 [i_5 - 2] [i_5 - 1] [(unsigned short)12])))));
            }
        } 
    } 
}

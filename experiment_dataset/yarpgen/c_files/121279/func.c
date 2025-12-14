/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121279
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
    var_12 ^= ((/* implicit */int) var_0);
    var_13 = ((/* implicit */_Bool) (+(12576523721447297302ULL)));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 24; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                arr_7 [i_0] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) 3588025055U)) ? (((/* implicit */int) arr_6 [i_0 - 1] [i_0 - 1] [i_0])) : (((/* implicit */int) arr_6 [i_0 + 1] [i_0 + 1] [(unsigned short)22])))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 24; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        {
                            arr_16 [10LL] [10LL] [8ULL] [8ULL] [i_1] [i_1] &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 706942215U))));
                            var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) var_2)))))) ? (((/* implicit */unsigned long long int) ((((3588025055U) << (((arr_5 [i_0] [i_2] [i_3]) - (408600577))))) >> (((((((/* implicit */_Bool) var_2)) ? (var_2) : (9311126403355399312ULL))) - (14726066706308244159ULL)))))) : (var_7)));
                            arr_17 [i_2] [i_0] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (((9311126403355399328ULL) + (arr_9 [i_1] [i_2] [i_1]))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2 - 3] [i_0 - 1] [i_0 - 1] [i_0 - 1]))) : (var_9))))));
                            arr_18 [i_2] [(unsigned short)2] = ((/* implicit */unsigned int) ((int) ((unsigned long long int) arr_5 [i_1] [i_1] [i_1])));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_4 = 3; i_4 < 13; i_4 += 4) 
    {
        for (unsigned int i_5 = 0; i_5 < 15; i_5 += 1) 
        {
            {
                arr_27 [(unsigned short)4] [i_5] [i_5] = var_5;
                arr_28 [i_4] [i_4] = ((/* implicit */int) 0ULL);
            }
        } 
    } 
}

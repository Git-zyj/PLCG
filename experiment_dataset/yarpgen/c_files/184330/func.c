/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184330
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_4)))) ? (((((/* implicit */_Bool) 4294967295U)) ? (var_4) : (((/* implicit */long long int) var_1)))) : (((/* implicit */long long int) arr_0 [i_1 - 1] [i_1 + 1]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1181954836)) ? (((/* implicit */long long int) 1239743238U)) : (-5889657213415809341LL)))) ? (((/* implicit */unsigned int) arr_3 [i_1 + 1] [i_1] [i_1])) : (3854672779U))) : (1876726026U));
                arr_6 [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1 - 1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)26992))) : (2413715688U)))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_2 = 1; i_2 < 13; i_2 += 3) 
    {
        for (long long int i_3 = 0; i_3 < 14; i_3 += 2) 
        {
            for (int i_4 = 0; i_4 < 14; i_4 += 3) 
            {
                {
                    arr_15 [i_2] [i_3] [i_3] = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)-15441))));
                    var_13 = ((/* implicit */short) min(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (!(((/* implicit */_Bool) 5889657213415809340LL)))))));
                    var_14 = ((/* implicit */int) arr_0 [15] [i_3]);
                }
            } 
        } 
    } 
}

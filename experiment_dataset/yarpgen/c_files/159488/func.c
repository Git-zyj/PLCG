/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159488
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
    for (signed char i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_15 += ((/* implicit */long long int) ((((((/* implicit */_Bool) 18446744073709551601ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)19486))) : (var_11))) ^ (((((/* implicit */_Bool) (unsigned short)63249)) ? (((/* implicit */unsigned long long int) 129024U)) : (16167424531777061535ULL)))));
                arr_5 [i_0 - 1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((arr_0 [i_0] [i_0]) >= (((arr_0 [i_1] [i_0 - 1]) >> (((((/* implicit */int) arr_2 [i_0 - 1])) - (141)))))));
                var_16 = ((/* implicit */int) ((max((1023U), (((/* implicit */unsigned int) 1165589944)))) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294838271U)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) (unsigned char)151))))) ? (min((((/* implicit */int) (_Bool)0)), (arr_0 [i_0] [i_1]))) : (((/* implicit */int) (unsigned short)40952)))))));
                var_17 = ((/* implicit */signed char) 4294838271U);
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 3; i_2 < 14; i_2 += 2) 
    {
        for (short i_3 = 0; i_3 < 18; i_3 += 1) 
        {
            {
                arr_12 [i_2] = ((/* implicit */long long int) (_Bool)1);
                var_18 = min(((+(arr_6 [i_2 + 2]))), (((/* implicit */long long int) ((((/* implicit */int) arr_11 [(short)4] [i_2 - 3])) & (((/* implicit */int) arr_11 [2U] [i_2 + 4]))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)-1))));
}

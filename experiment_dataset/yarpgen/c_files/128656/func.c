/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128656
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
    var_10 = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) / (var_5)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_5 [i_1 + 2] [i_1 + 2] [i_0])) ? (arr_5 [i_1 - 1] [i_1] [i_0]) : (arr_1 [i_0] [i_1])))));
                arr_7 [i_0] = ((/* implicit */_Bool) (short)-28535);
                var_11 &= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (-2147483647 - 1))) ? (max((13245810844679785811ULL), (arr_1 [2] [i_1 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)110))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 1912004283391128201ULL))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 23; i_2 += 3) 
    {
        for (unsigned char i_3 = 1; i_3 < 21; i_3 += 4) 
        {
            {
                arr_12 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((unsigned short) var_2));
                var_12 = ((/* implicit */unsigned short) arr_11 [i_2] [i_2]);
                var_13 = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2]))) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_3] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3]))) : (6725157218986090083LL)))) ? (((/* implicit */unsigned long long int) ((arr_10 [i_2] [i_2] [i_3 + 1]) << (((arr_9 [i_2]) - (14423703457477897306ULL)))))) : (var_6))));
            }
        } 
    } 
}

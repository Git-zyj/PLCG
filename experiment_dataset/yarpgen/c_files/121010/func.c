/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121010
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) (-(1813493751U))))) + (((/* implicit */int) (signed char)122))));
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_19 ^= ((/* implicit */signed char) min(((-(((/* implicit */int) var_6)))), (((/* implicit */int) ((arr_0 [i_0 - 2]) == (arr_0 [i_0 - 2]))))));
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_1 [i_0 + 1]), (arr_2 [i_0 - 4] [i_0 - 1])))) ? (((((/* implicit */int) var_9)) ^ (((/* implicit */int) arr_1 [i_0 + 1])))) : (((/* implicit */int) min((arr_1 [i_0 - 2]), (arr_1 [i_0 - 2]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 10; i_2 += 2) 
    {
        for (unsigned short i_3 = 0; i_3 < 10; i_3 += 2) 
        {
            {
                arr_9 [i_2] [i_2] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_8 [i_3] [i_2]))));
                arr_10 [i_2] [(signed char)6] = ((/* implicit */unsigned char) arr_2 [(signed char)9] [(signed char)9]);
                arr_11 [(signed char)2] [i_3] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_6 [i_2] [i_2])) && (((/* implicit */_Bool) var_7)))), ((!(((/* implicit */_Bool) (unsigned short)15674))))));
            }
        } 
    } 
}

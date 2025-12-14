/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184541
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
    for (short i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            {
                var_11 = (~(arr_0 [10LL] [i_0]));
                var_12 = ((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) ((unsigned long long int) var_3))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) var_1);
    var_14 = ((/* implicit */int) (((!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)209))))))) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)205)))));
    /* LoopNest 2 */
    for (short i_2 = 2; i_2 < 21; i_2 += 4) 
    {
        for (int i_3 = 2; i_3 < 21; i_3 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned int) var_8);
                arr_11 [i_3] [2] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) max((arr_7 [i_2] [i_3 + 2] [i_2]), (((/* implicit */short) arr_10 [i_3] [i_2])))))) ? ((~(arr_8 [i_2]))) : (((/* implicit */unsigned int) (~(((/* implicit */int) min(((unsigned char)46), (((/* implicit */unsigned char) (_Bool)1))))))))));
            }
        } 
    } 
}

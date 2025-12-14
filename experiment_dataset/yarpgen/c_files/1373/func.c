/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1373
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
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                arr_7 [i_1] [i_1] [i_1] = ((/* implicit */short) arr_3 [i_1] [i_0]);
                var_15 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (signed char)27)), ((unsigned short)10789)));
                arr_8 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_0 [(unsigned short)1] [i_0])))) ? (((/* implicit */int) min((arr_0 [i_1] [i_1]), (arr_0 [i_0] [i_1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_1])))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 2; i_2 < 13; i_2 += 1) 
    {
        for (short i_3 = 0; i_3 < 14; i_3 += 1) 
        {
            {
                var_16 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_12 [i_2 + 1] [2LL] [i_2])) || (((/* implicit */_Bool) arr_12 [i_2 + 1] [i_2] [i_2])))) || ((!(((/* implicit */_Bool) arr_12 [i_2 + 1] [i_2 + 1] [i_3]))))));
                var_17 = ((/* implicit */unsigned long long int) max((var_17), (var_13)));
            }
        } 
    } 
}

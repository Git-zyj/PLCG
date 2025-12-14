/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171496
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
    var_10 *= ((/* implicit */unsigned int) (+(min((((/* implicit */unsigned long long int) ((signed char) var_1))), (var_6)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */_Bool) min((var_11), (((((/* implicit */int) ((unsigned short) arr_2 [i_0]))) == ((~(((/* implicit */int) (_Bool)1))))))));
                var_12 = ((/* implicit */unsigned int) arr_4 [(unsigned short)6] [i_1] [(unsigned short)6]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 1; i_2 < 21; i_2 += 1) 
    {
        for (signed char i_3 = 1; i_3 < 19; i_3 += 4) 
        {
            {
                arr_11 [i_2] [12LL] = ((/* implicit */long long int) (-(((/* implicit */int) (short)-48))));
                var_13 = ((/* implicit */_Bool) -4086094819304728332LL);
            }
        } 
    } 
}

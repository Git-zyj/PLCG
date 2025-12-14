/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148696
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
    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) var_13))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned char) var_7);
                var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) var_6))));
                var_19 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (((!(arr_3 [i_0]))) && (((/* implicit */_Bool) arr_2 [i_0] [i_1])))))) == (min((min((7824353749585780401LL), (((/* implicit */long long int) var_9)))), (((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_0] [2U])))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 4; i_2 < 19; i_2 += 1) 
    {
        for (long long int i_3 = 4; i_3 < 18; i_3 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned short) ((_Bool) var_10));
                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) var_15))));
            }
        } 
    } 
    var_22 &= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-66))))) : (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-78))) : (8267371800827143518ULL)))))));
}

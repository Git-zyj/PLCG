/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132361
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
    var_13 = ((/* implicit */_Bool) var_10);
    /* LoopNest 3 */
    for (unsigned char i_0 = 4; i_0 < 14; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    var_14 += ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */int) var_10)) << (((((/* implicit */int) arr_1 [i_0])) + (107)))))) ? (((/* implicit */int) arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 4])) : (min((-1), (((/* implicit */int) arr_6 [i_0] [i_1] [9ULL]))))))));
                    var_15 = ((/* implicit */_Bool) min(((-2147483647 - 1)), (((/* implicit */int) (unsigned char)16))));
                }
            } 
        } 
    } 
}

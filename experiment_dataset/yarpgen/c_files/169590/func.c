/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169590
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
    var_20 = ((/* implicit */int) (short)32767);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_21 *= ((/* implicit */unsigned short) ((int) (unsigned short)1412));
                    var_22 = (short)-21698;
                    arr_7 [i_0] [i_0] [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-11138)) ? (min((var_6), (-1743151967))) : (max(((+(((/* implicit */int) (short)(-32767 - 1))))), (max((((/* implicit */int) (short)-4741)), (655676445)))))));
                }
            } 
        } 
    } 
}

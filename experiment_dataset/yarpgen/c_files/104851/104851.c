/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104851
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_14 -= (((max(var_1, 27))) >= ((((1 ? 207 : var_0)) / (((var_12 ? 49 : 208))))));
                var_15 &= (((var_4 / 65519) + (((var_11 * (var_13 || 307667477))))));
            }
        }
    }
    var_16 = -var_10;
    var_17 = 47;
    var_18 = (!(!var_0));
    var_19 = ((((min((3645136604 >= 33215), var_10))) || (((var_5 ? (544843843367314245 * 0) : (~49))))));
    #pragma endscop
}

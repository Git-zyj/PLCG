/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_11 ^= ((((!((max(var_5, -6))))) ? var_9 : var_3));
                var_12 += (min(((var_6 << (var_3 - 27519))), (~var_5)));
                arr_5 [i_0] [i_0] |= var_6;
                var_13 = (max(((((max(17986, 1561100784)) == (((max(var_3, 30))))))), ((26 ? 225 : 249))));
            }
        }
    }
    var_14 = (max(var_14, 15026882480976743322));
    var_15 = var_3;
    var_16 &= ((var_3 % ((246 ? 8681367168340115166 : 193))));
    #pragma endscop
}

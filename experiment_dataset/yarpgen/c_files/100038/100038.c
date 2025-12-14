/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100038
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((max((-32767 - 1), 255))) | ((~((((-32767 - 1) > 32746)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((((!((min(var_14, var_1))))) ? 1368081647927019019 : (((-(min(var_17, var_1)))))));
                var_19 ^= var_9;
                var_20 = (min(var_20, (((((9431 ? -8336268206172842719 : var_10)) != (((max(-1, 32767)))))))));
            }
        }
    }
    var_21 = ((((~(562949953421311 * 0))) <= ((max(var_0, (min(4294967278, var_11)))))));
    var_22 = (min(var_22, (((((max(31, (var_3 + var_12)))) ? ((((min(1344888587, -83))) ? (max(25, 18)) : (-32755 && var_12))) : ((((((!(-127 - 1)))) << (((max(4294967278, 60381)) - 4294967256))))))))));
    #pragma endscop
}

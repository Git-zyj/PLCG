/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;
    var_12 = (max(var_12, var_6));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, ((((((((min(18446744073709551615, 18446744073709551615))) ? ((2 ? 1503172909 : 1859575315811580304)) : (max(18325919726719187289, 18))))) ? ((183 ? 165 : 1)) : ((+(((-2147483647 - 1) ? 1174417156 : 0)))))))));
                    var_14 &= ((((((((126 ? -127 : 0))) ? 217 : ((-57 ? 1 : 6))))) ? (min(4095, 2300430474330805169)) : ((106 ? 90 : 17053098508172210918))));
                }
            }
        }
    }
    #pragma endscop
}

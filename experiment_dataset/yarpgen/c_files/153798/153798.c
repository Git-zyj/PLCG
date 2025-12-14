/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153798
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(((((255 & -122) < 14513678437444100116))), 121));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 20;i_2 += 1)
            {
                {
                    var_11 = ((~-122) & ((var_4 ? 3933065636265451499 : -122)));
                    var_12 = ((-122 ? (arr_2 [i_2 - 2]) : (max((var_3 == var_8), ((-4909969420169062020 ? 281474976710655 : 3933065636265451513))))));
                }
            }
        }
    }
    var_13 = ((((var_7 < (10744909170657697653 & var_0))) ? (min(var_9, 18446744073709551615)) : ((max((max(42268, var_4)), (((10692 ? 89 : 1))))))));
    var_14 = (((((max(var_6, var_9)))) >= (~var_6)));
    #pragma endscop
}

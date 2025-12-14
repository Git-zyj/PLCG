/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160522
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (2507952938390020317 <= var_4);

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_0] = (max((min((arr_1 [i_0]), 2507952938390020305)), (-32527 + var_17)));
                    var_21 = (max(var_21, (max((((9122 / var_3) ? ((32530 << (arr_2 [i_1] [i_2]))) : ((min(-32541, 32527))))), 4294967295))));
                    var_22 = 175;
                    var_23 = (max(var_23, ((min((max((min(-32527, 14116344208655299083)), (((-32753 ? var_14 : -32527))))), (-28 * 32755))))));
                    var_24 = (((((((var_10 ? -13 : 1694804113))) ? (arr_8 [i_0] [i_0]) : (!-1694804111))) - (((arr_1 [i_0]) ? (var_1 <= -29297) : -var_10))));
                }
            }
        }
        var_25 = ((12899 ? 1694804113 : 162));
        arr_10 [i_0] = (((((((max(12886, (arr_4 [i_0] [i_0])))) ? ((39375496 ? 32735 : (arr_5 [i_0]))) : ((673256784 ? (arr_4 [i_0] [i_0]) : -32736))))) ? (max((arr_3 [i_0]), (!12))) : ((max(((18446744073709551608 ? 72 : 2047)), ((-92 ? var_4 : var_10)))))));
    }
    var_26 = ((var_19 == ((min(((max(var_9, 12899))), 1694804103)))));
    #pragma endscop
}

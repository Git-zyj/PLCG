/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178700
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= var_8;
    var_21 = ((var_10 ? ((((var_11 + 2147483647) >> (-1382210760206404279 + 1382210760206404281)))) : (min(var_15, 20))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_22 = -2147483645;
                var_23 = (((((1430732618619589696 ? (arr_4 [i_0] [i_0]) : 2147483645))) || (((((min(-9223372036854775797, 270215977642229760))) ? -9223372036854775769 : (arr_4 [i_0] [i_1]))))));
                arr_5 [i_1] [i_1] = (((144115188075854848 ? 7249550180971740162 : (min(var_9, -9223372036854775807)))));
                var_24 = (((!9205357638345293824) ? (min(var_4, (arr_2 [i_0] [i_1]))) : (((((arr_2 [i_1] [i_0]) < (arr_2 [i_0] [i_1])))))));
            }
        }
    }
    var_25 = (65408 / 2473330986176114792);
    #pragma endscop
}

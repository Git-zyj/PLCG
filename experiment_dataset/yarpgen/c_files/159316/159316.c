/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159316
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((806229224 >> (var_3 & var_2))) * ((((((3138 ? -7 : 806229217))) <= 274877905920)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                var_14 = ((-var_10 ? 7094373982822817441 : (!-2147483644)));
                arr_4 [i_0] = (((((~((var_5 ? var_9 : 8223079555548653490))))) ? ((min(-806229251, var_7))) : ((((268435455 < ((1 ? 806229217 : 7526824430437435540))))))));
                var_15 = ((((3598 - 127) & var_10)) < ((((4227858432 ? 576460752303292416 : 268173312)) - (var_12 - 869248499))));
                var_16 = (((67108865 & -24060) << ((((((0 ? 28672 : -404674334)) ^ (((112 >= (-9223372036854775807 - 1)))))) + 404674345))));
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 20130;
    var_13 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_1] = ((((((((32215 ? 6341184596422901453 : -32216))) ? (((var_0 > (arr_0 [i_0])))) : (arr_1 [4])))) - (((((24 ? var_9 : 616366985))) * (max((-32767 - 1), (arr_0 [i_0 - 2])))))));
                var_14 -= ((3968423835 ? (((32212 * -32213) ? (((1745828657 ? 50800 : 1586564299))) : var_2)) : 203));
            }
        }
    }
    #pragma endscop
}

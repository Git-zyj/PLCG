/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_8, (((max(259059283, 10307530527897736878))))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = arr_0 [i_0] [i_0];
        arr_3 [i_0] [1] = (min(((((arr_1 [i_0]) ? 0 : 57))), (max(-9223372036854775797, ((4588479445673712317 ? (arr_0 [4] [i_0]) : var_8))))));
        var_13 = (min((((max(1, (arr_0 [i_0] [i_0]))) ? (arr_0 [i_0] [i_0]) : 10573374255570271749)), (((4194303 ? -var_11 : 20166)))));
        var_14 = (arr_1 [i_0]);
    }
    var_15 ^= (max(var_9, ((((var_5 ? 255 : 13077227563708758710))))));
    var_16 = var_8;
    var_17 = ((((max(var_5, var_9))) ? ((((!(((11087476459199184331 ? 20816 : 0))))))) : (max(27, ((0 ? var_10 : 7374173708389360712))))));
    #pragma endscop
}

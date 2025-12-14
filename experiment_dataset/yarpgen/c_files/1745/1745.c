/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        arr_4 [i_0] &= (min((54009 || 103), (((0 & 0) < (~119)))));
        arr_5 [11] = ((!((max(0, 153)))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_9 [1] = (max((max(-5868721554162848328, (18446744073709551609 >= -616099352629576608))), ((max(224, 152)))));
        var_15 = ((-1 * (((!((max(103, -3235548947163318623))))))));
        var_16 = ((-(max(18446744073709551602, 13))));
        var_17 = ((!((9953154031318886905 && (1812402311272917060 + 1812402311272917070)))));
        arr_10 [i_1] = (((min(((max(1, -6))), 10788957865410948828)) / ((max(0, 1)))));
    }
    var_18 = (min(var_18, var_1));
    var_19 = (min((1 * 103), var_7));
    #pragma endscop
}

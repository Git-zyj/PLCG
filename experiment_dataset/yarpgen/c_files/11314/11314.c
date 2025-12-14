/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11314
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_13 = (((((arr_1 [i_0]) < 4481270132896810757)) ? (((((576460743713488896 ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0])))) ? (!6790934879747351726) : (28 < 206))) : 1));
        var_14 = (((((-2087473170 - (min(50, (arr_0 [i_0] [i_0])))))) ? 1 : (((arr_0 [i_0] [i_0]) ? ((8033632006665886809 ? 13753708375333115004 : -76)) : ((min(209, 1666295483819969221)))))));
    }

    for (int i_1 = 2; i_1 < 24;i_1 += 1)
    {
        var_15 = -1666295483819969222;
        var_16 ^= (arr_3 [6]);
        var_17 = ((((((arr_3 [i_1]) ? 243 : (arr_3 [i_1])))) ? 76 : (min(7664, (max(1, 10102984780886586323))))));
        var_18 = max((max(65527, ((-6061130134919099605 ? (arr_2 [14]) : (arr_4 [i_1] [i_1 - 1]))))), ((((((1666295483819969207 ? (arr_3 [i_1]) : 13753708375333115025))) ? (((((arr_3 [i_1]) || 21)))) : (max(8184, 6061130134919099605))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        var_19 ^= (!-1245277992);
        var_20 = (((arr_3 [i_2]) != (arr_3 [i_2])));
    }
    #pragma endscop
}

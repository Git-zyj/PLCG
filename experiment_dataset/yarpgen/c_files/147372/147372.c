/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((((((223 ? 7168 : 49))) % ((-61 ? 16555342745837595668 : 4294967295))))) ? ((((((6771632879926598570 ? 1 : 61103))) ? ((2582475097192069836 ? 1 : 20875)) : (44198 ^ 255)))) : ((-6838598580416010108 ? (((104 ? -108 : -59))) : (min(-48, 11675111193782953042))))));
    var_19 = (min(var_19, var_3));

    for (int i_0 = 3; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_20 = 6771632879926598570;
        var_21 = 280798321;
        arr_2 [4] &= ((161 + (max(((max(1024, 235))), ((28805 ? 21 : -76))))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 14;i_1 += 1) /* same iter space */
    {
        var_22 = (((((29 << (20875 - 20856)))) ? ((-5250880461510646638 ? 9214364837600034816 : 9214364837600034791)) : 77));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 0;i_4 += 1)
                {
                    {
                        var_23 = (min(var_23, ((((600538695 & 0) ? ((10435892701292069135 ? 9232379236109516800 : -58)) : (((600538695 ? 92 : 106))))))));
                        var_24 = -60;
                    }
                }
            }
        }
    }
    var_25 = (max((((!((min(64009, 20875)))))), (min(((max(5, 1))), ((117 ? 9170845184427322858 : 96))))));
    #pragma endscop
}

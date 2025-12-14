/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = 110;
        arr_3 [i_0] = ((-4916075618641768677 ? 9099967010971127262 : (((65516 ? 5219112145548492033 : (((712376988 ? (-32767 - 1) : 0))))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_11 = -75;
        arr_7 [i_1] = 2305843009213693951;
        arr_8 [i_1] = 112;
    }
    var_12 = 2305843009213693934;
    var_13 &= ((2059287429271394921 ? (((((1 ? 6740893253440306282 : 2018590918))) ? 863460246 : ((-117 ? 6528259754485696367 : 6740893253440306282)))) : 1));

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_11 [i_2] = (-32767 - 1);
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_14 = (-9223372036854775807 - 1);
                                var_15 = (-32767 - 1);
                            }
                        }
                    }
                    arr_23 [i_2] [i_3] [i_4] = 18446744073709551610;
                    arr_24 [i_2] [i_3] [i_4] |= ((7187614174773400479 ? 11705850820269245327 : 1));
                    var_16 = 7187614174773400479;
                }
            }
        }
    }
    var_17 = (7 ? (((121 ? -2305843009213693964 : 5789882564257218968))) : ((484509887 ? 18446744073709551610 : -32765)));
    #pragma endscop
}

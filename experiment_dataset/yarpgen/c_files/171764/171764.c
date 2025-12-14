/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171764
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((3839206353 || var_8) ? ((var_0 ? 90 : var_4)) : (var_7 | var_1))) | ((((var_3 < 4294967295) != (min(229, 4732837799062803825)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_12 = ((((-(3731988899 | 20))) | (arr_2 [i_0 - 2] [i_0 - 1] [i_1])));
                arr_4 [i_0] [i_0] [9] = (max((((1778405936654598684 >= 4423295476853051364) && (((12544220265410829326 >> (((arr_1 [i_0]) - 46311))))))), ((152909774100265606 >= (((arr_2 [i_0] [i_0] [i_1]) - 268173312))))));
                arr_5 [i_1] [i_1] [i_0 - 2] = (max(((max((18446744073441378304 < var_6), 20))), 268173317));
                arr_6 [i_0] [i_0] [i_0] = ((((((((arr_1 [i_0]) < 18446744073709551596)) || (arr_3 [i_0 - 2] [3])))) < ((((215 | 7708200889760888288) >= (((min(-11, (arr_3 [i_0] [i_0]))))))))));
            }
        }
    }
    var_13 = ((!(((((var_7 ? 1 : var_1))) || (18446744073441378304 || 9)))));
    var_14 = var_10;
    #pragma endscop
}

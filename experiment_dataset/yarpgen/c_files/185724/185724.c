/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185724
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [i_0] [i_2] [i_0] = ((((((arr_3 [i_0] [i_1] [i_1]) ? (arr_8 [i_3] [i_0] [i_0] [i_0]) : (arr_9 [i_0] [i_1] [i_2] [i_3])))) ? (5877740278011765067 * 5877740278011765067) : ((max(var_4, (arr_1 [i_0]))))));
                        arr_14 [i_0] [i_1] [i_1] [i_0] = (max(12569003795697786548, (((arr_0 [i_3]) ? (arr_1 [i_1]) : (arr_0 [i_0])))));
                        var_11 -= (((((~((0 ? 40105 : -1890638743))))) ? (((((min((arr_9 [i_0] [i_0] [i_0] [i_0]), var_6))) ? (((max(4904, 0)))) : ((15 ? 2930336636 : (arr_5 [i_0] [i_1])))))) : ((var_2 ? (arr_6 [i_0] [i_3] [i_3]) : var_6))));
                        arr_15 [i_0] [i_1] [i_0] [i_1] = (((arr_0 [i_0]) ? (arr_6 [i_0] [i_0] [i_2]) : 0));
                    }
                }
            }
        }
        var_12 = (min(var_12, ((min((((-25293 ? -25293 : -25293))), ((-var_2 ? (arr_9 [i_0] [i_0] [i_0] [i_0]) : (min(var_4, 5877740278011765072)))))))));
    }
    var_13 = ((63379 ? 5877740278011765072 : 4011209278));
    #pragma endscop
}

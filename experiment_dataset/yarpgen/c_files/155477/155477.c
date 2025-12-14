/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155477
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, var_5));
    var_13 = (min(var_13, (var_2 * var_1)));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_14 = (arr_1 [i_0]);
        var_15 = (-var_4 / 13958);
        var_16 = (max(var_16, (((((((var_6 < 13963) ? (((13963 ? var_9 : -332584849))) : (4294967292 - var_2)))) ? (min((arr_1 [i_0]), (((0 ? 0 : -1))))) : (-21576 > 65535))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 16;i_3 += 1)
                {
                    {
                        var_17 = (((((13958 & (arr_6 [i_0] [1] [i_3 - 1])))) || (((13963 ? (17592181850112 * 21576) : ((((var_0 && (arr_8 [i_3] [i_1] [12] [i_1] [i_1] [i_0]))))))))));
                        var_18 = max(var_5, (arr_6 [i_0] [i_1] [i_2]));
                        var_19 = min(-14614, 6125908755410058360);
                        var_20 = (max(var_20, 0));
                        var_21 = ((-(((((var_0 - (arr_1 [i_1])))) ? (~var_1) : (arr_7 [i_1] [i_3 + 1] [i_3] [i_2] [i_1] [i_0])))));
                    }
                }
            }
        }
    }
    var_22 = (((((min(var_7, var_6))) ? ((3103262235 ? 1 : -17592181850115)) : (var_8 + var_6))) * var_11);
    #pragma endscop
}

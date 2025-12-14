/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122725
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, (min((min((min(14668946999517255581, var_6)), ((min(16361, var_2))))), ((min(((min(var_9, 16361))), (min(-61, var_3)))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 = (min(((min((max((arr_1 [i_0] [i_1]), 58679)), ((min((arr_4 [i_0] [i_0]), 6872)))))), (max((max(var_10, var_3)), ((min((arr_4 [i_0] [i_1]), (arr_3 [18] [i_1]))))))));
                var_15 = (min(((min((min((arr_1 [i_0 + 1] [i_0]), var_12)), (min(var_8, (arr_4 [i_0] [i_0])))))), (min((min(16361, (arr_0 [i_1]))), ((min(var_1, -11697)))))));
                arr_5 [i_0] [i_1] [i_0] = (min((max((min(var_5, 16366)), ((min(6855, (arr_2 [i_0])))))), ((min((max((arr_2 [i_0]), var_1)), ((min(6875, 49174))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_16 = (min((max(((min((arr_3 [i_0] [i_0]), (arr_14 [i_3] [i_3])))), (min(3777797074192296038, -78)))), (max((min(18446744073709551607, var_10)), ((max(var_10, var_6)))))));
                                var_17 = (min(((max((min((arr_13 [i_3]), 77)), ((min(var_0, -28913)))))), (min((min(var_5, var_0)), ((max((arr_4 [i_0 + 1] [i_0 + 1]), var_8)))))));
                                var_18 += (min((min(((min((arr_7 [i_0] [i_1] [i_2]), var_0))), (max(457194139, 18446744073709551598)))), (min((min(9633014859611990271, (arr_8 [i_0] [i_1] [11]))), ((max(var_11, var_0)))))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            {
                                var_19 = (max(((min(((max((arr_20 [i_0 + 1] [i_0 + 1] [i_5] [i_6]), -19))), (min(var_10, var_4))))), (max(((min(var_4, 42979))), (max(18446744073709551608, 2853630350))))));
                                var_20 += (min(((min((min(var_3, var_10)), ((min(var_0, 457194126)))))), (min((max(23, (arr_12 [i_0] [i_1] [i_6] [i_7]))), ((max(-11096, var_1)))))));
                                var_21 = (min((min(((min(1441336930, 5351))), (min(908995813, var_2)))), ((min((max(var_12, (arr_23 [6] [i_6] [i_5] [6] [8]))), ((min((arr_18 [18] [i_6] [15] [i_0]), (arr_7 [i_1] [8] [8])))))))));
                                arr_25 [i_6] [i_7] = (min((min((max(172860368650742152, (arr_1 [1] [4]))), ((max(var_10, (arr_3 [i_1] [i_7])))))), ((min(((min(1212878843, 49165))), (max(678351313839637242, (arr_19 [i_0] [17] [i_5] [i_6] [i_6] [12]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = (min(((min(-6757171407723305041, 49170))), (min(((min(58664, 678351313839637223))), (max(6874, 7933188030476289015))))));
    var_23 += (min(((min((min(-1253707602, var_2)), ((max(var_6, var_1)))))), (min(((min(var_6, var_12))), (min(3777797074192296029, var_4))))));
    #pragma endscop
}

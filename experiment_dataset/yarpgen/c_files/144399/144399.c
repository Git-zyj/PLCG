/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144399
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= (min(33554368, 0));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_14 = max(1074979689, 0);
        arr_3 [i_0] = (max(1167248324, 1167248327));
        arr_4 [i_0] = (min((max(((min(88, 262143))), (max(3321111368936434590, (arr_2 [i_0]))))), (min((min(8589934591, 766865760)), (max(3321111368936434590, 167))))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_15 ^= (min((min((max((arr_6 [i_1]), var_11)), (max(-5205006748289084829, 1)))), (min((min(5205006748289084839, 960566141)), ((max(143, var_11)))))));
        var_16 = min((min(((min(1059018999, 960566152))), (max(-8749483273007781327, 1)))), ((min(1826007379, 4095))));
        var_17 = (max(var_17, ((max((max((min(var_2, -5205006748289084835)), (max(-1, 5205006748289084824)))), (max(((min(165, var_0))), (max(-9181582685098082566, -5205006748289084828)))))))));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            {
                var_18 = (min((max((min(5205006748289084824, var_5)), ((min(var_8, (arr_11 [i_2] [i_3])))))), (min((min(-3236990858713146708, -19)), ((max(20807, 44730)))))));
                arr_13 [i_2] = (max(5205006748289084838, 5205006748289084834));
                arr_14 [i_2] [i_2] = (max(((min((min(20807, 4048654686)), ((max(138, 1)))))), (max((min((arr_9 [i_2]), (arr_12 [i_3]))), (min((arr_0 [i_2]), 6969517494805796010))))));
                arr_15 [6] [i_3] [i_2] = (max(2872861898259639584, 55637));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                {
                    var_19 ^= (max(((max((max(55304, (arr_20 [i_4] [i_5] [i_6]))), (min(var_8, 1358729530))))), (max((max(1358729526, -5205006748289084827)), ((min(-495626267, 1454297836)))))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            {
                                var_20 = (max(var_20, ((max((min(5205006748289084822, ((min(0, 0))))), (max(((min(var_3, (arr_16 [i_4] [i_8])))), (max(var_6, (arr_22 [i_4] [i_4] [i_6] [i_6]))))))))));
                                arr_29 [i_4] [i_5] [i_6] [i_7] [i_6] [i_8] = (max(((min((min((arr_19 [i_5]), -1454297836)), ((min(20814, 23133)))))), (max(-6969517494805796020, 2781286548))));
                                var_21 = (min((min(((min(0, 2781286571))), (max(-307409928, -1153332998974248676)))), ((max(((min(var_3, (arr_25 [i_8] [i_7] [i_6] [i_5] [i_4])))), (min(-1866658705, (arr_20 [i_4] [i_5] [i_8]))))))));
                                var_22 = (max(1, 7965188431144290251));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

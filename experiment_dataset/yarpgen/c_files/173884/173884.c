/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173884
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 13;i_2 += 1)
                {
                    var_12 = 65535;
                    var_13 *= ((2931 ? 595431786709041661 : 659265433));
                    var_14 = (max(595431786709041661, (~var_4)));
                }

                /* vectorizable */
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {

                    for (int i_4 = 1; i_4 < 14;i_4 += 1)
                    {
                        arr_13 [i_0] [i_3] [i_0] [i_0] [i_3] [i_0] &= (((((arr_8 [i_3] [i_3] [i_3]) | 8036326937962966464)) ^ 698269618));
                        var_15 = 384;
                        var_16 = ((!(!-18011)));
                        var_17 += (arr_4 [i_3]);
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 0;i_6 += 1)
                        {
                            var_18 = (max(var_18, (((-26150 ? 3694166928714907534 : 17851312287000509956)))));
                            var_19 = 47720;
                        }
                        for (int i_7 = 1; i_7 < 13;i_7 += 1)
                        {
                            var_20 &= ((-44 ? 15497 : 47700));
                            var_21 = (~17824);
                            var_22 = (max(var_22, (arr_10 [i_0] [i_1] [i_0] [i_5])));
                            var_23 = -5597847481331439635;
                            var_24 &= (arr_4 [i_3]);
                        }
                        var_25 = (max(var_25, (arr_6 [i_3] [i_0] [i_1])));
                        var_26 = 65535;
                        var_27 += ((11050 ? -4345713301108342139 : 17836));
                    }
                    var_28 = ((1 ? -26150 : 16275916802410633234));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 2; i_8 < 11;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            {
                arr_25 [i_8] = 1;
                arr_26 [1] [i_8 + 2] [i_9] = ((3635701840 >> (8963505759175423024 - 8963505759175423009)));
                var_29 = (65535 ? 11 : 13655658635967121755);
                arr_27 [i_8] &= (((((1901188303 ? 13386438612760340621 : 47719))) ? -26150 : (7 - 16275916802410633234)));
            }
        }
    }
    var_30 = (min((((((659265460 >> (2333652254329599670 - 2333652254329599644)))) ? 47710 : ((595431786709041678 >> (-21632 + 21649))))), (var_2 ^ -17503)));
    #pragma endscop
}

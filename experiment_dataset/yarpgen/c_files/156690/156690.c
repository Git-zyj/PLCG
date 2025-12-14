/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156690
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= (min((min(((max(var_5, var_0))), -var_4)), (((((0 ? 6055 : -5914528408765472884))) ? ((min(var_5, var_6))) : ((min(0, var_10)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_2] = (((min((max(237, -5407988941361548014)), 163)) | 1945));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {

                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            var_12 += ((-1182544066 ? (!4061962347749923686) : 29));
                            var_13 = (min(var_13, (((~((((arr_13 [i_0] [i_1] [i_0] [i_3] [i_1]) != var_6))))))));
                        }
                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            arr_17 [i_0] [3] [i_0] [i_0] = ((((((arr_12 [i_0] [i_3] [i_0] [i_3] [i_5]) <= (arr_15 [i_0] [i_1] [i_2] [i_3] [i_5])))) & ((~(arr_3 [i_0] [i_0])))));
                            var_14 = (((!6056) ? ((((arr_2 [i_0]) ? (arr_13 [i_0] [i_1] [i_2] [i_3] [i_5]) : var_7))) : (((arr_11 [i_0] [i_1 - 1] [i_0] [i_3] [i_5]) ? var_8 : (arr_15 [i_0] [i_2] [i_0] [i_3] [i_5])))));
                            arr_18 [i_1] [i_0] = 576372970;
                            var_15 = (max(var_15, (((~(-127 - 1))))));
                        }
                        arr_19 [i_0] [i_0] [i_2] [i_0] = (((((1 ? var_1 : (arr_2 [i_0])))) ? (arr_3 [10] [i_0]) : (-8042270154451905313 / 2808694090350643046)));
                        arr_20 [i_0] [i_0] [i_2] [9] [i_3] = ((((-576372954 ? 59456 : -4765398141357380753)) * ((((!(arr_5 [i_2] [i_2] [i_2])))))));
                        var_16 = (min(var_16, (((-var_4 && (((~(arr_11 [i_2] [i_1] [i_2] [i_3] [i_3])))))))));
                    }
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        arr_23 [i_0] [i_0] [i_0] [2] [i_0] = (min(5407988941361548013, (min((max(-8042270154451905314, 59473)), ((max(253, 866892710)))))));
                        var_17 = min((max((min(0, var_5)), (((5407988941361548036 ? 30 : 1))))), ((max(-695395370, -5407988941361548049))));
                    }
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        var_18 ^= ((~(min((((arr_5 [i_0] [9] [i_2]) ? (arr_6 [i_0] [i_0] [i_0]) : var_7)), ((min((arr_5 [i_2] [i_2] [i_2]), var_6)))))));
                        var_19 += (((min(448895406, (max((arr_9 [i_0] [i_7] [i_2] [i_7]), 124)))) | ((-((min((arr_5 [i_0] [i_1 - 1] [i_0]), 237)))))));
                        arr_27 [i_0] [i_1 - 2] [i_2] [i_0] = ((((~(~123))) << ((((max(110, 1))) >> (14870103950213571386 - 14870103950213571369)))));
                    }
                }
            }
        }
    }
    #pragma endscop
}

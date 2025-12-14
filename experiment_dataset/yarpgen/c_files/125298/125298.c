/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125298
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, var_6));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    var_18 &= 2730049412;
                    var_19 = (((((6653588631903378386 ? 11793155441806173229 : var_1))) ? 72057594037927935 : 32767));
                }
                /* vectorizable */
                for (int i_3 = 3; i_3 < 24;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        for (int i_5 = 4; i_5 < 24;i_5 += 1)
                        {
                            {
                                var_20 = -208;
                                var_21 = (var_0 ? var_4 : (arr_4 [i_1] [i_3 + 1] [i_0]));
                            }
                        }
                    }
                    var_22 = ((-75 & (arr_4 [i_0] [i_1] [i_0])));

                    for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
                    {
                        var_23 = ((arr_8 [i_0] [i_1] [1] [i_3 - 2]) ? 14068594870084848682 : var_6);
                        var_24 = (!var_12);

                        for (int i_7 = 2; i_7 < 22;i_7 += 1)
                        {
                            var_25 = ((arr_4 [i_1] [i_1] [i_0]) ? var_16 : (arr_4 [24] [i_3 - 1] [i_0]));
                            var_26 &= (((6653588631903378379 ? 210 : var_13)));
                            var_27 = arr_15 [i_7 + 1] [i_0] [i_3 - 2] [5] [5] [i_0];
                        }
                        for (int i_8 = 3; i_8 < 24;i_8 += 1)
                        {
                            var_28 = (~((32767 ? 5732199527012680266 : 7104039668566977790)));
                            var_29 = (((((var_13 ? (arr_24 [19] [i_0] [19] [19] [i_8]) : (arr_21 [3] [3] [3] [3] [i_8 + 1] [i_0])))) ? 12714544546696871350 : (((87 ? 0 : -119)))));
                            var_30 = (max(var_30, 32767));
                        }
                        var_31 = (((5053297274831321267 >> (12572460063473744786 - 12572460063473744758))));
                        var_32 = ((((0 ? var_1 : (arr_4 [i_0] [i_1] [i_0]))) / 125));
                    }
                    for (int i_9 = 0; i_9 < 25;i_9 += 1) /* same iter space */
                    {

                        for (int i_10 = 0; i_10 < 25;i_10 += 1)
                        {
                            var_33 = arr_6 [i_0];
                            var_34 = (~2238717759935123016);
                            var_35 = var_4;
                            var_36 = (arr_12 [i_0] [i_0] [22] [i_0]);
                            var_37 = (((((var_6 ? 5053297274831321267 : 42))) ? 6977368249919961902 : (((45866 & (arr_22 [i_0] [14] [5] [22] [i_10]))))));
                        }
                        for (int i_11 = 1; i_11 < 24;i_11 += 1)
                        {
                            var_38 = (!0);
                            var_39 = ((81 > (arr_27 [i_0] [i_1] [i_3] [i_3 - 2])));
                        }
                        var_40 = ((32767 ? (arr_8 [i_3 - 2] [i_3 - 2] [i_3 - 2] [i_3]) : 1209340477746680023));
                        var_41 = var_14;
                        var_42 = (arr_12 [i_3 - 1] [i_3 - 3] [i_3 - 1] [i_3 - 1]);
                    }
                }
                for (int i_12 = 0; i_12 < 25;i_12 += 1)
                {
                    var_43 = (~-79);
                    var_44 = ((max((arr_12 [i_12] [i_1] [i_0] [i_0]), (arr_12 [14] [i_1] [23] [i_1]))));
                }
                var_45 = var_5;
            }
        }
    }
    #pragma endscop
}

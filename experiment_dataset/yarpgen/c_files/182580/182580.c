/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182580
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (!var_3);
    var_21 = -605745570;
    var_22 = (min((min(((var_17 ? 35184237871104 : 1248274534)), (((35184237871122 ? 1 : var_5))))), (max((~-605745572), 0))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_8 [15] = 64517;

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    arr_13 [i_0 + 1] [i_2] [1] = var_2;
                    var_23 = (max((((~(arr_7 [i_0 - 1])))), (max(18446708889471680494, 235))));
                }
                for (int i_3 = 3; i_3 < 20;i_3 += 1)
                {
                    var_24 += (arr_6 [i_0] [i_0] [i_3 - 1]);
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            {
                                var_25 = (min(((~(~-113))), 17824));
                                arr_22 [0] [i_1] [i_1] [4] [i_3] [i_0] = (min(((((arr_9 [1] [i_3] [i_0]) >= (arr_9 [i_0] [i_3] [i_3])))), ((35184237871123 ? (arr_9 [8] [i_3] [i_5]) : (arr_9 [i_0] [i_3] [i_4])))));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_6 = 1; i_6 < 1;i_6 += 1)
                {
                    var_26 = (!3046692775);
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 20;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 20;i_8 += 1)
                        {
                            {
                                var_27 = 31442;
                                var_28 = (((var_8 ? var_8 : -1)));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 21;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        {
                            var_29 = (max((((((782127580 ? -463624856 : 7154230331237889956))) ? 31456 : 35184237871122)), ((max(46666, 1)))));
                            var_30 = (min(var_30, (((var_10 ? (((((201326592 ? 34093 : 15086995294312269924))) ? 56601 : ((min(0, 48444))))) : ((((!-1161908861) || 1250704468))))))));
                        }
                    }
                }
                var_31 = ((-(min(-4257044514949607853, 35184237871104))));
            }
        }
    }
    var_32 = (((~var_8) >= ((var_1 ? var_4 : 127))));
    #pragma endscop
}

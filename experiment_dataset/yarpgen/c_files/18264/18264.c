/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18264
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((1921 <= ((max(var_17, 63615)))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_19 = 63615;
        var_20 = 63587;
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_21 &= (var_2 + ((1900 ? 8579066621835701906 : 8579066621835701906)));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        arr_10 [i_2] &= (-32767 - 1);

                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            var_22 = (((arr_7 [i_0] [i_1 + 1]) ? 618721697 : ((((!(arr_4 [i_3] [i_2])))))));
                            var_23 += ((-32761 ? 8579066621835701917 : (-32767 - 1)));
                            arr_13 [i_2] [i_2] [i_2] [i_4] [i_2] &= (~var_2);
                            arr_14 [i_1 - 2] [i_2] [i_2] [i_0] [i_4] [i_2] = 48853;
                        }
                        for (int i_5 = 2; i_5 < 23;i_5 += 1)
                        {
                            var_24 = (((var_2 <= (arr_11 [i_3] [i_0] [20]))));
                            var_25 = -var_16;
                            arr_17 [i_0] [i_1] [i_0] [i_3] [i_0] [i_2] [i_2] = ((var_0 <= (arr_3 [i_1 - 2] [i_0])));
                        }
                        for (int i_6 = 2; i_6 < 21;i_6 += 1)
                        {
                            var_26 = var_2;
                            var_27 = (((5278981536470445892 < (arr_12 [i_0] [i_0] [i_0] [i_3] [i_0] [i_1 + 2] [i_0]))));
                        }
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 0;i_7 += 1)
    {
        var_28 = (arr_20 [i_7] [i_7 + 1] [i_7 + 1] [i_7] [i_7 + 1]);
        var_29 -= var_10;
        var_30 &= (max(9867677451873849709, 9867677451873849710));
    }
    for (int i_8 = 1; i_8 < 11;i_8 += 1) /* same iter space */
    {
        var_31 += var_3;
        var_32 = -7092;
        var_33 += 32765;

        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 13;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 13;i_12 += 1)
                    {
                        {
                            var_34 -= (arr_9 [i_12] [i_11] [i_12]);
                            var_35 = (max(var_35, ((min((min(((6200 ? 1921 : 32743)), 29358)), (var_7 < 1921))))));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 13;i_13 += 1)
            {
                for (int i_14 = 1; i_14 < 11;i_14 += 1)
                {
                    {
                        arr_42 [i_8] [i_8] [i_13] [i_8] [i_9] [8] = (-32753 ? 63615 : 1920);

                        for (int i_15 = 0; i_15 < 13;i_15 += 1)
                        {
                            var_36 = (arr_35 [i_14 + 2] [i_14 + 2] [11] [i_14 + 1] [i_14 + 1]);
                            arr_47 [i_8 - 1] [i_8] [i_13] [i_8] [i_8 - 1] = (((((1906 <= var_0) ? -31 : ((min((arr_6 [i_9] [i_8] [21]), var_10))))) <= (((max(32758, 1920))))));
                            var_37 *= (arr_40 [i_8] [i_8 + 2] [i_9] [i_13] [i_14] [3]);
                        }
                        for (int i_16 = 1; i_16 < 10;i_16 += 1)
                        {
                            var_38 = ((~(((-63615 < (arr_29 [i_16 + 1] [i_8]))))));
                            var_39 = ((65514 < ((((32765 < (arr_4 [i_8 + 1] [i_8 + 2]))) ? 1924 : (((arr_49 [i_8] [i_9] [i_13] [i_14 - 1] [i_16]) ? 177 : -32758))))));
                            var_40 = (max(((((max(1, 4294967295))) ? (!63615) : 224)), 32758));
                        }
                        var_41 = ((32765 ? 25286 : -32760));
                    }
                }
            }
            var_42 += (min(((32758 ? 63614 : 16383)), 32748));
            var_43 = ((((((arr_27 [i_8 + 1] [i_8 + 1] [3]) ? var_17 : -32765))) ? 15 : (!var_15)));
        }
        for (int i_17 = 0; i_17 < 13;i_17 += 1)
        {
            var_44 = (!241);
            var_45 = (max(var_45, 66));
            var_46 = (min(var_46, (((!((min(var_12, 65533))))))));
        }
    }
    for (int i_18 = 1; i_18 < 11;i_18 += 1) /* same iter space */
    {
        var_47 = var_5;
        /* LoopNest 2 */
        for (int i_19 = 4; i_19 < 12;i_19 += 1)
        {
            for (int i_20 = 2; i_20 < 10;i_20 += 1)
            {
                {
                    var_48 = (min(var_48, (!1)));
                    /* LoopNest 2 */
                    for (int i_21 = 0; i_21 < 13;i_21 += 1)
                    {
                        for (int i_22 = 4; i_22 < 11;i_22 += 1)
                        {
                            {
                                var_49 = (min(var_49, 100));
                                var_50 = (max(var_50, 63619));
                                arr_66 [i_18] [i_18] [12] [i_18 - 1] [2] = var_10;
                            }
                        }
                    }
                }
            }
        }
    }
    var_51 = (max(32758, 12933932023654326028));
    #pragma endscop
}

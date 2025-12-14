/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 12772090905500580125;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_21 = (min(var_21, var_2));

        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            var_22 = (max((max((arr_4 [i_0] [i_1]), (11 / var_4))), (min((var_11 <= 164), ((-18936 ? (arr_3 [i_0] [i_0]) : -26))))));
            var_23 = (min(var_23, (((min((arr_4 [i_1 + 2] [i_1 + 3]), (arr_3 [i_1 - 3] [i_1 - 3])))))));
            var_24 = (max(var_24, ((((12772090905500580106 ^ 25) << ((((-(var_18 ^ var_15))) + 43930)))))));
        }
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_25 = (min(var_25, (min((((((max((arr_4 [i_0] [i_2]), (arr_6 [i_0] [i_2])))) || var_3))), (max(4568708053475369639, (max(var_12, 7))))))));
            var_26 = min((((-(arr_6 [i_2] [i_0])))), (arr_2 [i_2]));
            arr_8 [i_0] [i_2] = (~13878036020234181974);
        }
        for (int i_3 = 1; i_3 < 24;i_3 += 1) /* same iter space */
        {

            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                var_27 = (arr_12 [i_0]);
                var_28 = (min((arr_7 [i_3 + 1] [i_0]), (arr_1 [i_0])));
                arr_15 [i_4] [i_3] [i_0] [i_0] = var_2;
            }
            var_29 = (min((max(((min(var_18, -1975395427))), (min(var_7, (arr_3 [i_0] [i_0]))))), (max((min(13878036020234181984, (arr_6 [i_0] [i_0]))), (min((arr_0 [i_0]), 12587605721206925835))))));
            arr_16 [i_0] [i_3 + 1] [i_0] = max((((var_12 - (arr_12 [i_3])))), (min((((3424730719 << (var_17 + 1418439837)))), (max(var_8, 0)))));
        }
        for (int i_5 = 1; i_5 < 24;i_5 += 1) /* same iter space */
        {
            var_30 = var_18;
            var_31 *= var_14;
        }
        var_32 = (-(max((min(5, var_7)), ((((var_6 + 2147483647) >> (var_0 + 129)))))));
    }
    for (int i_6 = 0; i_6 < 0;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                {
                    var_33 *= 1;
                    var_34 = ((min((arr_2 [i_6]), (min(5674653168208971491, 174)))));
                }
            }
        }
        var_35 = ((max((max((-127 - 1), 15519710811662591668)), 25)));

        for (int i_9 = 3; i_9 < 21;i_9 += 1) /* same iter space */
        {
            var_36 = (min(var_36, (((((min(var_3, (~15)))) ? (((((arr_21 [i_9] [i_6]) ? var_6 : 26)))) : (min((max(1912749612, (arr_4 [i_6] [i_6]))), var_6)))))));
            var_37 = (((var_7 ? (((1 ? 16306 : (arr_4 [i_9] [i_6 + 1])))) : (arr_9 [i_9 - 2] [i_6 + 1] [i_9]))) >> (var_19 - 4331131916600787289));
            var_38 = (max(var_38, (203 >> 1)));

            for (int i_10 = 0; i_10 < 22;i_10 += 1)
            {
                var_39 = (((var_14 + ((min((arr_20 [i_6] [i_9 + 1] [i_6]), (arr_13 [i_6] [i_6] [i_9 - 3])))))));
                var_40 = ((((min((min(4568708053475369638, (arr_35 [i_6 + 1] [i_9 + 1] [i_10]))), ((max((arr_32 [i_6] [i_6 + 1]), 987844849)))))) ? (max(((1667 ? (arr_0 [i_10]) : (arr_35 [i_10] [i_10] [i_10]))), (((var_13 - (arr_11 [i_9] [i_10])))))) : ((((((-14429 + 2147483647) << (((var_6 + 154) - 27))))) ? (min(3570012285974614660, (arr_31 [i_6 + 1]))) : (min(250, 4568708053475369638))))));
                var_41 = (max(var_41, ((max((arr_4 [i_6 + 1] [i_9 + 1]), ((((max((arr_13 [i_6] [i_6] [i_6]), (arr_7 [i_6] [i_9])))) ? ((min(0, (arr_5 [i_6 + 1])))) : var_13)))))));
            }
        }
        for (int i_11 = 3; i_11 < 21;i_11 += 1) /* same iter space */
        {

            for (int i_12 = 3; i_12 < 21;i_12 += 1) /* same iter space */
            {
                var_42 = (min(var_42, (((!(((~((-(arr_21 [i_11] [i_11])))))))))));
                var_43 ^= (!var_11);
                var_44 = (max((max(12772090905500580125, (arr_27 [i_6 + 1]))), ((max(var_14, (arr_0 [i_6 + 1]))))));
                arr_41 [i_6] [i_6] [i_6] = (((-160605946 < (arr_23 [i_6 + 1]))) ? (max((arr_23 [i_6 + 1]), -22)) : (min((arr_23 [i_6 + 1]), (arr_23 [i_6 + 1]))));
            }
            for (int i_13 = 3; i_13 < 21;i_13 += 1) /* same iter space */
            {
                var_45 = (min(var_45, (((min((max(7904653326796582271, (arr_4 [i_6 + 1] [i_6 + 1]))), (~250)))))));
                arr_44 [i_6] [i_11] = (max((min(15, (max(4579559660985398932, 255)))), (((((((!(arr_9 [i_13] [i_11] [i_6 + 1]))))) < ((5674653168208971490 ? var_6 : 4294967295)))))));
                arr_45 [i_6] [i_11] [i_6 + 1] = 25323;
                var_46 = (-127 - 1);
            }
            for (int i_14 = 3; i_14 < 21;i_14 += 1) /* same iter space */
            {
                var_47 = ((~(((-10221 ? (arr_47 [i_6]) : 10)))));
                var_48 = (min(((min(734660660, var_12))), (((max(216502134, 84))))));
            }
            var_49 = (max((((arr_25 [i_6 + 1]) ? (arr_33 [i_6 + 1] [i_6 + 1]) : (arr_7 [i_6 + 1] [i_6 + 1]))), (max((arr_33 [i_6 + 1] [i_6 + 1]), (arr_25 [i_6 + 1])))));
            /* LoopNest 2 */
            for (int i_15 = 1; i_15 < 19;i_15 += 1)
            {
                for (int i_16 = 3; i_16 < 20;i_16 += 1)
                {
                    {
                        var_50 = (max((arr_35 [i_16] [i_11] [i_11]), 5674653168208971490));
                        var_51 = 7;
                    }
                }
            }
            var_52 = (max(var_52, (arr_50 [i_11] [i_11] [i_6] [i_6])));
        }
        for (int i_17 = 3; i_17 < 21;i_17 += 1) /* same iter space */
        {
            var_53 = ((min(((1 ? (arr_25 [i_6]) : 288230376151711744)), 13867184412724152669)));
            var_54 *= (max(var_2, ((-(arr_52 [i_6] [1] [1] [i_6] [i_17] [i_17 - 1])))));
            var_55 = (arr_51 [i_6] [i_6] [i_6] [i_6]);
        }
    }
    #pragma endscop
}

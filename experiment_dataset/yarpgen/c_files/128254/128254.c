/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128254
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_20 = (max(var_20, ((min((min((arr_1 [i_0]), -32119)), (arr_1 [i_0]))))));
        arr_2 [i_0] [i_0] = ((2065070996 && ((((arr_1 [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0]))))));
        arr_3 [i_0] = (min(((-(min(var_15, var_17)))), (arr_1 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_21 = ((!((max(var_4, var_3)))));
                    var_22 = (max(var_22, (((828247470 % (-9223372036854775807 - 1))))));
                    arr_10 [i_0] [i_0] [i_0] = 2065070974;
                    var_23 = (arr_7 [i_2]);
                    var_24 = (((max(43167, (arr_0 [4] [i_1])))));
                }
            }
        }

        for (int i_3 = 3; i_3 < 21;i_3 += 1) /* same iter space */
        {
            arr_14 [i_3] [i_3] = (max(2065070996, -115));

            for (int i_4 = 2; i_4 < 19;i_4 += 1)
            {
                var_25 |= ((((-(arr_7 [i_3 - 1]))) ^ -var_1));
                var_26 = -5333977344625107379;
            }
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                var_27 = (min((~114), (((arr_0 [i_3 - 2] [i_3 - 2]) ? (arr_0 [i_3 - 2] [i_3 - 2]) : (arr_0 [i_3 - 2] [i_3 - 2])))));
                var_28 = (max(var_28, ((max(((-794394652 ? -794394658 : 115)), -6859111004025403299)))));
            }
            var_29 = (arr_19 [i_3] [i_3] [i_3 - 2] [i_3 - 2]);
        }
        for (int i_6 = 3; i_6 < 21;i_6 += 1) /* same iter space */
        {
            var_30 = (arr_20 [i_0] [i_0] [i_6]);
            var_31 += ((!((min(-44, 43167)))));
            arr_22 [i_0] [i_6] [8] = (arr_19 [6] [6] [i_6] [6]);
        }
    }
    for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
    {
        var_32 = (min(var_32, (((((min(109, 31362))) ? (arr_21 [i_7] [i_7] [i_7]) : (max((arr_20 [i_7] [i_7] [i_7]), (arr_18 [i_7]))))))));
        var_33 = (arr_0 [i_7] [i_7]);
        var_34 = (min(var_34, (arr_12 [i_7] [i_7] [i_7])));
        arr_26 [i_7] = (((((arr_0 [i_7] [i_7]) >> (((arr_18 [i_7]) + 8819175424842545783))))) ? var_13 : 114);
        arr_27 [i_7] = (arr_24 [i_7]);
    }
    for (int i_8 = 0; i_8 < 22;i_8 += 1) /* same iter space */
    {
        var_35 *= -70;

        for (int i_9 = 2; i_9 < 20;i_9 += 1) /* same iter space */
        {
            var_36 = (min(8400646833229783366, 6859111004025403298));
            var_37 ^= ((min(-110, 7083508278522591166)));
            var_38 = (max(123, -1));
            arr_33 [19] [21] &= (arr_20 [i_8] [i_9 - 1] [i_9]);
        }
        for (int i_10 = 2; i_10 < 20;i_10 += 1) /* same iter space */
        {
            var_39 &= 151;
            arr_37 [i_8] [i_8] [i_8] = ((+(((arr_19 [i_10] [i_10] [i_10] [i_10 - 2]) ? (arr_19 [i_10] [14] [18] [i_10 - 1]) : (arr_19 [i_10] [i_10] [i_8] [i_10 + 1])))));

            for (int i_11 = 0; i_11 < 22;i_11 += 1)
            {
                arr_41 [2] = (arr_35 [i_8]);
                arr_42 [i_8] [i_10] [i_10] [i_8] = (min(113, (min(-1362911827, -32119))));
                var_40 = (((arr_38 [i_10 + 2] [i_10 - 1] [i_10]) == ((min((arr_38 [i_10 + 1] [i_10 + 1] [i_10 + 1]), (arr_38 [i_10 + 1] [i_10 + 1] [i_10 + 1]))))));
                var_41 = (max(var_41, (arr_0 [i_10 - 1] [i_10 + 1])));
            }
            var_42 = (max((min(90, 10808268922352901794)), ((min(-794394652, -27527)))));
        }
    }
    var_43 = var_1;
    var_44 = var_17;
    #pragma endscop
}

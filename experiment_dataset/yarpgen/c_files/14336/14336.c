/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14336
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_12 ^= (arr_2 [i_0]);
        var_13 = (min((-32767 - 1), ((min((arr_1 [i_0]), (min((arr_1 [i_0]), -4)))))));

        for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                var_14 = (arr_8 [i_2 - 1] [i_2 + 1] [i_2 - 2] [i_2 - 3]);
                var_15 = 6785402853810731784;
                var_16 = (((arr_8 [i_2 + 1] [i_2 + 1] [i_2] [i_2]) ? 9653 : 0));
            }
            arr_10 [i_0] [i_1] = 16384;
            arr_11 [i_0] = (min((min(((min(190, 1))), 1022215244268936653)), 17473046795595219190));
        }
        for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
        {

            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                var_17 = (min(((-(arr_18 [i_0] [i_0] [i_0] [i_0]))), (arr_1 [i_3])));
                arr_19 [i_3] = 33554432;
                arr_20 [i_0] [i_3] [i_0] = ((33554432 ? -864691128455135232 : 33554432));
                var_18 = -33554433;
                arr_21 [i_3] = (arr_0 [i_3]);
            }
            var_19 = (min(var_19, (min((16773120 - -82), (arr_4 [i_3] [i_0])))));
        }
        arr_22 [i_0] [i_0] = 1;
    }
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        var_20 |= 127;

        for (int i_6 = 1; i_6 < 11;i_6 += 1)
        {
            var_21 = (min(41, 16603668454597318755));
            var_22 = (max(var_22, ((min((arr_2 [i_6 + 1]), (((arr_2 [i_6 - 1]) ? (arr_2 [i_6 + 1]) : 6704319848771097619)))))));
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            arr_33 [i_7] [i_5] [i_5] = ((min(-7104248105365942106, 16773126)));
            var_23 = ((-((18446744073692778504 ? -7331 : 6))));
            var_24 ^= 18446744073692778498;
        }
    }
    var_25 = 58268;
    var_26 = ((!(!var_4)));
    #pragma endscop
}

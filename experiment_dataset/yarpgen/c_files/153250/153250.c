/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153250
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_20 = ((1 ? (arr_1 [12]) : (arr_1 [12])));
        arr_3 [i_0] = ((((((max(179, (arr_2 [13])))) | (arr_1 [i_0]))) | (arr_2 [3])));
        arr_4 [i_0] = ((56347 ? (arr_1 [i_0]) : var_1));
        var_21 = ((((((arr_1 [i_0]) & var_4))) ? var_8 : (max(0, 16847902399710104256))));
        var_22 ^= (max(((76 & (arr_1 [i_0]))), -var_19));
    }
    var_23 = var_18;

    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_24 = ((((min((max((arr_0 [i_1]), (arr_10 [8]))), var_10))) ? var_4 : 14));
            var_25 = (min(var_25, (((((((!var_3) ? ((min(-712144422, 204))) : (arr_9 [i_1] [2] [i_2])))) ? (arr_11 [i_1] [i_1]) : (((((3499498396543920834 ? var_19 : 25821))) ? ((var_12 ? (arr_8 [13]) : (arr_8 [13]))) : 252)))))));
            var_26 = 8;
            var_27 = ((((min((arr_8 [i_1]), (arr_10 [i_2])))) ? (((var_11 ? (arr_9 [i_2] [i_2] [1]) : (arr_5 [i_1])))) : (max((arr_1 [i_1]), (arr_7 [i_2])))));
            arr_12 [i_1] [i_2] [2] = (((((15862791852762242505 ? 1245798912 : (arr_5 [i_1])))) ? 18040636178976682754 : (((var_10 ? var_19 : (((arr_5 [14]) ? 8 : (arr_7 [i_1]))))))));
        }
        arr_13 [i_1] = 0;
    }
    for (int i_3 = 1; i_3 < 21;i_3 += 1)
    {
        arr_16 [i_3] = (max(1, ((35397 ? 238447093 : 1))));
        var_28 = (-31088 | 40);
        arr_17 [i_3 - 1] [i_3] = ((arr_1 [i_3 + 1]) | var_7);

        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {

            for (int i_5 = 1; i_5 < 1;i_5 += 1)
            {
                var_29 = (max(var_29, var_14));

                for (int i_6 = 4; i_6 < 19;i_6 += 1)
                {
                    var_30 *= (arr_19 [i_6]);
                    var_31 = ((arr_25 [i_5 - 1] [i_4]) ? 2260787242 : ((max((207 | -21754), 1))));
                    var_32 *= (((arr_21 [7] [i_5] [i_3]) ? (((31119 ? 13 : -4481940428187346053))) : 4020));
                    var_33 = arr_21 [14] [i_4] [i_3];
                }
            }
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                arr_30 [i_3] [i_4] [i_7] = (max(var_6, (max(((1 ? 2067473153 : 10234)), (arr_14 [i_3])))));
                var_34 = (max(var_34, 1));
                arr_31 [16] [i_7] |= 1;
            }
            var_35 = ((((max(((17 ? (arr_20 [i_4] [i_3]) : 207)), (arr_24 [i_3])))) ? ((76 ? ((var_1 ? (arr_25 [i_3] [i_4]) : 65522)) : 3)) : 0));
            var_36 = 1;
        }
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        arr_35 [i_8] = ((1 ? (!-22) : -38));
        arr_36 [i_8] = ((((((((arr_28 [6] [i_8] [i_8]) ? var_1 : 63192))) && 10180246383606148269)) || (arr_24 [4])));
        var_37 = (max((((((((arr_21 [i_8] [i_8] [i_8]) ? (arr_0 [i_8]) : 1282005766))) ? 1 : ((1 ? (arr_23 [i_8] [i_8] [i_8] [i_8]) : var_8))))), (min((min(0, 18446744073709551614)), ((var_7 ? 109 : var_17))))));
        var_38 = ((arr_23 [6] [6] [6] [i_8]) | (((((3261267181 ? var_7 : var_4))) ? 2067473153 : (((21 ? -31120 : 38))))));
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153476
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
                    {
                        arr_10 [i_0] = ((3137314822631788585 % (((-32767 - 1) & 3137314822631788585))));
                        arr_11 [i_0] [i_1] [1] = ((102 || (arr_7 [i_0] [i_0])));
                        arr_12 [i_0] [i_3] [i_3] [12] = -3137314822631788585;
                    }
                    for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
                    {
                        var_19 = (max((max((-2147483647 - 1), (-3137314822631788585 & 0))), (((~(((arr_2 [i_0]) ^ (arr_14 [i_4] [i_2] [i_2] [i_2] [i_1] [3]))))))));
                        var_20 ^= (arr_6 [11] [i_4] [i_4] [i_4]);
                        var_21 = (max(3137314822631788585, ((max(17, (arr_5 [i_0]))))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        var_22 = 2412632007448762331;
                        var_23 += (+((((arr_2 [1]) < 207233490))));
                        var_24 = 65532;
                        var_25 = (((3 ? 3137314822631788584 : -18732)) ^ 8160);
                    }
                    var_26 = (min(var_26, -2412632007448762341));
                }
            }
        }
    }
    var_27 = (min(var_27, var_10));
    var_28 = ((var_14 ? ((-(max(7412075746966412971, 3137314822631788569)))) : (((max(57531, (var_11 > -2412632007448762335)))))));
    var_29 = (max(var_13, ((var_1 ? (var_18 > -2412632007448762323) : 57521))));
    var_30 = max(var_1, (max(var_18, -3137314822631788573)));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185580
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_11;
    var_15 = var_0;

    for (int i_0 = 3; i_0 < 17;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_0] [i_0] [i_1] = ((((min((((-439486441 + 2147483647) << (4294967295 - 4294967295))), ((max((arr_9 [i_0] [18] [i_2]), (arr_2 [i_0 + 2]))))))) ? (((((85 ? var_11 : (arr_4 [i_0])))) ? (min(61841258, (arr_5 [i_0]))) : (~var_13))) : -418026859));
                    var_16 *= 26;
                    arr_12 [1] [i_0] [i_0] [i_0 + 2] = ((~(arr_9 [i_0 + 2] [i_0 + 2] [i_0])));
                    var_17 |= var_9;
                }
            }
        }
        arr_13 [i_0] = ((+(((max((arr_10 [i_0] [i_0] [i_0] [19]), -4057938959511366909)) << (((min(127, 14506504644597724291)) - 114))))));
        var_18 = (max(var_18, 0));
    }
    for (int i_3 = 3; i_3 < 17;i_3 += 1) /* same iter space */
    {
        var_19 = (((~15882938170739053990) <= ((((arr_1 [i_3] [i_3 - 2]) / (arr_1 [i_3] [i_3 - 3]))))));
        arr_16 [i_3] = (arr_0 [i_3 - 1]);
        var_20 = (min(var_20, (((15882938170739053990 ? 0 : 356685394)))));
        /* LoopNest 2 */
        for (int i_4 = 4; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                {
                    var_21 += 127;
                    var_22 = (max(var_22, (((-((~(arr_19 [i_4 + 1] [i_4 + 1] [i_5] [i_5]))))))));
                    var_23 *= (arr_2 [i_3]);
                }
            }
        }
    }
    #pragma endscop
}

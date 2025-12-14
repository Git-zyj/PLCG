/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139354
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((16806046739155162082 > 4208) ^ 0));
    var_14 = (min(-16035, (-16041 + -16035)));

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        var_15 = 34179;
        var_16 = (((((-18936 ? (arr_0 [i_0] [i_0]) : 0))) && 26054));
        var_17 = ((arr_0 [23] [i_0]) ^ (arr_1 [i_0] [23]));
        var_18 = arr_1 [i_0] [i_0];
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        var_19 = 905259782;
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 23;i_4 += 1)
                {
                    {
                        var_20 = (min(-113, 20850));
                        arr_16 [i_1] [i_1] [i_1] [i_2] [i_1] = (arr_4 [i_1]);
                    }
                }
            }
        }
        var_21 = ((((((3389707510 < (((((arr_11 [20] [i_1] [20]) > 33522)))))))) <= ((((min(-6982, 24614))) ? (18935 != 26040) : (min(2918808830444240128, 112))))));
        arr_17 [i_1] = (3389707524 || 905259769);
        var_22 = (min(var_22, (arr_0 [i_1] [i_1])));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        arr_20 [i_5] = 95144030;
        arr_21 [i_5] [i_5] = (((((!(((905259782 ? 76 : (arr_7 [i_5] [i_5] [i_5])))))))) == (((arr_8 [i_5] [i_5]) ? (((arr_7 [15] [15] [i_5]) * 1709538249539217925)) : (arr_7 [i_5] [i_5] [i_5]))));
        arr_22 [i_5] [i_5] = (((((127 >> ((((min((arr_15 [i_5] [i_5]), (arr_5 [i_5])))) + 28281))))) ? -32756 : (((905259769 | (arr_13 [i_5] [24] [i_5] [8]))))));
        var_23 = 3466421227792989033;
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 18;i_7 += 1)
            {
                {
                    var_24 = (((((9357 ? 167 : 2918808830444240128))) ? ((min(19929, 62))) : (((arr_15 [i_7 - 1] [i_7 + 2]) / 18))));
                    arr_28 [i_7] = 188;
                }
            }
        }
    }
    #pragma endscop
}

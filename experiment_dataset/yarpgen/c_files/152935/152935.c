/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152935
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {
                var_18 |= (~802758924);
                var_19 = (((2869014542 ? 3492208375 : 0)));
            }
        }
    }

    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        var_20 = ((min((arr_3 [i_2] [i_2]), 1226080032)));
        arr_10 [i_2] = (((max(802758903, 3006489168)) * (!1125899906842622)));
        var_21 = (8191 ? 4761270073612882888 : 802758929);
    }
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        var_22 = (~1288478125);
        var_23 = ((-((((-1 * (arr_5 [i_3] [7]))) / var_13))));
        arr_13 [4] = ((-((max(3492208366, (max(86, (arr_0 [i_3] [i_3]))))))));

        for (int i_4 = 1; i_4 < 9;i_4 += 1)
        {
            var_24 = ((!((((arr_3 [i_4 + 3] [i_4 + 1]) % (min(-5097840214136354430, 25)))))));
            arr_16 [i_4] = (arr_2 [i_3] [i_4]);

            for (int i_5 = 2; i_5 < 11;i_5 += 1) /* same iter space */
            {
                var_25 = ((-(((arr_7 [i_4 - 1]) ^ 0))));

                for (int i_6 = 1; i_6 < 1;i_6 += 1)
                {
                    var_26 = (((arr_4 [1]) ? (((!(~var_6)))) : (!2860448788)));
                    var_27 = (!3006489170);
                    var_28 = 25;
                }
                var_29 |= 1518361505245936593;
                var_30 = var_9;
                var_31 = 802758929;
            }
            for (int i_7 = 2; i_7 < 11;i_7 += 1) /* same iter space */
            {
                var_32 -= (((arr_23 [i_7 - 2] [i_4 + 4] [i_4 + 1] [i_4]) % (((((3492208366 ? 0 : 31))) ? (arr_0 [i_3] [i_7]) : 802758945))));
                var_33 = 8194;
            }
        }
    }
    var_34 = min((((((var_3 ? 7233 : var_17))) ? (~65535) : (var_7 / var_17))), var_5);
    #pragma endscop
}

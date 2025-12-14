/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150707
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_1 != 4619674217609694361);
    var_13 -= (~-5049047433501934432);
    var_14 = (min(var_14, (-2147483647 - 1)));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_15 = min(((max((-32767 - 1), var_2))), -4619674217609694361);
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_1 - 1] [i_2] [i_3] [i_3] [i_0] = (((((~(max(437810992, 2406198310347249998))))) ? 831677792 : ((max(4294967295, -1)))));
                        var_16 = ((((((max(1, var_11))) ? (max(4619674217609694387, 562795695)) : ((max(var_7, var_11))))) / -914393439));
                        var_17 -= ((((((!((max(-2048, 18446744073709551615))))))) % var_10));
                        arr_11 [i_0] [i_0] [i_3] [i_0] [i_0] = var_9;
                        var_18 = -608016226;
                    }
                }
            }
        }
        arr_12 [i_0] = ((max(-104, 18446744073709551596)));
    }
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    {
                        arr_21 [i_4] [i_4] [i_7] = (min((min(13827069856099857234, 9040080644234249330)), ((7010321881708760760 ? (max(1584258943, 7403982742009799492)) : ((((-2147483647 - 1) ? -65 : 30)))))));
                        var_19 = (--11390224457811173832);
                    }
                }
            }
        }
        var_20 &= max((((4294967295 ? -1421707874 : 1421707874))), (min(1042985345, 54733598)));
    }
    #pragma endscop
}

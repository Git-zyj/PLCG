/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181535
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] &= (36 > 84);
                    arr_9 [i_1] [i_2] = (max(-1796695278392246907, 1796695278392246906));
                    arr_10 [i_0] [i_2] [i_2] = (-13876442739223993145 ? 1796695278392246906 : 7155709576744513555);

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_12 &= (min((-25082 % 3323885372), ((max((arr_7 [i_1] [i_1] [i_0] [i_3]), ((((arr_1 [i_0] [i_0]) < 54))))))));
                        arr_14 [i_2] [14] [i_2] [17] [17] [i_0] = ((!((max((min(-84, 4294967275)), (min(126, 3323885372)))))));
                        arr_15 [8] [i_0] [0] [i_2] [i_3] = (max(((-(max((-32767 - 1), 827217531)))), ((min((var_9 && -122), (((arr_12 [i_0] [i_0] [i_1] [i_2] [8]) ? 25082 : var_4)))))));
                    }

                    for (int i_4 = 1; i_4 < 22;i_4 += 1)
                    {
                        arr_19 [i_2] = ((-(max(0, (-127 - 1)))));
                        var_13 = var_4;
                    }
                }
            }
        }
    }
    var_14 = (min((((min(18446744073709551615, -107)) >> (((~1724642601) - 2570324656)))), (~127)));
    #pragma endscop
}

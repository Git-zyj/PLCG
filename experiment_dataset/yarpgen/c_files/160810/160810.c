/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160810
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 |= ((((((((((arr_0 [i_0]) || 1125899906842623)))) - ((var_0 ? 3621857671 : 12127369449648524284))))) ? (arr_4 [i_0] [10] [i_1]) : (((((-1448344993 ? (arr_1 [i_0]) : var_9))) ? ((-(arr_4 [i_0] [i_1] [i_1]))) : (673109624 || var_8)))));
                arr_5 [i_1] = ((~((-((var_0 ? var_6 : 673109625))))));
                var_18 -= ((((!(arr_0 [i_1]))) ? 18446744073709551595 : ((((((max((arr_0 [i_1]), 3621857671))) || (((arr_4 [i_1] [i_0] [i_0]) || (arr_0 [i_0])))))))));

                /* vectorizable */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    arr_8 [i_0] = -var_12;
                    arr_9 [i_1] [i_1] |= (487201091 ? (((arr_0 [i_0]) ? var_14 : (arr_7 [i_0]))) : (((3621857670 ? -7630022334865963255 : 673109626))));
                }

                /* vectorizable */
                for (int i_3 = 1; i_3 < 17;i_3 += 1)
                {
                    var_19 = ((((2097151 ? 673109625 : 1)) % 2147483648));
                    arr_12 [i_1] [i_3] [i_0] [i_0] = (arr_2 [i_0 + 1]);
                    var_20 -= (-20607 == 17412168024108436307);
                }
            }
        }
    }
    var_21 += (((((20 ? (228674337 != var_14) : 2109431650))) ? ((-21104452 ? 17412168024108436305 : 18446744073709551593)) : var_11));
    var_22 &= ((((min(21, 11084849526163557781))) == ((max(var_15, (!var_11))))));
    #pragma endscop
}

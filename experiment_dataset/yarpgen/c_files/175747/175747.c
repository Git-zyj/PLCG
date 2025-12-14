/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_17 -= (((112 * 112) <= (-118 <= -9535)));
                            var_18 = (max(var_18, -114));
                            var_19 -= (149 < 25002);
                        }
                    }
                }
                arr_11 [i_0] [i_0] [i_1] = ((!(arr_8 [i_1] [i_1] [i_1] [i_1])));
                var_20 = (min(var_20, ((min(-3862180375, (((((((arr_7 [i_1] [i_0] [i_0]) * (arr_7 [i_1] [i_1] [i_0])))) < 255))))))));
                arr_12 [i_0] = (min(((min(25002, (arr_7 [i_0] [i_0] [i_0])))), (((var_13 < (((min(25002, (arr_10 [i_1] [i_1] [i_1] [i_1] [i_1]))))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 3; i_4 < 8;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            {
                var_21 &= (((((!(-1179978466 * 8501767368195111877)))) <= var_0));
                var_22 = (((((-1185970582 <= 2417495642) < -128)) ? var_2 : (((((-128 < 0) <= -var_0))))));
                var_23 = (((-520495726 <= -1185970580) ? (((((-2147483647 - 1) < 1)))) : 1179978466));
                var_24 = (max(var_24, (((((+((var_14 ? (arr_2 [i_4] [i_4] [i_4]) : 2479988585)))) * (((((arr_2 [i_4] [i_5] [i_5]) < ((1 ? 1258992248 : 2096128)))))))))));
            }
        }
    }
    var_25 |= ((-441516551 / (1 * -1185970582)));
    var_26 = (min(var_26, ((((((((4294967295 ? -25003 : 320040844))) ? (2147483637 / 320040844) : var_13)) * 25028)))));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, 1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_4 [i_0] = (max((((((0 ? 18446744073709551599 : 1669257343))) ? ((3849298581 ? 18446744073709551615 : -1457667247714537887)) : 1)), (~12)));
                var_13 = (((~((31206 ? 0 : 65535)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            {
                var_14 -= 2;
                arr_9 [i_3] [i_3] [i_3] = 1;
                arr_10 [i_3] = ((-((~(~-4206774349508828036)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 7;i_5 += 1)
        {
            {
                var_15 *= (((((-(((-2147483647 - 1) ? -40 : 1))))) ? (~-1) : (~1)));
                arr_16 [9] [i_4] [i_5] = 17986;
                arr_17 [i_5 + 2] [i_5] [i_4] = (((0 && (-1457667247714537872 ^ 55968))));
                var_16 = (min(var_16, -3029846372964340177));
                var_17 &= 1;
            }
        }
    }
    var_18 = ((var_3 ? 1 : (((((8257536 ? 1792 : 3242598710))) ? ((-24 ? 240 : 24257)) : var_10))));
    #pragma endscop
}

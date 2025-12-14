/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 248;

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            var_12 = (((-(arr_6 [i_1] [i_1] [i_1 + 1]))));
            var_13 = min(3594051590922341152, (((~(arr_6 [i_1 - 1] [i_1] [i_1 + 2])))));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_14 = 9;
            arr_10 [i_0] [i_0] [i_0] = (max(129, 2839515642));
            arr_11 [i_0] [i_0] = (min(4294967295, (((((max(50724, 241))) ^ (!24))))));
        }
        arr_12 [i_0] [i_0] = var_1;
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 23;i_4 += 1)
            {
                {
                    arr_19 [i_3] [i_4] = ((((((arr_9 [i_4]) ? (~-6) : (var_10 - -6)))) ? ((((max((arr_4 [i_4]), var_8)) < var_10))) : ((max(12, (arr_3 [i_4 + 1]))))));
                    var_15 = 8826523244498712440;
                    var_16 = var_2;
                }
            }
        }
        var_17 = min(1890945754, 218);
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
    {
        var_18 -= -73130650;
        var_19 = 3948084605251271179;
        var_20 = (17 == (arr_15 [i_5]));
        arr_22 [i_5] = ((max((!-105), ((15 << (1582417812497830656 - 1582417812497830645))))));
    }
    var_21 = ((!(!-var_3)));
    #pragma endscop
}

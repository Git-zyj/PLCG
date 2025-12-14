/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146915
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_6;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
        {
            var_14 = (min(((min((arr_2 [i_0]), (max(10793, -1729623776))))), ((((min(var_6, (arr_0 [i_1])))) ? (max(-8129005799667807287, -1729623776)) : var_7))));
            var_15 |= (min(((min(3356135563, 1922911482))), 5273604477484495544));
            var_16 = (max(var_10, (arr_1 [i_1])));
            arr_4 [i_0] [i_1] [4] |= (min((~var_10), 350632809));
            var_17 = (min(-350632778, ((-(arr_1 [i_0])))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
        {
            var_18 = arr_2 [i_0];
            var_19 = ((!(arr_3 [i_2] [i_0])));
        }
        var_20 = ((((-(!10)))) ? (arr_0 [i_0]) : (((!(arr_3 [i_0] [i_0])))));
        arr_7 [i_0] [9] = arr_2 [i_0];
    }
    #pragma endscop
}

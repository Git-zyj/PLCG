/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15009
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [12] |= max((max(-4726772223829163470, (arr_1 [0]))), (arr_1 [2]));
        var_15 ^= 240550032656949572;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 23;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                arr_9 [i_1] = (((((var_11 ? (arr_7 [i_1]) : 4161038840800802522))) ? ((18014398509481952 ? 1 : var_0)) : 5030831682848817290));
                var_16 = (max(var_16, (((arr_3 [i_2 + 1]) ? (arr_8 [i_1] [i_1] [i_1]) : (arr_5 [i_3] [i_2 + 1])))));
            }
            var_17 = (!11054370975869773382);
        }
        arr_10 [i_1] [i_1] = ((-2131 ? -4161038840800802532 : -203007071));
        arr_11 [16] [i_1] = (arr_7 [i_1]);
        var_18 = ((-1400414183 ? -5030831682848817286 : 65535));
        var_19 = (arr_4 [i_1]);
    }
    var_20 = (max((max(var_9, var_13)), var_4));
    var_21 &= ((max(var_1, var_4)));
    #pragma endscop
}

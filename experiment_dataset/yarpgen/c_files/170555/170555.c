/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 7;

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (((((arr_0 [i_0]) / (arr_0 [i_0])))) / (((arr_0 [i_0]) ? 65535 : (arr_1 [i_0]))));
        var_16 = ((((((((-32767 - 1) ? var_13 : (arr_1 [i_0])))) ? (15544988122590909018 / -31263) : 51304)) <= (min(((20016 ? (arr_2 [i_0]) : (arr_1 [i_0]))), ((((arr_0 [i_0]) >> (((arr_0 [i_0]) - 15115)))))))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = (((((((arr_0 [i_1]) || (arr_2 [i_1]))) ? (arr_4 [i_1]) : (45514 >= 29936))) >= ((((min(15544988122590909003, 0))) ? (arr_4 [i_1]) : ((7 ? 2901755951118642601 : (arr_0 [i_1])))))));
        arr_7 [i_1] = ((((((20016 ? 14418816950794729127 : (arr_0 [i_1])))) && var_5)));
        var_17 = 2901755951118642598;
        var_18 = (((arr_4 [i_1]) / (((((16256 ? var_9 : 14336)) * (arr_2 [i_1]))))));
    }
    var_19 = var_6;
    #pragma endscop
}

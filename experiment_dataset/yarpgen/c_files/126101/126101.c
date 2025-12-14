/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126101
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((((var_1 || 1788385325) ? (!1788385313) : -1788385340))) ? (((var_13 != (var_4 > var_11)))) : (((~-1788385325) ? -1788385325 : (!var_6)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = 48;
        var_18 = (((!44) < -1788385325));
        var_19 = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_20 = (max((((arr_4 [i_1] [i_1]) ? -27 : (arr_5 [10]))), ((-(-224515645 == 48)))));
        var_21 = (max(7602302537029140447, 6650));
        var_22 = ((!(((1 ? ((-(arr_4 [i_1] [i_1]))) : (((((-127 - 1) != 0)))))))));

        for (int i_2 = 1; i_2 < 19;i_2 += 1) /* same iter space */
        {
            var_23 &= ((min(7602302537029140439, (max((arr_7 [i_2 - 1] [12]), 7602302537029140447)))) == (min(250, (arr_4 [i_1] [i_2 + 1]))));
            var_24 = 894256204;
            var_25 = (max((min((~-30613), -2577156259818849566)), ((min(((((arr_7 [i_1] [i_1]) > (arr_6 [11] [i_2])))), (max(32, -894256204)))))));
            var_26 = ((((((((max(-318219003, 48))) || (var_1 == var_5))))) & (min((1788385324 % -1631894569054671172), ((((arr_6 [i_1] [i_2]) - (arr_6 [i_1] [i_2 - 1]))))))));
            var_27 = (((var_3 || (255 | -1788385325))));
        }
        /* vectorizable */
        for (int i_3 = 1; i_3 < 19;i_3 += 1) /* same iter space */
        {
            var_28 = (((arr_4 [i_3 - 1] [i_3 - 1]) | (var_12 ^ -1631894569054671193)));
            var_29 += (~var_9);
            var_30 = (((~var_0) != (1291579151 > var_1)));
        }
        var_31 = (min((~1), (((!(arr_12 [4]))))));
    }
    #pragma endscop
}

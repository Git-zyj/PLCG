/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132580
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (-32767 - 1);
    var_20 = var_6;

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = var_14;
        arr_4 [6] [i_0] = (((((min(4497, 61024))) >= ((min(45777, 22627))))));
        arr_5 [i_0] [i_0] = ((((min(53, 492396197))) ? (max((((arr_2 [i_0]) ? 1862 : 4294967295)), (-6 >= -118))) : ((((var_1 > ((var_13 ? -32765 : 22634))))))));
        arr_6 [6] = 15989988550557858902;
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_21 &= (((((((var_18 << (3387562356 - 3387562343)))) ^ (min(var_15, 18446744073709551615)))) > 22877));
        var_22 = 511503819;
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
    {
        var_23 = (max((((!((min(18446744073709551615, var_6)))))), (min(((var_12 ? 540829803005059330 : -22629)), 0))));
        var_24 = 8191;
        arr_12 [i_2] = var_16;
    }
    var_25 = (((min((((531134959 ? var_0 : var_12))), var_17)) <= (((min(23, (min(-32760, 26894))))))));
    #pragma endscop
}

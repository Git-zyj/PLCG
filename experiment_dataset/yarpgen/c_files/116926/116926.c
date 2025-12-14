/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116926
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_1] [i_2] = ((((((!(219 ^ var_4))))) == (min((((arr_5 [1] [1] [i_2]) % 3308908530)), 2605049158))));
                    var_19 = (max(var_19, ((((((((min(var_0, (arr_6 [i_0] [i_0] [i_0] [i_0])))) ? 3670793687 : (arr_0 [i_1 - 1])))) ? (arr_4 [i_0] [i_0]) : 5817852038770137323)))));
                }
            }
        }
    }
    var_20 = ((-2498003905641433297 <= (var_4 & 38747)));
    var_21 *= (((((var_17 ? var_16 : 2177840753))) == ((10466213013597706938 ? -2052911240398049078 : 10466213013597706938))));
    var_22 = ((-(((!(3550932413768414066 >= 40140))))));
    #pragma endscop
}

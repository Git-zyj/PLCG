/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134119
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((min(var_7, var_7))) ? var_9 : var_14));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_16 = 255;

                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    var_17 = (min(var_17, (((30 ? 3 : 4575657221408423936)))));
                    var_18 = (max(((min((max(3, var_2)), (arr_1 [i_0 + 1])))), (min(40, 65535))));
                    var_19 = ((~(min((96 >= 1125899906842623), (215 / 1378819673)))));
                }
                for (int i_3 = 2; i_3 < 11;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
                    {
                        arr_14 [i_0 + 1] [i_0] = (1 % 255);
                        arr_15 [i_0] [i_1] = (max(var_3, ((min((arr_11 [i_0] [i_0 - 1] [i_3 - 2] [i_4]), (arr_11 [i_0] [i_0 - 1] [i_3 + 1] [i_4]))))));
                    }
                    for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
                    {
                        var_20 = (((((max((arr_9 [i_0] [i_1] [i_1] [i_1]), var_10)))) >= 9995));
                        arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((((var_4 ? var_8 : var_4)) ? (arr_0 [i_0]) : ((min(var_11, var_7)))))));
                    }
                    var_21 |= ((((-4575657221408423961 ? 278109011 : (((min(127, 1920)))))) % var_1));
                    var_22 = (((max((arr_10 [5] [i_0]), (arr_7 [i_0] [i_3]))) ? 65535 : (((13 && (arr_7 [i_3 + 2] [i_0 - 1]))))));
                }
                var_23 = (max(var_13, (((~1125899906842604) ? (!var_4) : -2147483638))));
                arr_19 [i_0] = (min(-1, 31201));
            }
        }
    }
    #pragma endscop
}

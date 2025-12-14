/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135324
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    arr_6 [i_0] [i_2] = (min((arr_5 [i_2]), (((1 ? 65522 : 1)))));
                    var_13 += (arr_2 [i_0] [i_0]);
                }

                for (int i_3 = 1; i_3 < 23;i_3 += 1)
                {
                    arr_9 [i_0] [i_0] [i_3] [i_0] = (((-0 * 0) % (((((min((arr_2 [i_1] [i_0]), (arr_8 [i_3] [i_1])))) && (arr_4 [i_0] [i_3] [i_3 + 1]))))));
                    var_14 = 16021766120415854764;
                }
                var_15 = ((2424977953293696852 ? ((((min((arr_0 [i_1]), var_6))) ? (arr_3 [i_1]) : (arr_7 [22]))) : ((min((arr_2 [i_0] [i_1]), (((39 << (((arr_1 [i_0]) - 3598245722))))))))));
                var_16 = ((-(min(((1 ? 16021766120415854744 : 110)), ((107 ? 16021766120415854755 : 1))))));
            }
        }
    }
    var_17 = ((min(var_11, (14758239122097667365 != 14758239122097667365))));

    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_18 = (arr_10 [i_4]);
        var_19 = ((((arr_5 [i_4]) - (arr_5 [i_4]))));
    }
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            var_20 = ((22821 * ((var_1 ? (arr_1 [i_5]) : 3688504951611884251))));
            arr_19 [i_5] = (max((arr_2 [i_5] [i_6]), (arr_7 [i_5])));
            arr_20 [i_5] [i_5] [i_5] = 14758239122097667397;
            arr_21 [i_5] = (((((var_0 ? (arr_8 [i_5] [i_6]) : var_3))) ? var_11 : (min(var_7, (min((arr_11 [i_5] [i_5]), -5908958375320267746))))));
            arr_22 [i_5] = ((((arr_15 [i_5]) ? (arr_15 [i_5]) : (arr_15 [i_5]))));
        }
        arr_23 [i_5] = ((((((1 << (((arr_1 [i_5]) - 3598245708))))) ? (min(15054395792772660488, 198)) : (min(16021766120415854753, (arr_4 [i_5] [i_5] [i_5]))))));
        var_21 = (max(var_21, ((((((arr_4 [2] [2] [i_5]) ? var_2 : (arr_4 [i_5] [16] [16]))) <= (max(0, 0)))))));

        /* vectorizable */
        for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
        {
            var_22 = (i_5 % 2 == 0) ? ((((-5271886610378604125 & 1) >> (((arr_16 [i_5]) - 200))))) : ((((-5271886610378604125 & 1) >> (((((arr_16 [i_5]) - 200)) + 165)))));
            var_23 |= (((!1) >> (((arr_26 [i_5] [i_7] [6]) - 2663742197590476672))));
        }
        for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
        {
            arr_29 [i_8] [i_5] [i_5] = ((((var_8 ? (arr_11 [i_5] [i_8]) : var_4))));
            var_24 = (max(var_24, var_9));
        }
    }
    #pragma endscop
}

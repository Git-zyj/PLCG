/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131772
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_16 = ((-((~((max(14348, 206)))))));
        arr_3 [i_0] = -1629285430720618816;
        arr_4 [i_0] = (min((((!1048575) ? (1048575 + 0) : -114)), ((((((arr_2 [i_0]) ? 14123366976517867690 : (arr_0 [i_0])))) ? (arr_2 [i_0 + 2]) : (max(1591986924, 29916))))));
    }
    for (int i_1 = 4; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_17 *= (arr_1 [i_1]);
        var_18 += arr_5 [i_1] [5];
        arr_9 [i_1] = 8092727135018610527;
        arr_10 [6] = 6598195421081733434;
        var_19 = (max(-114, ((((((arr_8 [i_1 - 1] [i_1]) - (arr_2 [i_1])))) ? ((52 ? (arr_5 [i_1 - 3] [i_1]) : (arr_0 [5]))) : (arr_5 [2] [i_1])))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_20 &= (((arr_14 [11]) ? (!15210472543541483789) : 0));
        arr_15 [i_2] &= 125;
    }
    var_21 = 0;

    for (int i_3 = 2; i_3 < 9;i_3 += 1)
    {
        arr_20 [i_3] [i_3] = (((min((arr_13 [i_3 + 1]), (arr_13 [i_3 - 1])))) ? (min((arr_13 [i_3 - 1]), (arr_13 [i_3 - 1]))) : (((arr_13 [i_3 - 1]) ? (arr_13 [i_3 + 1]) : (arr_13 [i_3 + 1]))));
        arr_21 [i_3 - 2] [i_3] = (max(-32756, (max((((-125 >= (arr_11 [i_3])))), 4293918730))));
    }
    for (int i_4 = 1; i_4 < 24;i_4 += 1)
    {
        var_22 = ((((-(((arr_22 [i_4 + 1]) ? (arr_23 [i_4]) : 1085528987458902214)))) ^ (((0 ? -20981 : (arr_23 [i_4]))))));
        arr_24 [i_4] = (arr_23 [i_4]);
        arr_25 [i_4] = ((((((0 && 27346) ? (arr_22 [i_4]) : ((max((arr_22 [i_4]), (arr_23 [i_4]))))))) ? ((((arr_23 [i_4]) > ((max(104, 64)))))) : ((((arr_22 [i_4 - 1]) && (((arr_23 [i_4]) >= 1)))))));
    }
    for (int i_5 = 2; i_5 < 20;i_5 += 1)
    {
        arr_28 [i_5] = ((!(((arr_11 [i_5]) != (min((arr_11 [i_5]), (arr_26 [i_5])))))));
        arr_29 [i_5] [i_5 - 1] = (((((+(((arr_23 [i_5]) ? 3181433177 : 8666932305970343636))))) ? (min(-1114886448, -6598195421081733435)) : (max((min((arr_22 [i_5]), -5950715264017548446)), 634459343))));
    }
    #pragma endscop
}

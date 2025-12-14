/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165113
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
        {
            var_20 = (max(var_20, ((min(((((min((arr_0 [i_1]), (arr_0 [i_0]))) < var_18))), ((-((var_17 ? -1645523636 : var_19)))))))));
            arr_4 [4] [i_0] = (((((~(max(59688, 3284196841))))) ? 1 : 25838));
            arr_5 [i_0] = ((var_1 ? ((+(((arr_2 [i_0] [i_0] [i_1]) ? (arr_2 [i_0] [i_1] [1]) : (arr_3 [i_0] [i_1]))))) : (arr_2 [i_0] [i_0] [i_0])));
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
        {
            var_21 = (((((~(arr_8 [i_0])))) ? (((!17700706213768927199) ? (((arr_3 [i_0] [i_2]) % (arr_3 [i_0] [i_0]))) : ((min((arr_6 [i_2] [i_0]), (arr_8 [i_2])))))) : (arr_1 [i_0])));
            var_22 = arr_2 [i_0] [i_2] [i_2];
        }
        var_23 &= (arr_6 [i_0] [i_0]);

        for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
        {
            var_24 = ((((((max(125, 47))) ? ((1468088359 ? (arr_3 [i_3] [i_3]) : 149)) : ((((var_11 || (arr_7 [i_0]))))))) > (arr_10 [i_0] [i_0] [i_3])));
            arr_12 [i_0] [i_0] [i_3] = var_5;
            arr_13 [i_0] [i_0] = ((((((min((arr_9 [5]), -350724680))))) > (max(((-201184206543582949 ? var_18 : (arr_0 [i_3]))), ((var_0 ? 1 : var_15))))));
            var_25 = (min((((!(~6)))), ((var_16 ? -112 : var_5))));
        }
        for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
        {
            var_26 = (max(var_26, (((!((((-2147483647 - 1) ? ((((!(arr_7 [0]))))) : ((2652 ? 65528 : 285346359581774540))))))))));
            var_27 = (min(var_27, ((min((((((((arr_3 [i_4] [i_0]) ? var_6 : (arr_11 [i_0] [1])))) ? (arr_15 [i_0]) : (arr_10 [1] [i_4] [i_0])))), (((!441771814) ? (!807618334) : (max(var_14, var_1)))))))));
            arr_16 [2] [i_4] |= ((!((min(((16 ? 3 : -2147483628)), var_0)))));
            arr_17 [i_0] = (((arr_11 [i_4] [i_0]) >> (((min(140, 8768562019240531359)) - 132))));
        }
        arr_18 [i_0] [i_0] = (max((arr_15 [i_0]), ((min(84, 1)))));
        var_28 -= (min((((arr_2 [i_0] [i_0] [i_0]) ? (((arr_1 [i_0]) ? (arr_15 [i_0]) : var_6)) : 65507)), (((((-7508652278856135546 ? 4805200444598644270 : 2748160403))) ? var_15 : (arr_11 [i_0] [11])))));
    }
    var_29 |= max((max((min(var_17, 18958)), var_19)), ((((((65528 ? 20986 : -110))) ? 148 : var_13))));
    #pragma endscop
}

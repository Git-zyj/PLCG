/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_11 += 5296946401772878131;
        arr_3 [i_0] = arr_2 [0];
        arr_4 [i_0] = (min((((((3103721271 ? -27648 : -1)) + ((max(114, (arr_1 [i_0]))))))), -3017483505714113839));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 4; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    {
                        var_12 ^= (2147483647 && 18074);
                        var_13 = ((-(min(27647, 4467570830351532032))));
                    }
                }
            }
        }
        var_14 = (max(1150951909369976691, ((((!27647) ? (18074 >= 2646496717739414188) : (9223372036854775807 & -27639))))));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
    {
        var_15 = (min(((((arr_10 [i_5] [i_5] [i_5]) & (arr_9 [i_5] [i_5])))), (min(-18945, (max(1626968321043403750, 18049))))));
        var_16 = (min(var_16, ((max((0 && 17562), ((~((-(arr_12 [19] [i_5]))))))))));
    }
    var_17 -= (((((var_3 ? (min(14932, var_9)) : (((-2021363262 ? var_7 : -31429)))))) ? (((!((min(var_2, var_1)))))) : var_10));
    var_18 = (max(((max((-1 - 2947874894), (!50622)))), var_9));
    var_19 = ((!(((13979173243358019584 ? -1608253103 : -34)))));
    #pragma endscop
}

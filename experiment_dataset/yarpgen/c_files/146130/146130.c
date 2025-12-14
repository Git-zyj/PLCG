/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146130
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_12 = (4664056109225057902 ? 127 : -2066060458);
        arr_2 [i_0] [i_0] = var_8;
    }

    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_5 [4] = (((((-(var_11 - 36041)))) ? ((255 ? 4080 : (arr_3 [i_1] [i_1]))) : (((var_0 >= (min(var_4, 2066060458)))))));

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                arr_11 [i_2] [i_2] [i_3] = var_7;
                arr_12 [i_2] = (!7684695007482418048);
            }
            arr_13 [i_1] [2] [i_2] = ((4294967295 ^ ((((!((min(3027372751, 7902)))))))));
            var_13 -= (~(((var_9 == (~var_4)))));
        }
    }
    #pragma endscop
}

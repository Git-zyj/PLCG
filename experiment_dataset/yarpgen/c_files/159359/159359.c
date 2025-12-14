/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159359
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_10 % ((var_0 ? var_0 : 57807))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_13 = ((((((arr_1 [i_1]) ? ((min((arr_5 [6] [i_0]), (arr_1 [i_1])))) : (!var_6)))) ? ((~(arr_1 [i_0]))) : (((((arr_1 [1]) || 17)) ? (16079 & -6573) : var_3))));
                var_14 = (((((152 ? var_4 : 152))) ? ((max(90, 30756))) : ((((arr_1 [i_1]) > 177)))));
                arr_6 [i_1] [i_1] = (((((arr_5 [i_0] [i_1]) - (arr_5 [i_0] [i_1]))) << (arr_5 [i_1] [i_0])));
                var_15 = ((~((min((((var_7 < (arr_5 [i_1] [1])))), (min((arr_3 [i_1]), 230)))))));

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    var_16 += ((+((min((arr_4 [i_0] [7] [i_2]), (arr_5 [i_1] [i_0]))))));
                    arr_10 [i_1] [i_1] [i_0] [i_1] = ((((arr_3 [i_1]) * (arr_3 [i_0]))));
                    var_17 -= ((((((arr_8 [4] [i_2]) ? var_8 : (arr_8 [2] [2])))) ? (((arr_8 [1] [1]) ? (arr_8 [1] [i_1]) : var_0)) : (arr_8 [2] [i_1])));
                    var_18 = max((((!162) ? (11770074609247696588 || 10471) : ((var_7 ? -940085809944595522 : (arr_5 [i_2] [i_1]))))), (((((((arr_3 [i_1]) ? 80 : 729196135573527459))) || var_11))));
                }
                for (int i_3 = 4; i_3 < 20;i_3 += 1)
                {
                    arr_13 [i_0] [i_1] = (!26);
                    arr_14 [i_0] [i_1] [i_1] [18] &= ((+(((((arr_8 [22] [22]) ^ var_7))))));
                }
            }
        }
    }
    #pragma endscop
}

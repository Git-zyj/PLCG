/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148142
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_18 = ((-(arr_2 [i_0] [i_1 + 1])));

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_19 = (min(((1 ? 20 : 1040724542)), (((41526 >> (var_6 + 1538390210509691129))))));
                    var_20 = (max((arr_0 [i_0]), -11296));
                }
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    arr_12 [i_0] [i_0] [i_0] [i_0] = ((!(((((((arr_0 [6]) ? 28 : var_6))) ? ((-79 ? 5926640272104346090 : (arr_6 [i_0]))) : (((((arr_11 [i_0] [i_1 + 3] [i_0]) || var_6)))))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            {
                                var_21 = (max((1 != 2097151), (((arr_14 [i_1 + 1] [i_1] [i_3] [i_4]) % (arr_14 [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1 + 2])))));
                                var_22 |= ((-5897360832286308144 ? (((((16576247885108942250 ? 30075 : 4036152229))) ? ((2803121620 ? 46795663 : 258815066)) : ((((1 <= (arr_4 [i_0] [i_1 + 1] [12]))))))) : (((-(30104 < -1586572100223519803))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = (min((min(-387175637, 218741729)), 502250451));
    var_24 = (min(-1866120056, var_8));
    var_25 = ((((((~-57) ? (max(-1491961480, var_12)) : var_11))) ? ((max(var_3, var_6))) : (((-((var_5 ? var_10 : var_1)))))));
    #pragma endscop
}

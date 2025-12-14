/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155381
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((-(((var_7 ? var_2 : var_1)))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = ((((max((~-30721), ((34371 ? var_8 : var_8))))) ? (!-17) : (max(41, 20))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2 + 1] |= var_7;

                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {

                        for (int i_4 = 2; i_4 < 13;i_4 += 1)
                        {
                            arr_15 [i_3] [i_0] [i_1] [i_2] [i_2] [i_3 + 2] [i_4] = (-8 == var_8);
                            var_13 &= ((~30737) ? ((+((((arr_4 [i_0] [i_1] [i_3 + 2]) == -30721))))) : (arr_10 [i_3 + 1] [i_0] [i_2 - 1] [i_3]));
                        }
                        var_14 |= (((((((5948729222500484903 ? 9223372036854775807 : 105))) ? ((((!(arr_9 [i_1] [i_3]))))) : ((92 ? var_9 : 45999)))) << (var_2 - 7949)));
                    }
                    var_15 = (arr_5 [i_0] [i_2 + 1]);
                    var_16 = (min(((-((var_6 ? var_8 : (arr_0 [i_1]))))), -21378));
                }
            }
        }
    }
    var_17 = (~var_8);
    #pragma endscop
}

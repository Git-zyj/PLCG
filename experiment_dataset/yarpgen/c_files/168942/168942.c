/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168942
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, (min((((var_0 <= var_7) ? 8776 : ((max(var_15, -42))))), ((var_11 % ((var_13 ? var_4 : 122))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_19 = ((((((min(9447, (-32767 - 1)))) ? -1305203651 : -2147483644)) == (min(-7, ((19643 << (((-98 + 121) - 10))))))));
                var_20 &= ((((~(arr_4 [i_1]))) != (arr_2 [i_1] [i_0])));

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_21 ^= (((((+(max((arr_5 [i_0] [i_0] [i_2]), (arr_2 [21] [14])))))) <= (min((arr_0 [i_0]), var_2))));
                    var_22 = var_2;
                    arr_7 [i_0] [i_1] [i_2] = (!13219);
                    var_23 |= ((3713 + (((((24010 ? (arr_3 [15]) : (arr_6 [i_2] [i_2] [i_0] [i_0]))) == ((((0 == (arr_1 [5]))))))))));
                    var_24 |= (max((arr_6 [i_0] [i_1] [i_2] [i_0]), var_12));
                }
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    var_25 = -61822;
                    arr_11 [i_3] [1] [8] = (((((((-(arr_8 [8] [i_1] [i_3] [11])))) ? -var_12 : (((arr_1 [i_0]) / var_6))))) ? (((arr_4 [i_0]) ? (arr_4 [i_0]) : (arr_10 [i_0] [11] [i_1]))) : (~9223372036854775807));
                    var_26 = (((arr_1 [i_3]) ? (((!((-6359978622345585234 == (arr_9 [i_1] [21] [i_1] [i_1])))))) : 22756));
                }
            }
        }
    }
    var_27 = (-((min(-124, 1))));
    #pragma endscop
}

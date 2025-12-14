/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141342
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((min((40206 / -32741), var_8)) > (min(var_2, (~var_11)))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_13 = var_0;
                    var_14 = (min(var_14, var_2));
                    var_15 = (((((25324 ? 1 : 65536))) > (((((min(1, 1)) || 1))))));
                    var_16 |= (2147483647 || -13);
                }
            }
        }
        arr_8 [i_0] = (((!var_11) - (min(((1 << (var_6 - 10458))), (var_6 >= 65524)))));
        var_17 = min((((((min((arr_1 [i_0] [i_0]), 32767))) && 2398))), (max(var_6, (min((arr_3 [i_0] [i_0] [i_0]), 63137)))));
        arr_9 [i_0] = ((!(((arr_6 [i_0] [i_0] [i_0]) || (!23402)))));
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    var_18 ^= ((17722 ? (((arr_4 [i_3] [i_4 - 1] [i_3]) / 3749822221)) : -var_7));
                    var_19 = (((((!41375) ? var_4 : (((-125 ? var_10 : (arr_10 [i_4])))))) + ((68702699520 + (arr_15 [i_4 - 1] [i_4] [i_5])))));
                    var_20 = ((var_7 ? ((min(var_0, 0))) : (min((~2191524910844653157), (arr_17 [1] [i_4] [i_4 - 1])))));
                }
            }
        }
        var_21 -= ((~(arr_15 [i_3] [i_3] [i_3])));
        var_22 = (((((32724 ? var_4 : var_5))) > (((((arr_4 [i_3] [i_3] [i_3]) ? (arr_11 [i_3] [i_3]) : 0)) / (arr_16 [i_3] [i_3] [i_3] [i_3])))));
        arr_19 [i_3] [13] = (((min(7055297742950372161, 72551695)) * ((((var_9 - 40889) + -72551695)))));
        arr_20 [i_3] [i_3] = ((-(arr_17 [i_3] [i_3] [i_3])));
    }
    var_23 *= (((((-((68 >> (var_3 + 8012)))))) ? (--51) : var_2));
    var_24 = ((~(min(18446744005006852082, var_10))));
    #pragma endscop
}

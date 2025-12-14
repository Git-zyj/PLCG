/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, var_2));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_21 = -8448;

        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            var_22 = (max(var_22, (arr_3 [18])));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 18;i_3 += 1)
                {
                    {
                        var_23 = ((((max(15599, 16383))) > -2085246330));
                        var_24 += (((var_14 ? ((var_16 ? 17678 : var_1)) : (var_18 <= var_8))));
                        var_25 = (~(((arr_8 [i_0 - 1] [i_3 - 1] [i_0] [i_3 - 2]) ? (arr_8 [i_0 - 1] [i_3 - 1] [i_0] [i_3 + 1]) : (arr_8 [i_0 - 1] [i_3 - 1] [i_0] [i_3]))));
                        var_26 = (((((-16384 || (arr_5 [i_0 - 1] [i_0 - 1] [i_0]))) ? ((((arr_8 [i_3 - 2] [i_0] [i_0] [i_0 - 1]) || (arr_6 [i_0] [5] [i_0])))) : var_4)));
                        var_27 = ((((-((2950028498 ? var_2 : (arr_6 [i_0] [i_0] [i_0])))))) ? ((((212543282370820211 ? 3639304867215720638 : (arr_9 [i_0] [i_1 + 1] [i_0] [i_3]))) - (((arr_7 [i_2] [i_1 + 2] [i_2]) ? var_12 : 768998253)))) : (arr_1 [4]));
                    }
                }
            }
            var_28 &= (((min((arr_1 [i_0 - 1]), -37529)) % 1571791699));
        }
        arr_10 [i_0] [16] &= ((((((-(arr_4 [i_0] [i_0] [i_0]))) > ((min(15612, (arr_5 [i_0] [i_0 - 1] [16])))))) ? (arr_2 [12]) : -25671));
    }
    #pragma endscop
}

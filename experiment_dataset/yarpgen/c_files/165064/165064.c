/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165064
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        var_17 += ((var_11 + ((149 ? -15323 : -1019397801))));
        var_18 = ((144 ? 15411 : 125));
        arr_3 [i_0] = (arr_2 [i_0] [i_0 - 3]);
        var_19 = (((arr_0 [i_0] [i_0 - 1]) / 169));
    }

    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_10 [i_2] [i_1] = ((((!(arr_5 [i_1])))));
            var_20 = 121;
            var_21 = (max((arr_4 [i_1]), ((((arr_6 [i_2]) ? (arr_4 [i_1]) : (arr_4 [i_2]))))));
        }
        for (int i_3 = 3; i_3 < 15;i_3 += 1)
        {
            var_22 = (min(var_22, ((((min(((var_8 <= (arr_7 [i_3]))), (128 < 15093450771691738247))) ? ((((-925767515 + 2147483647) << (15093450771691738247 - 15093450771691738247)))) : (((((9030173044035410205 ? 110 : 37519)) - (((arr_4 [i_3]) ? (arr_8 [i_3]) : (arr_5 [i_1])))))))))));
            var_23 = 1151951688;
        }
        for (int i_4 = 3; i_4 < 16;i_4 += 1)
        {
            var_24 ^= (((192 / 37519) * 3353293302017813368));
            var_25 = (((max(24481, 15093450771691738247)) <= (arr_11 [i_4 - 2] [i_4])));
        }
        var_26 = ((~((max((!3353293302017813368), (arr_11 [i_1] [12]))))));
    }
    #pragma endscop
}

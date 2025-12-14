/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114253
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 0;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_17 = (min(var_17, (1 - 1)));
        arr_4 [i_0] [i_0] = 1;

        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            var_18 = (max(var_18, ((-(min((arr_0 [i_0]), ((15 + (arr_0 [i_1])))))))));
            var_19 = ((7391669348159591214 ? 1 : (((7391669348159591228 || ((((arr_0 [i_0]) ? var_5 : 44918))))))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_20 += var_0;
            var_21 = ((~((1 | (arr_1 [i_2] [i_0])))));
        }
        arr_12 [i_0] [i_0] = max(3, ((((arr_11 [i_0]) || 1))));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {

        /* vectorizable */
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            arr_19 [i_3] [i_3] [i_3] = 0;
            arr_20 [i_3] [i_4] [i_4] = ((arr_8 [i_3]) ? var_3 : ((((55185 || (arr_10 [i_3] [i_4] [i_3]))))));
            var_22 *= (arr_1 [i_3] [i_3]);
        }
        arr_21 [i_3] [i_3] = arr_17 [i_3];
        var_23 *= ((((234369129613956703 == 59190) ? (((1 ? 0 : 65530))) : 11478257216883170879)));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        arr_26 [i_5] = ((6370 ? (((14448118011392074673 - 6968486856826380713) + (((min(1, 1)))))) : (arr_0 [i_5])));
        var_24 = var_2;
        var_25 = (max(var_25, ((max(1, (arr_11 [i_5]))))));
    }
    #pragma endscop
}

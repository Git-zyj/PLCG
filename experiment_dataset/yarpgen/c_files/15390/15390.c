/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15390
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= var_5;
    var_13 = (max(var_8, ((((min(var_1, var_0))) ? var_2 : (var_1 + var_9)))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
        {
            arr_6 [i_1] [i_0] = (28 - 9862723594679961100);
            var_14 = (min((((max((arr_3 [i_0] [i_1]), var_0)))), (~var_6)));
        }
        for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
        {
            arr_9 [i_0] = ((+(max((arr_2 [i_0]), (arr_2 [i_0])))));
            var_15 = (((4294967266 || 65517) && ((max(((var_2 ? var_2 : 65505)), ((((arr_8 [i_0] [1] [i_2]) && (arr_1 [i_0] [i_0])))))))));
        }
        arr_10 [i_0] = (((arr_5 [i_0] [i_0] [i_0]) % ((max((arr_5 [i_0] [i_0] [i_0]), (((!(arr_3 [i_0] [i_0])))))))));
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        var_16 = (((10 - 65518) ? ((-(!65498))) : ((((!(arr_0 [i_3])))))));
        var_17 = (12 - 229);
        var_18 = (max(var_18, var_9));
        var_19 = ((~(arr_12 [i_3])));
    }
    for (int i_4 = 4; i_4 < 23;i_4 += 1)
    {
        var_20 = (max(var_20, (((((((((var_10 ? 28594 : (arr_16 [11])))) < var_4))) & (((arr_0 [i_4 + 1]) ? var_10 : var_8)))))));
        var_21 *= (max(-0, var_5));
        var_22 = (max(var_22, (max((((max(var_4, var_10)) + -var_4)), (arr_16 [i_4 - 4])))));
        arr_17 [i_4] [21] = ((((1 + (arr_5 [i_4 - 4] [i_4 - 1] [i_4 - 1]))) < (-7578100255249601228 && 1024756139)));
    }
    #pragma endscop
}

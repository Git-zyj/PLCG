/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163158
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((((-1287046367 ? 1 : ((-(arr_2 [i_0])))))) ? (((arr_1 [i_0 - 4]) + (arr_1 [i_0]))) : 40121);

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            arr_6 [4] = (1729382256910270464 ? -462023716 : 462023716);
            var_19 = ((-1287046376 + (max((((arr_5 [15]) ? var_11 : 1780568924)), var_6))));
            var_20 = -91;
            var_21 ^= (((((40126 ? (((-1729382256910270464 ? -1596912746 : 173))) : (773812903 + -2243800873537492564)))) ? ((((43 == 2984143808402623231) & (!22518)))) : ((var_1 ? (arr_1 [i_0 - 1]) : (arr_2 [i_0 - 2])))));
            arr_7 [i_0] = -1729382256910270464;
        }
    }
    for (int i_2 = 4; i_2 < 22;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] = ((!(((+(((-2147483647 - 1) % 589851629)))))));
        var_22 = ((((min((((arr_8 [i_2]) ? 11085850949783559053 : 463672484)), (arr_4 [7] [i_2 - 4])))) ? ((~(arr_10 [i_2]))) : ((-(~var_13)))));
        var_23 = (max(var_23, (((3862 ? 3894829611 : 97772512)))));
        var_24 = ((!(~3065527193)));
    }
    var_25 = (((var_2 ? 771761322 : 1395999273)));
    var_26 = (min((!var_2), var_8));
    var_27 -= ((var_13 + 2147483647) >> (var_10 - 3088787979064953264));
    #pragma endscop
}

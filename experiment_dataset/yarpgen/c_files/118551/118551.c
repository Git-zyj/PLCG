/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118551
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((2147483647 ? var_9 : ((min(var_11, 28)))))) ? (min(((36796 ? var_7 : var_4)), 18368)) : (((var_6 * var_2) ? (32893 * var_9) : 2743)));
    var_16 = (max(var_16, ((min(3166015095113417809, (min(119, (4804254527673922023 % var_9))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            var_17 = (max(var_17, ((((-9223372036854775807 - 1) >= (((arr_2 [i_0]) ? (arr_5 [12]) : -3743324156327965360)))))));
            var_18 = (max(var_18, -0));
        }
        for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
        {
            var_19 = (max(var_19, ((9223372036854775807 ? 0 : 16))));
            var_20 = (max(var_20, ((((arr_6 [i_0] [i_2]) * (arr_5 [i_2]))))));
        }
        for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
        {
            arr_11 [i_3] = (((arr_7 [i_3]) - 1));
            var_21 = ((((arr_1 [i_0]) / (arr_8 [i_0] [1] [i_3]))));
            var_22 = (((arr_10 [i_0]) ? (arr_10 [i_0]) : (arr_1 [19])));
            var_23 = (((((var_6 ? (arr_3 [i_0]) : (arr_6 [i_0] [0])))) ? (((var_11 & (arr_6 [i_0] [i_0])))) : var_12));
        }
        arr_12 [i_0] = (((arr_4 [i_0] [i_0]) ? (arr_10 [18]) : (arr_7 [i_0])));
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 19;i_5 += 1)
            {
                {
                    arr_17 [i_0] [i_0] [i_0] [i_5] = ((((((arr_8 [i_0] [i_4] [i_5]) % var_13))) ? (~var_7) : (arr_2 [i_4 + 2])));
                    var_24 |= (((arr_14 [i_4 + 2] [i_5 - 2] [i_5 - 1]) % -1605599281));
                }
            }
        }
        var_25 -= 120;
        var_26 = (((arr_6 [i_0] [i_0]) >> (1 != 15671)));
    }
    for (int i_6 = 4; i_6 < 15;i_6 += 1)
    {
        var_27 = ((((((((-1259664477032174672 ? (arr_7 [i_6]) : var_5))) ? (arr_15 [i_6 - 1] [i_6 + 4] [i_6 - 3]) : (-32767 - 1)))) <= 4290159615411146228));
        arr_20 [i_6 + 1] = (((var_14 ? (((862675735 ? 1 : var_4)) : (((arr_14 [11] [i_6] [i_6]) ? 2016161660292854137 : 47352))))));
        /* LoopNest 2 */
        for (int i_7 = 2; i_7 < 17;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                {
                    var_28 = ((705 ? 213 : 2147483621));
                    arr_27 [i_8] [i_8] [i_8] = (((arr_22 [i_7 + 1] [i_6 + 1]) ? ((min(((-1158928853842487673 ? (arr_16 [12] [i_7] [i_8]) : 46)), ((max((arr_2 [i_6]), var_11)))))) : ((1 ? 4294967265 : (-9223372036854775807 - 1)))));
                }
            }
        }
        var_29 |= (((arr_10 [i_6 + 3]) ? (4294967274 || 1) : var_10));
        var_30 = ((((min((arr_3 [i_6 + 2]), (arr_3 [i_6 + 1])))) ? (((-18483 + 2147483647) << (63 - 63))) : (max(((((arr_22 [1] [i_6]) || (arr_18 [i_6] [11])))), (min((arr_24 [8] [i_6] [i_6] [i_6]), var_4))))));
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15809
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            {
                var_20 *= (((((min((arr_2 [i_0]), var_17)))) ? (max(((222 ? var_2 : 221)), var_18)) : var_5));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_21 = (max(var_21, ((((max(1931402201, 2363565094)) - ((((((9223372036854775807 ? 701154165 : var_15)) == (((2363565094 ? 1 : 9223372036854775787))))))))))));
                    var_22 = (max(((var_6 ? (((170 ? (arr_2 [i_0 - 1]) : var_17))) : (max(9954660538456917307, 2363565081)))), (((-((max(var_5, (arr_2 [i_2])))))))));
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_23 = (min(var_23, (((((((max(18446744073709551609, 2363565093)) != (((((-2147483647 - 1) || 1)))))))) & ((((var_12 ? (arr_8 [i_1] [i_1] [i_1] [i_1]) : 244)) % (min((arr_4 [i_1 - 3]), var_14))))))));
                    arr_10 [1] [1] [i_3] [i_3] = (arr_5 [i_0] [i_0 - 1] [i_1 + 1]);
                }

                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    var_24 = ((max(1040774551, 8918323395251478036)));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                var_25 = (max(var_25, (((63009 ? 1 : (((max(23, 1)))))))));
                                var_26 = (min(var_26, ((max((((arr_0 [i_0 - 1] [i_0 - 1]) & (arr_0 [i_0] [i_0 - 1]))), (((((arr_8 [i_1] [i_1 - 1] [i_1 - 1] [i_1]) ? var_17 : (arr_16 [i_1] [0] [i_4]))))))))));
                            }
                        }
                    }
                    var_27 = var_5;
                }
            }
        }
    }
    var_28 = (max(39, 1393551777623116268));
    var_29 |= ((var_8 ? ((var_4 ? var_10 : var_10)) : (var_13 != var_2)));
    #pragma endscop
}

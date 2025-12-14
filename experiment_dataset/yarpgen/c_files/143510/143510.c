/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143510
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 64816;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
            {
                var_20 = 1125831187365888;
                var_21 = 37070;
                arr_8 [i_2] = (var_14 * 37070);
                arr_9 [i_0] = 4869;
            }
            for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
            {
                var_22 = (max(var_22, ((((((28447 ? 8584 : 25))) ? (((2251795518717952 ? 37070 : 37054))) : var_4)))));
                var_23 = 1;
                arr_12 [i_3] [i_1] [i_3] [i_3] = ((var_7 ? -6 : var_9));
                var_24 = (((var_14 ^ 25) ? var_18 : var_17));
            }
            var_25 = (min(var_25, 37063));
        }
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 21;i_6 += 1)
                {
                    {
                        arr_20 [i_0] [i_4] [i_5] [i_5] = 2251795518717946;
                        var_26 = (min(var_26, ((((-2251795518717940 % 25) ? 20 : (var_0 && var_11))))));
                    }
                }
            }
            var_27 = ((-79 ? 2251795518717981 : var_1));
        }
        /* LoopNest 2 */
        for (int i_7 = 4; i_7 < 22;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                {
                    var_28 = (min(var_28, ((((((13414464538848638049 ? 39 : 81))) || -39)))));
                    arr_26 [i_7] [i_7] [i_8] = -79;
                }
            }
        }
        arr_27 [i_0] = ((5 ? -2251795518717982 : 28481));
        var_29 = (var_11 || -41);
    }
    for (int i_9 = 1; i_9 < 10;i_9 += 1)
    {
        var_30 = (max(var_30, 37072));
        var_31 = (min(var_31, ((max(((4150 * (max(var_10, var_6)))), (((12 ? (-1591020768409724603 ^ -20) : ((var_16 ? -20 : 2251795518717994))))))))));
        var_32 = -4161;
    }
    for (int i_10 = 2; i_10 < 19;i_10 += 1)
    {
        var_33 = 20;

        for (int i_11 = 3; i_11 < 18;i_11 += 1)
        {
            var_34 = (max(var_34, -2251795518717981));
            var_35 = (min(var_35, (((2147483647 != ((46430 ? var_1 : (((-16 ? var_15 : -90))))))))));
            var_36 = (min(var_36, var_5));
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13961
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 56;

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        var_17 = (min(var_17, 28785));
        var_18 = (min(((-(((arr_1 [i_0]) / (arr_2 [i_0] [i_0]))))), (min((((arr_1 [i_0]) ? var_11 : 8)), (arr_2 [i_0] [12])))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [i_1] [1] [i_3] = (min((arr_3 [i_0]), ((((arr_4 [i_2]) ? (arr_4 [i_0]) : (arr_4 [i_0]))))));
                        arr_10 [i_0] = ((((max(517806578, (((!(arr_4 [i_0]))))))) ? var_14 : (((!32767) / -2887))));
                        arr_11 [i_0] [i_1] [i_2] [i_2] [i_3] = ((250 ? -4533 : (((arr_1 [i_2]) ? ((-19 ? 1034711815 : 15)) : 250))));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
    {
        var_19 = (max(var_19, var_15));
        /* LoopNest 3 */
        for (int i_5 = 3; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 23;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    {
                        arr_23 [i_4] [i_4] [i_6] [15] [i_4] [i_6] = (arr_22 [i_4] [i_4] [i_4]);
                        var_20 ^= (((arr_7 [i_6] [i_6] [i_7] [i_7]) | var_11));
                    }
                }
            }
        }
        arr_24 [i_4] = (((((arr_15 [i_4] [i_4]) + 2147483647)) >> (-5 + 6)));
        var_21 = (max(var_21, ((((!((min(3571063135032785167, (arr_12 [i_4])))))) ? 5403166827192574651 : var_1))));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
    {
        var_22 = (max(var_22, -var_13));
        var_23 = 34120;
        arr_27 [i_8] = 3316234724727526949;
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 23;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 23;i_10 += 1)
            {
                {
                    arr_33 [i_8] [i_9 - 1] [i_8] &= ((!(arr_20 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])));
                    arr_34 [i_9] = (((arr_17 [i_8] [i_10 - 1] [i_9 + 1] [i_9 + 1]) ? (arr_17 [i_8] [i_10 - 1] [i_9 + 1] [i_8]) : (arr_17 [i_8] [i_10 - 1] [i_9 + 1] [i_10])));
                    arr_35 [i_8] [i_8] [i_8] [i_9] = ((((-28583 ? -2888 : 5)) >= (73 || 21422)));
                }
            }
        }
        arr_36 [i_8] = ((-(arr_0 [i_8])));
    }
    for (int i_11 = 0; i_11 < 24;i_11 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_12 = 3; i_12 < 22;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 24;i_13 += 1)
            {
                {
                    arr_47 [i_13] [i_12] [i_11] [i_11] = -125;
                    var_24 = (max(var_24, (min(((((arr_43 [i_12 + 2]) + (arr_43 [i_12 + 2])))), ((-2487959405 | (arr_17 [i_11] [i_11] [i_13] [i_13])))))));
                }
            }
        }
        arr_48 [i_11] [i_11] = (min((((((min(-7467771145974941670, -4085502179307350131))) || (arr_6 [i_11] [i_11] [22] [i_11])))), (min(var_10, 24557))));
        var_25 = (max(var_25, (((140 ^ (max((arr_43 [i_11]), (arr_43 [i_11]))))))));
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181352
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 = (min(var_11, (((205 * 0) ? ((-(arr_2 [6] [6]))) : (215 || 8857510612670776953)))));
        var_12 = min((arr_2 [i_0] [i_0]), var_8);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_13 = (var_10 >= -4294967281);
        var_14 = 622026981366329035;
        var_15 = (max(var_15, (arr_0 [8] [i_1])));

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_9 [i_1] = (((((19 ? var_1 : 0))) ? var_9 : (arr_5 [i_1] [i_1])));
            arr_10 [i_1] [i_1] [i_1] = (!64);
            var_16 = var_9;
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 21;i_5 += 1)
            {
                {
                    arr_20 [i_3] [i_4 - 1] = ((((min((0 ^ 251), ((var_9 ? 2796362 : var_0))))) ^ (((max((arr_12 [i_3]), -5886158347539901360)) | (((34533 ? 255 : -192253159)))))));
                    var_17 = (1928551956 ? ((min((~205), 1583327278))) : ((-1469110184 ? var_2 : 64)));
                    var_18 = (min(var_18, ((max(-192253159, (((!((12701 <= (arr_19 [i_3] [i_3] [i_3] [i_3])))))))))));
                }
            }
        }
    }
    var_19 |= 3526770085;
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143884
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_7));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = ((900723725 && (((11165 ? 3163984579 : 15756320119716249351)))));
        arr_4 [i_0] |= ((var_2 ? ((183 ? var_15 : 5848005506207901473)) : (242 == 21636)));
        arr_5 [11] = (!-5848005506207901473);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_19 = 1821661938;
        arr_8 [19] [i_1] = (!var_2);
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        var_20 = ((7722965675237983569 == (3885302982 == 65535)));
        arr_11 [i_2] [i_2] = (((((28770 ? 228 : 122))) ? ((-7 ? ((409664325 ? var_15 : -1)) : 1208123156)) : ((((!(((var_7 ? 1895272124 : var_16)))))))));
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 9;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        {
                            arr_20 [i_3] [i_4] [3] [1] [i_5] [i_6] = ((((min(255, var_9))) ? (243 % var_0) : -var_14));
                            arr_21 [i_6] [i_5] [2] [i_4] [i_3] |= -1895272124;
                            var_21 = ((var_2 ? ((414850301 ? -19870 : 521169401)) : (!-125)));
                            var_22 = (var_1 | -24763);
                        }
                    }
                }
                arr_22 [i_4] = (((((1082955473 ? (((2 ? var_4 : 3773797894))) : 3))) ? (((var_5 | (~var_9)))) : (min(11002126688145222415, (1 > 5848005506207901456)))));

                /* vectorizable */
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    var_23 = -276743770;

                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        var_24 = -1;
                        var_25 = (var_12 > 67108832);
                    }
                    arr_28 [i_3] [4] [i_3] [i_7] = 31816;
                    arr_29 [i_3] [i_7] [6] = (((var_13 / 3221225472) ? (var_9 ^ var_10) : (((var_4 ? 255 : 26173)))));
                }
            }
        }
    }
    #pragma endscop
}

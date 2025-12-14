/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108125
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((var_13 ? var_7 : var_3))) || var_9));
    var_17 = ((((var_8 ? var_6 : 8557488592839563952))));
    var_18 = 1072693248;
    var_19 = (((var_6 * var_0) ? ((8033228935037723124 ? 10397415835047734356 : 736522303324795025)) : ((((!(-8038883054985968057 || 8284668058904183663)))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 15;i_2 += 1)
            {
                {
                    var_20 = var_13;
                    var_21 = (!0);

                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        var_22 = ((arr_6 [i_0] [i_1] [i_0] [i_3 - 2]) || ((((arr_7 [i_0 - 1] [i_0]) ? (arr_7 [i_0 - 2] [i_0]) : (arr_7 [i_0 + 1] [i_0])))));
                        var_23 = ((((var_6 ? var_1 : ((var_9 ? (arr_7 [i_0] [i_0]) : (-32767 - 1))))) < 62407));
                        var_24 = ((~((var_4 * (arr_9 [i_2 - 3])))));
                        arr_10 [i_0] [i_1] [i_1] [i_0] = -245085340;
                    }
                    arr_11 [13] [13] [13] [i_0] = ((4294967295 ? 1 : -700277054));
                }
            }
        }
    }
    #pragma endscop
}

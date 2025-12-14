/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_4, (((var_4 > var_0) ? ((var_7 ? var_8 : 18444492273895866368)) : (544746628508685066 - 2251799813685247)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_11 = (arr_11 [i_3] [i_1] [i_3] [i_4]);
                                var_12 -= (((max((((2251799813685247 ? 1001605361 : var_8))), (((arr_6 [i_0] [i_1] [i_2] [i_0]) ? var_4 : 5987751868761358793)))) != (max(((-258289995948644258 ? 7127864792793628804 : var_3)), (min((arr_10 [i_0] [i_0] [i_0]), var_5))))));
                            }
                        }
                    }
                    var_13 = (min(var_13, (((((min((arr_5 [i_0] [i_1] [i_1]), ((((arr_4 [i_1] [i_1] [i_2] [i_1]) || 65523)))))) ? -5987751868761358789 : ((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_2]) : (arr_0 [i_0] [i_0])))))))));
                }
            }
        }
    }
    var_14 = (max(var_14, (((!(622689663 <= 37518))))));
    #pragma endscop
}

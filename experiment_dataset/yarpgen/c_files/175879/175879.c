/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175879
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(((((max(var_3, var_5))) ? (53923 / var_9) : var_4)), ((min(var_5, (var_6 < var_3))))));
    var_12 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0 + 1] [6] = ((((4294967273 == (max(120, 12026)))) ? (arr_3 [i_0] [i_1]) : (((max((min(31944, 16383)), 53963))))));
                var_13 = var_3;
                var_14 &= ((((100 && (arr_1 [i_0 - 1]))) ? 1715603176 : (!65524)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            {
                var_15 = (max(var_15, ((-(min((arr_9 [i_2] [i_2] [i_3]), (((arr_1 [i_2]) ? var_3 : -88))))))));
                var_16 *= ((10377498651651626689 ? var_9 : ((((!(arr_11 [i_3])))))));
                var_17 = (min(var_17, (arr_4 [i_2] [i_3] [i_3])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 10;i_5 += 1)
        {
            {
                arr_18 [i_4] = 4294967295;
                arr_19 [i_4] [i_5] = (11572 / 4);
            }
        }
    }
    #pragma endscop
}

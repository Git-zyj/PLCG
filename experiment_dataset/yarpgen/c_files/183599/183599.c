/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183599
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((min((~15542049686185279840), (~65521))));
    var_21 = ((-(min(((138 ? var_1 : 65521)), (((var_18 ? var_11 : 54537)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_22 = min((((65521 | (arr_2 [i_0 - 1])))), ((-(arr_6 [i_0 + 1] [i_0 + 1]))));
                arr_7 [6] [8] [i_1] &= var_16;
                var_23 = (255 <= 1099511627775);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            {
                arr_15 [i_3] = (((29 ^ var_2) ? ((((!(~65503))))) : (((((524288 ? -4559427411767858304 : var_10))) ? (~var_2) : var_8))));
                arr_16 [1] = ((((min(-13167, var_6))) ? (!17890048476731971523) : ((max((arr_0 [i_2] [i_3]), (arr_0 [i_2] [i_2]))))));
                arr_17 [i_2] = ((!(((arr_9 [i_2]) <= -5217))));
            }
        }
    }
    var_24 = (min(var_24, 41368));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_1] = 7322662717010723911;
                var_14 = (((((8796491600100095850 ? (~164179119) : 1774507268))) ? (((arr_4 [i_0]) | 8796491600100095850)) : ((max((arr_0 [i_0]), (arr_0 [i_1]))))));
                arr_6 [i_1] |= -9944734465467441285;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            {
                arr_14 [i_2] [i_3] = (((arr_13 [i_3]) ? ((0 ? -1264006243 : 1308116487046757573)) : (arr_10 [i_3] [i_2])));
                var_15 ^= (min(((((((var_10 ? 5 : var_5))) ? 2147483647 : (arr_12 [i_3 - 1] [i_3 - 1])))), (min(((var_11 ? (arr_13 [i_2]) : 80282118636199666)), var_4))));
            }
        }
    }
    #pragma endscop
}

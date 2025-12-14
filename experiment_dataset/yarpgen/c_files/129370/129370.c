/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129370
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((var_10 & (((max(-88, var_8)))))) <= var_14));
    var_20 = (((min(((var_17 ? 3 : -22053)), var_1)) % ((var_5 ? 151584741 : (var_0 < var_17)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_21 = (((((var_16 ? 608804348 : (arr_0 [i_0] [i_1])))) ? ((218 ? 3 : 232735664)) : (26486 || 110)));
                var_22 = ((((((max(-232735664, -88)) | (((arr_2 [i_0] [i_0] [i_0]) ? (arr_3 [i_0]) : (arr_3 [i_1])))))) ? ((608804360 - (max(26514, (arr_0 [i_0] [i_1]))))) : (((((((arr_1 [i_0]) ? (arr_0 [i_1] [i_0]) : (arr_2 [i_0] [i_0] [i_0]))) != (-43 ^ 3347708243)))))));
                var_23 = (((((arr_3 [i_0]) >= var_18)) ? ((4 ? (arr_3 [i_0]) : 14410919976000721173)) : ((((arr_3 [i_0]) ^ (arr_3 [i_1]))))));
                var_24 = (((((-((-26487 ? 2778466139 : 608804371))))) ? ((max(65, 65535))) : 1783111436));
            }
        }
    }
    #pragma endscop
}

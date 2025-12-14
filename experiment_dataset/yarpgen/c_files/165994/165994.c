/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_15 = (((!1) ? ((-12 ? 38997 : 0)) : ((39005 ? -255271982 : 142))));
                var_16 = ((((((((1 ? 61701 : 26530))) ? 118 : ((max(39005, 38997)))))) ? ((-40 ? (!5384906242041949313) : 0)) : ((((8646651428487831023 ? 39005 : 15855125210611918539))))));
            }
        }
    }
    var_17 = var_2;
    var_18 = (max(var_18, ((((((((max(61701, 39005))) ? var_13 : (((min(1, 3835))))))) ? (((((65535 ? 65535 : 118))))) : (min(39005, (!-7326978270259548567))))))));
    var_19 = var_3;
    #pragma endscop
}

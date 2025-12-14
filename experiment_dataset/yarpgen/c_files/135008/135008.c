/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, (((((min(4251009856456964743, (!1)))) && ((min((!var_0), ((var_14 ? 23944 : 70))))))))));
    var_17 = (!((((1 ? 525 : 6691011803154187367)))));
    var_18 *= (((((2099884233 ? 185 : 1)))) || ((min(var_14, var_13))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 = 598717110923107930;
                    arr_6 [i_0] = (((((~(6361881473346838966 >= var_7)))) ? (max((arr_1 [i_2]), (min(4913960877872193388, var_1)))) : (((min((!0), 1))))));
                    var_20 *= 41592;
                }
            }
        }
    }
    #pragma endscop
}

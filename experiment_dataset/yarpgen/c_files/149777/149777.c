/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149777
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= ((((((((-1995330649934020910 ? 0 : -1995330649934020916))) ? (!-1995330649934020912) : ((-1995330649934020903 ? 549540594 : 1995330649934020909))))) ? (max(97, ((3745426692 ? -1551601190 : 1995330649934020905)))) : (min((!1995330649934020905), ((1995330649934020898 ? 1 : 1995330649934020910))))));
    var_14 |= ((-(((!-1995330649934020906) ? ((1 ? -1995330649934020910 : -8726773793136490098)) : (max(-15, 1551601189))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_0 + 1] [i_0] [i_0] = ((((10284799 ? 31 : -1995330649934020879))));
                arr_7 [i_1] = ((!(((1995330649934020882 ? 8726773793136490098 : (((0 ? (-2147483647 - 1) : 0))))))));
            }
        }
    }
    var_15 = 11009198291291313331;
    var_16 = -1995330649934020921;
    #pragma endscop
}

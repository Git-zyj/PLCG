/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160755
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max((max((max(var_1, var_3)), var_13)), (((var_7 * ((var_4 ? 1 : 4032)))))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_19 = 4499562603826497767;
        arr_4 [i_0] = ((var_4 && (((243 ? ((4194303 ? 127 : -674981636)) : var_16)))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = -80;
        var_20 = (!-1);
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
    {
        var_21 = (-(~129));
        var_22 = ((-var_13 ? ((var_16 ? var_9 : -1)) : ((12 ? 0 : 0))));
        var_23 &= -29238;
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
    {
        arr_14 [i_3] |= (min(((24 ? 845031936 : -688177854)), (max(61481, var_4))));
        var_24 = (max(((var_5 || (((var_13 ? -29220 : 8324))))), ((!(((-64 ? 12 : 2517)))))));
    }
    #pragma endscop
}

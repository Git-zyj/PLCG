/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_12 = (min((min(7634823929494525945, 282696792595656908)), 7634823929494525945));
        arr_4 [i_0] = (18164047281113894707 ? 1 : (min(18019, 576320014815068160)));
        arr_5 [i_0] [8] = ((~((~((max(-61, 25420)))))));

        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            var_13 = 25420;
            arr_9 [i_0 - 2] [i_0] &= ((((max(23150, (min(1, 53811))))) / -145229176));
            arr_10 [i_1] [i_1] = (((208 > 2231723252) ? 88 : 58));
        }
    }
    for (int i_2 = 2; i_2 < 19;i_2 += 1) /* same iter space */
    {
        var_14 &= 1;
        arr_14 [i_2 + 2] = ((((1 + (arr_0 [i_2] [i_2 - 2]))) < (25407 || 1)));
        arr_15 [i_2] = 42;
    }
    var_15 = var_2;
    var_16 = (max(((min(-1, ((32761 ? 1 : 23150))))), var_10));
    var_17 = 47292;
    #pragma endscop
}

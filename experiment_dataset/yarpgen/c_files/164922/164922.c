/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164922
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_1] [1] = (!2875784609);
                    var_10 = ((!(arr_4 [i_2 + 2])));
                    var_11 = (((arr_0 [i_2 - 2]) != (1419182687 > -26)));
                }
            }
        }
    }
    var_12 = (((!4168188154433238625) == (((((65535 ? var_6 : 63)) < (var_2 & var_3))))));
    var_13 = (max((1 + var_8), 2875784609));
    var_14 = 1419182714;
    var_15 = ((((((6144 >= 9011) > 1419182658))) == var_4));
    #pragma endscop
}

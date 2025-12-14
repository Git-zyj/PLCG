/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_11 [i_2] [i_1] [i_0] [i_2] = ((+((min((arr_7 [i_0] [i_2] [i_2] [i_0]), (arr_2 [i_0 - 2]))))));
                    var_16 ^= ((-920554556 ? 165 : -797208652137200380));
                    var_17 += ((((min(1, 26))) ? ((1454082225 ? 7584000288264889222 : -2634998876905500267)) : (((65 ? 67 : 4816601042784178857)))));
                }
            }
        }
    }
    var_18 = ((250 ? -2062686399 : 2065086393));
    var_19 = (min(var_12, var_15));
    var_20 += var_4;
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161917
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;
    var_12 |= ((((((210670443 ? 4294967295 : -5049731867874222172)) != (((-5049731867874222165 ? 1451458703 : 88)))))) % -var_1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_13 = ((((max((~-5049731867874222172), (~11813)))) ? 2147483629 : ((-2147483629 ? 5049731867874222176 : -13828))));
                arr_4 [i_1] = (min(((max(((3263504801389309210 ? 1 : 255)), (1894883737 >= 776898228)))), ((65 ? -5049731867874222199 : 53723))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [6] [i_2 - 1] [i_1] = ((!(!18446744073709551615)));
                            var_14 = max(((5049731867874222176 ? 7 : 0)), ((32767 ? 2147483624 : 62)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

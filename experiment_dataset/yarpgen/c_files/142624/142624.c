/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142624
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = 36373;
        var_13 = (min(var_13, 5490652346877816603));
        var_14 |= ((36373 / (((5490652346877816603 / 960) - (51450 && 9223372036854775807)))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_15 = (min(var_15, 254));
        var_16 = (min(var_16, (((29162 || (((52366 ^ (512 == 5490652346877816611)))))))));
        var_17 = ((29162 >> (((1099511496704 >= 29137) + (15360 / 50175)))));
    }
    var_18 = (12 - 110);
    var_19 = ((-30355 ^ 1402663137847358735) * (((65280 | 36) & (4250999002713632841 & 192))));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 21;i_4 += 1)
            {
                {
                    arr_13 [8] [i_3 + 2] [i_2] |= (((8411041076444483192 <= 2251799813684736) * ((((2251799813684723 % -6393003021631126554) < (17183 == 32505856))))));
                    var_20 = -32260;
                    arr_14 [i_3] [i_3] [i_3] = (((-6393003021631126554 >= -8519264110828253223) != 10720));
                }
            }
        }
    }
    #pragma endscop
}

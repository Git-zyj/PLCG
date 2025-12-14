/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_14 = (max(var_14, (((var_8 ? (((min((arr_0 [i_0]), var_12)) ^ ((((arr_4 [i_0]) ? (arr_5 [i_0] [i_0]) : -60))))) : (~-8391))))));
            arr_6 [i_0] [i_1] [i_1] = ((~((~((var_12 ? 77 : 3888832507))))));

            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                var_15 -= (min((max((8818594073553079397 & var_10), (arr_0 [i_1]))), ((((4076549297 / -8391) == (((-10271 ? var_0 : var_1))))))));
                var_16 = ((!(~15097)));
            }
            for (int i_3 = 1; i_3 < 22;i_3 += 1)
            {
                arr_12 [i_0] [i_3] [i_3] [i_0] = ((((var_7 || ((((arr_10 [i_0] [i_3] [i_1] [i_3 + 1]) ? 202 : var_5))))) ? (((~(arr_3 [i_1])))) : (((arr_8 [i_3 + 1] [i_1] [i_3 + 1]) ? (arr_10 [i_3 + 1] [i_3] [i_3] [i_3]) : var_10))));
                var_17 = (arr_1 [i_0]);
            }
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                arr_15 [i_0] &= ((!((min((((var_9 ? 0 : var_0))), (max(var_2, 3209698296)))))));
                arr_16 [i_0] [i_1] [i_4] [i_4] = ((((max((11748 & var_5), (var_1 ^ 846778942)))) ? (((((762978644 ? -1 : 5))) ? ((max(var_10, (arr_2 [i_0] [i_0])))) : (arr_13 [i_0] [i_1]))) : var_4));
                var_18 *= max(110, 4294966784);
                var_19 -= 526;
            }
            arr_17 [i_1] [i_0] [i_0] = (((-694021172 ? 157 : 0)));
            var_20 -= var_1;
        }
        var_21 = (arr_14 [i_0] [i_0] [i_0]);
        var_22 = ((((1085269004 ? var_3 : (!var_6))) >= (((arr_9 [i_0] [i_0]) ? 1 : var_10))));
    }
    var_23 ^= (((((var_11 ? (min(23105, 1092745563)) : var_1))) && ((((var_3 + 8191) % -30615)))));
    var_24 |= 64;
    var_25 = var_0;
    #pragma endscop
}

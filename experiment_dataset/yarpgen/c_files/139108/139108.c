/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139108
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(137521863, 32999));

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_12 ^= (min((4136318841661022110 > 4136318841661022110), (min(var_4, var_7))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        var_13 *= ((((max(3777, (arr_3 [i_1 - 1] [i_1 - 1] [4])))) && ((max(((min(var_1, 98))), (20826 + 4157445441))))));
                        var_14 = var_0;
                        var_15 = (((arr_6 [1] [i_0 - 1] [i_2]) ? (min((min(var_3, -9)), (((2995257614 ? 20822 : 255))))) : 2995257603));
                    }
                }
            }
        }
        var_16 = (min(var_16, (((!(32545 < 18446744073709551612))))));
        var_17 = ((137521863 - ((((((-76 ? -4136318841661022125 : var_1)) + 9223372036854775807)) >> (((((arr_8 [i_0]) ^ var_0)) + 7492668868716081085))))));
    }
    #pragma endscop
}

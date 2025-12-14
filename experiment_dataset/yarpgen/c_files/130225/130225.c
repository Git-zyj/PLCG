/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= ((-(min(5637456776806370470, 48))));
    var_19 = (max(var_12, (var_12 || -var_4)));

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = 255;
        arr_3 [i_0 + 2] = 103;
        var_20 = (((-5637456776806370464 != var_3) - (var_7 % 226)));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 22;i_3 += 1)
                {
                    {
                        var_21 = (((((var_8 >= (min(-595438474, var_2))))) + (216 || var_11)));
                        arr_11 [i_2] = (-9223372036854775807 - 1);
                        arr_12 [i_0] [i_1] [i_2] [i_0] = 39;
                    }
                }
            }
        }
        arr_13 [i_0] [i_0] = (((var_4 ? 6748491764933504977 : -5637456776806370470)));
    }
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        var_22 ^= (((((-5653715547657775254 ^ (745261546465671830 && -674107089318667299)))) || (((((var_14 ? -5637456776806370495 : var_17)) - (((var_14 ? var_7 : -1343411226))))))));
        var_23 = max(var_14, (((var_3 && 48) ? (((var_14 << (((-103 + 130) - 6))))) : (min(-1978046191, var_17)))));
    }
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        arr_19 [i_5] [i_5] = (((-745261546465671859 + 9223372036854775807) << (((-32 + 90) - 58))));
        var_24 += (-8799658289573675108 ? ((min(var_14, (min(-1986037223, 208))))) : (66 | var_11));
        var_25 = (max(1986037204, (((((2147483647 << (((-1 + 19) - 18))))) ? -4833495962037509423 : (!var_0)))));
    }
    #pragma endscop
}

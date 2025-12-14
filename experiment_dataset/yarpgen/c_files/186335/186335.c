/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186335
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= var_12;
    var_14 = ((464025495074573895 ? ((var_9 >> ((21 >> (2643350517 - 2643350504))))) : -91));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_15 = (((7 ? 96 : 1126846678)) >> ((((-32702 ? 1946940732 : -5551)) - 1946940707)));
                var_16 = 2987769517;
            }
        }
    }
    var_17 = (min(var_17, var_4));

    for (int i_2 = 1; i_2 < 23;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_5 = 3; i_5 < 21;i_5 += 1)
                    {
                        var_18 &= (!1126846678);
                        var_19 = (max(var_19, (((1126846666 ? 32743 : -3419)))));
                    }
                    arr_14 [i_3] [i_3] [i_2] |= ((6818 ? ((((!(1126846675 && -1126846700))))) : ((-1126846680 ? -7433335982715781567 : 1581944486))));
                }
            }
        }
        arr_15 [i_2] = (((((121 ? -97 : 18446744073709551609))) && -7433335982715781567));
    }
    #pragma endscop
}

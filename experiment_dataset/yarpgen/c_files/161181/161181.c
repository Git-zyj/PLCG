/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161181
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_12 = (max(-1302861937, 14387375394385143949));
                var_13 = (min(var_13, var_5));
                var_14 |= (((((~(var_3 | var_0)))) ? -67 : ((var_3 ? var_8 : (32751 * -107)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                var_15 = ((((((-1530757595 % var_1) + ((var_6 ? 7 : 180))))) ? ((((12543675 == ((((var_7 <= (arr_3 [i_2] [16] [i_2 - 1]))))))))) : (max(var_4, 0))));
                var_16 = (max(var_16, ((max(14387375394385143949, 12543698)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 21;i_5 += 1)
        {
            {
                var_17 = (min((max(var_11, (var_1 - -121))), -66));
                var_18 *= (max(4611686018427387904, (max((!14647448064104580548), var_5))));
                var_19 = ((max((-9223372036854775807 - 1), -1880851902)));
            }
        }
    }
    var_20 = ((-164 <= ((var_8 >> (var_10 * var_4)))));
    #pragma endscop
}

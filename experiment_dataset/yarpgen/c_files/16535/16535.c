/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16535
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_15, ((((15 && 479084670) && (((var_12 ? var_1 : -1579623717))))))));
    var_20 = ((((((18 * 1798221685) && ((min(var_10, var_3))))))) / (((((var_12 ? var_8 : var_18))) ? var_1 : -6789398817364351107)));

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        arr_4 [i_0] [i_0 + 1] = ((arr_3 [i_0] [i_0]) ? (arr_3 [i_0 - 2] [i_0 - 2]) : -3815882626);
        arr_5 [7] [i_0 - 2] = (((((-6789398817364351107 / 3815882625) >= ((15051963357155230748 ? 1262141319886702734 : (arr_3 [8] [8]))))) ? 1829292758833425846 : 386007419));

        for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
        {
            arr_9 [i_0 - 2] = ((min((arr_3 [i_0 - 1] [i_1]), (arr_0 [i_0 - 2]))));
            var_21 = (((min((arr_0 [i_0 - 2]), var_12)) > var_18));
        }
        for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
        {
            var_22 = (min(var_22, 2496745598));
            var_23 += (((((arr_0 [i_0 - 3]) ? 2496745586 : 3649484804))) ? (arr_0 [i_0 - 1]) : (max((arr_0 [i_0 + 1]), (arr_0 [i_0 - 1]))));
        }
        for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
        {
            arr_16 [i_0] = (max((((1798221687 << (-231597825 + 231597847)))), ((~((var_12 ? var_10 : var_8))))));
            var_24 ^= (-(min((640229995 * 2496745599), ((var_18 ? var_14 : (arr_13 [i_0]))))));
            arr_17 [i_3] [i_0 + 1] = ((3908959881 ? 3908959871 : 2496745623));
        }
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            var_25 |= ((((min(-6789398817364351105, -118))) ? (((min(var_3, 4294967295)) >> (((((arr_2 [i_4]) ? (arr_0 [3]) : 2496745600)) - 2942986655)))) : 94));
            var_26 = (((((3947264306371114347 << (-287074186 + 287074236)))) ? 26654 : (((arr_6 [i_4]) + (arr_15 [i_0 - 1])))));
        }
    }
    var_27 = (min(var_27, (min((41 && 2247623493), (var_1 ^ var_7)))));
    var_28 = (~var_18);
    #pragma endscop
}

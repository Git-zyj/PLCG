/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111447
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, (((((2656993159 ? var_8 : (min(7902563429187529588, 4953156262550532893)))) != (((max(100, 1115349252)))))))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_20 = (max(var_20, (((((((arr_0 [i_0]) << var_10))) ? ((~(2656993178 <= 18001516199185561822))) : (((min(2656993190, 7902563429187529588)))))))));
        arr_2 [i_0] [i_0] = (~(min(7902563429187529588, 1115349252)));
        var_21 = (max(var_21, ((((-1115349252 / 1115349252) / 108)))));
        var_22 ^= (32767 - 1271682153);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_6 [i_1] = (var_15 * var_18);
        var_23 = (min(var_23, (((var_6 ^ (arr_4 [i_1]))))));
        var_24 = ((15 ? -26 : 1));
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_25 ^= (min(13052823138412684035, 3030388357));
                    var_26 = (min(1, 150437797));
                    var_27 ^= ((((((arr_7 [i_3 - 1]) >> (var_1 - 10052534574866447358)))) ? ((max((arr_7 [i_3 - 1]), var_15))) : (max((arr_7 [i_3 + 1]), var_1))));
                }
            }
        }
        arr_15 [i_2] [i_2] = ((((((((~(arr_7 [i_2])))) ? (max(var_1, var_5)) : (((var_15 ? var_16 : -1115349240)))))) ? (((~(~var_9)))) : (min((arr_13 [i_2] [i_2] [i_2]), ((4144529507 ? 10544180644522022049 : 1115349260))))));
    }
    #pragma endscop
}

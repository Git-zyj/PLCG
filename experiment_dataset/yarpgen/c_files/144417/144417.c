/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144417
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = max(1337030879215230438, 83);

        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            var_18 = (min(var_18, (((((max(4294967295, -5434581643171977882))) || ((max(1337030879215230438, 17109713194494321157))))))));
            var_19 = min((arr_1 [i_0] [i_1 - 1]), (((((arr_4 [i_0] [i_0]) != -392851798512195976)) && (arr_1 [i_1 - 1] [i_1 - 1]))));
            arr_8 [i_0] [i_0] = -101;
            var_20 = (min(var_20, (18064884284095442051 - 17109713194494321178)));
        }
    }
    var_21 = (((9512 | var_12) >> ((((1 ? (min(4247085192, 17109713194494321178)) : var_10)) - 4247085166))));
    #pragma endscop
}

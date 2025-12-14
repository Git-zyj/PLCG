/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (694110948 <= 10682789708603898669);
    var_16 = (min((!694110948), var_7));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        var_17 = (((var_3 < var_9) | 25640));
        var_18 = (((arr_0 [i_0]) / (arr_0 [i_0])));
        arr_3 [i_0] [i_0] = ((~(arr_2 [i_0 + 1])));
        var_19 |= 25640;
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        arr_6 [12] = (arr_1 [i_1] [i_1]);
        var_20 &= ((~((-(arr_0 [i_1])))));
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
    {
        var_21 = (max(var_21, (((var_7 + ((((5 / -7847) == 9223372036854775807))))))));
        var_22 = ((~(min(((max(233, 185))), (32767 | 0)))));
        var_23 = (min((((!(arr_8 [i_2])))), ((+((((arr_7 [11]) >= 4194303)))))));
        var_24 = (~(((arr_5 [i_2]) >> (263059864395692142 - 263059864395692113))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                {
                    var_25 = 19602;
                    var_26 = (min(var_26, (((((max(3826793977047285168, (~2)))) <= (arr_12 [i_2] [i_3] [10]))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            {
                arr_20 [i_6] = 2173701263;
                var_27 = (((~1036467083) && 2216715785964296302));
            }
        }
    }
    #pragma endscop
}

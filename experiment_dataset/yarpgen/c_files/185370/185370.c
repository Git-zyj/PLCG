/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185370
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, ((-(min(1510990482190590375, -1510990482190590376))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_2] [i_3] = (-3635499044790361745 < 1);
                            arr_12 [i_0] &= (((((((min((arr_2 [i_2]), (arr_0 [i_2])))) ? ((var_13 ? -1510990482190590379 : (arr_7 [i_0] [i_0] [i_0] [i_0]))) : ((max(74, -1693796538)))))) ? ((-(((arr_10 [i_0]) ? (arr_4 [i_0] [i_1] [i_2] [i_3]) : 15633363178230598353)))) : (min(((12723956419698746200 ? (arr_0 [i_1]) : (arr_8 [i_0]))), ((min((arr_8 [i_2]), var_0)))))));
                            var_16 *= max(((((-4958092693574049727 <= (arr_6 [i_0] [i_1] [i_3]))) ? (min(var_3, 65246)) : (min(var_0, (arr_0 [i_0]))))), 65535);
                        }
                    }
                }
                var_17 = (max(var_17, (min(-1693796538, ((((arr_3 [i_0]) != (arr_3 [i_0]))))))));

                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    var_18 ^= ((min((max(var_6, (arr_5 [6] [i_1]))), (arr_7 [i_0] [i_0] [i_0] [i_0]))) / 68169720922112);
                    arr_15 [i_4] [i_1] [i_1] [i_1] = (((~18446675903988629476) ? (max((arr_0 [i_1]), (arr_6 [i_0] [i_1] [7]))) : ((~(arr_5 [i_0] [i_4])))));
                    var_19 -= min(((max((arr_7 [i_4] [i_1] [i_0] [i_0]), (min((arr_6 [i_4] [8] [i_0]), (arr_1 [i_0])))))), (min(((min(-5504729139739433909, (arr_2 [i_0])))), (min((arr_2 [i_0]), (arr_0 [i_0]))))));
                    var_20 = (max(var_20, ((min(9924757892868081600, 65246)))));
                }
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    var_21 -= (((arr_0 [i_5]) ? (((((586309346956589663 ? 18407 : 489859911004371488))) ? 1510990482190590371 : 2)) : -86));
                    var_22 = var_13;
                }
                arr_19 [i_0] [i_0] [i_0] = (3259035066859562107 + 1);
            }
        }
    }
    var_23 = var_5;
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        for (int i_7 = 3; i_7 < 17;i_7 += 1)
        {
            {
                var_24 = (max(var_24, ((((!(arr_22 [i_6] [i_6] [i_7 + 2])))))));
                arr_24 [i_6] [i_6] = (min((arr_21 [i_6] [i_7 + 1]), (arr_22 [i_7 + 2] [i_7 - 3] [i_7])));
                var_25 = (((((16248102194368283988 <= 6401558060139668511) ? 1 : ((11018 ? var_7 : 1)))) <= 9184));
            }
        }
    }
    #pragma endscop
}

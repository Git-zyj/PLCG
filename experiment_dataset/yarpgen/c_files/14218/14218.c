/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14218
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_16 = (min(var_16, (((((-1690053500175066440 - (arr_4 [i_0 + 1] [i_0 + 3] [i_0 - 1]))) - 0)))));

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    arr_7 [16] [8] [i_2] = ((-(11903 == -10)));
                    arr_8 [i_1 - 1] [i_0] = (~((((max(1004841187, 8360076646472218321))) ? (min((arr_2 [i_0]), 1004841204)) : (arr_3 [i_0] [i_0]))));
                    arr_9 [i_1 + 1] = ((((-((-(arr_0 [i_0 + 1] [i_1]))))) < (((((min(3114828963, -10))) ? (!516798849) : 4294967294)))));
                }
                for (int i_3 = 1; i_3 < 18;i_3 += 1) /* same iter space */
                {
                    var_17 += (max(((16039 / ((57 ? -8716730733862008229 : 1004841168)))), (min((((arr_2 [i_3]) ? (arr_6 [9] [i_1] [i_0 + 4]) : var_6)), (((3290126095 ? -10 : 1836158675)))))));
                    var_18 ^= arr_11 [i_0] [i_0] [i_3];
                }
                for (int i_4 = 1; i_4 < 18;i_4 += 1) /* same iter space */
                {
                    arr_15 [i_4] [i_1] [12] [12] = max((min(((((arr_13 [7] [i_0]) ? -108 : var_15))), (arr_10 [i_1] [i_4] [i_1]))), ((min((arr_1 [i_4 + 3] [i_4]), (arr_1 [i_4 + 3] [i_4])))));
                    var_19 = (min(var_19, ((min(((((arr_5 [i_0 - 1] [i_0 - 1] [13]) && ((min(-7057490492387715577, (arr_11 [i_0] [i_4 - 1] [i_0]))))))), (((arr_10 [i_4 + 2] [i_4 + 3] [i_4 - 1]) ^ (arr_10 [i_4 + 1] [i_4 + 3] [i_4 + 2]))))))));
                    arr_16 [i_0] [i_0] |= (((min((arr_11 [i_0 + 1] [i_1 + 1] [i_1 - 1]), (~3290126109))) * (((-(arr_2 [i_0]))))));
                    var_20 = (min(var_20, ((((min((((arr_13 [i_0 + 1] [i_1]) ? 1 : 2101751014)), (arr_5 [i_0] [i_1] [i_4])))) ? (max((((130944 ? 1 : -264253448))), ((~(arr_10 [i_4] [i_1] [i_0]))))) : ((((((arr_6 [i_4] [i_1 - 2] [i_0]) ? var_6 : (arr_14 [i_4 + 3] [i_1] [i_0])))) ? (min(-8860860496821800748, 0)) : (arr_11 [i_1 + 1] [i_1 + 1] [i_4])))))));
                    var_21 *= ((9094177938040928923 ? (((arr_1 [i_1 + 1] [i_0 + 1]) - (arr_1 [i_4 - 1] [i_0 + 4]))) : 1));
                }
            }
        }
    }
    var_22 = (var_15 < (min((!1), ((0 ? 1 : 924400206)))));
    var_23 = (min(var_23, -73));
    #pragma endscop
}

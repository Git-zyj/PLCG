/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161646
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_15 = (((arr_1 [i_0]) ? (((-(((arr_3 [i_0] [i_1] [i_1]) ^ 65518))))) : (((~-10618) ? (min((arr_2 [i_0]), var_13)) : (-3872762811600817056 > var_2)))));
                var_16 = (((((((-15 ? (arr_3 [i_0] [i_0] [i_1]) : 145))) && (((15 ? (arr_3 [i_0] [13] [i_1]) : (arr_3 [i_0] [i_0] [i_0])))))) ? ((-(arr_3 [i_0] [i_0] [i_0]))) : (((arr_3 [i_0] [i_0] [i_0]) ? (arr_3 [i_0] [i_1] [i_1]) : (arr_1 [i_0])))));

                for (int i_2 = 3; i_2 < 22;i_2 += 1)
                {
                    arr_8 [i_0] [13] [i_0] = 110;
                    var_17 = ((((min(var_7, ((13331490931881434292 ? var_8 : 340956547))))) && (((255 ? 26306 : -19)))));
                }
                for (int i_3 = 3; i_3 < 22;i_3 += 1)
                {
                    var_18 = (133 * 28632);
                    var_19 = (((max((((arr_10 [i_0] [i_0]) % -28651)), 3176681193089987274)) | ((max(((1149376560 + (arr_11 [2] [i_0] [i_3]))), (((arr_0 [i_0] [i_0]) ^ 65535)))))));
                    var_20 = (((((((77 % (arr_0 [i_0] [i_0])))) % 22)) <= (min(((3872762811600817064 << (50794 - 50793))), (((149 ? -31120 : var_14)))))));
                }
            }
        }
    }
    var_21 = 1889794311;
    /* LoopNest 3 */
    for (int i_4 = 2; i_4 < 22;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                {
                    var_22 = ((((((max(3872762811600817055, 89))) ? (((var_7 ? -41 : (arr_3 [9] [i_5 - 1] [9])))) : ((9223372036854775807 ^ (arr_15 [i_4]))))) - var_8));
                    arr_18 [i_4] [i_5 - 2] [i_6] = (min(-15, ((((max(2040701019254800589, (arr_6 [i_4] [i_5 - 2] [i_6]))) >= ((((arr_13 [i_4]) ? (arr_1 [i_4]) : -236101048843448222))))))));
                }
            }
        }
    }
    var_23 = (max(var_10, (max((var_6 && var_14), var_9))));
    #pragma endscop
}

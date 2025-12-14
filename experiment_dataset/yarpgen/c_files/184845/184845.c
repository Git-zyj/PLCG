/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, 64));
    var_17 = (((~((1 << (var_13 - 57498))))));
    var_18 = ((((max(((var_8 | (-2147483647 - 1))), var_10))) | (max(1, ((5477602071693021947 ? -3571194292892212572 : 42488))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 = (((((~(arr_3 [i_1] [i_1] [i_1])))) ? (max(((var_5 ? -841799013 : 9007199254740992)), (((23068 ? -21607 : (arr_1 [i_0])))))) : (((((min(var_9, (arr_5 [i_0] [i_1] [i_0])))) ? (var_8 <= 64471) : var_14)))));
                var_20 = 127;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_21 *= var_1;
                            var_22 = (min(var_22, (65535 / 30803)));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        {
                            var_23 = (min(var_23, ((103079215104 ? (max((((var_7 ? (arr_10 [i_0] [i_1] [6] [i_5]) : (arr_11 [i_1] [i_1])))), (max(var_7, (arr_15 [i_0] [i_1] [i_0] [1] [i_4 + 4]))))) : 42491))));
                            var_24 = (min(var_24, ((!((((-397978384 ? 29182 : 1088185556))))))));
                            var_25 = (min(var_25, (((((((((-(arr_6 [5])))) ? (((~(arr_4 [0] [0])))) : (arr_14 [i_4 - 1] [i_4 + 3] [i_4 - 1] [i_4 + 2] [i_4 + 2] [i_4 - 1])))) ? (((120 ? (arr_11 [i_4 + 1] [i_4 + 1]) : 34732))) : ((((min((arr_2 [i_0] [0]), var_8))) ? ((1068 ? (arr_13 [i_4 + 1] [i_4 + 1] [i_5] [i_4 + 1]) : var_6)) : (((21530 ? (arr_0 [14]) : var_5))))))))));
                            arr_17 [i_0] = 2147483647;
                        }
                    }
                }
            }
        }
    }
    var_26 |= var_12;
    #pragma endscop
}

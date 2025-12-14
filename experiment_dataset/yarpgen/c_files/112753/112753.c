/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112753
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {
                    var_18 = (max(var_18, (((-((~(var_7 * var_7))))))));
                    var_19 = ((((((((var_15 ? (arr_8 [i_0] [i_0]) : var_5))) ? ((var_7 ? (arr_8 [i_0] [i_0]) : 28)) : (arr_0 [i_0] [i_0])))) ? (((-4294967295 ? (((6608972219141657872 ? 0 : 125))) : ((1457619216 / (arr_7 [i_0] [i_0] [i_1])))))) : (((((arr_1 [i_0] [i_0]) ? 1 : 8861655258712270976)) / (~-8567150616501320761)))));
                    arr_9 [i_0] = (((((~(((arr_4 [i_0] [i_1] [7]) ? (arr_1 [i_0] [i_0]) : 1432439173))))) ? ((((((var_8 ? var_8 : 7008))) ? (-11933 <= 4294967295) : (var_2 / var_2)))) : ((0 ? (-2147483647 - 1) : -7713180806116045955))));
                }
            }
        }
    }
    var_20 ^= ((((((~var_10) ? (((7008 ? 1 : 0))) : ((var_8 ? var_16 : 140737488355327))))) ? (((((var_16 ? var_10 : var_3))) ? ((var_4 ? var_15 : 13)) : ((32640 ? var_15 : var_7)))) : (((var_4 ? 12 : var_9)))));
    var_21 = ((!(((((((-2147483647 - 1) ? -2382686034881190227 : 65535))) ? (~125) : var_11)))));
    var_22 = ((18374686479671623680 ? -6945470086544274291 : 7008));
    #pragma endscop
}

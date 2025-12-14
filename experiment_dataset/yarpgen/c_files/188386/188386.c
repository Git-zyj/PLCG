/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188386
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_10 = (max(((((var_6 ? (arr_5 [i_0] [i_0] [i_2] [i_0]) : (arr_0 [i_1]))) | (12599 ^ var_2))), ((((((12573 ? var_5 : 10))) + (min((-9223372036854775807 - 1), var_2)))))));
                            var_11 = ((((((min(1, (arr_1 [i_3])))) || (arr_3 [i_2 - 1]))) ? 12610 : (((!(arr_6 [i_2]))))));
                            var_12 = (((((29404 ? (((arr_6 [i_2]) ? (arr_0 [i_0]) : var_8)) : (!52953)))) ? (((max((!52936), 17779)))) : ((-1 % (max(1774779337, -17))))));
                        }
                    }
                }
                var_13 = (max(-3461103469496964492, 3924449494));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 2; i_4 < 19;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 0;i_6 += 1)
            {
                {
                    arr_15 [i_4 - 1] [i_4 - 1] [i_5] [i_6 + 1] = (((!-1774779338) >= (((var_4 > -8485006895151542146) ? (((8485006895151542144 ? (arr_10 [i_4]) : -184662922))) : -8485006895151542130))));
                    var_14 = (((((((arr_12 [i_4 - 1] [i_5 - 2] [i_5]) ? -8485006895151542162 : 8485006895151542129)) % (max(101348937, -4738689359745715913)))) > 47368));
                }
            }
        }
    }
    #pragma endscop
}

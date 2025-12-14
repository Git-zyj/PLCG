/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186903
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_16 ^= 0;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_17 ^= ((((((((18446744073709551615 ? 0 : 6))) ? (((var_5 - (arr_4 [i_0] [i_1])))) : ((61 ? var_10 : 18446744073709551615))))) ? var_5 : (--6)));
                            var_18 ^= ((arr_4 [12] [i_1]) ? 14035410116259400857 : (arr_4 [i_0 - 1] [i_1]));
                            var_19 ^= 0;
                            var_20 ^= ((max((min(-841720382, -14167)), 0)));
                            var_21 = (max(var_21, (arr_5 [i_0] [i_1] [11] [i_2])));
                        }
                    }
                }
                var_22 ^= (((max(-18446744073709551615, (((56 + (arr_1 [i_0] [0]))))))) ? ((((arr_5 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 + 1]) ? (arr_5 [i_0 + 2] [i_0 - 1] [i_0 + 2] [i_0 + 2]) : 243))) : 11716736400004834506);
                var_23 ^= (((min((arr_5 [i_0 + 1] [14] [i_1] [i_1]), 0)) ? (!-7249733817852089933) : ((((8246313691999204552 ? var_13 : 214)) + 31))));
            }
        }
    }
    var_24 ^= ((((((!18446744073709551615) ? (1 && 4411333957450150774) : (11716736400004834538 && var_15)))) && ((min((!var_13), (min(4356860135047366616, 4294967295)))))));
    var_25 ^= var_4;
    #pragma endscop
}

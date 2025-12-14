/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = ((((4294967295 ? (~1) : (31189 == -104)))) >= (((~0) ? (~119) : ((54217 ? 2127611743 : 11219)))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_17 = -715133606;
                            var_18 = (((~(!5))));

                            for (int i_4 = 1; i_4 < 21;i_4 += 1)
                            {
                                var_19 = (max(var_19, (((46680 ? ((((255 > (!0))))) : ((((1 ? 18309144251877288386 : 30751)) >> ((25395 >> (2555910219 - 2555910193))))))))));
                                var_20 = ((((~2147483647) ? ((1 >> (64869 - 64847))) : ((79 ? 96 : -629142288)))) <= (~2376));
                            }
                            var_21 ^= (((((86 ? (!187) : (~3412914412)))) ? (0 >= 433227059446206473) : (+-2046)));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 22;i_7 += 1)
                        {
                            {
                                var_22 = ((-((9223372036854775807 ^ (!3087919347)))));
                                var_23 = 117;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_8 = 1; i_8 < 1;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 8;i_10 += 1)
            {
                {
                    var_24 ^= ((((10416 ? 4 : 28824))));
                    var_25 = 944650838;
                }
            }
        }
    }
    #pragma endscop
}

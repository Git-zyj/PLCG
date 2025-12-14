/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129975
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 3; i_2 < 8;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_10 [i_1] [i_2] [i_1] = -29239;
                        arr_11 [i_3] [i_2 + 1] [i_1] [i_1] [i_1] [i_0] = ((!(32763 == 22043)));
                    }
                    var_19 = ((!(!-1875021081)));
                    var_20 -= ((-3156825993414351464 ? 1 : 1875021081));
                }
                arr_12 [i_1] = (max(-1, ((~(min(18144, 10190607443190089717))))));
                var_21 = (min(var_21, 18446744073709551615));
                var_22 = -1875021081;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 20;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            {
                arr_19 [i_4] [i_5] = ((!((max(132, 2826697754041099296)))));
                var_23 = (((16802154539832574920 + 2147483647) << (115 - 115)));
                var_24 -= (((~14958) ? (~0) : 1));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 21;i_7 += 1)
                    {
                        {
                            var_25 = (1 + 1);
                            var_26 += (((1015093183 ? 21853 : ((1 ? 0 : -1313384354965753397)))));
                            arr_24 [i_4] = (~(((45810 != (1 * 1)))));
                            var_27 = 123;
                            var_28 = ((((130 ? (7341155347926938547 << 0) : (244 ^ 197)))) || ((((3547809634139536498 != 1) ? ((225 ? 0 : 35611)) : -123))));
                        }
                    }
                }
            }
        }
    }
    var_29 += (min(((~(((-32760 + 2147483647) >> (93 - 74))))), (~128)));
    #pragma endscop
}

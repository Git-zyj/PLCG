/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_16 = (min(var_16, ((min(((var_0 ^ (min(0, var_2)))), ((min(((max(56, var_6))), (171 ^ var_3)))))))));
                            var_17 = ((7294257898040734548 != (((((var_15 < (arr_1 [i_3]))) ? var_11 : ((var_9 << (32618 - 32618))))))));
                            var_18 += (max((~2698461824), 1));
                            var_19 = ((~((((min(var_6, 1303121181))) ? (((arr_2 [i_0]) ? 1083970729332137405 : 11)) : 62667))));
                        }
                    }
                }
                var_20 ^= (15963888687335161705 ^ 1048064);
                var_21 -= ((((((~1) ? 13305447169513596115 : (arr_5 [i_0] [i_1] [i_1 - 2])))) ? (((3 ^ 182) + (!var_3))) : ((((arr_0 [i_1 - 2] [i_1 - 2]) ^ var_3)))));
                var_22 += ((-(arr_3 [i_0] [i_0] [i_0])));
            }
        }
    }
    var_23 = (((+-279275953455104) * (((var_2 ? -521 : (max(var_3, 1596505473)))))));
    var_24 ^= var_7;
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            {
                var_25 ^= 1023;
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            var_26 -= var_11;
                            var_27 = var_11;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152172
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_8 [i_2] = (min((min(16646144, 127)), (((((var_0 ? 2199006478336 : 1517130593))) ? (arr_4 [i_0] [i_1] [i_2] [i_3]) : var_9))));
                            var_13 = (min((arr_0 [i_0] [i_1]), (max(-2199006478349, (arr_1 [i_3 - 1] [i_1 + 3])))));
                            arr_9 [i_0] [i_1] [i_2] [i_3] = 2199006478324;
                            var_14 |= ((((max((arr_2 [i_1]), (arr_5 [i_0]))))) ? ((-1115123521 ? -636473262 : 235)) : (arr_7 [i_1] [i_1] [i_1 - 1] [i_3] [i_3]));
                            var_15 = (max(var_15, (((((((((-8 ? (arr_5 [i_0]) : 1115123509))) ? var_4 : (((!(arr_3 [i_3] [i_2] [i_1]))))))) ? (max(2199006478343, 103)) : ((((!((((arr_7 [i_3] [i_2] [i_1] [i_0] [i_0]) ? var_1 : 21))))))))))));
                        }
                    }
                }
                var_16 = (max(var_16, (arr_7 [i_1] [i_1] [i_1] [i_0] [i_0])));
            }
        }
    }
    var_17 = (min((min(((var_2 ? 4294967295 : 2199006478349)), (max(var_5, -2199006478319)))), (~var_4)));
    var_18 = ((-(max(((max(190, -15))), ((var_6 ? 17593568211813183296 : 1))))));
    var_19 = (max(var_19, (((((((((var_11 ? var_4 : 65535))) ? var_1 : ((var_7 ? 2870452194 : var_12))))) || ((min(((var_7 ? var_9 : var_9)), ((var_4 ? var_12 : var_10))))))))));
    #pragma endscop
}

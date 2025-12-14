/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165411
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((!((!(8 && 0)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_17 = ((0 ? ((min((65525 && 5624144250931670951), ((var_1 << (((arr_6 [i_0] [i_1] [11] [i_3]) - 57))))))) : ((~(max(var_2, (arr_4 [i_0])))))));
                            var_18 = (min(1, 10953756188867058694));
                            var_19 ^= ((((-4210859960210166981 ? (arr_0 [i_2]) : var_8))) ? (((!(((var_9 ? var_9 : var_12)))))) : ((-(!-21))));
                            arr_12 [i_0] [i_0] [i_0] [i_0] = (((!var_9) % ((9223372036854775789 | (arr_8 [i_2] [i_0])))));
                        }
                    }
                }
                var_20 = ((139 >> (-1584729254 + 1584729277)));
            }
        }
    }
    #pragma endscop
}

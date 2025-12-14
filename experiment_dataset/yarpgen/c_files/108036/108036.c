/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108036
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 165;
    var_15 = 1;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_16 ^= ((((max(69, 69))) ? ((max(4294967292, 2988423586))) : 15269928617489295495));
                            var_17 += 1547650531063540526;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 4; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 19;i_5 += 1)
                    {
                        {
                            var_18 = min((((3697925175 ? 192 : (arr_8 [i_5 + 3] [i_4 - 1] [i_0 - 1] [i_5])))), ((-346185203 ? 9019378680167930551 : (186 & 4294967292))));
                            arr_15 [i_5] [i_5] = (arr_10 [i_0 - 2] [i_1] [i_4]);
                        }
                    }
                }
                var_19 = 74;
            }
        }
    }
    var_20 = (((~-16715) | var_7));
    #pragma endscop
}

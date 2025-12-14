/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113362
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_17 [i_1] [i_3] [i_2] [i_1] = min(4003183253, 570302949);
                                var_19 = ((((470098179 > ((137430564864 ? (arr_3 [i_1] [i_1] [i_1]) : 11912928765275947230)))) ? (((((arr_5 [i_0] [i_1] [i_1]) ? (arr_14 [i_0] [i_3] [i_4]) : 6882731869502651719)) * (arr_7 [i_0 + 1] [i_0 - 2] [i_0 + 1]))) : (arr_0 [i_0])));
                            }
                        }
                    }
                    var_20 = (min((((arr_13 [i_0] [i_0]) ? 184 : ((83 ? 65535 : -1796972011)))), (min(-1506496751, 1))));
                }
            }
        }
    }
    var_21 = (min(var_8, 6326574752249910641));
    #pragma endscop
}

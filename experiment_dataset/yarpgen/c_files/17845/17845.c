/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, (((min(13614346101475092046, 1122742988844571351)) >= (((~(!var_7))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_13 [i_2] [i_3] [i_2] [16] [i_2] = (arr_0 [i_0]);
                                var_19 = ((((min(4832397972234459552, 31))) ? (arr_5 [i_4] [i_3 + 1] [i_1]) : (((arr_5 [i_0] [i_0] [i_0]) ? (arr_11 [i_4] [i_4] [i_3] [i_2] [i_2] [i_1] [i_0]) : (arr_5 [i_0] [i_0] [18])))));
                                var_20 -= ((arr_7 [10] [i_2] [i_1] [i_0]) >> (-10 / 13051273813527976838));
                                var_21 = arr_9 [2] [i_1] [i_1] [1] [i_1];
                                var_22 = (arr_4 [i_1]);
                            }
                        }
                    }
                    var_23 = (((((((13614346101475092046 ? 13614346101475092057 : 0))) ? 4762140500338503858 : 1)) % (17113948772000799527 / 1)));
                }
                var_24 = (~((+((min((arr_4 [17]), (arr_3 [7])))))));
            }
        }
    }
    var_25 = ((~(712905132 + var_7)));
    #pragma endscop
}

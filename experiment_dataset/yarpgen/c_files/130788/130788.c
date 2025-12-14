/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_10, var_9));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_12 = ((15566627748465757045 ? (max(15720055429505965035, (((!(arr_2 [i_1])))))) : ((((((arr_0 [i_0]) || (arr_4 [i_0]))) ? (arr_7 [i_2] [i_1] [i_0] [i_0]) : (arr_6 [i_1 - 2] [i_1 - 2] [i_1 - 3]))))));
                    var_13 &= (!15720055429505965026);

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        arr_12 [i_2] = 15720055429505965035;
                        var_14 = (15720055429505965035 << (2726688644203586562 - 2726688644203586502));
                        var_15 = 8;

                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            var_16 *= (arr_9 [i_2]);
                            arr_16 [i_0] = ((2726688644203586580 ? 15720055429505965037 : 179));
                        }
                    }
                    arr_17 [i_2] [17] = (((((arr_3 [i_1 + 2]) ? 7 : (arr_9 [i_0]))) << (15720055429505965035 - 15720055429505965030)));
                    arr_18 [i_1] = (((min(((((-91 + 2147483647) << (((arr_10 [i_0] [6] [12] [i_2]) - 17808685900912421715))))), (arr_4 [i_1 + 2]))) - (min((arr_15 [i_1 + 1] [i_1 - 2] [i_1 - 2] [1] [i_1 + 2] [i_1] [i_1 - 1]), (arr_13 [i_1 + 2] [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 + 2] [i_1] [i_2])))));
                }
            }
        }
    }
    var_17 += (2726688644203586584 - 4);
    #pragma endscop
}

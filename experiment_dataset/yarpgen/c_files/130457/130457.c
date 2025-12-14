/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_1] [1] = ((1 < (((min(var_0, var_1))))));
                arr_7 [i_0] = (min((((1521835986 && (arr_5 [i_0] [1] [i_0])))), (min(13037, 2016164912))));
                var_11 = (--8387584);
                arr_8 [i_0] [2] = (min((min((var_4 > 28312), ((!(arr_2 [3]))))), (4286579698 < 102)));
                arr_9 [i_1] = (((((arr_1 [i_0] [i_1]) % (arr_1 [i_1] [i_0])))) ? (arr_2 [17]) : (1 << 1));
            }
        }
    }
    var_12 = (min((((((min(var_9, var_3)))) * ((153 ? 15677722939211224013 : var_8)))), (((183 * var_7) - (((2229258647 >> (4286579687 - 4286579683))))))));
    #pragma endscop
}

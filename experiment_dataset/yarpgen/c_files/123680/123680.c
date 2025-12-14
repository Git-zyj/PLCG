/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123680
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_13 = (((((-2735 ? ((96 ? var_0 : (arr_1 [i_2]))) : 69))) || (((28436 ? (max(17, 7936)) : (((((arr_3 [i_1] [i_0]) == 4294959360)))))))));
                    var_14 = (min(var_14, (((arr_3 [8] [i_1]) || (var_9 | -46)))));
                    var_15 = ((((((max(var_1, (arr_6 [1] [1] [i_2] [i_1])))) % ((1 ? var_9 : (arr_2 [i_0] [i_1] [i_2]))))) == ((((max(255, 239)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_13 [i_3] [i_2] [i_2] [i_0] [i_4] [i_3] [i_1] = (0 % -5977007959060629553);
                                var_16 = (max((((((8388607 ? (arr_11 [4] [i_2] [4] [i_0]) : 8108151465113083045))) ? ((239 ? var_12 : (arr_5 [i_1] [i_1] [i_0]))) : (max(7299621318494158566, (arr_0 [i_3]))))), (17 % var_10)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = 4294959360;
    #pragma endscop
}

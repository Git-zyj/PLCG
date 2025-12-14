/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= var_8;

    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        arr_4 [i_0] = var_1;
        var_16 = ((var_0 ? (((arr_3 [i_0 + 1]) ? ((~(arr_0 [i_0]))) : ((min(242, -1))))) : (--51170)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    arr_11 [i_0] [1] [i_0] = (((arr_0 [i_2 - 1]) >> ((((-((2771106194 ? 13 : 3)))) + 38))));

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            arr_18 [i_0 - 2] [i_1] [i_2] [i_3] [i_4] = ((((max(((min(181, var_3))), (((arr_1 [i_0]) ? (arr_12 [i_0] [i_4] [i_2] [i_3] [i_2 + 1] [i_3]) : (arr_14 [i_0] [i_1] [i_1])))))) ? 0 : (((!((28676 || (arr_1 [i_2]))))))));
                            var_17 = (max(var_17, -7611855928369517378));
                            var_18 -= ((((((arr_3 [i_0]) >= (arr_12 [i_4] [i_3] [i_2 - 1] [20] [i_1] [i_0]))) ? (~0) : (arr_15 [i_0] [i_0 - 2] [i_1] [i_1] [i_0] [i_3] [i_3]))));
                        }
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            var_19 = (min(var_19, 8868555917251972019));
                            var_20 = (2017275445 != 27258);
                        }
                        arr_22 [i_3] [i_0] [i_2 - 2] [i_1] [i_0] [i_0] = (max((~var_12), (min((min((arr_17 [i_0] [i_0] [i_2 - 1] [i_2] [i_3] [i_3]), var_7)), ((min(65525, 14374)))))));
                    }
                    var_21 = ((10 > (max(var_2, (arr_10 [i_0 - 1] [i_0 - 1] [i_0 - 4] [i_2 - 2])))));
                    arr_23 [i_0] [i_2] [i_2 - 2] = (max((52 || 65535), (~-5738382731133991531)));
                    var_22 = ((-(max(((2274843112062382503 / (arr_9 [i_2] [i_2] [i_2]))), -2017275468))));
                }
            }
        }
    }
    var_23 = ((max(((10 ? 1782196443 : 14374)), var_1)));

    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        var_24 = ((((~(arr_17 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]))) / (((28804 << (((max((arr_21 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]), (arr_21 [i_6] [6] [i_6] [i_6] [6] [i_6] [i_6]))) - 3100458120913319711)))))));
        var_25 = 4294967280;
    }
    #pragma endscop
}

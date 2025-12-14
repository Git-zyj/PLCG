/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111664
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((~(~var_1)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_11 = (max(((1 ? 51209 : var_8)), ((((29560 && 14326) ? (253 || var_3) : (!17971824203128073721))))));
                    arr_6 [i_0] [i_0] [i_0] [i_2] = (((--14338) ^ (arr_0 [i_0])));
                    arr_7 [i_0] [i_1] [i_0] [i_2] = min((min((arr_5 [i_0] [i_1] [i_2]), 65535)), (((!(!51209)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_12 += ((+(((((-32767 - 1) ? (arr_2 [i_0] [i_2] [i_4 - 3]) : (arr_8 [i_0] [i_2] [i_3] [i_3])))))));
                                var_13 = (min(var_13, var_4));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_14 += (((~16383) && (!1167035116202997448)));
                                var_15 = (33837 ^ var_6);
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] = (min(-12469, (arr_4 [i_6 - 2] [i_6 - 1])));
                                var_16 ^= (max((arr_1 [i_6 - 1] [i_6 + 1]), (((!(arr_11 [i_6] [i_6] [i_6] [i_6 + 2] [i_6 + 1] [i_6] [i_6 - 2]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 25;i_9 += 1)
            {
                {
                    arr_26 [i_8] = (min((~65535), (!-2743164660390639263)));
                    var_17 = (max(var_17, 29560));
                    arr_27 [i_9] [i_8] [i_7] = (253 ^ -47);
                }
            }
        }
    }
    #pragma endscop
}

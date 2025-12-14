/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166323
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_12 = ((((((arr_12 [i_4] [i_3] [i_2] [i_1] [i_0]) | ((1 >> (var_4 + 2063607313458867534)))))) ? ((var_10 ? 1235357488 : -509173383)) : (21099 ^ var_7)));
                                var_13 = ((var_11 ? (~var_1) : (arr_8 [i_1] [i_3])));
                            }
                        }
                    }
                    var_14 = (min(var_14, (((-417807420 * ((var_6 / (7269761975788086031 / 509173383))))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 17;i_8 += 1)
                    {
                        {
                            arr_27 [i_5] [i_6] [i_5] [i_5] [10] = (var_5 & 254);
                            arr_28 [i_5] [i_6] [i_7] [i_6] [i_8] = ((~(13752 == 14587502512265837242)));
                        }
                    }
                }
                var_15 = (((-2147483647 - 1) || (((1912589520 ? -44437 : (arr_22 [i_5] [i_5] [7] [i_5]))))));
                arr_29 [11] [i_6] [i_6] = var_7;
                arr_30 [i_5] [i_5] [i_6] = ((((((((arr_23 [i_5] [i_5]) ? 21098 : var_4)) << ((((min(var_7, 21099))) - 192))))) ? 2454816060 : ((-(arr_23 [i_6] [i_5])))));
            }
        }
    }
    var_16 = min(((((max(-1048015462, 8439196138353858646)) == ((var_10 >> (var_10 - 8164376628275535540)))))), ((((194 << (21098 - 21082))) & (var_8 || 1))));
    #pragma endscop
}

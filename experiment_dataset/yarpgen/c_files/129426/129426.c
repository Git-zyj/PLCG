/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129426
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += var_5;
    var_11 = ((((((!var_9) <= 1))) << ((((((var_7 ? 1 : 15707558956802796824)) << (((~var_6) + 56484)))) - 72057594037927912))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_10 [i_1] [i_0] [i_3] [i_0] [i_0] [i_3] &= 1538721127793177209;
                            var_12 += (((12823374868440930000 ? -1885338152 : 0)) | (arr_9 [i_0] [i_0] [i_0] [i_2] [i_3]));
                        }
                    }
                }
                arr_11 [i_1] [i_1] [i_1] = ((((max(1885338148, 1885338157))) ? 1538721127793177223 : (max((arr_8 [i_1]), (~var_4)))));
            }
        }
    }
    #pragma endscop
}

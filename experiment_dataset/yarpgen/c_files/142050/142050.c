/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142050
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((!var_9) == -5721364362385244134));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_17 = (-((((((arr_2 [i_1] [i_0 + 2]) ? var_6 : 5721364362385244131))) ? (~1738) : (!5325101222513506216))));
                arr_4 [i_0 + 1] [i_0] [i_0] = (((5721364362385244133 ? 1 : 2317774294)));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 10;i_4 += 1)
            {
                {
                    arr_13 [i_2] [i_2] [i_2] [i_2] = ((((((max(var_6, (arr_6 [1] [i_3])))) ? (((34831 >> (7497160707224523836 - 7497160707224523805)))) : 1977193009)) == var_2));
                    arr_14 [i_4] [i_3] = ((2969168687551331987 >> (min((((arr_9 [i_2] [8] [0]) ? var_8 : var_7)), var_1))));
                }
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_10 = 31;
                var_11 = ((var_0 - (((arr_4 [i_1]) + 15447408743807836606))));
                var_12 = (min((var_9 < var_4), 2999335329901715030));
            }
        }
    }
    var_13 = (2999335329901715030 != ((((!(((1 ? 15447408743807836586 : 1))))))));
    var_14 += (((8225849945108206262 + (18 - 200))));
    #pragma endscop
}

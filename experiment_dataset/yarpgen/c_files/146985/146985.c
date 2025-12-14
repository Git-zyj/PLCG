/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146985
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, (((!((((!6501647318242697585) ? (!0) : 9518574034025532120))))))));
    var_18 ^= (!var_1);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_19 = (max(var_19, ((((!37169) ? (!16497284252908308409) : (!8928170039684019498))))));
                    arr_6 [i_2] [i_0] [i_0] = ((1 ? 17654020250213964829 : (~8928170039684019495)));
                }
            }
        }
    }
    var_20 = 9518574034025532120;
    #pragma endscop
}

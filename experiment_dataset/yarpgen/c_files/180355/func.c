/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180355
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_18 = ((/* implicit */long long int) ((((/* implicit */long long int) max(((+(((/* implicit */int) (signed char)53)))), (((/* implicit */int) ((signed char) var_11)))))) != (var_0)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((((/* implicit */_Bool) (+(arr_3 [(unsigned short)9] [i_1 - 2])))) || (((/* implicit */_Bool) (+(var_4)))));
                    arr_6 [i_0] [i_1] [(signed char)12] [i_1] = ((/* implicit */_Bool) ((long long int) -2947558348464961351LL));
                    arr_7 [i_0] [i_1] [i_2] [i_1] |= ((/* implicit */unsigned short) (~(((long long int) 3634113274U))));
                    arr_8 [i_2] [i_1] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_3 [i_0] [i_1]))))));
                }
            } 
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142922
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_7 [i_1] [i_1] = ((/* implicit */signed char) ((((((/* implicit */int) ((((/* implicit */unsigned long long int) arr_2 [i_0] [i_2])) < (13519454019304037871ULL)))) / (arr_2 [i_1 + 1] [i_1]))) % (((/* implicit */int) ((min((var_10), (((/* implicit */unsigned long long int) (_Bool)0)))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2])) && (((/* implicit */_Bool) 3708376927U)))))))))));
                    arr_8 [i_1] [i_1 + 1] [i_1] = ((/* implicit */_Bool) (-(((min((((/* implicit */unsigned long long int) 720572710)), (12766631360244359628ULL))) & (((/* implicit */unsigned long long int) arr_2 [i_0] [i_2 - 1]))))));
                    arr_9 [i_1] [i_1] [i_2 - 1] = ((/* implicit */signed char) var_4);
                    var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((arr_1 [i_1]) << (((3708376927U) - (3708376909U))))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */int) var_9);
}

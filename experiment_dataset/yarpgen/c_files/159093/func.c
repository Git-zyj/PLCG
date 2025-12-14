/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159093
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
    var_20 = ((/* implicit */_Bool) min((var_20), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13520))) != (var_13)))));
    var_21 = ((/* implicit */unsigned long long int) var_2);
    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_19)) * (((/* implicit */int) ((((unsigned long long int) var_1)) <= (max((((/* implicit */unsigned long long int) var_2)), (var_3))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 16; i_2 += 2) 
            {
                {
                    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) 11632396090408049382ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1))) : (min((arr_5 [i_2 + 1] [i_2 - 1]), (17263174578699330455ULL)))));
                    arr_9 [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_15)) - (var_2)))))) | (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (arr_0 [i_0] [i_0])))) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_3 = 2; i_3 < 22; i_3 += 3) 
    {
        for (short i_4 = 0; i_4 < 23; i_4 += 3) 
        {
            {
                var_24 = ((/* implicit */unsigned long long int) (_Bool)1);
                var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_10 [i_3])))) ? (arr_16 [i_3 + 1] [i_3 - 1]) : ((-(arr_16 [i_3] [i_3 - 2])))));
                var_26 += ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) != (18433866786825678974ULL))))));
            }
        } 
    } 
}

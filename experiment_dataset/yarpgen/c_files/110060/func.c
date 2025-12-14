/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110060
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
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_6) < (max((var_9), (((/* implicit */unsigned long long int) -1598364094))))))) <= ((-(((var_14) / (var_4)))))));
    var_17 -= ((/* implicit */unsigned long long int) max(((~(var_10))), (((int) ((((/* implicit */_Bool) 231146726)) ? (231146736) : (var_11))))));
    var_18 = ((/* implicit */int) min((var_18), (var_12)));
    var_19 = ((int) -231146737);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_7 [i_1] = ((/* implicit */unsigned long long int) (~(((int) arr_2 [i_2 - 2] [i_2 + 2] [i_2 - 2]))));
                    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((var_0) / (var_0)))) > (((unsigned long long int) arr_5 [i_0] [i_0 - 2] [i_2 - 2])))))));
                    var_21 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(arr_4 [i_0 + 1] [i_0] [i_2 + 2])))) / (((unsigned long long int) ((-1171156303) / (arr_3 [i_0] [i_1]))))));
                    arr_8 [i_0] [i_0 + 1] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((((int) var_7)) + (2147483647))) << (((max((((/* implicit */unsigned long long int) var_1)), (15ULL))) - (18446744072216834700ULL)))))) > (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 562949953421311ULL)) ? (arr_5 [i_0] [i_0 - 1] [i_0 - 3]) : (var_14)))) * (((((/* implicit */unsigned long long int) var_0)) - (var_9)))))));
                }
            } 
        } 
    } 
}

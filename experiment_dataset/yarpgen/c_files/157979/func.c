/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157979
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) arr_4 [i_0] [i_1 + 4] [i_0]))));
                    arr_8 [i_2 - 1] [i_1] [i_0] [i_0] = (~(((/* implicit */int) ((short) arr_5 [i_2 + 4] [i_2 + 4] [i_2] [i_1 + 2]))));
                    arr_9 [i_0] = ((/* implicit */int) ((((unsigned long long int) (unsigned char)132)) == (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)22212), (((/* implicit */unsigned short) arr_5 [i_2 + 4] [5] [(unsigned short)9] [i_1 + 4]))))))));
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_1 [i_0]);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) (+(var_2)));
    var_19 = ((/* implicit */unsigned int) 2147483647);
    var_20 = ((/* implicit */unsigned int) min((((/* implicit */int) (((!(((/* implicit */_Bool) -1LL)))) && (((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_4))))))), (min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)83)) : (((/* implicit */int) var_1)))), (((/* implicit */int) var_10))))));
}

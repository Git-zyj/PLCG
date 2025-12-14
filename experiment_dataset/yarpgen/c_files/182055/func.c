/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182055
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
    for (long long int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned char i_2 = 3; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) arr_5 [i_0] [i_0] [i_2 + 2]);
                    var_18 ^= max(((!(((/* implicit */_Bool) arr_0 [i_1])))), (((((((/* implicit */long long int) var_0)) / (arr_0 [i_1]))) == (((/* implicit */long long int) (((_Bool)1) ? (arr_2 [i_0 + 3] [i_1] [i_1]) : (((/* implicit */int) (unsigned char)251))))))));
                    arr_7 [i_2] [i_0] [i_0] [i_0] = ((unsigned short) ((long long int) min((((/* implicit */unsigned short) (short)2036)), ((unsigned short)65533))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */signed char) (!(((_Bool) max((var_3), (((/* implicit */unsigned int) var_5)))))));
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) -5326876595338267320LL))))) * (((/* implicit */int) (short)-24))));
}

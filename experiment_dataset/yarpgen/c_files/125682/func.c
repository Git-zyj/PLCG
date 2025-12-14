/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125682
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */short) max((((/* implicit */int) (signed char)1)), ((-(((((/* implicit */_Bool) (unsigned char)81)) ? (arr_3 [i_1]) : (((/* implicit */int) var_0))))))));
                arr_6 [i_0] = ((/* implicit */int) min((((((/* implicit */_Bool) ((signed char) arr_1 [i_0]))) ? (-737522218350101690LL) : (((/* implicit */long long int) arr_2 [i_0])))), (((/* implicit */long long int) ((arr_0 [i_1 - 1]) ? (arr_2 [7ULL]) : (max((arr_3 [i_0]), (((/* implicit */int) var_8)))))))));
                var_11 -= (!(((/* implicit */_Bool) (short)8363)));
            }
        } 
    } 
    var_12 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */_Bool) 0U)) || (((/* implicit */_Bool) 3U))))), (((((/* implicit */int) var_9)) * (((/* implicit */int) var_8))))))) == (max((((((/* implicit */_Bool) var_2)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)81)), (16U))))))));
    var_13 = ((/* implicit */unsigned short) min(((!(((/* implicit */_Bool) min((((/* implicit */unsigned short) var_0)), (var_6)))))), ((_Bool)0)));
    var_14 = ((/* implicit */unsigned int) var_4);
    var_15 = ((/* implicit */signed char) var_4);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141443
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
    var_11 = max(((+(var_10))), (((/* implicit */long long int) var_8)));
    var_12 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_0))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            {
                var_13 = ((signed char) min((((/* implicit */long long int) (-(((/* implicit */int) arr_3 [18U]))))), (var_10)));
                arr_6 [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_0]))))), (max((((/* implicit */long long int) (~(((/* implicit */int) var_8))))), (var_0)))));
                var_14 = arr_5 [i_0] [i_1 + 2];
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
    {
        arr_11 [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)-46))));
        arr_12 [i_2] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) var_1))))));
        var_15 = ((_Bool) (signed char)-46);
    }
    for (signed char i_3 = 0; i_3 < 12; i_3 += 4) 
    {
        arr_16 [i_3] = ((/* implicit */_Bool) var_4);
        var_16 += ((/* implicit */long long int) min((min((arr_9 [i_3]), (((/* implicit */int) var_7)))), (arr_9 [(_Bool)1])));
        var_17 += ((/* implicit */long long int) var_2);
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_20 [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_2 [i_4] [i_4])))) / (max((((/* implicit */long long int) (signed char)-46)), (var_10)))));
        arr_21 [i_4] [i_4] = ((/* implicit */signed char) var_10);
        arr_22 [(signed char)5] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((arr_9 [i_4]) / (arr_9 [i_4])))), (min((((/* implicit */long long int) arr_9 [i_4])), (var_0)))));
        arr_23 [i_4] = ((/* implicit */unsigned char) arr_8 [i_4]);
        var_18 += ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-38))));
    }
    var_19 = (!(((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)38)), ((unsigned char)41))))) != (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-38))) : (var_0))))));
}

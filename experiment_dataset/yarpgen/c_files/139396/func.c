/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139396
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
    var_10 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)50132))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((((/* implicit */int) (signed char)-127)) != (((/* implicit */int) var_9)))))))));
    var_11 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))));
    var_12 = ((/* implicit */signed char) var_4);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            {
                arr_6 [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) (((!(((/* implicit */_Bool) arr_1 [i_0] [1LL])))) && (((((/* implicit */_Bool) arr_1 [i_1 + 2] [i_1 + 2])) && (((/* implicit */_Bool) arr_4 [(unsigned short)8])))))))));
                arr_7 [i_1 + 2] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_1])) == (((/* implicit */int) arr_4 [i_0])))))) < ((~(arr_1 [i_1] [i_0]))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) var_7))));
}

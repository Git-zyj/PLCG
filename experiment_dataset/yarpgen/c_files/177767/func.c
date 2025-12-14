/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177767
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
    var_11 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((unsigned short) var_7))))) && (((/* implicit */_Bool) (unsigned short)45547))));
    var_12 = ((((/* implicit */_Bool) ((signed char) (!(((/* implicit */_Bool) 2519452309U)))))) ? ((((-(var_3))) << (((var_1) + (6007889374498551003LL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) var_8))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -7192522955370302940LL)))))) : (var_5)))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        var_13 = ((/* implicit */_Bool) max((((/* implicit */long long int) arr_2 [i_0])), (((long long int) ((unsigned char) (_Bool)0)))));
        var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) -5003170730602137962LL))));
    }
    /* LoopNest 2 */
    for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        for (signed char i_2 = 2; i_2 < 20; i_2 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_2 - 2])) ? (((/* implicit */int) arr_4 [i_2] [i_2 + 1])) : (((/* implicit */int) arr_6 [i_1] [i_2 - 1] [i_2]))))), (((((((/* implicit */unsigned long long int) 5003170730602137962LL)) - (var_3))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_4 [i_2] [i_2 - 1])))))))))));
                arr_9 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? (((/* implicit */long long int) (-(max((((/* implicit */unsigned int) arr_4 [i_2] [i_1])), (arr_3 [i_1])))))) : (max((((/* implicit */long long int) ((((/* implicit */int) var_10)) & (((/* implicit */int) (unsigned char)22))))), (((((/* implicit */_Bool) arr_3 [i_1])) ? (6999103011659924974LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)13)))))))));
                var_16 = ((/* implicit */unsigned int) var_0);
            }
        } 
    } 
}

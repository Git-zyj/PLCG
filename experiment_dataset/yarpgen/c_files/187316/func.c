/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187316
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
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */signed char) ((((/* implicit */int) (unsigned short)65535)) == (((/* implicit */int) (unsigned short)62197))))), (var_11)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)127))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)36640), (((/* implicit */unsigned short) (signed char)-16)))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_17))))) : (min((((unsigned long long int) 14020369729035966601ULL)), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_16)) / (((/* implicit */int) var_15)))))))));
    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_16)))))));
    var_20 = ((unsigned long long int) max((max((9319566128865427379ULL), (((/* implicit */unsigned long long int) (signed char)116)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 15; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) var_9);
                var_22 = ((/* implicit */unsigned short) ((max((min((arr_3 [(signed char)3] [(signed char)3]), (arr_5 [i_0]))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_1]))))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)63744), (((/* implicit */unsigned short) arr_0 [i_0 - 2]))))))));
                var_23 = ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)15831)) * (((/* implicit */int) var_9))))), (((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1 - 3])) ? (4731058010717331490ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9))))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) (signed char)-6)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */int) (signed char)-119)) : (((/* implicit */int) arr_1 [i_0])))))))))));
            }
        } 
    } 
}

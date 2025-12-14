/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102776
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
    var_12 = ((/* implicit */long long int) ((((/* implicit */int) var_6)) | (((/* implicit */int) (!((_Bool)1))))));
    var_13 = ((/* implicit */unsigned short) var_2);
    var_14 = max((((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)255)), (var_2)))) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_8))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)49))) + (14684126732714122915ULL))))), (((/* implicit */unsigned long long int) (_Bool)1)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 7; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 9; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (-(((/* implicit */int) (signed char)42))))), (max((((/* implicit */long long int) arr_3 [i_1] [i_2 - 2])), (var_7)))));
                    var_16 = ((/* implicit */unsigned long long int) min((((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-38)))), (((((/* implicit */_Bool) max((11707507086643197707ULL), (((/* implicit */unsigned long long int) (unsigned char)69))))) ? (((((/* implicit */_Bool) (unsigned short)52448)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (signed char)-25)))) : (((/* implicit */int) (signed char)-48))))));
                    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((unsigned short) ((((((/* implicit */_Bool) 1106494438)) ? (arr_5 [(_Bool)1]) : (-737125112))) ^ (((((/* implicit */int) (unsigned short)44456)) ^ (((/* implicit */int) (unsigned short)10144))))))))));
                }
            } 
        } 
    } 
}

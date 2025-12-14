/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142649
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
    var_10 = ((/* implicit */int) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((var_2), (var_2)))), (((((/* implicit */_Bool) (signed char)127)) ? (9223372036854775807LL) : (var_3)))))), (((((/* implicit */_Bool) ((signed char) var_7))) ? (min((((/* implicit */unsigned long long int) (signed char)127)), (var_8))) : (((/* implicit */unsigned long long int) ((long long int) (signed char)127)))))));
    var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_5)) ? (var_8) : (var_8))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)-127)) : (var_5))))))) ? (((((_Bool) 3095227711031385190LL)) ? (((((/* implicit */_Bool) var_6)) ? (var_3) : (((/* implicit */long long int) var_5)))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)86)), ((unsigned char)141))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */int) (signed char)-73))))) ? (((long long int) var_2)) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_0)))))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (signed char i_2 = 3; i_2 < 23; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        arr_10 [i_0] [2LL] = min((max((((((/* implicit */_Bool) -1199159679)) ? (var_8) : (((/* implicit */unsigned long long int) var_3)))), (((((/* implicit */_Bool) -3095227711031385190LL)) ? (((/* implicit */unsigned long long int) arr_0 [i_3])) : (var_6))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_3])) ? (arr_2 [i_0] [i_1]) : (((/* implicit */unsigned int) var_2))))) ? (((/* implicit */int) ((unsigned char) 6648628898441090802LL))) : (((/* implicit */int) ((signed char) -3095227711031385179LL)))))));
                        var_12 -= ((/* implicit */unsigned char) min((((/* implicit */long long int) ((short) ((_Bool) var_8)))), (((long long int) (short)32759))));
                        arr_11 [i_0] [i_1] [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((signed char) min((((/* implicit */int) ((signed char) var_8))), (((int) var_2)))));
                        arr_12 [23LL] [i_1] [i_2] [i_3] [i_0] = min((min((((/* implicit */long long int) (signed char)48)), (3095227711031385210LL))), (((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) (signed char)-43)) ? (var_4) : (((/* implicit */unsigned long long int) var_1)))))));
                    }
                    var_13 = ((/* implicit */unsigned short) ((unsigned int) ((long long int) ((((/* implicit */_Bool) arr_2 [i_0] [(unsigned short)4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))) : (arr_2 [i_0] [i_0])))));
                }
            } 
        } 
    } 
}

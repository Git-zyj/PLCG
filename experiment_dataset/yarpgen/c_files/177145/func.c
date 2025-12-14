/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177145
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
    for (unsigned short i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */long long int) min((min((((/* implicit */int) (signed char)-123)), (((((/* implicit */_Bool) (unsigned char)177)) ? (((/* implicit */int) (signed char)118)) : (((/* implicit */int) arr_2 [i_0] [i_0])))))), ((((!(((/* implicit */_Bool) (unsigned char)255)))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)49152)) > (((/* implicit */int) (unsigned short)49123))))) : (((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)56524))))))));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) min((((((/* implicit */int) (signed char)113)) - (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) (unsigned char)250)) : (((/* implicit */int) (unsigned char)254)))))), (((/* implicit */int) arr_3 [i_0] [i_1]))));
                var_14 = ((/* implicit */int) (short)-11850);
                var_15 = ((/* implicit */unsigned short) (signed char)-126);
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)56649)) ? (((((/* implicit */int) (short)3194)) << (((((/* implicit */int) (signed char)111)) - (105))))) : ((+(((/* implicit */int) (unsigned char)172))))));
    var_17 = ((/* implicit */unsigned short) max((min((min((2370256206510815835ULL), (((/* implicit */unsigned long long int) (unsigned char)255)))), (min((var_3), (((/* implicit */unsigned long long int) var_9)))))), (((/* implicit */unsigned long long int) (unsigned short)35446))));
    var_18 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) ((unsigned short) var_12))) ? (((((/* implicit */int) (unsigned short)16)) - (((/* implicit */int) (unsigned short)30084)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)233)) : (((/* implicit */int) var_7)))))) + (2147483647))) << (((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)45606)) : (((((/* implicit */int) (unsigned char)165)) | (((/* implicit */int) (unsigned char)204)))))) - (45606)))));
}

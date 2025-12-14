/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121137
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
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)17077))))) || (((/* implicit */_Bool) (~(((((/* implicit */int) (signed char)109)) | (((/* implicit */int) (unsigned char)244)))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        var_13 += ((/* implicit */short) (~(min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)33)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_2))))));
        var_14 += ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_2 [(unsigned short)6])) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned long long int) var_5))))) || (((/* implicit */_Bool) var_3))));
        arr_3 [6ULL] [6ULL] = arr_1 [i_0] [i_0];
        arr_4 [0] = ((/* implicit */unsigned int) min((var_6), (min((((/* implicit */unsigned long long int) var_2)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)28))) / (7783276128410778991ULL)))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 3; i_1 < 11; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_15 += ((/* implicit */signed char) 1825826399);
                    arr_10 [i_2] [(unsigned char)4] [i_2 - 1] = ((/* implicit */unsigned int) var_11);
                    var_16 = ((/* implicit */long long int) ((17397404007831803300ULL) | (12915840802566496964ULL)));
                }
            } 
        } 
    }
    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 1) 
    {
        arr_13 [i_3] = ((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) (signed char)-25)))));
        var_17 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)37435))));
    }
}

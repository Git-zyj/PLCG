/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100544
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
    var_20 ^= ((/* implicit */_Bool) 7913406919629865996ULL);
    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_4)) ? (4386868814553021280ULL) : (((/* implicit */unsigned long long int) var_13))))))) ? (((((/* implicit */int) ((var_4) >= (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))) - (-1343034137))) : ((-(var_0))))))));
    var_22 = ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) min((var_6), (((/* implicit */int) var_5))))) : ((-(var_1))))) + (((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_19)), (var_12)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)15)) | (((/* implicit */int) (unsigned short)24126))))) : (min((3707801830U), (((/* implicit */unsigned int) (unsigned char)246)))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        var_23 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [13])) ? (4003847030892603214ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))));
        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) min((((/* implicit */int) (_Bool)1)), ((((!(((/* implicit */_Bool) var_17)))) ? (((/* implicit */int) (signed char)114)) : ((+(((/* implicit */int) (_Bool)1)))))))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 4; i_1 < 11; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_25 = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) (unsigned short)54035)) == (((/* implicit */int) var_12)))))));
                    var_26 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((var_11) | (var_11)))))))) < ((-((-(3751158556U)))))));
                }
            } 
        } 
    }
}

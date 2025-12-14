/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165296
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
    var_18 = ((/* implicit */unsigned char) var_6);
    var_19 = ((/* implicit */signed char) max((((/* implicit */unsigned int) max((((var_10) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)120)))), (var_2)))), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (max((var_3), (((/* implicit */unsigned int) (short)30671))))))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned char) (signed char)-125);
        var_21 = ((/* implicit */_Bool) var_3);
        var_22 = ((/* implicit */_Bool) min(((-(((/* implicit */int) ((((/* implicit */int) (signed char)125)) >= (((/* implicit */int) (unsigned char)255))))))), (((/* implicit */int) ((signed char) arr_0 [i_0 + 1])))));
    }
    for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned char) (~((~(max((var_5), (((/* implicit */long long int) (unsigned char)13))))))));
        var_23 = ((max((var_4), (((/* implicit */unsigned long long int) (+(-2036019889)))))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)243))))) ? ((-(arr_5 [i_1]))) : (((((/* implicit */int) arr_4 [i_1])) / (((/* implicit */int) (unsigned char)248))))))));
        var_24 = ((/* implicit */_Bool) ((signed char) var_14));
    }
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 12; i_2 += 2) 
    {
        arr_9 [i_2] = ((/* implicit */short) (unsigned char)34);
        var_25 = (unsigned char)230;
    }
    for (int i_3 = 0; i_3 < 24; i_3 += 2) 
    {
        arr_12 [i_3] = ((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)7)), ((-((+(var_6)))))));
        var_26 = ((((/* implicit */_Bool) (~(((/* implicit */int) min((((/* implicit */unsigned char) (signed char)(-127 - 1))), ((unsigned char)254))))))) ? (((unsigned int) arr_0 [i_3])) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)222))));
        /* LoopSeq 1 */
        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 2) 
        {
            var_27 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)1)), (var_17)))))))));
            arr_15 [i_3] [i_4] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_3]))));
            var_28 = ((/* implicit */unsigned long long int) (-(var_5)));
        }
    }
    var_29 = ((/* implicit */signed char) (-(((/* implicit */int) var_13))));
}

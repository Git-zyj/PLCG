/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105289
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
    var_18 = ((/* implicit */signed char) var_4);
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 23; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) (((+(var_13))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) (signed char)-127)))))));
                    var_20 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)(-127 - 1))) || (((/* implicit */_Bool) max((((((/* implicit */_Bool) var_1)) ? (arr_3 [i_0 + 1]) : (((/* implicit */int) arr_5 [(unsigned short)14] [(signed char)13])))), (((/* implicit */int) ((short) (signed char)127))))))));
                    arr_7 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)(-127 - 1))) || (((/* implicit */_Bool) (short)-657))));
                    arr_8 [i_0] [i_0] [i_1] [(unsigned short)14] |= ((/* implicit */unsigned char) (~(((arr_6 [i_0 - 1] [i_0 - 1] [i_1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7959)))))));
                    arr_9 [i_0] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_3 [i_2 - 1]) / (((/* implicit */int) (signed char)(-127 - 1)))))) ? ((+(arr_3 [i_0 + 1]))) : ((+(arr_3 [i_0 - 1])))));
                }
            } 
        } 
    } 
    var_21 = ((min((((var_1) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)65))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_17))))))) / (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (short)-3805))))), (var_7)))));
    var_22 = ((/* implicit */signed char) (~(((1824378940) & (((/* implicit */int) ((unsigned short) 11615204264305175862ULL)))))));
}

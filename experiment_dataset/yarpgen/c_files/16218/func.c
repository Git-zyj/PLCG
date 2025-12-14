/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16218
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
    var_10 = ((/* implicit */short) ((signed char) max((((/* implicit */unsigned int) ((unsigned short) var_1))), (((((/* implicit */_Bool) (unsigned char)241)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))));
    var_11 *= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) var_4))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) (~(((/* implicit */int) var_2))))) : (((((/* implicit */long long int) ((/* implicit */int) var_4))) % (var_0)))))) : (min((max((var_7), (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) ((short) var_9)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_0] [i_2] [i_2] = arr_4 [i_0];
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)4))));
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_2] [i_3] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) ((short) (+(((/* implicit */int) var_1)))))) >> (((/* implicit */int) arr_0 [i_0] [i_3]))));
                                var_13 = ((/* implicit */short) ((signed char) arr_10 [i_0] [i_1] [i_0] [i_2] [(unsigned short)3] [i_4]));
                                arr_14 [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [(unsigned short)8] [i_0] [i_4])) : (((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */int) var_4)) : ((-(((/* implicit */int) arr_9 [i_4] [i_2] [i_1] [i_0]))))))));
                                var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)105)) ? (((/* implicit */int) (unsigned char)1)) : (((((/* implicit */_Bool) -1)) ? (((/* implicit */int) arr_11 [i_1] [i_0] [i_1] [i_0])) : (((/* implicit */int) (signed char)106))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}

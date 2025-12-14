/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114731
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
    var_17 = ((/* implicit */short) (+(((/* implicit */int) (signed char)7))));
    var_18 = ((((/* implicit */_Bool) var_14)) ? (var_0) : ((-(((var_16) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_14)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_19 += ((/* implicit */unsigned char) (!(((((/* implicit */int) arr_2 [i_0])) != (((/* implicit */int) arr_2 [i_0]))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (unsigned short i_3 = 3; i_3 < 13; i_3 += 4) 
                    {
                        {
                            var_20 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_1] [i_3 + 1] [i_3 + 1] [i_3])) + (((/* implicit */int) arr_8 [i_3 + 1] [i_3 + 1] [i_3 + 1] [9U]))))) && (arr_11 [i_0] [i_3 - 3] [i_3 - 1] [i_3 - 2])));
                            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [(_Bool)1])) ? (((/* implicit */int) (unsigned short)55756)) : (((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_1]))))) << (((((/* implicit */int) min((arr_3 [i_3]), (((/* implicit */unsigned short) var_10))))) - (42597))))))))));
                            arr_12 [i_3] [i_0] [i_0] [i_3] = ((/* implicit */int) ((signed char) arr_7 [i_0] [i_1] [i_3 + 1]));
                            arr_13 [i_0] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_3 - 3] [i_3] [i_3 + 1] [i_3])) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : ((~(((/* implicit */int) ((unsigned char) var_1)))))));
                            arr_14 [i_3] [i_2] [i_3] [i_0] [i_0] = ((/* implicit */int) ((short) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_13)), (arr_6 [i_2])))) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))) : (((unsigned int) var_7)))));
                        }
                    } 
                } 
                var_22 = arr_11 [i_1] [i_0] [i_0] [10U];
                arr_15 [i_0] [i_0] = ((/* implicit */int) ((unsigned char) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-2))));
                arr_16 [12] = ((/* implicit */unsigned int) (+((+(((/* implicit */int) arr_1 [i_0] [i_0]))))));
            }
        } 
    } 
}

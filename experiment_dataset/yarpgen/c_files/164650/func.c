/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164650
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (signed char i_1 = 4; i_1 < 20; i_1 += 3) 
        {
            for (signed char i_2 = 2; i_2 < 23; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 2; i_3 < 21; i_3 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (int i_4 = 2; i_4 < 22; i_4 += 4) 
                        {
                            var_20 = ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) ((unsigned int) var_9))) : (min((((/* implicit */long long int) var_2)), (((((/* implicit */_Bool) var_3)) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65524))))))));
                            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((int) var_6))) > (max((((var_0) + (((/* implicit */long long int) var_16)))), (((/* implicit */long long int) (+(((/* implicit */int) var_2))))))))))));
                            arr_12 [i_2] [i_1] [i_2] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_6 [i_4 + 2] [i_4 + 2])) ? (var_19) : (((/* implicit */long long int) arr_11 [i_4 + 2] [i_1] [i_3 - 2] [i_1] [i_4 - 2] [i_1 - 3]))))));
                        }
                        var_22 = ((/* implicit */_Bool) ((var_8) - (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) var_10)) : (15U))))))));
                        var_23 = ((/* implicit */signed char) var_7);
                    }
                    var_24 -= min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967278U)) ? (((/* implicit */int) (unsigned short)11)) : (((/* implicit */int) (unsigned short)20))))) ? (((long long int) (unsigned short)25)) : (((/* implicit */long long int) arr_11 [i_0] [i_1 + 3] [i_2] [i_2 + 1] [i_1 + 3] [i_0])))), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-108)) ? (((/* implicit */int) (signed char)-121)) : (((/* implicit */int) (unsigned short)23))))));
                    arr_13 [i_0] [i_1 - 2] [i_2] = ((/* implicit */int) min((((/* implicit */unsigned char) ((signed char) var_6))), (((unsigned char) var_11))));
                }
            } 
        } 
    } 
    var_25 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) min(((-(((/* implicit */int) (signed char)125)))), ((-(((/* implicit */int) (unsigned short)65529)))))))));
}

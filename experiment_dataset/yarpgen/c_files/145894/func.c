/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145894
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
    var_14 = ((int) ((((/* implicit */int) (unsigned short)14876)) != (((/* implicit */int) (signed char)-40))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            {
                var_15 &= ((/* implicit */signed char) ((short) ((((((((/* implicit */_Bool) var_8)) ? (-179305064) : (((/* implicit */int) (signed char)25)))) + (2147483647))) >> (((((/* implicit */int) min(((signed char)42), ((signed char)39)))) - (17))))));
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    arr_8 [i_0 - 1] [i_1] [(unsigned short)1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_7 [i_1] [i_1])) : (((/* implicit */int) (signed char)-25))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) min((((/* implicit */short) arr_4 [i_1] [i_1])), (arr_7 [i_1] [11]))))))) || (((/* implicit */_Bool) (-(((/* implicit */int) (!(var_7)))))))));
                    arr_9 [(short)3] [i_1] = ((/* implicit */signed char) arr_5 [(signed char)13]);
                }
                /* LoopNest 2 */
                for (signed char i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    for (unsigned char i_4 = 4; i_4 < 14; i_4 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */signed char) max((var_16), ((signed char)15)));
                            var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-8360))) / (33554431U)))) ? (((/* implicit */int) (_Bool)1)) : ((~((~(((/* implicit */int) (_Bool)1)))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}

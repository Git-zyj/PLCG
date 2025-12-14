/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140781
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
    var_17 = ((/* implicit */int) min((var_15), (((/* implicit */long long int) max((var_5), (((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) 0ULL)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */short) ((((var_2) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))) < ((-(arr_1 [i_0])))));
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 9; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (unsigned short)65535))));
                            var_20 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned char)96))))) ? (((/* implicit */int) ((unsigned char) arr_10 [i_0] [i_0]))) : (((/* implicit */int) arr_2 [i_0])))), (((/* implicit */int) arr_3 [i_3]))));
                            var_21 = ((/* implicit */unsigned short) min((((/* implicit */unsigned char) arr_10 [i_1] [i_1])), ((unsigned char)96)));
                        }
                    } 
                } 
                var_22 = ((/* implicit */int) min((var_22), (((((/* implicit */_Bool) ((max((arr_10 [i_0 - 1] [i_0 - 1]), (arr_4 [i_1] [9LL]))) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) max(((unsigned short)0), (((/* implicit */unsigned short) arr_7 [(short)6] [(short)6])))))))) ? (((/* implicit */int) arr_2 [(_Bool)1])) : (((/* implicit */int) (unsigned char)255))))));
            }
        } 
    } 
}

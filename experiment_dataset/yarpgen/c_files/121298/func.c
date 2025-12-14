/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121298
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
    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (unsigned char)211)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-3)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_18 = min((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_4 [(short)8] [9] [(short)8])) : (2064384)))))), (max((arr_3 [i_0 - 1] [i_0 - 1]), (arr_3 [i_0] [i_0 + 1]))));
                arr_5 [i_0 - 1] = ((/* implicit */short) ((((/* implicit */int) var_3)) != (((((/* implicit */_Bool) var_3)) ? ((-(((/* implicit */int) var_3)))) : (min((3), (((/* implicit */int) arr_2 [i_0] [i_1]))))))));
                var_19 = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)79))));
            }
        } 
    } 
    var_20 = ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)-6486)) : (((/* implicit */int) (signed char)79)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-88))))))) : (((/* implicit */int) ((signed char) var_7))));
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 11; i_2 += 4) 
    {
        for (unsigned int i_3 = 0; i_3 < 11; i_3 += 2) 
        {
            {
                arr_13 [i_2] [4] = ((/* implicit */signed char) var_15);
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 11; i_4 += 2) 
                {
                    for (unsigned int i_5 = 0; i_5 < 11; i_5 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */_Bool) (~(((-69385839) & (((/* implicit */int) (signed char)2))))));
                            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)254)) ? (-4) : (((/* implicit */int) (signed char)-107))));
                            arr_19 [i_2] [i_3] [(short)5] [i_5] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)241)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (2808851757235788420ULL)))) ? (((((/* implicit */int) arr_17 [i_2] [i_3] [i_4] [i_5])) | (((((/* implicit */_Bool) 8789648024983153428ULL)) ? (((/* implicit */int) (signed char)79)) : (((/* implicit */int) var_11)))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (short)-15993)) | (((/* implicit */int) (signed char)3))))) ? (((((/* implicit */int) var_5)) >> (((((/* implicit */int) var_16)) - (106))))) : (((/* implicit */int) (signed char)2))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_2])) ? (arr_12 [i_3]) : (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) 15637892316473763195ULL)) ? (8789648024983153428ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) (~(arr_12 [i_2])))))))));
            }
        } 
    } 
    var_24 = ((((/* implicit */_Bool) var_7)) ? (((var_14) ^ (min((var_14), (((/* implicit */int) var_8)))))) : ((+(((((/* implicit */_Bool) 374101885)) ? (((/* implicit */int) (signed char)2)) : (((/* implicit */int) var_16)))))));
}

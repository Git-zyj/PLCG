/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136283
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
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                arr_6 [i_0 - 3] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0] [i_0])) + (((/* implicit */int) min((((/* implicit */unsigned char) var_2)), ((unsigned char)74))))));
                arr_7 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0] [i_0 + 3]))))) ? (((((/* implicit */int) arr_3 [(short)13] [i_0 - 3])) / (((/* implicit */int) arr_3 [i_0 - 2] [i_0 + 2])))) : ((-(((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1]))))));
                arr_8 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_0 [(signed char)3]))) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) == (arr_0 [i_1]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) : ((+(((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */unsigned long long int) arr_4 [(short)3]))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 3) 
    {
        for (unsigned int i_3 = 2; i_3 < 17; i_3 += 3) 
        {
            {
                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) arr_10 [i_3 + 1]))));
                arr_14 [i_2] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_2] [14U] [i_3])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((signed char) (unsigned char)81)))));
                var_21 = ((/* implicit */short) arr_9 [i_2]);
                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */_Bool) max((arr_10 [i_3 + 3]), (arr_10 [i_3 - 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_8)))) : (((((/* implicit */_Bool) (unsigned short)64957)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)511))))) : (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)112))) : (arr_9 [i_3]))))))))));
                var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_13 [i_2] [i_2]))))) ? (((((/* implicit */_Bool) (unsigned short)37901)) ? (((/* implicit */int) (unsigned char)35)) : (((/* implicit */int) (unsigned char)221)))) : (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) (unsigned char)74)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32761))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-64))))));
            }
        } 
    } 
    var_24 = var_6;
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17668
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
    var_17 = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65535)) % (((/* implicit */int) var_3))))) ? (var_5) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_6)))))))), ((-(((((/* implicit */_Bool) (signed char)77)) ? (((/* implicit */long long int) ((/* implicit */int) (short)0))) : (var_1)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)14785)))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)26)) && (((/* implicit */_Bool) var_14)))))))) ? ((-(((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_2 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-12901)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)-27)))))));
                arr_4 [(unsigned short)17] [i_1] = ((/* implicit */long long int) ((((((/* implicit */int) arr_3 [(_Bool)1] [i_1])) + (((((/* implicit */_Bool) (signed char)-27)) ? (((/* implicit */int) (signed char)26)) : (((/* implicit */int) (signed char)-26)))))) ^ (((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (signed char)26))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) var_4);
}

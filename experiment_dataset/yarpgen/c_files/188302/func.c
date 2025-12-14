/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188302
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
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_12 [i_0] [i_0] [i_0] [(short)1] = ((/* implicit */unsigned long long int) ((arr_6 [i_2] [9]) ? ((~(566187884U))) : (((((/* implicit */_Bool) 255)) ? (((/* implicit */unsigned int) -1624163901)) : (((((/* implicit */_Bool) (signed char)-117)) ? (1886923244U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))))));
                    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)89)) ? (arr_10 [i_0] [i_1]) : (arr_10 [i_1] [i_2])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)3250)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_11 [i_0] [i_0])) : ((+(((/* implicit */int) (unsigned char)225)))))) : (((/* implicit */int) (unsigned short)65535))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */long long int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)50)));
    var_21 = ((/* implicit */signed char) ((var_11) ? ((+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)149))) > (134217727U)))))) : (var_2)));
    var_22 = ((/* implicit */unsigned char) min((566187884U), (((/* implicit */unsigned int) (unsigned char)225))));
}

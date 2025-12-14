/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123130
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
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned int) ((short) var_6));
                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_9)))) ? (1335826253008108072ULL) : (((/* implicit */unsigned long long int) min((var_9), (var_5))))))) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_4 [i_1]))));
                var_18 = ((/* implicit */signed char) var_0);
                var_19 &= ((/* implicit */int) var_1);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_9 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((((~(((/* implicit */int) (_Bool)1)))) + (2147483647))) >> ((+(((/* implicit */int) (_Bool)1))))))) ? (((((((/* implicit */int) var_13)) % (((/* implicit */int) (_Bool)1)))) >> (((((((/* implicit */_Bool) arr_0 [i_2])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) - (6988146494659296599LL))))) : (((((/* implicit */_Bool) 2170107138671680068LL)) ? (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_2 [i_2] [i_2])))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_1 [i_2] [i_2]))))))));
        var_20 = arr_7 [i_2];
        arr_10 [i_2] = ((/* implicit */short) max(((+(((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) var_15)) << (((((/* implicit */int) arr_0 [i_2])) + (18447)))))) <= (((var_5) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
    }
    var_21 -= ((/* implicit */signed char) ((2296835809958952960ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
    var_22 = ((/* implicit */unsigned int) ((long long int) ((unsigned char) max((((/* implicit */unsigned long long int) (short)-29975)), (31ULL)))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104151
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) arr_0 [i_0]))) ? (((unsigned long long int) ((((/* implicit */int) var_7)) < (((/* implicit */int) (signed char)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)1)))));
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-8267))))) ? (((/* implicit */int) ((unsigned char) var_9))) : (((((/* implicit */_Bool) (unsigned char)27)) ? (((/* implicit */int) (unsigned short)42213)) : (((/* implicit */int) (short)32767))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 0U)) && (((/* implicit */_Bool) ((unsigned long long int) (unsigned char)14)))))) : (((/* implicit */int) max((arr_2 [i_0] [i_1] [i_1]), ((signed char)-6))))));
            arr_4 [i_0] = ((/* implicit */unsigned long long int) min((min((((((/* implicit */_Bool) (unsigned char)14)) ? (((/* implicit */int) (signed char)6)) : (((/* implicit */int) (short)-16327)))), (((/* implicit */int) ((unsigned short) arr_1 [6U]))))), (((/* implicit */int) (signed char)-58))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            arr_7 [i_0] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) arr_0 [i_0]))) / ((+(((/* implicit */int) arr_2 [(signed char)23] [i_2] [i_2]))))));
            var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) min((((/* implicit */unsigned int) ((int) arr_1 [i_2]))), (((((/* implicit */_Bool) (unsigned char)60)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7038))))))))));
            var_16 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (unsigned char)37)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)76))) : (var_10)))) : (min((((/* implicit */unsigned long long int) var_1)), (10ULL)))))));
            arr_8 [i_0] [i_2] = ((/* implicit */short) (unsigned char)255);
            arr_9 [i_2] [i_2] [i_0] = ((/* implicit */short) (+(((((/* implicit */_Bool) (short)6550)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)7038))))));
        }
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
        {
            arr_13 [(_Bool)1] [i_0] = ((/* implicit */short) arr_0 [i_0]);
            var_17 = ((/* implicit */unsigned short) (_Bool)1);
            arr_14 [i_0] [i_0] &= 0ULL;
            var_18 += ((/* implicit */short) arr_0 [i_3]);
        }
    }
    var_19 = ((/* implicit */unsigned long long int) var_10);
    var_20 = min(((+(((/* implicit */int) min((var_12), (var_6)))))), ((+(((((/* implicit */int) var_1)) / (((/* implicit */int) (_Bool)1)))))));
    var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((((/* implicit */int) (unsigned short)41057)) - (((/* implicit */int) (unsigned char)128)))))))));
    var_22 = ((/* implicit */short) (unsigned char)227);
}

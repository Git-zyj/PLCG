/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128301
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
    var_13 -= ((/* implicit */short) ((var_1) * (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) << ((((~(((/* implicit */int) var_10)))) + (31))))))));
    var_14 = ((/* implicit */_Bool) ((((/* implicit */int) var_3)) - (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */short) var_12)), (var_11)))) || (((/* implicit */_Bool) var_5)))))));
    var_15 = var_2;
    var_16 += ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)95)) ? (((/* implicit */int) (unsigned short)63488)) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) (unsigned char)101)) : (((/* implicit */int) max((var_5), (((/* implicit */unsigned short) var_9))))))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)89))) != (4294967268U))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */long long int) min((min((((/* implicit */unsigned char) (signed char)-51)), ((unsigned char)95))), (((/* implicit */unsigned char) var_7))));
                var_17 = ((/* implicit */signed char) ((max((((((/* implicit */_Bool) (unsigned char)173)) ? (((/* implicit */int) (unsigned char)166)) : (((/* implicit */int) arr_0 [i_0] [i_0])))), (((((/* implicit */_Bool) (unsigned char)96)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)164)))))) - (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0] [i_1])) >> (((((/* implicit */int) var_11)) + (31368)))))))))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_11 [i_0 - 1] [i_1] [i_2] [i_0 - 1] [i_4])) ? (((/* implicit */int) max((((/* implicit */unsigned char) arr_5 [i_0] [i_0] [i_3] [i_4])), ((unsigned char)209)))) : (((/* implicit */int) arr_11 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1])))) / (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)89)) % (((/* implicit */int) var_12))))) || (((/* implicit */_Bool) (unsigned char)89)))))));
                                var_19 = ((/* implicit */_Bool) max((4294967268U), (((unsigned int) 0ULL))));
                                var_20 = ((/* implicit */_Bool) ((signed char) (-(max((((/* implicit */unsigned long long int) (unsigned char)89)), (14ULL))))));
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) max((max((((unsigned long long int) arr_7 [i_0] [i_1] [(_Bool)1] [i_1])), (var_1))), ((-((-(arr_12 [i_0 - 1] [i_0] [i_1] [i_1]))))))))));
                var_22 = ((/* implicit */signed char) (-(234881024)));
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175074
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) 1125899906842624ULL))));
                                var_21 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-47))))) : (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)73)), (var_1))))))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (((~(((/* implicit */int) arr_0 [i_0])))) ^ (((((/* implicit */int) (short)9725)) | (((/* implicit */int) (unsigned short)6570))))))), (((arr_9 [i_0] [i_1] [i_2] [i_2]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_1]))) : (arr_10 [i_0] [i_0])))));
                    var_22 += ((/* implicit */long long int) (+(((/* implicit */int) arr_9 [i_2] [8U] [i_1] [i_0]))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_19))))) : (((/* implicit */int) var_18)))), (((/* implicit */int) ((((/* implicit */int) ((unsigned char) var_15))) < (((/* implicit */int) (!(((/* implicit */_Bool) var_18))))))))));
}

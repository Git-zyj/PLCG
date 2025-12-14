/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155658
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
    var_16 = ((/* implicit */unsigned char) var_13);
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)91)) ? (9711748788682245142ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-111)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0 + 1])) ? (((((/* implicit */int) arr_13 [i_0 + 1] [i_1 - 1] [i_1 - 1] [i_3])) | (((/* implicit */int) arr_8 [i_0] [i_0] [i_0 + 2])))) : (((/* implicit */int) arr_14 [i_1 + 1] [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1 + 2]))))) & (arr_5 [i_0] [i_0] [i_0] [i_0]))))));
                                var_18 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_0 - 2] [i_1 + 1])) - (((/* implicit */int) arr_12 [i_0 + 2] [i_1 - 1]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)110)) && (((/* implicit */_Bool) (unsigned char)126))))) : (((/* implicit */int) arr_12 [i_0 - 1] [i_1 + 1]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((-7289393433753634226LL) == (((/* implicit */long long int) ((/* implicit */int) (signed char)102))))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186420
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
    var_17 += ((/* implicit */unsigned int) 0ULL);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (((unsigned int) arr_3 [i_1]))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        var_19 = ((/* implicit */short) (signed char)26);
                        /* LoopSeq 1 */
                        for (short i_4 = 4; i_4 < 20; i_4 += 4) 
                        {
                            var_20 -= var_9;
                            arr_11 [i_4] [i_3] [i_2] [i_3] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) 18446744073709551615ULL))));
                            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_10 [i_4] [i_4] [i_3] [i_4 + 1] [i_4 - 2] [i_4 + 2]), (((/* implicit */unsigned int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)118)))))) : (min((((/* implicit */unsigned long long int) arr_5 [i_4 + 1] [i_4 - 3] [i_4 - 1] [i_4 + 3])), (arr_7 [i_4 + 3] [i_4 + 2] [i_4 + 3] [i_4 - 1])))));
                            arr_12 [i_3] [i_3] = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) 1ULL)) ? (((/* implicit */int) (signed char)-114)) : (((/* implicit */int) (signed char)26)))));
                        }
                        var_22 -= (~((((_Bool)1) ? (((/* implicit */int) (signed char)-115)) : (((/* implicit */int) (short)-12936)))));
                    }
                }
            } 
        } 
    } 
    var_23 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (signed char)-118)) ? (5596407328951929797ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-12936)))))))) && (((/* implicit */_Bool) var_7))));
    var_24 -= ((/* implicit */short) ((((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((/* implicit */int) var_6)) : (((var_8) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_8)))))) >= (((/* implicit */int) var_5))));
}

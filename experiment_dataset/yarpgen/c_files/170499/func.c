/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170499
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) min((((/* implicit */int) min((arr_0 [i_1 + 1]), (var_2)))), (((((/* implicit */int) (signed char)-117)) | (arr_3 [22]))))))));
                var_20 = ((/* implicit */unsigned long long int) (~(max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (_Bool)0))))), (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned int) arr_2 [i_1])) : (var_15)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 1) 
    {
        for (long long int i_3 = 2; i_3 < 13; i_3 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned int) var_8);
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 14; i_4 += 3) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_21 [(_Bool)1] [(_Bool)1] [i_4] [i_4] = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_14 [i_2] [(signed char)2] [i_4] [i_4] [i_5] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_2] [(signed char)6] [0LL] [4U]))) : (4294967295U))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_2])))))))) ? (((arr_10 [i_3 - 1]) << (((arr_10 [i_3 - 1]) - (1442951934U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_9 [i_2 + 3])))));
                                arr_22 [i_2] [(_Bool)1] [(_Bool)1] [i_4] [(_Bool)1] [i_6] = ((/* implicit */unsigned short) var_4);
                                var_22 = ((/* implicit */unsigned int) 4979470970207240696ULL);
                            }
                        } 
                    } 
                } 
                arr_23 [i_2] [i_2] [i_2 + 2] &= ((/* implicit */int) max((arr_13 [i_3]), (((/* implicit */long long int) (~((~(((/* implicit */int) var_13)))))))));
                var_23 = ((/* implicit */long long int) (~((~(((/* implicit */int) (signed char)119))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_14)) ? (((long long int) var_17)) : (((/* implicit */long long int) ((/* implicit */int) var_8))))), (((/* implicit */long long int) (~(var_15)))))))));
    var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)117)) ? (((((/* implicit */_Bool) var_2)) ? (min((((/* implicit */unsigned long long int) var_2)), (var_1))) : (max((var_9), (((/* implicit */unsigned long long int) var_2)))))) : (((/* implicit */unsigned long long int) min(((~(((/* implicit */int) var_2)))), (((/* implicit */int) ((((/* implicit */int) var_4)) == (((/* implicit */int) var_0))))))))));
    var_26 = ((/* implicit */unsigned int) (~(var_7)));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146523
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
    var_18 = ((/* implicit */_Bool) var_11);
    var_19 |= ((/* implicit */int) var_6);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (arr_0 [i_0]))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) 63524067U)) ? (arr_2 [i_0]) : (var_15))));
                                arr_16 [(_Bool)0] [i_0] [i_2] [i_0] [5ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_11 [i_0] [i_0] [i_0] [5ULL] [(short)14] [i_0]))) ? (var_9) : (((/* implicit */long long int) (((_Bool)1) ? (arr_6 [(short)17] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)23305))))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0])) ? ((-(arr_8 [(unsigned short)8] [i_1]))) : (((/* implicit */int) (short)3945))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1108130202)) ? (((/* implicit */int) (unsigned char)255)) : (8191)))) ? (max((((/* implicit */unsigned int) arr_0 [6LL])), (0U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_9 [i_0] [(_Bool)1] [(short)15])))))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned long long int) var_12);
                    var_22 |= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned short)63989), (((/* implicit */unsigned short) var_13))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_2])))))));
                    var_23 = ((/* implicit */short) ((unsigned char) ((arr_14 [i_1] [i_0] [i_0] [i_0] [(unsigned char)7] [1LL]) + (((/* implicit */unsigned long long int) 2383264702366640788LL)))));
                }
            } 
        } 
    }
}

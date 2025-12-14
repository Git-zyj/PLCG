/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123070
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
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 1; i_2 < 14; i_2 += 4) 
                {
                    var_17 -= ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((unsigned short)11791), (arr_4 [5ULL] [(_Bool)1] [i_2])))) ? (((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */int) (short)14622)) : (((/* implicit */int) var_16)))) : (((/* implicit */int) ((short) var_5)))))), (((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)14615)), (arr_4 [i_0] [i_0] [i_0]))))) - (arr_5 [i_2] [i_2] [i_2 + 3])))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_18 &= ((/* implicit */short) ((unsigned int) max((arr_5 [i_1] [i_1 + 3] [i_2 + 3]), (((/* implicit */unsigned int) var_0)))));
                                var_19 = (+(((/* implicit */int) ((_Bool) ((((/* implicit */int) (short)-14595)) & (arr_7 [i_2]))))));
                                arr_14 [i_0] [i_2] [i_2] [i_3] = max((var_4), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_1))))));
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 1) 
                {
                    for (short i_6 = 0; i_6 < 18; i_6 += 4) 
                    {
                        {
                            arr_20 [i_0] [(short)0] [i_5] [i_5] = ((/* implicit */long long int) (+(min((((/* implicit */unsigned long long int) var_11)), (((((/* implicit */_Bool) arr_10 [i_0] [i_1 + 1] [i_5] [(signed char)9] [(signed char)9])) ? (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [6U])) : (var_15)))))));
                            var_20 -= ((/* implicit */short) arr_15 [i_6] [(unsigned char)4]);
                            arr_21 [i_5] [i_1] [i_5] [i_6] = ((/* implicit */unsigned short) (-(((unsigned long long int) arr_5 [i_0] [i_0] [i_1 + 4]))));
                            var_21 = ((/* implicit */signed char) (-(((/* implicit */int) ((short) min((((/* implicit */int) arr_0 [i_0] [i_1 + 1])), (var_6)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) var_1);
    /* LoopNest 2 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 2) 
        {
            {
                arr_27 [i_7] [i_8] = ((/* implicit */int) var_4);
                var_23 = ((/* implicit */short) arr_19 [i_8] [i_8] [i_7] [i_7] [i_8] [i_8]);
                var_24 = ((/* implicit */unsigned int) min(((~(((/* implicit */int) max(((short)14609), (((/* implicit */short) var_7))))))), (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (short)14608))))));
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 1; i_9 < 15; i_9 += 2) 
                {
                    for (short i_10 = 0; i_10 < 16; i_10 += 2) 
                    {
                        {
                            arr_32 [4U] [i_8] [i_8] [14U] [i_8] = ((/* implicit */signed char) arr_10 [i_7] [i_8] [i_9] [14] [14]);
                            var_25 = ((/* implicit */int) min((var_25), ((~(((/* implicit */int) max(((short)22155), ((short)32767))))))));
                        }
                    } 
                } 
                var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_7] [i_8] [i_8])) ? (max((9896915692188973150ULL), (((/* implicit */unsigned long long int) arr_4 [i_8] [i_8] [i_8])))) : (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (unsigned short)19308)) ? (((/* implicit */int) arr_28 [(unsigned short)13] [i_7] [i_7] [i_8])) : (((/* implicit */int) (short)14623)))))))));
            }
        } 
    } 
}

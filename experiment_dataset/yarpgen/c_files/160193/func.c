/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160193
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_2 = 2; i_2 < 15; i_2 += 4) /* same iter space */
                {
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 299196529)) ? (((/* implicit */unsigned int) var_14)) : (arr_6 [i_0] [i_0]))))) > (-299196529)));
                    var_20 += ((/* implicit */unsigned char) ((min((min((arr_2 [i_0]), (6987839917355000174LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (short)-7549)) : (((/* implicit */int) (signed char)108))))))) >= (((/* implicit */long long int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_0 [i_0] [i_2])) : (((/* implicit */int) (short)-7540)))) & (((/* implicit */int) arr_4 [i_0])))))));
                }
                for (unsigned int i_3 = 2; i_3 < 15; i_3 += 4) /* same iter space */
                {
                    arr_10 [i_0] [i_0] [i_0] = (i_0 % 2 == zero) ? (((/* implicit */_Bool) ((((((/* implicit */long long int) ((arr_9 [i_0] [i_1] [i_0]) << (((((/* implicit */int) (unsigned char)157)) - (157)))))) != (min((var_0), (((/* implicit */long long int) (unsigned char)71)))))) ? ((((((~(((/* implicit */int) var_7)))) + (2147483647))) << ((((((-(((/* implicit */int) var_11)))) + (87))) - (1))))) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) : (((/* implicit */_Bool) ((((((/* implicit */long long int) ((((arr_9 [i_0] [i_1] [i_0]) + (2147483647))) << (((((/* implicit */int) (unsigned char)157)) - (157)))))) != (min((var_0), (((/* implicit */long long int) (unsigned char)71)))))) ? ((((((~(((/* implicit */int) var_7)))) + (2147483647))) << ((((((-(((/* implicit */int) var_11)))) + (87))) - (1))))) : (((/* implicit */int) arr_0 [i_0] [i_0])))));
                    arr_11 [i_0] [i_0] [i_0] = ((/* implicit */int) min(((-(arr_6 [i_3 - 2] [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)158)) ? (((/* implicit */int) arr_8 [i_3] [i_3 + 2] [i_3])) : (((/* implicit */int) var_13)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 18; i_4 += 2) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) min((arr_8 [i_0] [i_0] [i_3]), (((/* implicit */unsigned short) (!((_Bool)1))))));
                                arr_18 [i_0] [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */int) var_8)) / (((/* implicit */int) (short)-7520))))));
                                var_22 = arr_0 [i_0] [i_0];
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */_Bool) (((-(((var_5) + (((/* implicit */int) (_Bool)1)))))) - (((((/* implicit */_Bool) arr_4 [i_3 + 1])) ? (((((/* implicit */int) var_16)) / (((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_1])))) : (((/* implicit */int) ((unsigned short) var_1)))))));
                    var_24 = (i_0 % 2 == 0) ? (((/* implicit */signed char) ((arr_9 [i_0] [i_0] [i_0]) << ((((-(max((-299196530), (arr_13 [i_0] [i_1] [i_0] [i_3]))))) - (299196530)))))) : (((/* implicit */signed char) ((((arr_9 [i_0] [i_0] [i_0]) + (2147483647))) << ((((-(max((-299196530), (arr_13 [i_0] [i_1] [i_0] [i_3]))))) - (299196530))))));
                }
                /* LoopNest 3 */
                for (unsigned short i_6 = 1; i_6 < 17; i_6 += 3) 
                {
                    for (signed char i_7 = 0; i_7 < 18; i_7 += 4) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 18; i_8 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) (-(arr_9 [i_7] [i_1] [i_7]))))));
                                var_26 = ((/* implicit */_Bool) arr_12 [i_6] [i_6 - 1] [i_6] [i_6 - 1]);
                                var_27 = arr_4 [i_7];
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned short) max((var_5), (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
}

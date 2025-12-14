/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134103
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
    var_16 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 17; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */_Bool) max(((-(((/* implicit */int) arr_5 [i_0] [i_1] [i_2 + 1])))), (arr_7 [i_0] [i_0] [i_0])));
                            var_18 = ((/* implicit */_Bool) ((unsigned char) 2276917313695848927ULL));
                            arr_8 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)11697)) ? ((~(((/* implicit */int) arr_1 [i_1])))) : (((((/* implicit */int) arr_0 [i_0] [i_1])) & (((/* implicit */int) arr_4 [i_0] [i_1] [i_2] [i_3]))))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_3 [i_0] [i_2 + 1] [i_2 + 1])) : (((/* implicit */int) (unsigned short)11697)))) <= (((((/* implicit */_Bool) var_6)) ? (arr_7 [i_1] [i_2] [i_3]) : (((/* implicit */int) (unsigned short)53829))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)31)) ? (arr_7 [i_0] [i_1] [i_2 - 2]) : (((/* implicit */int) (signed char)-40))))) ? (arr_7 [i_0] [i_2] [i_3]) : ((~(((/* implicit */int) var_5))))))));
                            var_19 = arr_5 [i_2 + 2] [i_2 - 1] [i_2 - 1];
                            /* LoopSeq 1 */
                            for (unsigned char i_4 = 1; i_4 < 16; i_4 += 2) 
                            {
                                var_20 = ((/* implicit */unsigned int) ((((((var_7) - (((/* implicit */int) (unsigned char)95)))) + (2147483647))) << (((((((/* implicit */_Bool) (unsigned char)87)) ? (arr_10 [i_4] [i_4 + 3] [i_4] [i_4] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [(_Bool)0] [i_2 - 3] [i_4 + 2] [i_2 - 3]))))) - (4237023565U)))));
                                var_21 |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_4 - 1] [i_1] [i_2 - 1] [i_1] [i_4])) ? (((/* implicit */int) (unsigned char)121)) : (((/* implicit */int) arr_9 [i_4] [10ULL] [i_4 + 2] [i_4 - 1] [i_4 + 3]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)151))) : (((unsigned int) (unsigned char)159))));
                                var_22 = min((((/* implicit */unsigned long long int) (unsigned short)11693)), (var_11));
                            }
                        }
                    } 
                } 
                var_23 |= ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) max(((signed char)-20), (((/* implicit */signed char) var_1))))) > (((/* implicit */int) ((unsigned short) var_9))))));
                var_24 = ((/* implicit */_Bool) ((((/* implicit */int) max((arr_3 [i_0] [i_1] [i_1]), (arr_0 [i_1] [i_0])))) >> (((max(((+(((/* implicit */int) (unsigned short)11707)))), (((/* implicit */int) ((((/* implicit */int) arr_9 [i_0] [16U] [i_1] [16U] [i_1])) >= (var_7)))))) - (11695)))));
            }
        } 
    } 
}

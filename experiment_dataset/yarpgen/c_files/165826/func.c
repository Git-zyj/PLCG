/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165826
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
    var_12 = ((/* implicit */unsigned long long int) (+(((((_Bool) (unsigned short)14841)) ? (((/* implicit */int) (signed char)-48)) : (((/* implicit */int) var_7))))));
    var_13 = ((/* implicit */unsigned int) ((unsigned short) (unsigned short)1894));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_6)), (arr_0 [i_0 + 3])))) || (((((/* implicit */_Bool) arr_0 [i_0 + 3])) || (((/* implicit */_Bool) arr_0 [i_0 + 3]))))));
        arr_5 [i_0 + 3] = ((((/* implicit */_Bool) (unsigned char)255)) ? (max((((/* implicit */unsigned long long int) var_10)), (10196934890527511478ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 + 3])) ? (((/* implicit */int) (unsigned short)63642)) : (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0 + 3])) > (((/* implicit */int) (_Bool)0)))))))));
        arr_6 [i_0 + 3] [i_0 + 3] = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (((/* implicit */int) arr_3 [i_0 - 1])) : (((/* implicit */int) var_6)))));
    }
    for (short i_1 = 2; i_1 < 14; i_1 += 4) 
    {
        arr_11 [i_1] = ((/* implicit */short) (+(((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((short) arr_10 [i_1 - 1]))) : (((/* implicit */int) ((18446744073709551615ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1 + 2]))))))))));
        arr_12 [i_1 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1893)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) arr_9 [i_1 + 1]))))) ? (((/* implicit */int) max((arr_7 [i_1 + 1]), (arr_7 [i_1 + 1])))) : (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (unsigned short)41368)) : ((-2147483647 - 1))))));
        var_14 = ((/* implicit */int) ((max((((((/* implicit */_Bool) var_10)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [i_1 + 2]))))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)63641)) | (((/* implicit */int) (short)32767))))))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_7 [i_1 + 2])))))))));
        /* LoopSeq 2 */
        for (signed char i_2 = 1; i_2 < 13; i_2 += 1) 
        {
            var_15 = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) max((((short) arr_9 [i_1])), (((short) var_7))))) : (((/* implicit */int) arr_15 [i_1 + 1] [i_2]))));
            arr_16 [i_1 + 2] [i_2] [i_2 + 1] = (unsigned short)63646;
        }
        for (unsigned short i_3 = 1; i_3 < 14; i_3 += 2) 
        {
            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_1])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1)))))) ? (max((((/* implicit */int) arr_8 [i_3] [i_3])), (((((/* implicit */int) arr_9 [i_1 - 2])) / (var_4))))) : (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (441915011))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))));
            /* LoopSeq 3 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? (((arr_18 [i_1 - 2] [i_3 - 1] [i_3 - 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_1 - 1] [i_3 + 1] [i_3 + 2]))) : (0U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)64)))));
                var_18 = (~((+(((/* implicit */int) arr_13 [i_4])))));
                /* LoopSeq 2 */
                for (signed char i_5 = 0; i_5 < 16; i_5 += 2) 
                {
                    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) arr_21 [i_1] [i_1 + 1] [i_1 - 1]))));
                    var_20 += ((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_4] [i_4]))))), (max((((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_15 [i_1] [i_5])))), (((/* implicit */int) arr_7 [i_3]))))));
                    var_21 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((unsigned char) (short)5048))), (max((4294967295U), (((/* implicit */unsigned int) arr_10 [i_1 - 2]))))));
                }
                /* vectorizable */
                for (signed char i_6 = 0; i_6 < 16; i_6 += 4) 
                {
                    arr_30 [i_1 - 1] [i_1 - 2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 4294967295U)) ? (1U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_1 - 2] [i_6]))))) << (((((/* implicit */int) arr_25 [i_1 + 1] [i_1 + 1] [i_3 - 1])) - (41748)))));
                    var_22 = ((unsigned long long int) (~(-5976198975658577381LL)));
                    var_23 = (signed char)-4;
                }
            }
            for (int i_7 = 2; i_7 < 15; i_7 += 2) 
            {
                var_24 ^= ((/* implicit */signed char) (_Bool)0);
                var_25 &= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) max((4294967295U), (((/* implicit */unsigned int) 441915011))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_1 - 1] [i_1 + 2] [i_1 + 2]))) : ((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_1] [i_1] [i_7 + 1]))) : (var_8))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-116))) : (((unsigned int) arr_25 [i_1 + 2] [i_3 - 1] [i_7 - 1]))))));
            }
            /* vectorizable */
            for (signed char i_8 = 2; i_8 < 14; i_8 += 2) 
            {
                /* LoopSeq 1 */
                for (short i_9 = 0; i_9 < 16; i_9 += 3) 
                {
                    arr_39 [i_1] [i_1 + 2] [i_1 + 1] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_29 [i_1] [i_3 + 2] [i_3 + 2] [i_1] [i_1] [i_9])))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)19590))) : (((long long int) var_0))));
                    var_26 = ((/* implicit */unsigned int) arr_18 [i_1 - 2] [i_8 + 2] [i_9]);
                }
                var_27 &= ((/* implicit */unsigned short) (signed char)103);
            }
        }
        arr_40 [i_1 - 1] = ((/* implicit */signed char) (short)2426);
    }
}

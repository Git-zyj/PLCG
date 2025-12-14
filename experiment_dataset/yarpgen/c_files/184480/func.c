/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184480
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) (~(arr_4 [i_0] [i_0] [(signed char)10]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2] [i_0] [i_0]))) : (min((4294967295U), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_7 [i_0] [i_1] [i_0]))))))))))));
                    var_12 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_3 [i_1]) : (((/* implicit */int) (unsigned short)31705))))) ? (min((arr_3 [i_0]), (arr_3 [i_2]))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1])) || (((/* implicit */_Bool) arr_3 [i_1])))))));
                    arr_9 [(signed char)12] [i_1] = ((/* implicit */unsigned int) max((((/* implicit */long long int) max((arr_4 [i_0] [i_1] [i_2]), (((/* implicit */unsigned int) (unsigned short)14950))))), (((((/* implicit */long long int) arr_3 [i_0])) + (arr_2 [i_1])))));
                    var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) 4294967295U))));
                    arr_10 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_0])) << (((((((((/* implicit */_Bool) (unsigned char)63)) ? (-1012458919) : (((/* implicit */int) (unsigned char)235)))) + (1012458948))) - (16)))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 20; i_3 += 1) 
    {
        for (signed char i_4 = 1; i_4 < 16; i_4 += 4) 
        {
            {
                var_14 += ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_3])) ? (arr_3 [i_3]) : (((/* implicit */int) (signed char)-43))))) ? (((/* implicit */int) ((unsigned char) 2147483647))) : (((/* implicit */int) (unsigned char)189)))) >= (((/* implicit */int) (((+(((/* implicit */int) arr_8 [i_3] [i_4 + 2])))) < (((/* implicit */int) ((unsigned short) (unsigned char)192))))))));
                var_15 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) arr_4 [i_4 + 3] [i_4 - 1] [i_4]))) ? (((/* implicit */unsigned int) max(((+(((/* implicit */int) (unsigned char)203)))), (((/* implicit */int) arr_6 [i_4] [i_4 + 1] [15U] [i_4]))))) : ((~((~(2738358206U)))))));
                var_16 = ((/* implicit */unsigned int) max((var_16), (max((((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (var_4)))) - (arr_15 [i_4 + 3] [i_4 + 2]))), (((/* implicit */unsigned int) ((((((((/* implicit */int) (signed char)-1)) + (2147483647))) >> (((arr_12 [i_3]) - (34610130U))))) & (((((/* implicit */int) (unsigned char)63)) << (((((-2147483647) - (-2147483646))) + (3))))))))))));
            }
        } 
    } 
}

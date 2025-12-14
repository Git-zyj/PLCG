/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127165
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
    var_11 = ((/* implicit */short) (-(((/* implicit */int) var_10))));
    var_12 += var_2;
    var_13 |= ((/* implicit */unsigned char) var_0);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_2 = 3; i_2 < 21; i_2 += 3) 
                {
                    arr_6 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_1 [i_2 - 2] [i_0]))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                arr_14 [i_2] [i_2] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_9 [i_2 - 2] [i_2] [i_1 + 1] [i_0])))) ? (((((/* implicit */_Bool) arr_9 [i_2 - 2] [i_2] [i_1 + 1] [i_0])) ? (((/* implicit */long long int) arr_9 [i_2 - 2] [(signed char)9] [i_1 - 1] [i_0])) : (var_8))) : (((/* implicit */long long int) ((arr_9 [i_2 + 1] [i_0] [i_1 - 1] [i_0]) / (arr_9 [i_2 - 1] [i_1 + 1] [i_1 + 1] [(_Bool)1]))))));
                                arr_15 [i_4] [i_3] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_1 + 1] [i_2] [i_2 - 3] [i_2 + 2] [i_2 - 1])) | (((/* implicit */int) var_1))))) ? (((arr_13 [i_1 - 1] [i_2] [i_2 - 3] [i_2] [i_2 - 2]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_13 [i_1 - 1] [i_2 - 2] [i_2 + 1] [i_2] [i_2 - 3])))) : (((/* implicit */int) ((((/* implicit */int) (signed char)127)) <= (((/* implicit */int) arr_13 [i_1 + 1] [i_1] [i_1] [i_1] [i_2 + 1])))))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-6)) ? (18446744073709551594ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2 + 1] [i_2 - 3] [i_1 + 1])) ? (((/* implicit */int) arr_2 [i_2 + 1] [i_2 - 2] [i_1 + 1])) : (((/* implicit */int) arr_2 [i_2 + 1] [i_2 - 3] [i_1 - 1])))))));
                    var_14 = ((/* implicit */short) arr_12 [i_0] [i_1] [i_1] [i_2 - 2] [i_0]);
                }
                for (signed char i_5 = 1; i_5 < 20; i_5 += 4) 
                {
                    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */int) (signed char)-1)) | (((/* implicit */int) (signed char)116)))) : (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (signed char)126)) : (((/* implicit */int) (signed char)121))))));
                    /* LoopSeq 2 */
                    for (long long int i_6 = 4; i_6 < 19; i_6 += 2) 
                    {
                        var_16 = ((/* implicit */signed char) var_2);
                        arr_21 [i_0] [i_5] [i_1] [i_0] = ((/* implicit */short) var_5);
                        arr_22 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)65535))));
                    }
                    for (unsigned char i_7 = 4; i_7 < 22; i_7 += 3) 
                    {
                        var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)101))));
                        arr_25 [i_0] [i_0] [i_7] [i_1] [i_5] [i_7] = ((/* implicit */signed char) (short)-32766);
                    }
                }
                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) 274877644800ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-116))) : (18446744073709551594ULL)));
                var_19 ^= ((/* implicit */signed char) ((unsigned short) ((((arr_9 [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 + 1]) + (2147483647))) >> (((arr_7 [i_1] [i_1] [i_1] [i_1 - 1] [i_1 - 1]) - (8321314944245817211LL))))));
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166453
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_14)) ? (var_1) : (((/* implicit */unsigned long long int) var_6)))) / (max((((/* implicit */unsigned long long int) 524256)), (10265422946337689394ULL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (2767594722U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1761)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551599ULL)) ? (((/* implicit */int) var_0)) : (var_10)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-64))) + (16ULL))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) var_13))))))))));
    var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) (unsigned short)1755))))))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        var_19 += ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) var_15))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1 - 1] [i_2]))))) : (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) arr_1 [i_2] [i_2])) : (((/* implicit */int) arr_1 [i_0 - 1] [i_1 + 1]))))));
                        arr_9 [i_3] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) var_1);
                        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) arr_5 [i_0] [(signed char)0] [i_2] [i_3]))));
                        var_21 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)(-127 - 1))), ((unsigned char)255)))) ? (((/* implicit */long long int) 546781800)) : (((long long int) var_3)))) : (((/* implicit */long long int) (~(max((var_16), (((/* implicit */unsigned int) var_0)))))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 16; i_4 += 4) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 16; i_5 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_4] [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */unsigned char) ((((int) ((((/* implicit */int) arr_8 [i_0] [i_2] [i_4])) < (((/* implicit */int) var_3))))) > (((((((/* implicit */int) var_5)) + (2147483647))) << (((((((/* implicit */int) arr_3 [i_0 - 1])) + (10693))) - (24)))))));
                                var_22 -= ((/* implicit */unsigned short) (-((((!(((/* implicit */_Bool) var_13)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0 + 1] [i_1 + 2] [i_2] [i_2] [i_4] [i_4]))) : (594509769514313986LL)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}

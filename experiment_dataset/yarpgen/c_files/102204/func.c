/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102204
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_20 &= ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65535))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((13U) >= (((unsigned int) ((unsigned long long int) arr_2 [i_0] [i_0])))));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? ((-2147483647 - 1)) : (arr_6 [i_1] [i_0])))) ? (var_8) : (((/* implicit */long long int) (-(arr_1 [i_0]))))));
            arr_7 [i_1] [10U] [i_0] |= ((/* implicit */unsigned int) (~(((((((arr_6 [i_0] [i_0]) + (2147483647))) >> (((((/* implicit */int) (signed char)-108)) + (135))))) & (((/* implicit */int) arr_2 [i_1] [i_1]))))));
            var_22 ^= ((/* implicit */short) var_11);
        }
        for (long long int i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            arr_12 [i_0] [i_0] [i_2] |= ((/* implicit */unsigned long long int) 5U);
            var_23 = (-(((int) (+(arr_6 [7] [i_2])))));
            arr_13 [i_2] = ((/* implicit */unsigned int) var_0);
            var_24 &= ((/* implicit */short) (!(((/* implicit */_Bool) min((arr_1 [i_0]), (arr_1 [i_0]))))));
        }
        var_25 += ((/* implicit */signed char) (+(((/* implicit */int) arr_5 [i_0]))));
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    arr_21 [i_4] [i_3] [(unsigned char)5] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) | (4294967295U)));
                    var_26 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) (-2147483647 - 1))) : (-9223372036854775799LL)));
                }
            } 
        } 
    }
    for (unsigned char i_5 = 0; i_5 < 18; i_5 += 3) 
    {
        var_27 = ((/* implicit */signed char) (-((~(((((/* implicit */int) arr_23 [i_5])) + (((/* implicit */int) arr_23 [i_5]))))))));
        var_28 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1125899906711552LL))));
    }
    var_29 = ((/* implicit */signed char) (-(((/* implicit */int) var_12))));
}

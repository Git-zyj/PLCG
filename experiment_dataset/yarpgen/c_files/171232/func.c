/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171232
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] &= ((/* implicit */unsigned short) var_8);
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 10; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        {
                            var_12 = ((/* implicit */short) var_1);
                            arr_10 [i_3] [i_1] [i_3] [i_1] |= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-3674))) & (var_11)));
                            arr_11 [i_0] [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) var_4);
                        }
                    } 
                } 
            }
        } 
    } 
    var_13 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) 974005492))));
    /* LoopNest 2 */
    for (unsigned char i_4 = 1; i_4 < 19; i_4 += 3) 
    {
        for (unsigned int i_5 = 0; i_5 < 22; i_5 += 1) 
        {
            {
                arr_17 [i_4] [i_5] = ((((/* implicit */unsigned int) var_6)) + ((+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_9))))));
                /* LoopSeq 1 */
                for (unsigned char i_6 = 0; i_6 < 22; i_6 += 1) 
                {
                    arr_20 [i_6] [i_4] [i_4] [i_4 + 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_10) & (((/* implicit */int) (unsigned short)7084))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)67))))) : (((/* implicit */int) (signed char)10))));
                    var_14 += ((/* implicit */signed char) ((max((719235678U), (((445671544U) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-67))))))) == (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-11)) && (((/* implicit */_Bool) 652158055))))))));
                    arr_21 [i_4] [i_5] [i_5] = ((/* implicit */unsigned short) (((~(((/* implicit */int) ((_Bool) (unsigned char)41))))) == (((/* implicit */int) (unsigned short)285))));
                }
                /* LoopSeq 1 */
                for (unsigned char i_7 = 0; i_7 < 22; i_7 += 1) 
                {
                    var_15 = ((/* implicit */signed char) ((var_11) - (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22))) * (var_9)))));
                    arr_25 [i_4] [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */int) var_1)) - (((/* implicit */int) ((((/* implicit */long long int) 974005502)) >= (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-67))) : (var_0))))))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_8 = 1; i_8 < 10; i_8 += 1) 
    {
        for (unsigned int i_9 = 0; i_9 < 11; i_9 += 1) 
        {
            {
                var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) var_0))));
                arr_32 [i_9] [i_9] = (((~(arr_23 [i_9]))) ^ (min((((/* implicit */long long int) (signed char)-11)), (arr_23 [i_9]))));
            }
        } 
    } 
    var_17 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)-85))));
}

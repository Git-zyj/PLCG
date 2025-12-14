/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175236
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
    for (unsigned short i_0 = 4; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned char) min((var_14), (var_0)));
                var_15 = ((/* implicit */int) ((unsigned int) var_5));
                var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) var_0))));
                arr_5 [i_0] = ((/* implicit */unsigned short) arr_0 [i_0]);
            }
        } 
    } 
    var_17 = var_10;
    var_18 = ((/* implicit */unsigned int) max((var_18), (((var_12) ^ (var_8)))));
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
    {
        for (unsigned char i_3 = 2; i_3 < 16; i_3 += 2) 
        {
            {
                var_19 = (+(((unsigned int) ((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (6392029965620498754ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)26565)))))));
                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((int) var_0))) + (((unsigned int) (signed char)73))))) ? (((/* implicit */int) arr_4 [i_3 - 1] [i_3] [(signed char)6])) : (((/* implicit */int) (!(((/* implicit */_Bool) 1389152091)))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_4 = 1; i_4 < 14; i_4 += 1) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 4) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 2) 
            {
                {
                    var_21 -= ((/* implicit */unsigned short) ((unsigned long long int) ((unsigned long long int) max((var_1), (((/* implicit */int) (unsigned short)15054))))));
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 3; i_7 < 13; i_7 += 1) 
                    {
                        for (signed char i_8 = 0; i_8 < 15; i_8 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */int) ((unsigned int) min((arr_2 [i_4 + 1] [i_7 - 3]), (((/* implicit */unsigned char) (signed char)-61)))));
                                arr_26 [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39831))) > (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)123))) - (8ULL)))))), (((((/* implicit */_Bool) max((((/* implicit */int) (signed char)-62)), (-1440758198)))) ? (((/* implicit */int) ((unsigned char) var_13))) : (((/* implicit */int) arr_24 [i_7] [i_7 - 3] [i_7] [6U] [3U] [6U]))))));
                                arr_27 [i_7] = ((((/* implicit */_Bool) (+(1969924282738097464ULL)))) ? (((/* implicit */unsigned long long int) max(((~(-1364556583))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (var_11)))))) : (((((/* implicit */_Bool) ((unsigned short) 4918369320269800643ULL))) ? (((unsigned long long int) var_9)) : (((/* implicit */unsigned long long int) 4294967278U)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 1; i_9 < 13; i_9 += 4) 
                    {
                        for (signed char i_10 = 0; i_10 < 15; i_10 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) ((unsigned char) arr_22 [i_10] [i_9] [i_6] [i_5] [i_4])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2))))))) : (min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)206))) : (var_5))), (min((((/* implicit */unsigned long long int) var_9)), (16476819790971454164ULL))))))))));
                                var_24 ^= ((/* implicit */unsigned short) ((((/* implicit */int) (short)-8853)) + ((~(((((/* implicit */int) arr_14 [(short)6])) >> (((((/* implicit */int) (signed char)-61)) + (65)))))))));
                            }
                        } 
                    } 
                    var_25 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_4])) && (((/* implicit */_Bool) arr_18 [i_4] [(unsigned char)8] [i_6])))))) ? (((long long int) (+(((/* implicit */int) (unsigned char)189))))) : (((/* implicit */long long int) var_12))));
                }
            } 
        } 
    } 
}

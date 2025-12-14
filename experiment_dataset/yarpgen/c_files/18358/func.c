/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18358
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
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            for (short i_2 = 2; i_2 < 18; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */unsigned long long int) max((var_13), ((-((-(((7547782872162753358ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-27237)))))))))));
                    var_14 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1] [(short)0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (10898961201546798273ULL)))) ? (arr_5 [i_2 + 1] [(short)6]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)252)))))) ? (min((((((/* implicit */_Bool) (unsigned char)3)) ? (var_9) : (((/* implicit */int) arr_2 [i_0] [i_0])))), (((/* implicit */int) max((((/* implicit */short) (unsigned char)247)), ((short)-22536)))))) : (((((((((/* implicit */int) arr_0 [i_0] [i_2 - 1])) ^ (((/* implicit */int) (signed char)54)))) + (2147483647))) << (((max((576460751229681664ULL), (((/* implicit */unsigned long long int) (short)-8)))) - (18446744073709551608ULL)))))));
                    var_15 = ((/* implicit */signed char) (unsigned char)3);
                }
            } 
        } 
    } 
    var_16 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) (unsigned char)3)) ? (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)7)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) 697361682)))))))));
    var_17 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)27))) : (var_8)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) (unsigned char)248))))) : (((((/* implicit */_Bool) (unsigned short)2623)) ? (((/* implicit */int) var_10)) : (2147483647)))))), (((((/* implicit */_Bool) var_1)) ? (10898961201546798257ULL) : (((/* implicit */unsigned long long int) ((var_5) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)252))))))))));
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 23; i_3 += 4) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 3) 
        {
            {
                arr_11 [i_3] [(unsigned char)13] [i_3] = (+(arr_7 [i_4]));
                var_18 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_9 [i_4])) ? (arr_9 [i_4]) : (arr_9 [i_3]))) ^ (((((/* implicit */_Bool) var_5)) ? (arr_9 [i_4]) : (arr_9 [i_3])))));
                arr_12 [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_3] [i_3])) || (((/* implicit */_Bool) max((arr_7 [i_3]), (((/* implicit */unsigned long long int) (signed char)-54)))))));
            }
        } 
    } 
}

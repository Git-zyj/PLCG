/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180503
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
    var_15 = ((/* implicit */int) var_8);
    var_16 = ((((/* implicit */_Bool) 0)) ? (127LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))));
    var_17 = ((/* implicit */signed char) min((((/* implicit */unsigned short) (signed char)(-127 - 1))), (var_12)));
    var_18 = ((/* implicit */unsigned short) ((unsigned long long int) var_0));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */int) ((signed char) (signed char)-111));
                /* LoopSeq 4 */
                for (long long int i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    arr_9 [(unsigned short)15] [i_1] [i_0] [i_0] = ((/* implicit */signed char) arr_6 [i_1] [i_1] [i_0] [i_1]);
                    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (unsigned short)32767))));
                }
                for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    var_21 = ((/* implicit */unsigned short) arr_7 [i_0] [i_1]);
                    arr_14 [i_0] = ((/* implicit */long long int) (unsigned char)32);
                }
                /* vectorizable */
                for (int i_4 = 2; i_4 < 17; i_4 += 4) 
                {
                    var_22 = ((/* implicit */unsigned int) -6LL);
                    /* LoopSeq 1 */
                    for (signed char i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        var_23 ^= (((+(arr_8 [i_5] [i_4 - 1] [1ULL]))) ^ (arr_17 [i_4 - 1] [i_4] [i_4 - 2]));
                        var_24 &= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) > (arr_8 [i_4 - 2] [i_4 - 2] [i_4])));
                        var_25 -= (unsigned short)24576;
                    }
                }
                for (long long int i_6 = 2; i_6 < 17; i_6 += 2) 
                {
                    var_26 -= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_12 [i_6] [i_6 - 2] [i_1])))) - (min((((/* implicit */long long int) (signed char)-83)), (10LL)))));
                    arr_23 [i_6 - 1] [i_1] [i_0] = ((/* implicit */signed char) var_14);
                }
                var_27 += ((/* implicit */signed char) ((var_6) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)248)))));
            }
        } 
    } 
}

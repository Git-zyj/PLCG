/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183299
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
    var_19 |= ((/* implicit */long long int) var_14);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 10; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (short)14237))));
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        arr_11 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)71)), (var_17)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [3] [i_1 + 1]))) : (((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0])) : (14722968316174111211ULL)))))));
                        var_21 = ((/* implicit */long long int) 14722968316174111212ULL);
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_4 = 0; i_4 < 11; i_4 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_9 [i_2 - 1] [i_1 + 1] [i_0] [i_0]))));
                        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (~(((/* implicit */int) arr_0 [i_2 + 1] [5LL])))))));
                        var_24 -= ((/* implicit */long long int) arr_9 [i_1] [i_4] [i_2] [i_2 - 1]);
                        arr_14 [i_0] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */short) ((unsigned long long int) arr_12 [i_1] [i_1] [i_1] [i_0]));
                        arr_15 [i_0] [i_0] [i_2] [i_2] = ((((/* implicit */long long int) arr_13 [i_2 - 1] [i_0])) & (((4539628424389459968LL) ^ (arr_7 [i_0] [i_0]))));
                    }
                    for (signed char i_5 = 1; i_5 < 8; i_5 += 2) 
                    {
                        var_25 = max(((_Bool)1), ((_Bool)1));
                        var_26 = max((((/* implicit */int) var_0)), ((-((+(((/* implicit */int) (short)13291)))))));
                    }
                    var_27 = ((/* implicit */int) arr_0 [i_1 - 1] [i_2 + 1]);
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_6 = 0; i_6 < 17; i_6 += 1) 
    {
        var_28 += ((/* implicit */long long int) (-(((/* implicit */int) arr_19 [i_6]))));
        arr_21 [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) var_0)) * (((/* implicit */int) arr_20 [i_6]))));
    }
    for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 2) /* same iter space */
    {
        var_29 += ((/* implicit */_Bool) (short)-13282);
        var_30 -= max((((/* implicit */int) (short)32753)), (arr_23 [i_7] [i_7]));
    }
    for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 2) /* same iter space */
    {
        arr_27 [i_8] [i_8] &= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_26 [i_8])), (arr_25 [i_8])))) ? (((/* implicit */int) arr_22 [i_8])) : (((/* implicit */int) arr_19 [10ULL]))));
        var_31 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_19 [i_8])) + ((-(max(((-2147483647 - 1)), (((/* implicit */int) var_0))))))));
    }
    var_32 += var_16;
}

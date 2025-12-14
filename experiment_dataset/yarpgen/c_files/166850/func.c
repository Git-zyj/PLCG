/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166850
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        var_11 ^= ((/* implicit */unsigned char) 9223372036854775807LL);
        /* LoopNest 3 */
        for (long long int i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 11; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    {
                        var_12 = ((/* implicit */unsigned char) (!(((arr_5 [i_0] [i_2 - 1] [i_3]) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
                        var_13 = ((/* implicit */unsigned char) 512353513U);
                        var_14 = ((/* implicit */long long int) (unsigned char)109);
                        var_15 *= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) 8225223533115773230LL)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [9LL] [9LL])) ? (6133981091465078267ULL) : (((/* implicit */unsigned long long int) var_3))))) ? (min((6133981091465078267ULL), (((/* implicit */unsigned long long int) (signed char)127)))) : (((/* implicit */unsigned long long int) (+(-7302396698909644992LL))))))));
                        arr_11 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned short) arr_7 [i_1 + 3] [i_2] [i_2 - 1] [i_2 - 1])), (var_1))));
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_4 = 2; i_4 < 20; i_4 += 2) 
    {
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_1))) & (7302396698909644992LL))))));
        var_17 = ((/* implicit */short) (~(((/* implicit */int) arr_12 [i_4 + 3] [i_4 + 1]))));
        var_18 = ((((/* implicit */_Bool) arr_12 [i_4 - 2] [i_4 + 3])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_4) < (((/* implicit */long long int) ((/* implicit */int) var_7))))))));
    }
    var_19 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((unsigned short) var_2))) ? (min((-7302396698909644992LL), (7302396698909644991LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)17147)))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134268
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_3 [(signed char)0] [i_1] [i_0])) == (((/* implicit */int) var_7)))))) >= (((((/* implicit */_Bool) (signed char)-17)) ? (3679138623U) : (2073921646U))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) max(((signed char)0), ((signed char)(-127 - 1))))) >= (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-14))) >= (615828653U)))))))) : (((arr_1 [(_Bool)1]) - (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)180)) ^ (((/* implicit */int) (unsigned char)75)))))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    for (unsigned char i_3 = 3; i_3 < 8; i_3 += 2) 
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */signed char) (+((~(((unsigned long long int) var_6))))));
                            var_17 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? ((~(3707161797977556706LL))) : (min((65535LL), (((/* implicit */long long int) var_3)))))));
                            arr_11 [2] [i_1] [i_1] [2] [i_0] [i_1] = ((/* implicit */long long int) (signed char)-22);
                            var_18 |= ((/* implicit */_Bool) (+(((/* implicit */int) (short)21320))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_4 = 0; i_4 < 17; i_4 += 3) 
    {
        var_19 |= ((/* implicit */unsigned char) ((((/* implicit */int) (short)23156)) < (((/* implicit */int) ((unsigned char) (short)13493)))));
        /* LoopNest 2 */
        for (signed char i_5 = 1; i_5 < 13; i_5 += 4) 
        {
            for (signed char i_6 = 0; i_6 < 17; i_6 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        arr_21 [i_4] [(short)16] [i_4] [i_4] [i_4] [(unsigned short)12] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) (short)10924))) <= (((/* implicit */int) ((((/* implicit */int) (signed char)-45)) <= (((/* implicit */int) arr_12 [i_4])))))));
                        var_20 = ((/* implicit */unsigned char) 4294967277U);
                    }
                    for (unsigned long long int i_8 = 2; i_8 < 13; i_8 += 2) 
                    {
                        arr_26 [i_4] [i_5] [i_5] [i_5] [4LL] [(short)0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)31))) % (((var_11) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)76)))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_9 = 2; i_9 < 16; i_9 += 2) 
                        {
                            var_21 = ((((/* implicit */_Bool) (unsigned short)36118)) ? (2247459727435699496LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)110))));
                            arr_29 [i_4] [i_4] [i_8] [i_5] [i_8] [i_5] [i_9] = ((/* implicit */short) 936657388U);
                            var_22 = ((/* implicit */unsigned char) ((((arr_27 [(_Bool)1] [i_5] [i_5] [i_5] [i_5] [(signed char)12] [i_5]) >> (((((/* implicit */int) var_3)) - (131))))) >= (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) >> (((((/* implicit */int) (signed char)-60)) + (70))))))));
                        }
                    }
                    arr_30 [i_4] [(unsigned char)12] [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_12))));
                }
            } 
        } 
    }
    var_23 = ((/* implicit */signed char) (!((_Bool)1)));
}

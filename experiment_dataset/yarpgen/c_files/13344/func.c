/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13344
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
    var_19 = ((int) 16502173226616169842ULL);
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 16; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0 + 2] [(signed char)2] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-13516))) ^ ((((((_Bool)1) ? (var_7) : (arr_0 [3ULL]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 += ((/* implicit */unsigned int) var_3);
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 17; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) max((((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)13516))) < (arr_0 [i_0])))), (var_12)))), (min((max((arr_4 [i_1] [i_1]), (((/* implicit */unsigned int) arr_7 [i_0 + 1] [i_0 + 1] [14U] [14U])))), (max((arr_10 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_4]), (((/* implicit */unsigned int) var_16))))))));
                                var_22 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_0] [(signed char)3] [i_2]))))) || (var_8)))), ((~(arr_0 [i_0 + 2])))));
                                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2]))) | (var_1))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_0] [i_2 - 1] [i_3])) | (((/* implicit */int) var_12)))))))) ? (((/* implicit */int) arr_11 [i_2])) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)127)) / (((/* implicit */int) arr_1 [17ULL]))))) || ((_Bool)1))))));
                            }
                        } 
                    } 
                    var_24 ^= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_7 [14] [i_2] [(short)2] [(short)17])))), ((_Bool)0)))), (var_4)));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_17) + (((/* implicit */unsigned int) var_13))))) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_8))))))), (((((/* implicit */_Bool) ((var_14) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_2)))) ? (max((((/* implicit */unsigned long long int) arr_8 [i_0] [(_Bool)1] [i_2] [(_Bool)1])), (var_2))) : (var_4)))));
                                arr_20 [i_2] [i_2] [i_2] [i_1] = ((/* implicit */unsigned char) var_2);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_21 [(signed char)6] = ((/* implicit */unsigned int) arr_19 [i_0]);
    }
    for (short i_7 = 2; i_7 < 16; i_7 += 3) /* same iter space */
    {
        var_26 = ((/* implicit */int) ((_Bool) min((((/* implicit */unsigned int) min((arr_17 [i_7] [i_7] [i_7 - 2] [i_7] [(_Bool)1] [i_7 + 1]), (var_0)))), (var_7))));
        var_27 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (2113714775U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
        /* LoopNest 2 */
        for (unsigned int i_8 = 0; i_8 < 18; i_8 += 3) 
        {
            for (int i_9 = 1; i_9 < 14; i_9 += 2) 
            {
                {
                    arr_31 [i_8] [i_8] [i_8] [i_8] = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */int) ((_Bool) var_8))) | (((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (short)-32742)) + (32751))))))));
                    var_28 ^= max((min((min((arr_16 [i_9 - 1]), (((/* implicit */unsigned long long int) (short)32742)))), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)32742))))));
                }
            } 
        } 
    }
}

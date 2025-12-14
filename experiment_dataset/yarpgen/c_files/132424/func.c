/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132424
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
    var_11 = max((var_3), (((unsigned char) ((var_7) == (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49314)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                arr_16 [i_4] [i_3] [i_2] [i_3] [i_2] [i_1] [i_0] = (unsigned short)16221;
                                var_12 = ((((/* implicit */int) arr_8 [i_4 + 1] [i_2 + 2] [i_1])) % (((/* implicit */int) (unsigned short)18361)));
                                var_13 ^= ((/* implicit */unsigned short) ((long long int) ((signed char) arr_15 [i_0] [i_0])));
                                arr_17 [i_0] [i_0] [i_2 + 1] [i_3] [i_4 + 1] &= ((/* implicit */int) 18229729179809504503ULL);
                                arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */short) 1976675729);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (short i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 2) 
                        {
                            var_14 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) arr_12 [i_6] [i_6] [i_2 - 1] [i_5] [i_6])) : (((/* implicit */int) arr_12 [i_6] [i_1] [i_2 - 1] [i_2] [i_6]))));
                            var_15 = ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)233)) || (((/* implicit */_Bool) arr_8 [i_2] [i_1] [i_2])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18229729179809504523ULL)) ? (arr_5 [i_2]) : (((/* implicit */int) (unsigned short)35510))))) : ((-(18229729179809504530ULL)))));
                            var_16 ^= ((/* implicit */long long int) ((int) ((unsigned short) (signed char)-43)));
                        }
                        for (long long int i_7 = 3; i_7 < 14; i_7 += 4) 
                        {
                            var_17 *= ((/* implicit */signed char) ((((/* implicit */int) arr_25 [i_2 - 1] [i_7 - 2] [i_0])) / (1976675735)));
                            var_18 |= ((((/* implicit */_Bool) 2113747070040371340LL)) || (((/* implicit */_Bool) (signed char)-43)));
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_8 = 0; i_8 < 15; i_8 += 4) 
                        {
                            var_19 = ((/* implicit */_Bool) ((long long int) -1976675730));
                            var_20 |= ((/* implicit */short) ((1976675729) ^ (51887034)));
                        }
                    }
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned int) (short)12611);
        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */int) arr_21 [i_0])) + (((/* implicit */int) arr_0 [i_0])))))));
        /* LoopNest 2 */
        for (short i_9 = 1; i_9 < 12; i_9 += 4) 
        {
            for (int i_10 = 0; i_10 < 15; i_10 += 4) 
            {
                {
                    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((((/* implicit */_Bool) (short)0)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_1))) << (((((-1976675730) + (1976675785))) - (55))))))));
                    /* LoopNest 2 */
                    for (signed char i_11 = 0; i_11 < 15; i_11 += 3) 
                    {
                        for (short i_12 = 2; i_12 < 14; i_12 += 3) 
                        {
                            {
                                arr_41 [i_11] [i_11] [i_11] [i_11] [1LL] = ((/* implicit */unsigned char) (-(var_1)));
                                var_24 = ((/* implicit */unsigned short) arr_23 [i_0] [i_0] [i_0] [i_0] [i_10] [i_11] [i_12]);
                                var_25 = ((/* implicit */int) ((long long int) (+(((/* implicit */int) arr_3 [i_0])))));
                            }
                        } 
                    } 
                    arr_42 [i_9] [i_9] [i_0] = ((/* implicit */_Bool) arr_32 [i_0]);
                    arr_43 [i_0] [i_0] [i_9] [i_10] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))));
                }
            } 
        } 
    }
    var_26 = ((/* implicit */signed char) ((((((int) (signed char)-83)) + (2147483647))) >> (((max((((int) 1976675729)), (((/* implicit */int) var_3)))) - (1976675712)))));
}

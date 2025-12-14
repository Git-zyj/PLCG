/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132852
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
    var_12 = ((/* implicit */short) min((var_4), (((/* implicit */unsigned long long int) max(((~(var_5))), (((/* implicit */long long int) ((unsigned short) var_3))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */signed char) (~(min((18446744073709551609ULL), (((/* implicit */unsigned long long int) ((_Bool) (short)-27922)))))));
                var_14 ^= ((/* implicit */unsigned long long int) max((((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 + 2]))) / (var_10))), (var_7)));
                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned long long int) var_3))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)27899))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_2))) | (var_1)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)27885)) ? (((/* implicit */int) (short)12931)) : (((((/* implicit */int) (short)12931)) + (((/* implicit */int) (signed char)-75))))))) : (max((((/* implicit */long long int) ((unsigned int) (signed char)-52))), (((((/* implicit */long long int) var_1)) & (var_10)))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_2 = 1; i_2 < 9; i_2 += 2) 
    {
        var_16 ^= ((/* implicit */unsigned int) (((-(arr_1 [i_2 - 1]))) << (((/* implicit */int) ((arr_4 [i_2 - 1]) < (arr_5 [i_2 + 2]))))));
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_17 = ((/* implicit */signed char) ((((((/* implicit */_Bool) 4647691733372874473LL)) ? (((/* implicit */int) arr_7 [i_2 + 3])) : (((/* implicit */int) arr_7 [i_2 + 2])))) * (((/* implicit */int) ((short) arr_7 [i_2 - 1])))));
            var_18 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_8 [i_2 - 1])), (arr_1 [i_2 + 2])))) || (((/* implicit */_Bool) ((long long int) ((var_6) * (((/* implicit */unsigned long long int) var_5))))))));
        }
    }
    /* LoopNest 2 */
    for (long long int i_4 = 3; i_4 < 19; i_4 += 2) 
    {
        for (int i_5 = 2; i_5 < 17; i_5 += 4) 
        {
            {
                var_19 = ((unsigned char) var_7);
                var_20 = ((/* implicit */signed char) ((var_10) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((int) arr_10 [i_4]))) >= (((((/* implicit */_Bool) var_8)) ? (arr_13 [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_5])))))))))));
                /* LoopSeq 1 */
                for (int i_6 = 3; i_6 < 19; i_6 += 2) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        for (unsigned long long int i_8 = 3; i_8 < 16; i_8 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned long long int) max((var_21), (var_0)));
                                var_22 += ((/* implicit */signed char) ((((((/* implicit */int) ((signed char) arr_15 [i_4 - 1] [(unsigned short)11] [i_8] [i_8]))) + (2147483647))) << (((((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_5] [(short)9] [i_8]))) / (((((/* implicit */unsigned int) var_3)) & (var_9))))) - (1U)))));
                                arr_22 [i_4] [i_4] [5ULL] [10LL] [14ULL] [i_8 + 4] = ((/* implicit */short) (-(max((min((arr_13 [i_5]), (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) ((signed char) arr_14 [i_4])))))));
                                arr_23 [i_4] = ((/* implicit */signed char) min((max((((/* implicit */unsigned long long int) ((long long int) var_8))), (max((((/* implicit */unsigned long long int) (unsigned char)128)), (3459515773526815538ULL))))), (var_0)));
                            }
                        } 
                    } 
                    arr_24 [i_4] [i_5 + 2] [i_6 - 2] [i_4 - 1] = ((/* implicit */long long int) ((max((min((((/* implicit */unsigned long long int) (short)27899)), (var_0))), (((/* implicit */unsigned long long int) (+(arr_19 [i_6] [(short)8] [i_5 + 1] [i_4] [i_4 - 3])))))) / (((/* implicit */unsigned long long int) arr_20 [i_6] [i_5 - 1] [i_4] [(signed char)15] [i_4]))));
                    arr_25 [i_6] [i_6] [i_4] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_4]))) : (var_9)))) > (min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65532))) / (arr_19 [i_4] [i_5] [i_4] [i_5] [i_5])))), (((((/* implicit */_Bool) var_9)) ? (var_6) : (((/* implicit */unsigned long long int) arr_12 [10ULL] [10ULL]))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_9 = 1; i_9 < 19; i_9 += 4) 
                    {
                        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_16 [i_5] [i_5 + 1] [(signed char)14] [i_9 + 1])))))));
                        var_24 ^= ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) var_5)) <= (var_6))) ? (((/* implicit */unsigned long long int) arr_26 [i_4] [i_4 - 2] [i_5 + 2] [i_6 - 2])) : (arr_13 [i_5 + 2])));
                    }
                }
            }
        } 
    } 
}

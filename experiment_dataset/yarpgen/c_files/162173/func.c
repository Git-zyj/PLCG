/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162173
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 ^= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)160)) && (((/* implicit */_Bool) arr_0 [2U])))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned int i_2 = 2; i_2 < 9; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 3; i_3 < 8; i_3 += 3) 
                    {
                        var_15 &= ((/* implicit */unsigned long long int) (unsigned short)0);
                        var_16 *= ((/* implicit */unsigned int) arr_4 [i_0] [i_1] [(signed char)0]);
                        arr_8 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */unsigned int) ((long long int) var_7));
                        arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)135))))) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))));
                    }
                    /* vectorizable */
                    for (short i_4 = 0; i_4 < 11; i_4 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 4) /* same iter space */
                        {
                            var_17 = ((/* implicit */unsigned long long int) arr_13 [i_0] [i_1] [i_2] [i_1]);
                            var_18 ^= ((/* implicit */unsigned int) (~(arr_17 [(unsigned char)8] [i_2 - 1] [i_1] [i_5])));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 4) /* same iter space */
                        {
                            var_19 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)160)) <= (((/* implicit */int) (unsigned char)17))));
                            var_20 = ((/* implicit */long long int) arr_20 [i_0] [i_0] [i_0] [i_0]);
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 4) /* same iter space */
                        {
                            var_21 |= ((/* implicit */short) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-11123))));
                            var_22 ^= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -6774903636083725580LL)))))) ^ (var_8)));
                            arr_25 [i_0] [i_1] [i_0] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_7 [i_0] [(signed char)0] [(unsigned char)5] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_7] [i_1] [i_7])))))) : (var_8)));
                        }
                        var_23 += ((/* implicit */unsigned long long int) arr_18 [i_2] [(signed char)2] [i_2] [9ULL] [i_0]);
                    }
                    for (unsigned int i_8 = 0; i_8 < 11; i_8 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) max((9199505662670419043LL), (-9223372036854775785LL))))))), (((signed char) 4294967278U))));
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_8] [i_0]))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_2] [i_0])))))))) ? (((((/* implicit */_Bool) arr_11 [i_0] [i_2 - 1] [4LL] [i_0] [i_0])) ? ((-(arr_23 [i_0] [i_1] [i_2]))) : (((unsigned int) -2018490040325855497LL)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */int) (!(arr_1 [i_0] [i_0])))) : (((/* implicit */int) arr_4 [i_2 - 1] [i_2] [i_2])))))));
                    }
                    var_26 = ((/* implicit */unsigned long long int) arr_23 [i_1] [i_1] [(unsigned short)2]);
                    var_27 = ((/* implicit */long long int) arr_17 [i_0] [i_1] [i_0] [i_0]);
                }
            } 
        } 
        var_28 = ((/* implicit */long long int) (!((!(arr_20 [i_0] [i_0] [i_0] [i_0])))));
    }
    var_29 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((var_6), (var_1))))));
}

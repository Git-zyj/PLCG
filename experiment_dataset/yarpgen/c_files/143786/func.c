/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143786
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
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 3; i_0 < 24; i_0 += 1) 
    {
        arr_2 [i_0] &= ((/* implicit */long long int) arr_0 [i_0]);
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            arr_6 [i_0] = ((/* implicit */_Bool) (+(arr_0 [i_0 + 1])));
            arr_7 [i_0] [i_0] [i_0 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_0 - 3] [i_1])) ? (arr_5 [12ULL] [i_1]) : ((+(arr_0 [i_0])))));
        }
        var_18 = ((/* implicit */int) min((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65524))) - (((((/* implicit */_Bool) (unsigned short)0)) ? (-1LL) : (5290429288556119679LL))))), (((/* implicit */long long int) ((2398192613U) / (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)19))))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_2 = 3; i_2 < 23; i_2 += 1) 
        {
            var_19 += ((/* implicit */long long int) ((-1) - (((/* implicit */int) (unsigned char)222))));
            /* LoopNest 3 */
            for (unsigned short i_3 = 0; i_3 < 25; i_3 += 1) 
            {
                for (unsigned short i_4 = 0; i_4 < 25; i_4 += 1) 
                {
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        {
                            arr_18 [i_3] [i_2] [i_2] [i_2] [i_2 + 2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-25)) ? (((((/* implicit */int) (unsigned short)19266)) / (((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0 - 3] [4LL])))) : (((/* implicit */int) arr_4 [i_3]))));
                            var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0 - 3] [i_0 + 1])) ? (((/* implicit */int) arr_3 [i_0 - 3] [i_0 - 1])) : (((/* implicit */int) arr_8 [i_2 - 3] [i_0 - 2]))));
                        }
                    } 
                } 
            } 
            var_21 += ((/* implicit */short) var_5);
            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((arr_5 [i_0] [i_2 - 1]) - (((/* implicit */int) arr_16 [i_0] [i_0] [i_2] [i_0] [i_2])))))));
            var_23 = ((unsigned char) ((var_3) <= (arr_10 [i_0] [i_0] [i_0] [i_2 - 3])));
        }
        var_24 = ((/* implicit */int) var_5);
    }
    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
    {
        var_25 += ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)190)) / (((/* implicit */int) ((signed char) ((int) (_Bool)1))))));
        /* LoopNest 2 */
        for (unsigned long long int i_7 = 1; i_7 < 21; i_7 += 1) 
        {
            for (int i_8 = 2; i_8 < 22; i_8 += 1) 
            {
                {
                    var_26 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_21 [i_7] [i_8]))));
                    var_27 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_4 [i_7 + 3])) ? (arr_5 [i_6 - 1] [i_8 - 2]) : (((/* implicit */int) arr_4 [i_7 + 2]))))));
                    var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)74)) ? (-20) : (1)))) ^ (12265981335685888055ULL)))) ? (min((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)45061)) & (((/* implicit */int) (signed char)-5))))), ((~(arr_9 [i_6] [i_7] [i_8]))))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_24 [i_6 - 1] [i_7] [i_8])))))));
                    arr_30 [i_7] [i_8] = ((/* implicit */int) 15438993216151903916ULL);
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_9 = 3; i_9 < 10; i_9 += 1) 
    {
        arr_34 [i_9] [i_9] = ((/* implicit */unsigned short) var_0);
        var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) arr_23 [i_9] [i_9]))));
    }
    for (short i_10 = 0; i_10 < 15; i_10 += 1) 
    {
        arr_38 [i_10] = ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)24576)) || ((_Bool)1))) ? (-9223372036854775807LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)25821)) / (var_10)))) ? (((((/* implicit */int) var_6)) / (((/* implicit */int) arr_13 [i_10] [i_10] [i_10] [i_10])))) : (((/* implicit */int) (_Bool)1)))))));
        var_30 = ((/* implicit */unsigned long long int) var_16);
        var_31 = ((/* implicit */int) max((var_31), ((+(((/* implicit */int) ((min((((/* implicit */unsigned long long int) (unsigned char)136)), (arr_10 [i_10] [(signed char)1] [i_10] [i_10]))) < (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_4 [(unsigned char)5]), (((/* implicit */unsigned short) var_5)))))))))))));
    }
    var_32 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) var_1))));
    var_33 = ((/* implicit */unsigned short) var_4);
}

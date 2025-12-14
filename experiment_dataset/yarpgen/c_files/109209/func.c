/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109209
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
    var_10 *= ((/* implicit */short) min((((/* implicit */int) var_4)), (((((var_9) >= (((/* implicit */long long int) var_6)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((((/* implicit */int) var_7)) | (((/* implicit */int) var_5))))))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        var_11 *= ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)144))));
        arr_2 [(unsigned char)4] = ((/* implicit */unsigned char) min((((arr_1 [i_0 - 1]) % (arr_1 [i_0 + 2]))), (min((arr_1 [i_0 + 1]), (arr_1 [i_0 + 1])))));
    }
    /* vectorizable */
    for (long long int i_1 = 2; i_1 < 14; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */_Bool) (~(arr_3 [i_1 - 2])));
        arr_7 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1 + 1])) ? (((/* implicit */int) arr_4 [(short)3] [i_1])) : (((/* implicit */int) var_2))))) > (9223372036854775798LL)));
        arr_8 [i_1] = ((long long int) (~(((/* implicit */int) (signed char)-124))));
        arr_9 [i_1 - 2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_2))));
        arr_10 [i_1 - 2] [i_1] = ((/* implicit */unsigned char) (signed char)125);
    }
    for (unsigned long long int i_2 = 3; i_2 < 18; i_2 += 2) 
    {
        var_12 *= ((/* implicit */short) (~(((((/* implicit */int) arr_13 [i_2 - 2])) + ((-(((/* implicit */int) (signed char)-101))))))));
        /* LoopNest 3 */
        for (int i_3 = 4; i_3 < 18; i_3 += 1) 
        {
            for (int i_4 = 0; i_4 < 19; i_4 += 1) 
            {
                for (signed char i_5 = 0; i_5 < 19; i_5 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_6 = 1; i_6 < 17; i_6 += 3) 
                        {
                            var_13 ^= ((/* implicit */int) ((unsigned int) (+(arr_19 [i_2] [i_3 - 3]))));
                            var_14 = ((/* implicit */short) min((((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_4)))) / (((arr_20 [i_3 + 1] [i_4] [(short)0] [i_6]) % (((/* implicit */unsigned long long int) arr_15 [i_2])))))), ((-(arr_11 [i_2 - 3])))));
                            var_15 = ((/* implicit */long long int) ((arr_15 [i_2]) & ((-((+(((/* implicit */int) (signed char)125))))))));
                        }
                        arr_24 [i_2] [i_3 + 1] [i_5] = ((/* implicit */long long int) ((((((/* implicit */_Bool) (signed char)-110)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)109))) : (arr_11 [i_2 - 3]))) << (((((/* implicit */_Bool) arr_23 [i_5] [i_2 - 3] [i_2 - 2] [i_5])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_13 [(short)16]))))) : (max((((/* implicit */unsigned long long int) var_2)), (arr_23 [i_5] [(signed char)6] [i_5] [8])))))));
                        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) (+(593629577U))))));
                        arr_25 [i_5] [i_5] [(signed char)14] [i_3] [i_3] [i_2] = (((-(((/* implicit */int) (signed char)-5)))) | ((~(arr_19 [i_2 - 3] [i_3 - 4]))));
                        arr_26 [i_2 - 3] [i_2 - 3] [i_4] [i_5] = ((/* implicit */unsigned char) arr_18 [i_5] [i_3 + 1] [i_2 - 1] [i_2 + 1]);
                    }
                } 
            } 
        } 
    }
    for (short i_7 = 0; i_7 < 12; i_7 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_8 = 0; i_8 < 12; i_8 += 3) 
        {
            for (signed char i_9 = 3; i_9 < 10; i_9 += 2) 
            {
                {
                    arr_36 [i_9 + 2] = ((((/* implicit */_Bool) 7828070997597826950ULL)) || (((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_12 [i_7] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)119))) : (6467297000258268059LL)))))));
                    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_5 [i_9 - 1])))))));
                }
            } 
        } 
        arr_37 [i_7] = ((((/* implicit */_Bool) ((long long int) arr_22 [i_7] [i_7] [(signed char)12] [i_7] [i_7]))) ? (((((/* implicit */int) arr_22 [i_7] [i_7] [(_Bool)0] [i_7] [i_7])) - (((/* implicit */int) arr_22 [i_7] [i_7] [(signed char)14] [i_7] [i_7])))) : (((/* implicit */int) max((var_2), (((/* implicit */unsigned char) arr_22 [i_7] [i_7] [(signed char)16] [i_7] [i_7]))))));
        /* LoopNest 2 */
        for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 3) 
        {
            for (short i_11 = 0; i_11 < 12; i_11 += 3) 
            {
                {
                    var_18 = ((/* implicit */int) var_2);
                    var_19 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_20 [i_11] [i_10] [i_10] [i_7])))) && (((((/* implicit */int) max(((signed char)-2), (((/* implicit */signed char) var_0))))) == (((arr_32 [i_7]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4))))))));
                }
            } 
        } 
        arr_45 [i_7] = ((/* implicit */signed char) min((((max((8309473854523996957LL), (((/* implicit */long long int) var_7)))) ^ (((/* implicit */long long int) ((/* implicit */int) var_8))))), (((/* implicit */long long int) (~(min((((/* implicit */int) (short)637)), (arr_19 [i_7] [i_7]))))))));
    }
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) var_0))));
}

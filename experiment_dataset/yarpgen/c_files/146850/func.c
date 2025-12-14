/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146850
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 9; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 11; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((unsigned int) arr_5 [i_0] [i_0]))) ? (((/* implicit */int) var_15)) : (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_0 [i_4] [i_1])))))), (((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-123)), (arr_9 [i_1] [i_2 + 1] [i_3 - 1] [i_4])))) >= (((/* implicit */int) (unsigned char)24)))))));
                                var_20 *= ((((/* implicit */int) var_0)) >= ((~(((/* implicit */int) (_Bool)1)))));
                                arr_14 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_1] [i_2 + 2] [i_2] [6U] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_12 [i_0 + 2] [i_0] [i_0 + 1] [i_2] [i_0]))));
                                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) max((((/* implicit */short) (_Bool)1)), (arr_6 [i_4] [i_1]))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_2] [i_2])) ? (((/* implicit */int) arr_6 [i_2] [i_2])) : (((/* implicit */int) arr_6 [i_2] [i_2]))))), (((((/* implicit */_Bool) arr_11 [i_0 + 3] [i_1])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (signed char)-51))))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (short i_6 = 0; i_6 < 12; i_6 += 1) 
                        {
                            var_23 ^= ((/* implicit */unsigned char) var_12);
                            var_24 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */int) arr_6 [i_2] [i_1])) | (((/* implicit */int) arr_6 [i_2] [i_2])))));
                        }
                        var_25 &= ((/* implicit */unsigned int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) min(((short)27395), (arr_4 [i_5] [i_1] [i_1]))))))), (arr_10 [i_0] [i_0] [i_1] [i_1] [i_0] [(_Bool)0])));
                        var_26 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)26)) ? (((unsigned long long int) (_Bool)1)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [(signed char)0] [i_1] [(signed char)0] [i_0 + 2])))));
                        arr_19 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (signed char)-74)))) ? (((/* implicit */int) (_Bool)1)) : ((+(((/* implicit */int) (signed char)-54))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 2) 
                    {
                        var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) ((short) ((unsigned short) var_2))))));
                        arr_24 [i_0] [i_1] [(signed char)0] [i_7] [0U] [i_7] &= ((/* implicit */unsigned char) arr_7 [i_0 + 2] [i_0 - 2]);
                    }
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */long long int) var_0);
    var_29 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_5))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_7)))) : (min((((/* implicit */unsigned long long int) var_2)), (var_12))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 4) 
    {
        for (unsigned short i_9 = 1; i_9 < 9; i_9 += 1) 
        {
            {
                arr_31 [i_8] = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_22 [i_8] [i_9])), (arr_17 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])))) ? (((((/* implicit */int) arr_10 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])) ^ (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_8 [i_8] [i_8] [(unsigned char)8] [i_8] [10LL] [i_8])))))) : (((/* implicit */int) arr_15 [i_8] [i_9] [i_9 - 1])));
                arr_32 [i_9] [i_9] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_4 [i_8] [i_8] [i_8]))) ? (((long long int) arr_2 [i_9 - 1] [i_9])) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-54)))));
                var_30 &= ((/* implicit */unsigned char) arr_5 [(signed char)5] [i_9]);
                var_31 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_20 [i_8] [0] [i_8] [i_8]))))))))));
            }
        } 
    } 
    var_32 = ((/* implicit */signed char) min(((+(((((/* implicit */long long int) ((/* implicit */int) var_11))) - (var_5))))), (((/* implicit */long long int) (short)-19990))));
}

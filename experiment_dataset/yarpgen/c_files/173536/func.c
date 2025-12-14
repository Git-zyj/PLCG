/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173536
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
    var_19 = ((/* implicit */long long int) var_18);
    var_20 = ((/* implicit */unsigned char) (((((-(var_14))) / (((/* implicit */long long int) ((/* implicit */int) var_13))))) << (((/* implicit */int) (!(((/* implicit */_Bool) 17114229645117304734ULL)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (-2864439577213960661LL) : (9125563871275007493LL)));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 3; i_1 < 20; i_1 += 3) 
        {
            arr_5 [14LL] = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)125))));
            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) var_7))));
            arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) ((unsigned long long int) var_10));
            var_23 *= ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) var_2)))));
        }
        for (long long int i_2 = 0; i_2 < 23; i_2 += 2) /* same iter space */
        {
            arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) var_1)) ^ (arr_2 [i_0] [i_0 + 2] [i_2])));
            arr_10 [i_0] [i_2] = ((((/* implicit */_Bool) var_7)) ? (arr_7 [i_0] [i_0 + 2] [i_2]) : (arr_7 [i_0] [i_0 - 1] [i_2]));
        }
        for (long long int i_3 = 0; i_3 < 23; i_3 += 2) /* same iter space */
        {
            arr_15 [i_3] [(signed char)1] = ((/* implicit */short) ((arr_7 [i_0] [i_0] [i_0 + 3]) > (arr_7 [i_0] [13LL] [i_0 + 2])));
            var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) arr_0 [i_3]))));
            arr_16 [i_0] = ((/* implicit */unsigned long long int) ((var_17) & (((/* implicit */long long int) (-(arr_2 [4LL] [i_3] [i_3]))))));
            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (arr_3 [i_3]))))));
        }
    }
    for (unsigned short i_4 = 1; i_4 < 14; i_4 += 1) 
    {
        arr_19 [i_4] |= ((/* implicit */short) max((((/* implicit */unsigned long long int) var_5)), (min((10700939855479801497ULL), (((/* implicit */unsigned long long int) (signed char)-126))))));
        var_26 += ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)23))));
        /* LoopNest 2 */
        for (short i_5 = 3; i_5 < 12; i_5 += 2) 
        {
            for (long long int i_6 = 2; i_6 < 14; i_6 += 3) 
            {
                {
                    var_27 = ((/* implicit */unsigned char) ((((long long int) arr_23 [i_6 - 2] [i_4 + 2] [i_6])) | (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_4] [i_4] [i_4 + 1])))));
                    var_28 = ((/* implicit */unsigned short) (-(max((((/* implicit */long long int) ((unsigned int) var_8))), (arr_23 [1U] [1U] [i_6])))));
                    arr_26 [i_5] [(unsigned short)2] [i_5 + 4] = ((/* implicit */long long int) arr_12 [8ULL] [i_4]);
                    arr_27 [i_6 - 2] [i_5] = ((/* implicit */signed char) ((unsigned int) min((((arr_20 [i_6 + 1] [i_4]) + (((/* implicit */long long int) ((/* implicit */int) var_9))))), (((/* implicit */long long int) (+(((/* implicit */int) arr_4 [i_4] [i_4]))))))));
                }
            } 
        } 
        var_29 = ((/* implicit */long long int) (((-(((/* implicit */int) var_10)))) > (((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) & (var_18)))))));
    }
    for (unsigned short i_7 = 3; i_7 < 11; i_7 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_8 = 0; i_8 < 14; i_8 += 4) 
        {
            arr_32 [i_7] = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))));
            var_30 |= ((/* implicit */unsigned char) max((min((max((((/* implicit */unsigned long long int) arr_2 [i_7] [(short)8] [i_8])), (var_3))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_30 [i_7] [i_8] [(unsigned short)6]))))))), ((~(arr_31 [i_8] [i_7 - 2] [(unsigned short)6])))));
            var_31 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned short) arr_22 [i_7 + 3] [i_7] [i_7 - 1] [i_7 + 1])))));
        }
        arr_33 [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)255)), ((short)6723)))) || ((!(((/* implicit */_Bool) arr_7 [i_7 - 3] [i_7 - 3] [i_7 + 2]))))));
        var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_20 [i_7 + 3] [i_7 - 3]) & (((/* implicit */long long int) arr_2 [i_7] [0LL] [i_7]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) arr_2 [i_7 + 2] [i_7 + 2] [i_7 - 1])) : (arr_14 [i_7] [i_7 - 2]))))));
    }
}

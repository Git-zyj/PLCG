/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129269
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
    var_17 = ((/* implicit */signed char) var_6);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopSeq 4 */
        for (short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)19819))))) ? (((long long int) arr_3 [i_1] [i_1])) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_1)))))));
            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_1]))));
            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_2 [i_1] [i_1]) & (arr_2 [i_0] [i_0])))) ? (arr_3 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_3 [i_0] [i_1]))))));
        }
        for (unsigned short i_2 = 2; i_2 < 22; i_2 += 1) 
        {
            arr_8 [i_0] [(signed char)8] = ((/* implicit */int) ((((/* implicit */int) arr_6 [i_2] [i_2])) != (((/* implicit */int) arr_6 [i_0] [(unsigned short)5]))));
            var_21 = ((/* implicit */unsigned int) ((var_3) >= (((/* implicit */unsigned int) arr_2 [i_0] [(signed char)6]))));
            var_22 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */int) (unsigned short)49504)) % (((/* implicit */int) (unsigned short)8420)))));
            arr_9 [i_0] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_6 [i_2] [i_2 - 1]))));
        }
        for (unsigned short i_3 = 0; i_3 < 24; i_3 += 2) 
        {
            /* LoopNest 3 */
            for (signed char i_4 = 1; i_4 < 21; i_4 += 3) 
            {
                for (unsigned int i_5 = 0; i_5 < 24; i_5 += 1) 
                {
                    for (unsigned int i_6 = 2; i_6 < 23; i_6 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_13 [i_4] [i_4] [i_6 - 2] [(signed char)23]))));
                            arr_19 [i_4] = ((/* implicit */unsigned short) ((var_10) >> (((arr_15 [i_0] [i_5] [i_4 + 1]) + (3932963563811865083LL)))));
                            var_24 = ((/* implicit */unsigned char) var_15);
                        }
                    } 
                } 
            } 
            arr_20 [i_0] [(signed char)2] [(signed char)2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_3] [i_3])) || (((/* implicit */_Bool) (-2147483647 - 1)))));
        }
        for (unsigned char i_7 = 3; i_7 < 22; i_7 += 1) 
        {
            arr_24 [i_0] [i_7 - 2] |= ((unsigned short) arr_21 [i_0] [i_7 - 3]);
            var_25 += ((/* implicit */unsigned char) arr_18 [i_0]);
            var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)17167)) | (((/* implicit */int) (unsigned short)20045))));
            arr_25 [i_0] [i_7 + 2] [i_7] |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_1)))))));
            arr_26 [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 896111238U)) ? (arr_3 [0U] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)56348)))))) ? (610989009) : (((/* implicit */int) (unsigned short)22281))));
        }
        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) (-(var_5)))) ? (((((/* implicit */_Bool) arr_22 [(signed char)16])) ? (((/* implicit */int) arr_5 [15] [i_0])) : (((/* implicit */int) arr_0 [(unsigned short)9])))) : (((arr_7 [i_0]) << (((((/* implicit */int) arr_12 [(signed char)5] [i_0])) - (40397)))))));
    }
}

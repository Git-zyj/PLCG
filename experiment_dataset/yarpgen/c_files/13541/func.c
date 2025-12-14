/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13541
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
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 14; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            var_12 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0 + 3] [i_0 - 2])) ? (((((/* implicit */_Bool) 0)) ? (((/* implicit */unsigned long long int) -7)) : (arr_1 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 + 3] [i_0 + 2] [i_0 - 1])))));
            var_13 = ((/* implicit */short) min((var_13), (arr_3 [i_0 + 1] [i_0 + 3])));
            arr_6 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_0 + 2] [i_0 + 3] [i_0 + 1]))));
        }
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            var_14 *= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_8 [i_0 - 2]))));
            arr_10 [i_0 - 1] = ((/* implicit */int) arr_9 [i_0]);
            var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65529)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0]))) : (arr_1 [9U] [(signed char)0])))) ? (arr_7 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [(_Bool)1])))))));
            var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) ((long long int) arr_1 [i_0 + 1] [i_0 + 3])))));
        }
        /* vectorizable */
        for (signed char i_3 = 0; i_3 < 17; i_3 += 3) 
        {
            arr_13 [i_0] = ((/* implicit */long long int) var_3);
            arr_14 [i_0] = ((/* implicit */unsigned short) ((((_Bool) (_Bool)1)) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_8 [(unsigned short)13]))));
        }
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 15; i_4 += 1) 
        {
            for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
            {
                {
                    arr_21 [8U] [i_4 - 1] [i_4] [i_4 - 1] = max((((/* implicit */long long int) (((~(((/* implicit */int) arr_2 [i_0])))) << (((((((/* implicit */_Bool) 283726776524341248LL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_11 [i_0] [i_0])))) - (19130)))))), (((max((var_6), ((_Bool)1))) ? (3LL) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) -990330446)))))));
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                    {
                        for (long long int i_7 = 0; i_7 < 17; i_7 += 2) 
                        {
                            {
                                arr_26 [(short)3] [i_4] [(short)3] [i_6] = ((/* implicit */short) (((~(((((/* implicit */_Bool) var_2)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 - 2] [i_0 - 2]))))))) >> (((/* implicit */int) ((arr_16 [i_5 + 1] [i_5 + 1] [i_5 + 1]) <= (((/* implicit */int) arr_8 [i_0 + 2])))))));
                                var_17 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_6] [i_0 - 1])) ? (arr_5 [i_0 - 2] [i_6] [i_0 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 + 1]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [i_4 - 1] [i_4 - 1] [i_6] [i_4 + 1])) ? (((/* implicit */int) arr_22 [i_4 - 2] [i_4 - 3] [i_6] [i_4 + 1])) : (((/* implicit */int) arr_22 [i_4 - 1] [i_4 - 1] [i_6] [i_4 + 2])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_27 [i_0] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((int) arr_18 [i_0] [i_0]))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_9)) != (((/* implicit */int) arr_4 [i_0] [(unsigned short)8] [8LL])))))) : (((arr_7 [i_0]) / (((/* implicit */long long int) ((/* implicit */int) var_11)))))))));
    }
    for (int i_8 = 2; i_8 < 14; i_8 += 2) /* same iter space */
    {
        arr_30 [i_8 + 1] = ((/* implicit */unsigned short) ((_Bool) ((((((/* implicit */_Bool) (short)16911)) ? (((/* implicit */int) (short)2047)) : (1146898074))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))));
        var_18 *= ((/* implicit */unsigned short) max(((+(((/* implicit */int) ((_Bool) arr_3 [i_8 + 2] [i_8]))))), ((~((~(((/* implicit */int) arr_29 [i_8]))))))));
        arr_31 [i_8 + 3] = ((((/* implicit */_Bool) (-((-(-2052135341)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_8 - 1] [i_8 - 1])) ? (var_3) : (((/* implicit */unsigned long long int) arr_25 [i_8 - 1] [i_8 + 3] [i_8 - 2] [(signed char)16] [i_8 - 2] [i_8] [i_8 - 2]))))) ? (((/* implicit */unsigned long long int) ((arr_7 [i_8 - 1]) / (((/* implicit */long long int) ((/* implicit */int) arr_2 [2ULL])))))) : (arr_0 [i_8 + 3] [i_8 - 1]))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_19 [i_8] [i_8] [i_8] [i_8])) * (((/* implicit */int) arr_29 [i_8]))))), (var_5)))));
    }
    var_19 = ((/* implicit */unsigned int) -130653599);
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_9)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))) ? (((long long int) (!(var_1)))) : (((((/* implicit */_Bool) ((var_1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9))))) ? (min((1867588646148611778LL), (((/* implicit */long long int) (unsigned char)231)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))));
    var_21 = ((/* implicit */long long int) var_9);
}

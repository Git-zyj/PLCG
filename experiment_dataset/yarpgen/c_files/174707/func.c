/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174707
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
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) var_10)) ? ((+(((/* implicit */int) var_3)))) : (max((((/* implicit */int) var_1)), (var_4))))) : (var_12)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((arr_1 [i_0]) ? (var_12) : (((/* implicit */int) arr_1 [i_0])))))));
        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) != (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_2 [i_0] [i_0]))))))));
    }
    /* vectorizable */
    for (long long int i_1 = 2; i_1 < 13; i_1 += 3) /* same iter space */
    {
        var_18 += ((/* implicit */signed char) (-(((var_5) | (var_14)))));
        arr_6 [i_1] = ((/* implicit */unsigned char) var_4);
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (~((-(((/* implicit */int) (signed char)45)))))))));
        arr_7 [i_1] = ((/* implicit */unsigned int) var_7);
    }
    /* vectorizable */
    for (long long int i_2 = 2; i_2 < 13; i_2 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 14; i_3 += 1) 
        {
            for (unsigned char i_4 = 0; i_4 < 14; i_4 += 4) 
            {
                {
                    arr_14 [i_2] [i_3] [i_2] = ((/* implicit */long long int) ((unsigned long long int) arr_1 [i_2 + 1]));
                    var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_8))));
                }
            } 
        } 
        var_21 = ((/* implicit */long long int) (-(arr_2 [i_2 - 1] [i_2])));
        arr_15 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1661523416)) ? (((/* implicit */int) var_9)) : ((-(var_14)))));
        /* LoopNest 2 */
        for (unsigned char i_5 = 1; i_5 < 10; i_5 += 2) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 4) 
            {
                {
                    var_22 = ((/* implicit */_Bool) (((+(((/* implicit */int) (_Bool)1)))) ^ (((/* implicit */int) ((((/* implicit */_Bool) 2467166772U)) || (((/* implicit */_Bool) (unsigned short)40785)))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_7 = 0; i_7 < 14; i_7 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (int i_8 = 0; i_8 < 14; i_8 += 3) 
                        {
                            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_8))) ? (((/* implicit */int) arr_16 [i_5 + 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_2 - 1] [i_2] [i_2]))))))))));
                            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((arr_2 [i_2] [i_5 + 1]) >> (((((((/* implicit */_Bool) arr_9 [i_5])) ? (10365304224193367312ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_2]))))) - (10365304224193367306ULL))))))));
                        }
                        for (long long int i_9 = 3; i_9 < 13; i_9 += 3) 
                        {
                            arr_27 [i_2] [i_2] [i_2] [i_2] [i_2] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)-18)) : (((/* implicit */int) (signed char)10))));
                            arr_28 [i_2] [i_2] [i_6] [i_2] [i_9] [i_5] = ((/* implicit */int) 16983154561722893556ULL);
                            var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((unsigned char) arr_18 [i_2] [i_2] [i_2 - 2] [i_7])))));
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_20 [i_5 - 1] [i_5 + 1] [i_5 + 1] [i_5 + 3])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)237)) : (((/* implicit */int) var_13))))) : ((+(arr_24 [i_9 - 3] [i_7] [i_2] [i_5] [i_2])))));
                        }
                        arr_29 [i_5] [i_7] [i_6] [i_5] [i_5] [i_5] = ((/* implicit */signed char) var_6);
                    }
                }
            } 
        } 
        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1661523397)) ? (((/* implicit */int) (unsigned char)97)) : (((/* implicit */int) (signed char)-57))));
    }
    var_28 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_10) : (((/* implicit */unsigned long long int) -1661523419))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) 8081439849516184304ULL)))))) : (min((1463589511986658059ULL), (7115293698754082656ULL)))))));
}

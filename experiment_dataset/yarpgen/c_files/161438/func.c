/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161438
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
    var_19 += ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)18)) ? (((/* implicit */int) (short)27056)) : (((/* implicit */int) (short)-8410))))) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) 3601759401U)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (signed char)-93)))))) >= (((/* implicit */int) (signed char)-3))));
    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (signed char)94))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (long long int i_2 = 3; i_2 < 22; i_2 += 1) /* same iter space */
                {
                    arr_8 [i_2] [i_1] [i_1] [13U] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned short)5280)) : (((/* implicit */int) var_7))))) : (min((((/* implicit */unsigned int) arr_1 [i_0])), (var_1))))) > (((/* implicit */unsigned int) ((/* implicit */int) max((var_7), (((var_4) < (((/* implicit */long long int) var_12))))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned long long int) ((signed char) arr_1 [i_1]));
                                arr_15 [0] [20U] [i_2 - 2] [i_2 - 2] [20U] [i_0] &= ((/* implicit */long long int) min((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 1493335258U)))) : (var_1))), (((/* implicit */unsigned int) var_6))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2365831520U)) ? (((/* implicit */long long int) var_11)) : (var_4)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)86))) < (arr_9 [(signed char)7] [(signed char)7] [i_0]))))) : (var_12)))) >= (var_13)));
                }
                /* vectorizable */
                for (long long int i_5 = 3; i_5 < 22; i_5 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_6 = 4; i_6 < 20; i_6 += 1) 
                    {
                        var_22 += ((/* implicit */signed char) (~(((/* implicit */int) (short)-27056))));
                        var_23 = ((/* implicit */unsigned int) ((((int) var_14)) == (((/* implicit */int) (unsigned char)0))));
                    }
                    var_24 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (arr_11 [i_5 - 2] [i_1] [i_1] [i_1] [i_1] [i_0 + 1] [i_0]) : (arr_11 [11LL] [(unsigned char)5] [i_5] [i_0 + 1] [i_1] [i_0 + 1] [(unsigned char)5])));
                    var_25 = (+(var_5));
                }
                for (unsigned int i_7 = 4; i_7 < 20; i_7 += 3) 
                {
                    var_26 = ((/* implicit */unsigned long long int) min((var_26), (arr_23 [i_7 - 2] [i_7] [(unsigned short)0] [i_0 - 1] [i_0])));
                    arr_26 [i_0] [i_1] [i_7 + 1] [i_1] = ((/* implicit */short) ((var_7) || (min((((arr_3 [i_1] [i_1]) <= (((/* implicit */long long int) 4294967290U)))), (((var_0) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))));
                    var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_11 [13U] [13U] [11] [13U] [i_7] [13U] [i_7])) ? (((/* implicit */int) (signed char)119)) : (((/* implicit */int) (short)-8400)))) << ((((-(var_12))) - (2945798689U)))))) ? (min((((((/* implicit */_Bool) (short)9664)) ? (arr_9 [0U] [17ULL] [0U]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)92))))), (((/* implicit */unsigned long long int) var_16)))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */int) var_3)) & (((/* implicit */int) (unsigned char)243))))), (((long long int) var_8)))))));
                }
                arr_27 [i_0] [i_1] [(unsigned char)20] = ((/* implicit */unsigned char) (+((+(arr_21 [i_0 + 1] [i_1] [i_0 + 1] [i_0 - 1])))));
                arr_28 [(unsigned char)0] [i_1] [(unsigned char)0] = ((/* implicit */short) ((var_13) < (((/* implicit */unsigned long long int) (~(min((var_1), (arr_22 [i_0] [i_1] [i_1] [i_0 + 1] [i_1]))))))));
            }
        } 
    } 
    var_28 += ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)13)) : (((/* implicit */int) (unsigned char)12))))) ? (((/* implicit */unsigned int) ((var_7) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_7))))) : (max((((/* implicit */unsigned int) (short)-8408)), (var_14)))))), ((((+(var_0))) + (((/* implicit */unsigned long long int) ((var_7) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)28)))))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153913
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
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_13))))) * (((((/* implicit */_Bool) var_13)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
    var_19 = ((((/* implicit */_Bool) max((((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)65535)), (var_14)))), (((((/* implicit */_Bool) 70368744177663LL)) ? (-70368744177664LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))))))) ? (((var_11) & (((/* implicit */unsigned int) ((((/* implicit */int) var_13)) ^ (((/* implicit */int) var_5))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_17))));
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) arr_0 [i_0 - 1]);
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            var_20 = ((/* implicit */unsigned char) arr_4 [i_0 - 1] [i_1]);
            /* LoopSeq 2 */
            for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_1)))))) == ((-(((unsigned int) arr_1 [i_0]))))));
                arr_9 [i_0] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (+(arr_1 [i_0])))) ? (((((/* implicit */int) (unsigned short)0)) + ((-2147483647 - 1)))) : (((/* implicit */int) arr_4 [i_0 + 1] [i_1])))) + (((((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) arr_0 [i_2]))))) - (((/* implicit */int) arr_6 [i_0 - 2] [i_0 + 1] [i_0 - 2] [(short)11]))))));
                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */int) min(((unsigned short)65535), ((unsigned short)0)))) * ((((~(((/* implicit */int) (short)0)))) & (((/* implicit */int) ((unsigned short) (unsigned short)0))))))))));
                var_23 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) arr_8 [i_0 - 1]))) ? (arr_1 [i_0 - 1]) : (((/* implicit */unsigned int) var_16))));
                var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) arr_0 [i_0 - 2])) : (((/* implicit */int) arr_0 [i_0 + 1]))))) ? (min((((/* implicit */unsigned long long int) ((long long int) (unsigned char)127))), (max((var_10), (((/* implicit */unsigned long long int) arr_8 [i_0])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0])))));
            }
            for (unsigned short i_3 = 2; i_3 < 19; i_3 += 2) 
            {
                arr_14 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_1] [i_0])) - (((((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned char)255)))) - (((/* implicit */int) (signed char)-1))))));
                arr_15 [i_0] [i_0] [i_1] [i_3] = ((/* implicit */unsigned char) (~(max((4294967295U), (((/* implicit */unsigned int) (unsigned short)65535))))));
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 20; i_4 += 4) 
                {
                    for (long long int i_5 = 4; i_5 < 18; i_5 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */short) arr_6 [i_0] [i_0 - 2] [i_0] [i_0 - 2]);
                            var_26 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2096128))));
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) (signed char)-64))) - (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)32752)))))));
                            arr_23 [i_0 + 1] [i_1] [i_3] [i_4] [i_5] [i_5] = ((/* implicit */signed char) (+(min((((/* implicit */unsigned int) arr_20 [(signed char)6] [i_0] [i_0] [i_0] [i_0 - 2] [i_5 + 2] [i_5])), (var_14)))));
                        }
                    } 
                } 
            }
            /* LoopNest 3 */
            for (unsigned char i_6 = 1; i_6 < 17; i_6 += 3) 
            {
                for (signed char i_7 = 2; i_7 < 17; i_7 += 4) 
                {
                    for (unsigned short i_8 = 0; i_8 < 20; i_8 += 1) 
                    {
                        {
                            var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) arr_11 [i_6 + 3] [i_0 + 1]))));
                            var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0 - 2]))) | (((((/* implicit */_Bool) arr_22 [i_0] [i_0] [(unsigned char)1] [i_6] [i_6] [i_7 + 2] [(unsigned char)1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_6 - 1] [i_1]))) : (9222809086901354496LL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [7U] [i_6 - 1])) ? (arr_12 [i_0] [i_0 - 2]) : (arr_12 [i_0 + 1] [i_1])))) : (((((arr_2 [i_6 + 1]) << (((var_11) - (4277331284U))))) | (((/* implicit */unsigned long long int) 2096128)))))))));
                            var_30 = ((/* implicit */short) ((((/* implicit */long long int) min((((/* implicit */int) (unsigned short)65535)), (arr_22 [i_0 + 1] [i_0 - 2] [i_0 - 1] [i_0 - 1] [i_0 - 2] [i_6 + 2] [i_7 - 2])))) | (max((-9222809086901354497LL), (9222809086901354497LL)))));
                            arr_32 [i_6] = ((/* implicit */unsigned int) min(((unsigned short)0), ((unsigned short)65535)));
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_9 = 3; i_9 < 19; i_9 += 3) 
        {
            var_31 = ((/* implicit */signed char) (~(max((((/* implicit */unsigned int) arr_20 [i_0 + 1] [i_0 + 1] [i_9] [i_9 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 1])), (((16515072U) & (((/* implicit */unsigned int) arr_34 [i_0]))))))));
            arr_36 [i_0 - 1] = ((/* implicit */_Bool) ((unsigned char) (unsigned short)65535));
            var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) ((signed char) 9222809086901354496LL)))));
            var_33 ^= ((/* implicit */short) ((((arr_31 [i_0 - 1] [i_9 + 1] [i_9 + 1] [i_9 - 1] [i_9 - 1] [i_9]) < (((long long int) 70368744177663LL)))) || (((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_9 - 2] [i_9] [i_9 + 1])) && (((/* implicit */_Bool) arr_6 [i_0 + 1] [i_9 - 1] [i_9 - 1] [i_9 - 3]))))));
        }
        var_34 *= ((/* implicit */unsigned short) ((((/* implicit */int) min((((/* implicit */short) ((((/* implicit */int) (signed char)-2)) > (((/* implicit */int) (unsigned short)0))))), (arr_17 [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 2] [i_0 + 1])))) | (((/* implicit */int) min((arr_28 [i_0 - 2] [i_0 + 1] [i_0] [i_0 - 1]), (arr_28 [i_0 - 1] [i_0 - 2] [i_0 - 2] [i_0 - 2]))))));
    }
    var_35 = ((/* implicit */unsigned long long int) ((long long int) (~(((/* implicit */int) var_5)))));
}

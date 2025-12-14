/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137619
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
    var_10 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8)))))) ? (((/* implicit */int) var_5)) : (((((((/* implicit */unsigned int) ((/* implicit */int) var_0))) >= (var_4))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((short) var_7)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 11; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) min((min(((unsigned char)0), (((/* implicit */unsigned char) arr_2 [i_1] [i_1 + 1] [i_1])))), (((/* implicit */unsigned char) min((arr_2 [2U] [i_1 - 1] [i_1]), (arr_2 [i_1] [i_1 + 1] [(short)0])))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 11; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned char i_4 = 0; i_4 < 12; i_4 += 1) 
                            {
                                arr_13 [i_0] [i_0] |= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_12 [i_1 - 1] [i_2 - 1] [i_2 - 1])) ? ((+(((/* implicit */int) var_9)))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)255)))))), (((((/* implicit */_Bool) arr_2 [i_2 - 1] [i_2 - 1] [(short)11])) ? (((/* implicit */int) arr_2 [i_2 - 1] [i_2] [0U])) : (((/* implicit */int) arr_2 [i_2 + 1] [(signed char)4] [i_3]))))));
                                var_12 ^= ((/* implicit */int) (!(((/* implicit */_Bool) ((int) var_5)))));
                                var_13 = ((/* implicit */short) ((int) (+(arr_10 [i_1 - 3] [i_3] [i_3] [i_4] [i_1 - 3] [i_4]))));
                                var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)1))))), (((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [2U] [i_3] [i_1 - 2] [2U] [i_3] [i_4]))) : (var_7)))))) ? (((((/* implicit */_Bool) arr_9 [i_1])) ? (16535472795178004680ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [(unsigned char)8])))))))) : (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_4 [i_1] [(short)8] [(short)11] [i_1])) ? (((/* implicit */int) (unsigned char)20)) : (((/* implicit */int) (unsigned short)17870))))))))))));
                            }
                            /* LoopSeq 2 */
                            for (unsigned char i_5 = 3; i_5 < 9; i_5 += 2) 
                            {
                                arr_16 [i_0] [i_1 - 2] [i_2 - 1] [i_3] [i_1 - 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) min((var_1), (((/* implicit */unsigned int) arr_8 [i_0] [4LL] [i_2] [4LL] [i_5 - 3]))))) : (min((15371350113339352012ULL), (((/* implicit */unsigned long long int) (unsigned char)255))))))) ? (((unsigned long long int) (((_Bool)0) ? (13038407631983932389ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_8 [i_1] [i_1] [i_1 - 3] [i_2 + 1] [i_3]))))));
                                arr_17 [i_0] [(signed char)6] [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_8 [i_1 - 1] [5U] [i_2 + 1] [i_2] [i_5 + 1])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_1 + 1] [i_1 + 1] [i_2 + 1] [i_1 + 1] [i_5 + 1])) ? (arr_8 [i_1 - 3] [i_1] [i_2 + 1] [i_1] [i_5 - 3]) : (arr_8 [i_1 - 1] [i_1] [i_2 - 1] [i_1] [i_5 - 3])))) : (((long long int) arr_8 [i_1 - 1] [i_2] [i_2 - 1] [i_2] [i_5 - 3]))));
                            }
                            for (signed char i_6 = 1; i_6 < 11; i_6 += 3) 
                            {
                                var_15 = ((/* implicit */unsigned int) ((int) 13038407631983932389ULL));
                                var_16 = ((/* implicit */unsigned short) (+(((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_1]))))) >> (((max((arr_20 [i_1]), (((/* implicit */unsigned int) (unsigned char)0)))) - (2682986750U)))))));
                                var_17 ^= ((/* implicit */unsigned int) arr_19 [i_0] [i_1 - 1] [i_2] [i_3] [i_1 - 1] [i_6] [i_6]);
                            }
                            arr_21 [i_0] [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) (-((-(arr_8 [i_1 + 1] [i_2 - 1] [(short)7] [i_3] [i_3])))));
                        }
                    } 
                } 
                arr_22 [i_1] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_1 [(unsigned char)2])) ? (((/* implicit */int) ((unsigned char) var_0))) : ((+(((/* implicit */int) (unsigned char)255)))))), (((((/* implicit */_Bool) min((var_7), (arr_14 [i_0] [i_0] [i_0] [i_1] [i_0] [i_1])))) ? (((/* implicit */int) arr_7 [2LL] [i_1 - 1] [i_1] [i_1] [i_1 + 1] [i_1])) : (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)246)), (var_2))))))));
                var_18 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((short) (short)-2469))), (((unsigned int) ((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)112)))))));
            }
        } 
    } 
    var_19 |= ((/* implicit */unsigned long long int) min(((~((+(var_7))))), (((/* implicit */long long int) ((unsigned char) ((var_7) / (((/* implicit */long long int) var_4))))))));
    var_20 -= ((/* implicit */signed char) ((((/* implicit */int) ((short) (+(3141126737U))))) | (((/* implicit */int) ((unsigned char) (-(0U)))))));
    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) min((max(((~(10961302045501032643ULL))), (((/* implicit */unsigned long long int) ((signed char) 4294967295U))))), (((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned short) var_5)), ((unsigned short)3904))), (max((var_3), (var_2)))))))))));
}

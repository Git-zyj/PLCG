/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122054
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
    var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) 3116377459243848328LL)) ? (((((/* implicit */_Bool) (unsigned short)127)) ? (16007818386721190526ULL) : (var_3))) : (((/* implicit */unsigned long long int) -3331582599786287360LL)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 3; i_2 < 22; i_2 += 2) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned char) (signed char)-105);
                            var_15 = ((/* implicit */_Bool) ((min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [(signed char)0] [i_2]))) : (arr_4 [9U] [i_1])))), (3331582599786287352LL))) + (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_2] [i_2 - 1] [i_2 - 2] [i_2 - 1] [i_2] [i_2])) ? (((/* implicit */int) (!((_Bool)1)))) : (((((/* implicit */_Bool) -3331582599786287360LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-27)))))))));
                            var_16 -= ((/* implicit */signed char) ((max((((((/* implicit */_Bool) 6725794837948234776LL)) ? (var_2) : (var_9))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)29))))))) << (((((((/* implicit */_Bool) var_4)) ? (((-8590629736908247193LL) | (((/* implicit */long long int) ((/* implicit */int) var_11))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))) + (8590629736908197933LL)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_4 = 1; i_4 < 19; i_4 += 2) 
                {
                    for (signed char i_5 = 0; i_5 < 23; i_5 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_12))));
                            var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) (unsigned char)188))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_6 = 3; i_6 < 10; i_6 += 3) 
    {
        arr_18 [i_6] = ((/* implicit */_Bool) max((((((((/* implicit */int) (unsigned char)67)) <= (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */unsigned long long int) arr_17 [i_6 - 3])) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (var_3))))), (((((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), (arr_6 [6] [6] [i_6])))) ? (min((((/* implicit */unsigned long long int) var_6)), (10833971492920526271ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)83)), ((unsigned short)6211)))))))));
        arr_19 [i_6 - 1] [i_6] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_12)), (max((((var_3) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))), (((/* implicit */unsigned long long int) var_11))))));
    }
    var_19 ^= ((/* implicit */short) ((((/* implicit */_Bool) 16556853586903705632ULL)) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) (signed char)-32)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)34037))))))) : (var_3)));
}

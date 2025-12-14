/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126463
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                arr_6 [6] [(short)5] = ((/* implicit */unsigned int) var_6);
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 8; i_2 += 4) 
                {
                    for (int i_3 = 1; i_3 < 6; i_3 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned char) min((max((arr_10 [6ULL] [i_2 + 2] [i_2 + 1] [i_3 - 1]), (arr_10 [i_0] [i_2 + 2] [0ULL] [i_3 + 1]))), (((((/* implicit */_Bool) arr_10 [i_0] [i_2 + 1] [i_2 + 2] [i_3 + 1])) ? (arr_10 [(signed char)6] [i_2 + 2] [i_2 - 1] [i_3 + 2]) : (arr_10 [i_0] [i_2 - 1] [i_2 + 1] [i_3 - 1])))));
                            var_19 &= ((/* implicit */int) 8730133255209349088LL);
                            arr_14 [(signed char)9] [i_1] [(unsigned short)9] [i_2] [i_3 + 1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_1 [i_1])) <= ((-((+(arr_11 [i_0])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_4 = 2; i_4 < 14; i_4 += 4) 
    {
        for (long long int i_5 = 1; i_5 < 14; i_5 += 2) 
        {
            {
                arr_20 [15] [(signed char)0] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_16 [i_5 - 1])) - (2147483634))) < ((+(((/* implicit */int) max((((/* implicit */unsigned short) arr_15 [12U])), (arr_18 [i_4 + 1] [i_5 + 1]))))))));
                /* LoopNest 2 */
                for (unsigned short i_6 = 1; i_6 < 12; i_6 += 1) 
                {
                    for (unsigned int i_7 = 0; i_7 < 16; i_7 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_4 + 2])))))));
                            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_26 [i_7] [i_6 + 2] [i_5 + 1] [i_4 - 1]))))))))));
                            arr_27 [(signed char)2] [i_5 + 2] [i_4] [i_5 + 2] &= ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_18 [i_5 + 2] [i_7])) > (((/* implicit */int) arr_18 [(unsigned short)9] [(_Bool)1])))))) < (arr_17 [i_4 + 2]))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_22 [i_6 + 1] [i_6 + 4] [i_6 + 1] [i_6 + 1])), (((((/* implicit */int) arr_19 [(unsigned char)14] [i_7])) | (((/* implicit */int) (_Bool)1))))))) : (arr_17 [(unsigned char)9])));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned char)0)) ? (var_14) : (((/* implicit */long long int) (~(-1430720097)))))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) < (var_13)))) : (698915322))))));
}

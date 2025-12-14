/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171047
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
    var_19 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9))));
    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (-((~(((/* implicit */int) var_13)))))))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 4; i_4 < 16; i_4 += 3) 
                        {
                            {
                                arr_12 [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_4 - 1])) ? (((((/* implicit */_Bool) arr_6 [i_1 + 1] [i_4 - 3] [4] [i_3])) ? (((/* implicit */int) arr_6 [i_1 - 1] [i_4 - 2] [i_2] [(unsigned char)12])) : (((/* implicit */int) arr_6 [i_1 + 1] [i_4 - 3] [i_1 + 1] [i_4 - 3])))) : (((((/* implicit */_Bool) arr_1 [i_4 + 1])) ? (((/* implicit */int) arr_1 [i_4 + 1])) : (((/* implicit */int) arr_1 [i_4 + 1]))))));
                                var_21 &= ((/* implicit */int) max((((((/* implicit */_Bool) arr_4 [i_0 + 2] [i_0 + 3] [i_0 + 3])) ? (arr_4 [i_0 + 3] [i_0 + 1] [i_0 + 1]) : (arr_4 [i_0 - 1] [i_0 - 2] [13U]))), (((/* implicit */long long int) min(((+(var_18))), (((/* implicit */int) arr_11 [(unsigned char)8] [i_4] [i_4 - 1] [i_4] [i_3])))))));
                                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_3] [i_3] [i_2] [i_0 - 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_12))))) ? (((/* implicit */unsigned long long int) arr_10 [i_4 - 2] [i_4] [i_1] [i_1 + 1] [i_0 - 1])) : ((-(arr_2 [i_0] [i_1] [i_3])))))) ? (((/* implicit */unsigned long long int) (-(arr_10 [i_1 + 1] [i_4] [i_1 + 1] [4ULL] [8U])))) : (max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)91))) - (arr_9 [i_1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16708914776556310732ULL)) ? (arr_4 [(_Bool)1] [i_1] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-17))))))))));
                                arr_13 [i_4] [1U] [i_4] [i_4] [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_6 [i_4] [i_1 + 1] [i_3] [i_3]))));
                            }
                        } 
                    } 
                } 
                var_23 -= ((/* implicit */unsigned int) (+(max((2944952099509746643ULL), (((/* implicit */unsigned long long int) (unsigned char)187))))));
                arr_14 [i_0 + 1] [i_0 + 2] [13U] = ((/* implicit */unsigned int) ((((unsigned long long int) arr_9 [i_0 - 2])) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0 + 2])) ? (((/* implicit */int) arr_7 [i_1 - 1] [i_1] [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) arr_7 [(unsigned char)15] [i_1 - 1] [i_1 + 1] [i_1 + 1])))))));
                /* LoopNest 2 */
                for (unsigned char i_5 = 2; i_5 < 13; i_5 += 2) 
                {
                    for (signed char i_6 = 0; i_6 < 17; i_6 += 2) 
                    {
                        {
                            arr_20 [i_0 + 2] [i_0 + 3] [i_5 + 2] [i_6] = ((/* implicit */unsigned char) (+(max((((((((/* implicit */int) (short)-27213)) + (2147483647))) >> (((((/* implicit */int) arr_6 [i_0] [10U] [(_Bool)1] [i_0 + 1])) - (9712))))), (((/* implicit */int) (unsigned char)194))))));
                            arr_21 [(unsigned char)6] = ((/* implicit */long long int) var_6);
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) ^ (3238067014U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_11), (var_9))))) : (max((var_5), (((/* implicit */unsigned long long int) var_18)))))) >= (((var_6) ? (min((((/* implicit */unsigned long long int) var_1)), (var_5))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_5))))))))));
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 24; i_7 += 3) 
    {
        for (unsigned int i_8 = 0; i_8 < 24; i_8 += 3) 
        {
            for (unsigned short i_9 = 0; i_9 < 24; i_9 += 3) 
            {
                {
                    var_25 = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_7] [i_7] [i_7])) ? (var_15) : (((/* implicit */unsigned long long int) arr_26 [i_8]))))) ? (((((/* implicit */_Bool) (unsigned char)76)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (8010728821202393468LL))) : (arr_23 [i_7]))), (((/* implicit */long long int) max(((+(3601385575U))), (((/* implicit */unsigned int) arr_30 [i_7] [i_7] [i_9] [17ULL])))))));
                    var_26 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 260046848U)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_24 [10LL]))))))) + ((((+(arr_22 [i_9] [(unsigned char)14]))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_7])) ? (arr_25 [i_7]) : (((/* implicit */int) arr_30 [19U] [i_7] [i_9] [i_9])))))))));
                }
            } 
        } 
    } 
}

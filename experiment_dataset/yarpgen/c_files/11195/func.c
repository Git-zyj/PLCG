/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11195
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 19; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_18 ^= ((/* implicit */signed char) min((((((/* implicit */_Bool) ((short) arr_12 [i_0] [i_0] [i_0] [i_4] [i_0] [i_0]))) ? (min((((/* implicit */unsigned long long int) arr_0 [i_1] [i_3])), (var_5))) : (((((/* implicit */_Bool) -24)) ? (18446744073709551588ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65515))))))), (((/* implicit */unsigned long long int) ((_Bool) (~(var_13)))))));
                                var_19 = ((/* implicit */unsigned char) (~((~(max((arr_8 [i_0] [i_1] [i_1] [i_4]), (var_7)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 21; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 21; i_6 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) min((max((min((((/* implicit */unsigned long long int) arr_7 [i_1] [(unsigned short)8])), (var_5))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)224))))))), (((/* implicit */unsigned long long int) ((long long int) ((unsigned int) arr_11 [3U] [i_1] [i_2] [i_0] [i_6]))))));
                                arr_17 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */int) (+(max((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (2147483635) : (((/* implicit */int) (_Bool)1))))), (max((9LL), (((/* implicit */long long int) var_12))))))));
                                var_21 = ((/* implicit */long long int) ((unsigned short) (~((-(((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))))));
                                arr_18 [i_0] [i_2] [i_6] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((unsigned short) var_2))) ? (((unsigned int) -1)) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_13)))))), (((/* implicit */unsigned int) ((signed char) min((((/* implicit */unsigned short) var_17)), (arr_3 [i_0] [i_0] [i_0])))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) max((arr_1 [i_0] [i_1]), (((/* implicit */unsigned char) var_17))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)18))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)34))) : (-1LL))))));
                }
            } 
        } 
    } 
    var_23 = (-(((((/* implicit */_Bool) (~(22LL)))) ? (min((((/* implicit */long long int) (unsigned short)65535)), (7LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_3))))))));
    /* LoopNest 3 */
    for (signed char i_7 = 4; i_7 < 13; i_7 += 1) 
    {
        for (unsigned short i_8 = 0; i_8 < 14; i_8 += 4) 
        {
            for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 4; i_10 < 13; i_10 += 1) 
                    {
                        for (short i_11 = 0; i_11 < 14; i_11 += 4) 
                        {
                            {
                                arr_33 [i_7 + 1] [i_7] [(signed char)0] [i_7] [i_7 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (arr_20 [i_7])))))) ? ((~(((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)3))) : (var_13))))) : (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_7 [i_7] [i_7])) : (var_2))))))));
                                arr_34 [i_11] [i_8] [(short)12] [i_8] |= ((/* implicit */unsigned long long int) ((_Bool) ((short) (+(((/* implicit */int) (_Bool)1))))));
                                var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_5 [i_7 + 1] [i_7 + 1] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7))) : (arr_20 [i_8]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((short) arr_16 [i_7] [i_8] [i_9] [i_10] [i_11]))))) : ((-((+(18446744073709551615ULL))))))))));
                            }
                        } 
                    } 
                    arr_35 [i_7] = ((/* implicit */unsigned short) ((unsigned int) ((signed char) ((unsigned short) 8935141660703064064LL))));
                    var_25 = ((/* implicit */long long int) ((unsigned char) max((((int) 5LL)), (((/* implicit */int) (signed char)-122)))));
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned long long int) var_4))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)32736))))))));
    var_27 = ((/* implicit */short) ((unsigned short) (~(min((var_11), (((/* implicit */unsigned long long int) var_0)))))));
}

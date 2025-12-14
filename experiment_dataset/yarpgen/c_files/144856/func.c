/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144856
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
    var_15 = ((/* implicit */unsigned short) ((_Bool) (~(min((5898277726935279369ULL), (((/* implicit */unsigned long long int) (unsigned short)511)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 15; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        {
                            arr_11 [i_2] [i_2] [i_2] [i_2] [i_1] [i_1] = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_3 [i_2 - 1])) ? (((/* implicit */int) (unsigned short)65042)) : (((/* implicit */int) (unsigned short)24310))))));
                            var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) (~(min((((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (unsigned short)65025)) : (((/* implicit */int) (unsigned short)511)))), (((/* implicit */int) var_14)))))))));
                            var_17 = ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_4 [i_0])), (arr_2 [i_1] [i_1])))) || (((/* implicit */_Bool) arr_2 [i_2 + 1] [i_2 + 1]))))), (((((/* implicit */_Bool) -7959544664050773574LL)) ? (((/* implicit */int) (unsigned short)65024)) : (((/* implicit */int) (unsigned char)237))))));
                        }
                    } 
                } 
                /* LoopSeq 4 */
                for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 2) 
                {
                    arr_15 [i_0] [i_1] = ((/* implicit */unsigned int) ((((_Bool) arr_3 [i_1])) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_12)), (arr_3 [i_1])))) : ((+(((/* implicit */int) arr_1 [i_1]))))));
                    arr_16 [i_1] [i_1] = (~(((/* implicit */int) (unsigned short)65025)));
                    arr_17 [i_0] [i_0] [i_1] [i_4] = ((/* implicit */unsigned int) max((max((((((/* implicit */int) arr_0 [i_4] [i_0])) & (var_8))), (((/* implicit */int) arr_7 [i_4])))), (min(((+(((/* implicit */int) var_7)))), ((+(((/* implicit */int) var_11))))))));
                    var_18 ^= ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_13)) : ((~(((/* implicit */int) arr_10 [i_4] [i_1] [i_1] [i_4])))))));
                }
                for (int i_5 = 1; i_5 < 16; i_5 += 4) 
                {
                    arr_20 [i_0] [i_1] [i_5] = ((/* implicit */long long int) (+((~((~(((/* implicit */int) var_1))))))));
                    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) arr_9 [i_1] [i_0] [i_0] [i_0] [i_1]))) ? (arr_19 [i_1]) : (((((_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned long long int) (~(arr_2 [i_0] [i_0])))) : (((arr_13 [i_0] [i_0] [i_0] [i_0]) + (var_5))))))))));
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 13; i_6 += 3) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 17; i_7 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)33005))));
                                var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_7] [i_7] [i_7])) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_14)) : (var_8)))) ? (((/* implicit */int) max(((unsigned short)19025), ((unsigned short)532)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_7 [i_7])) : (((/* implicit */int) (unsigned short)32530))))))));
                                arr_25 [i_7] [i_0] [i_7] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((long long int) ((_Bool) var_12)));
                                var_22 = ((/* implicit */unsigned char) var_9);
                            }
                        } 
                    } 
                }
                for (unsigned short i_8 = 0; i_8 < 17; i_8 += 2) 
                {
                    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (~(((((/* implicit */_Bool) arr_10 [i_1] [i_8] [i_8] [i_8])) ? (((/* implicit */long long int) ((((/* implicit */int) var_9)) + (((/* implicit */int) var_12))))) : (min((arr_2 [i_1] [i_8]), (((/* implicit */long long int) var_0)))))))))));
                    var_24 = ((/* implicit */short) ((unsigned long long int) (unsigned short)65033));
                    arr_28 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((unsigned short)1525), (((/* implicit */unsigned short) (signed char)-76))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_14))))) : (min((arr_13 [i_1] [i_1] [i_8] [i_8]), (arr_13 [i_8] [i_1] [i_0] [i_0])))));
                }
                for (signed char i_9 = 0; i_9 < 17; i_9 += 4) 
                {
                    var_25 -= ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_12 [i_0] [i_1] [i_9])) : (((/* implicit */int) arr_12 [i_9] [i_1] [i_0])))), (((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_14 [i_0] [i_1] [i_0] [i_1])) : (((/* implicit */int) arr_14 [i_0] [i_0] [i_1] [i_9]))))));
                    arr_32 [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */long long int) (~(((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_1] [i_1] [i_9]))))), (min((((long long int) arr_10 [i_1] [i_1] [i_1] [i_9])), (((/* implicit */long long int) ((((/* implicit */int) var_12)) != (((/* implicit */int) (unsigned short)32530)))))))));
                }
            }
        } 
    } 
    var_26 = ((/* implicit */long long int) max((((/* implicit */unsigned short) (short)8828)), ((unsigned short)1525)));
}

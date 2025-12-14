/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138621
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) max((var_13), (((/* implicit */unsigned long long int) (_Bool)1))))))) <= (max((((/* implicit */long long int) var_6)), (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (3200893010941529969LL)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 1586444926U)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_16))))))) ^ (((unsigned int) (-(arr_3 [i_0]))))));
                var_20 ^= ((/* implicit */short) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_1] [i_1])) && (((/* implicit */_Bool) arr_2 [i_0] [i_1]))))), ((unsigned char)198)));
                var_21 = ((((arr_1 [i_0]) % (arr_1 [i_0]))) + (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) / (((/* implicit */int) (unsigned short)34468))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) 
    {
        for (unsigned int i_3 = 0; i_3 < 25; i_3 += 3) 
        {
            for (short i_4 = 0; i_4 < 25; i_4 += 2) 
            {
                {
                    arr_14 [i_2] [i_2] [i_4] [i_4] &= ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) var_8)) > (arr_12 [i_4] [i_4] [i_3] [i_2]))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_2] [i_3] [i_4] [i_4])) && (((/* implicit */_Bool) var_15))))) : (((/* implicit */int) ((((/* implicit */long long int) arr_1 [i_3])) > (3200893010941529969LL))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        arr_18 [i_5] [i_4] [i_3] [i_3] [i_3] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? (((((/* implicit */_Bool) 334245212U)) ? (((/* implicit */unsigned long long int) 2649112754775762898LL)) : (11496978282598154611ULL))) : (((/* implicit */unsigned long long int) 9U))));
                        var_22 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 662341331U)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_5))))) : (arr_1 [i_4])));
                        arr_19 [i_3] [i_3] [i_4] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_16))))) ? ((-(var_10))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)2)))));
                    }
                    var_23 -= ((/* implicit */_Bool) (-(var_12)));
                    /* LoopSeq 2 */
                    for (short i_6 = 0; i_6 < 25; i_6 += 3) 
                    {
                        arr_22 [i_2] [(signed char)2] [i_4] [i_3] = ((/* implicit */unsigned int) ((signed char) (~(((/* implicit */int) (signed char)-23)))));
                        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) max((((/* implicit */int) ((((((/* implicit */int) var_14)) % (((/* implicit */int) var_5)))) != (((/* implicit */int) max((var_9), (((/* implicit */short) arr_2 [(_Bool)1] [(_Bool)1])))))))), (((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) (_Bool)1)) : ((-(((/* implicit */int) var_0)))))))))));
                        var_25 = ((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-23)), ((unsigned char)255)))) % (((/* implicit */int) var_9))));
                    }
                    /* vectorizable */
                    for (unsigned char i_7 = 1; i_7 < 23; i_7 += 1) 
                    {
                        var_26 -= ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5)))));
                        arr_25 [i_2] [i_3] [i_2] [(unsigned short)7] = ((/* implicit */_Bool) -3200893010941529971LL);
                        arr_26 [i_3] [i_4] [i_3] [i_3] [i_3] = ((/* implicit */int) ((arr_11 [i_3] [i_7 - 1] [i_7 - 1] [i_7 + 2]) ^ (arr_10 [i_7 - 1])));
                    }
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */_Bool) (~(2649112754775762895LL)));
}

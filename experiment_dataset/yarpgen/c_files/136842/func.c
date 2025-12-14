/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136842
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
    var_12 -= ((/* implicit */unsigned short) min((((/* implicit */int) var_7)), (var_0)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        var_13 = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (((/* implicit */long long int) arr_0 [i_0 + 1])) : (arr_1 [i_0 - 2])));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -178169376)) ? (2147483647U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)56886)))));
            /* LoopNest 3 */
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                for (unsigned short i_3 = 3; i_3 < 8; i_3 += 3) 
                {
                    for (short i_4 = 1; i_4 < 7; i_4 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_13 [2] [2] [(short)10] [i_3 + 3] [i_4])) : (((/* implicit */int) (unsigned char)0)))));
                            var_16 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_4 - 1])) ? (((((/* implicit */_Bool) (unsigned short)36762)) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_2])) : (((/* implicit */int) var_7)))) : (var_0)));
                        }
                    } 
                } 
            } 
            var_17 += ((((/* implicit */_Bool) -2086822122)) ? (((/* implicit */unsigned int) -962684208)) : (3060015365U));
        }
        for (unsigned int i_5 = 0; i_5 < 11; i_5 += 1) 
        {
            arr_18 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) var_8))) ? (((((/* implicit */_Bool) arr_4 [i_0 - 2] [i_0] [i_0])) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned long long int) var_4))));
            var_18 ^= ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))));
            var_19 ^= ((/* implicit */long long int) var_11);
        }
        for (int i_6 = 2; i_6 < 10; i_6 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_7 = 1; i_7 < 8; i_7 += 3) 
            {
                var_20 = ((/* implicit */unsigned short) var_9);
                var_21 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (var_8) : (((/* implicit */unsigned long long int) var_4))));
            }
            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */_Bool) (signed char)-21)) ? (var_8) : (((/* implicit */unsigned long long int) var_3)))))));
        }
    }
}

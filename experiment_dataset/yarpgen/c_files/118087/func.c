/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118087
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
    for (long long int i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    for (short i_3 = 3; i_3 < 10; i_3 += 1) 
                    {
                        for (signed char i_4 = 1; i_4 < 9; i_4 += 4) 
                        {
                            {
                                var_16 ^= ((/* implicit */short) (+(((/* implicit */int) var_8))));
                                var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)7680)) ? (((/* implicit */int) arr_9 [i_0 - 3] [i_0 - 2] [i_0 - 3] [i_0 - 1] [i_0])) : (((/* implicit */int) arr_9 [6ULL] [i_0 + 1] [i_0] [i_0 - 3] [i_0 + 1]))))) ? (arr_3 [i_0 - 3]) : (((/* implicit */long long int) arr_8 [i_1] [i_3])));
                                var_18 = ((/* implicit */unsigned int) max((((/* implicit */int) var_3)), (((((/* implicit */_Bool) arr_4 [i_1] [i_4])) ? ((-(((/* implicit */int) arr_5 [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) 67108864U)))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (int i_5 = 4; i_5 < 10; i_5 += 1) 
                {
                    for (signed char i_6 = 0; i_6 < 11; i_6 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((unsigned long long int) ((((((/* implicit */_Bool) arr_3 [i_1])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) - (((/* implicit */long long int) ((arr_10 [i_0 - 2] [2LL] [i_5 - 1] [i_0 - 2]) - (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))))))));
                            arr_22 [(unsigned char)1] [i_5] [i_5] [i_6] = ((_Bool) (+(((/* implicit */int) arr_14 [i_0 + 1]))));
                            var_20 &= ((/* implicit */int) ((unsigned long long int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) ((_Bool) (unsigned short)17185))))));
                            var_21 &= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_15 [i_0 + 1] [i_0])) ? (((((/* implicit */_Bool) var_6)) ? (arr_20 [i_6] [i_5 - 2] [i_6]) : (((/* implicit */unsigned long long int) arr_8 [(_Bool)1] [i_6])))) : (((/* implicit */unsigned long long int) 283963300U))))));
                            var_22 = ((/* implicit */_Bool) (~(((/* implicit */int) var_10))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_7 = 0; i_7 < 11; i_7 += 1) 
                {
                    for (unsigned char i_8 = 0; i_8 < 11; i_8 += 3) 
                    {
                        {
                            var_23 *= max((-1LL), ((~(((long long int) var_9)))));
                            arr_28 [i_0] [i_0] [i_1] [i_7] [i_7] [i_8] = ((/* implicit */unsigned long long int) arr_2 [(short)7]);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_9 = 3; i_9 < 13; i_9 += 1) 
    {
        for (short i_10 = 0; i_10 < 16; i_10 += 3) 
        {
            {
                /* LoopNest 3 */
                for (short i_11 = 0; i_11 < 16; i_11 += 4) 
                {
                    for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                    {
                        for (unsigned long long int i_13 = 1; i_13 < 14; i_13 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_33 [i_9])) == (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) ((unsigned short) 3674547420620913311LL))) : (((/* implicit */int) arr_32 [i_9]))))));
                                arr_44 [i_11] &= ((/* implicit */short) ((((((/* implicit */_Bool) arr_39 [i_12 + 1] [i_13 - 1])) ? (arr_39 [i_12 + 1] [i_13 + 1]) : (var_6))) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_14 = 3; i_14 < 15; i_14 += 3) 
                {
                    for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                    {
                        for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
                        {
                            {
                                var_25 &= ((/* implicit */long long int) ((unsigned int) ((((((/* implicit */unsigned long long int) arr_39 [i_10] [i_16 + 1])) & (var_12))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_34 [6ULL])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)42))) : (var_6)))))));
                                var_26 = ((/* implicit */long long int) ((short) (~(((/* implicit */int) arr_45 [i_9 - 3] [i_14 - 1])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}

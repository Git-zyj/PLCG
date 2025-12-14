/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15690
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = (signed char)-93;
        arr_4 [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned int) max((var_1), (((/* implicit */int) var_9))))), (min((2147483647U), (((/* implicit */unsigned int) 784899389))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 17; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                arr_17 [i_4] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */signed char) max((min((0ULL), (((/* implicit */unsigned long long int) (unsigned short)16384)))), (((/* implicit */unsigned long long int) (~(((var_5) | (((/* implicit */int) (_Bool)1)))))))));
                                arr_18 [i_0] [i_1] [i_1] [i_0] [i_3] [i_0] = ((/* implicit */unsigned short) max((8315493757477367231LL), (((/* implicit */long long int) var_5))));
                            }
                        } 
                    } 
                    arr_19 [(signed char)15] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
    }
    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 3) 
    {
        var_14 ^= ((/* implicit */signed char) ((((((/* implicit */long long int) var_1)) & (max((((/* implicit */long long int) (unsigned char)190)), (-1138790517104440500LL))))) >> (((((((-784899390) + (2147483647))) << (((17293822569102704640ULL) - (17293822569102704640ULL))))) - (1362584250)))));
        var_15 = ((/* implicit */signed char) (((~(((((/* implicit */int) (unsigned char)255)) * (((/* implicit */int) (short)18254)))))) >= (((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1))))), ((unsigned char)15))))));
        var_16 = ((/* implicit */long long int) var_13);
        var_17 &= ((/* implicit */unsigned long long int) (-(((((/* implicit */int) (unsigned short)20877)) ^ (((/* implicit */int) (unsigned char)251))))));
    }
    var_18 = min((min(((~(((/* implicit */int) (unsigned char)217)))), ((~(((/* implicit */int) (_Bool)1)))))), ((-(((/* implicit */int) var_0)))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10516
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 2; i_2 < 21; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_12 = ((((/* implicit */_Bool) ((unsigned short) arr_5 [i_2 + 1] [i_0] [i_2]))) ? (((/* implicit */int) max(((!(((/* implicit */_Bool) var_11)))), ((!(((/* implicit */_Bool) arr_6 [i_0] [i_2] [i_0] [i_0]))))))) : (min((((/* implicit */int) (unsigned short)8317)), (2147483647))));
                            arr_9 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */signed char) ((long long int) min((arr_8 [i_2 - 2] [i_2] [i_2 + 2] [i_3]), (((/* implicit */unsigned short) (unsigned char)7)))));
                        }
                    } 
                } 
                var_13 = ((/* implicit */unsigned short) max((((2147483647) >> (((var_2) + (1539226238))))), (((/* implicit */int) var_3))));
                arr_10 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_7)))))) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_1])) : (((/* implicit */int) var_0))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_4 = 1; i_4 < 8; i_4 += 4) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            {
                arr_15 [i_5] = ((/* implicit */signed char) (short)31744);
                /* LoopSeq 1 */
                for (unsigned int i_6 = 0; i_6 < 11; i_6 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 11; i_7 += 2) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 11; i_8 += 4) 
                        {
                            {
                                arr_24 [i_8] [i_5] [i_6] [i_5] [i_4 + 2] = ((/* implicit */long long int) arr_2 [i_4 - 1]);
                                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)15936)) ? (9223090561878065152ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-62)))))) ? (((/* implicit */long long int) min((((/* implicit */int) ((unsigned char) var_0))), ((-(((/* implicit */int) (signed char)-63))))))) : (((long long int) 5899788881219020492LL))));
                                arr_25 [i_5] [i_7] [i_6] [i_5] [i_5] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1023U))));
                                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_23 [i_5] [i_8] [i_7] [i_7] [i_8] [i_5] [i_4])) ? (((/* implicit */int) min((min(((unsigned short)58808), (((/* implicit */unsigned short) (_Bool)1)))), (((/* implicit */unsigned short) var_8))))) : ((~(((/* implicit */int) var_0))))));
                            }
                        } 
                    } 
                    arr_26 [i_4] [i_5] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / ((+(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4541))) : (max((arr_7 [i_6] [i_5] [i_4 + 2] [i_4 + 3] [i_4]), (((/* implicit */unsigned long long int) (signed char)-64))))));
                }
                var_16 = ((/* implicit */signed char) min((((int) arr_0 [i_4])), (((/* implicit */int) arr_21 [i_5] [i_5] [i_4 + 2] [i_4] [i_5] [i_4] [i_4 + 3]))));
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)255))))) ? (min((((/* implicit */int) var_1)), ((+(((/* implicit */int) (unsigned char)128)))))) : (((/* implicit */int) min((var_8), (((/* implicit */signed char) var_4)))))));
    var_18 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_0))));
}

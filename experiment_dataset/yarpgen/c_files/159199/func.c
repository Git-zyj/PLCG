/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159199
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 2; i_2 < 22; i_2 += 1) 
                {
                    for (unsigned short i_3 = 2; i_3 < 22; i_3 += 4) 
                    {
                        {
                            var_14 -= ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned short) 12395920228274118809ULL)))));
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (int i_4 = 1; i_4 < 20; i_4 += 2) 
                            {
                                arr_14 [i_1] [(short)16] [i_4 + 3] |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_3 - 1] [i_4 - 1] [i_2 - 2])) ? (arr_6 [i_3 - 1] [i_4 - 1] [i_2 - 2]) : (arr_6 [i_3 - 1] [i_4 - 1] [i_2 - 2])));
                                var_15 = ((/* implicit */signed char) (((-(-6133727664095994483LL))) / (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2 - 1])))));
                                arr_15 [i_4] [i_2] = ((/* implicit */signed char) arr_10 [i_0] [i_1] [i_1] [i_3 - 2] [i_3] [i_4]);
                            }
                            for (unsigned char i_5 = 0; i_5 < 23; i_5 += 2) 
                            {
                                arr_18 [i_2] [i_1] = ((/* implicit */unsigned int) ((max((((((/* implicit */_Bool) arr_9 [i_3])) && (((/* implicit */_Bool) arr_5 [i_3])))), ((!(((/* implicit */_Bool) 12395920228274118809ULL)))))) && (((/* implicit */_Bool) arr_2 [i_0] [i_0]))));
                                var_16 += ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((var_2) + (var_2)))))))) | ((~((~(arr_11 [i_1] [i_2 - 2] [i_5])))))));
                            }
                            arr_19 [i_2] [i_2 + 1] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 6050823845435432809ULL))))) / (((/* implicit */int) (unsigned char)171))));
                            var_17 = ((unsigned short) var_13);
                        }
                    } 
                } 
                arr_20 [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((unsigned int) var_10)) < (((unsigned int) var_3)))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) var_12))) * (((/* implicit */int) (_Bool)0))));
}

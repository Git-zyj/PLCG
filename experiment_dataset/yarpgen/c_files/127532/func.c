/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127532
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
    var_11 ^= ((/* implicit */short) (!(((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) var_0))) - (var_5))) * (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))));
    var_12 = ((/* implicit */_Bool) (unsigned short)9);
    var_13 = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_14 = (_Bool)1;
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 10; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_2] [i_0] = (((-(((((/* implicit */int) var_0)) - (var_9))))) + ((+(((/* implicit */int) (_Bool)1)))));
                                var_15 = ((/* implicit */signed char) ((long long int) (_Bool)1));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (signed char i_5 = 3; i_5 < 12; i_5 += 1) 
                    {
                        var_16 ^= ((/* implicit */signed char) (_Bool)1);
                        arr_15 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) ((var_9) >= (((/* implicit */int) arr_10 [i_2] [i_2] [i_1] [i_1] [i_2]))))) != ((((~(((/* implicit */int) var_0)))) - (((((/* implicit */int) arr_2 [i_0] [i_1])) ^ (((/* implicit */int) arr_14 [i_0] [1ULL] [i_2] [i_2]))))))));
                    }
                    for (int i_6 = 3; i_6 < 12; i_6 += 3) 
                    {
                        arr_18 [i_0] [i_1] [i_2] [i_2] [(short)11] = ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))));
                        var_17 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)26))));
                    }
                }
                for (signed char i_7 = 0; i_7 < 14; i_7 += 3) 
                {
                    arr_21 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) -5604890151434738748LL);
                    var_18 ^= arr_4 [i_1] [i_1];
                    var_19 ^= ((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) (signed char)-28)))));
                    var_20 = var_6;
                    var_21 = ((/* implicit */unsigned int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]);
                }
                arr_22 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65501)) <= (((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
}

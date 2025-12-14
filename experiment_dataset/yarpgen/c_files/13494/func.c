/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13494
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (short)-21560)) <= (((/* implicit */int) (short)-19397))));
                /* LoopSeq 3 */
                for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */short) min((((/* implicit */unsigned long long int) min(((+(((/* implicit */int) arr_0 [i_0] [i_1])))), (((/* implicit */int) max((((/* implicit */short) arr_2 [i_0])), (var_6))))))), ((-(arr_9 [i_0] [i_1] [i_2])))));
                    var_12 = ((/* implicit */unsigned short) min((0LL), (((/* implicit */long long int) (_Bool)0))));
                    var_13 *= ((/* implicit */short) arr_7 [i_2] [i_1] [i_0]);
                }
                /* vectorizable */
                for (short i_3 = 2; i_3 < 23; i_3 += 1) /* same iter space */
                {
                    var_14 *= ((/* implicit */signed char) ((arr_4 [i_0] [i_1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32751)))));
                    /* LoopSeq 1 */
                    for (unsigned short i_4 = 4; i_4 < 23; i_4 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_5 = 1; i_5 < 23; i_5 += 1) 
                        {
                            arr_17 [i_0] [i_1] [i_3 - 1] [i_4] [i_5] [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4273959889U)) ? (((/* implicit */int) (short)32749)) : (((/* implicit */int) (signed char)-78))));
                            arr_18 [i_0] [i_1] [i_1] [i_1] [i_3] [i_4] [i_5] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) (short)-32750)) && (((/* implicit */_Bool) arr_13 [i_4] [i_1] [i_3] [i_5])))))));
                            var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_5])) ? (((/* implicit */int) ((var_10) > (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1])))))) : (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0]))));
                        }
                        for (unsigned char i_6 = 0; i_6 < 24; i_6 += 1) 
                        {
                            var_16 = ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) arr_11 [i_0] [i_1] [i_3 - 2])))));
                            var_17 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (var_10)));
                        }
                        for (signed char i_7 = 3; i_7 < 21; i_7 += 2) 
                        {
                            arr_23 [i_0] [i_1] [i_4] [i_7] = ((/* implicit */long long int) (+(((unsigned long long int) var_7))));
                            var_18 = ((/* implicit */short) ((unsigned short) arr_14 [i_0] [i_4] [i_4 - 4] [i_4]));
                        }
                        var_19 = ((/* implicit */short) (+((-(((/* implicit */int) (_Bool)1))))));
                    }
                    arr_24 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_15 [i_0] [i_0] [i_1] [i_3]))))) ? ((~(var_9))) : (((/* implicit */int) arr_14 [i_0] [i_1] [i_3] [i_3 - 1]))));
                }
                for (short i_8 = 2; i_8 < 23; i_8 += 1) /* same iter space */
                {
                    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) arr_25 [i_0] [i_0]))));
                    var_21 = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_8 - 1] [i_8] [i_8]))) <= (var_2))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-64))) : (min((((/* implicit */long long int) arr_7 [i_8 - 1] [i_8] [i_8])), (var_8)))));
                }
                var_22 = ((/* implicit */_Bool) (-(((/* implicit */int) (short)-32751))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) (((+(((/* implicit */int) (_Bool)1)))) / ((~(var_9)))))) : (((((/* implicit */_Bool) (unsigned short)1791)) ? (((/* implicit */long long int) 2879199536U)) : (-4241660054272444411LL)))));
    var_24 = ((/* implicit */long long int) (_Bool)1);
    var_25 = ((/* implicit */unsigned char) var_11);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126808
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
    var_15 *= ((/* implicit */unsigned long long int) (+(max((((/* implicit */int) (short)14279)), ((~(((/* implicit */int) (signed char)127))))))));
    var_16 &= ((/* implicit */unsigned char) (+((-(4294967285U)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                var_17 &= ((/* implicit */unsigned char) min(((~(arr_4 [i_1 + 1] [i_1 - 1]))), ((~((~(4457789549330761088LL)))))));
                arr_5 [5LL] [i_1] = ((/* implicit */unsigned long long int) (_Bool)0);
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 14; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (int i_4 = 1; i_4 < 15; i_4 += 4) 
                            {
                                var_18 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (signed char)-102)) ? (arr_11 [i_0] [(_Bool)1]) : (arr_11 [2LL] [i_1 - 1])))));
                                var_19 = ((/* implicit */long long int) (_Bool)1);
                            }
                            var_20 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (unsigned short)9276)) ? (arr_8 [(unsigned char)2] [(unsigned char)2] [i_1 - 1]) : (arr_8 [i_0] [i_0] [i_1 + 1])))));
                            arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) 2393537591U);
                            /* LoopSeq 1 */
                            for (signed char i_5 = 1; i_5 < 16; i_5 += 1) 
                            {
                                var_21 = ((/* implicit */unsigned long long int) arr_8 [i_0] [i_1 - 1] [i_5 + 1]);
                                var_22 = ((/* implicit */unsigned long long int) 193917304);
                                arr_17 [i_0] [i_5] = ((/* implicit */unsigned long long int) arr_1 [i_1 + 1]);
                                arr_18 [i_0] [11LL] [14] [i_5] [i_0] = ((/* implicit */_Bool) min((((/* implicit */int) min((arr_16 [i_1 - 1] [i_1 + 1] [i_3 + 4] [i_5 + 2] [i_5 + 1]), (arr_16 [i_1 - 1] [i_1 - 1] [i_3 - 1] [i_5 + 1] [i_5 - 1])))), ((+(((/* implicit */int) arr_16 [i_1 + 1] [i_1 + 1] [i_3 + 3] [i_5 - 1] [i_5 + 1]))))));
                            }
                            arr_19 [13] [(_Bool)1] [i_3] [(_Bool)1] = ((/* implicit */short) (+(((long long int) arr_4 [i_3 + 2] [i_3 + 3]))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)88)) >= (((/* implicit */int) (signed char)-111)))))) > (var_6));
}

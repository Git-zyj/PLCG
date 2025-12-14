/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128273
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
    for (int i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */unsigned int) (((+(((/* implicit */int) arr_5 [i_0 + 1] [i_0 + 1] [i_1])))) + ((-(arr_3 [i_0] [i_1])))));
                var_12 = ((/* implicit */unsigned char) var_9);
                var_13 = ((/* implicit */unsigned long long int) ((max(((-(((/* implicit */int) var_2)))), (((((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) / (1522677356))))) / (((/* implicit */int) (short)9824))));
                arr_6 [i_0 + 3] [i_0] = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) (short)9837)), (5801940468391338730ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))), (((((/* implicit */_Bool) 8489824607698773403LL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)60)))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_2 = 1; i_2 < 16; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_3 = 1; i_3 < 15; i_3 += 3) 
        {
            for (unsigned short i_4 = 2; i_4 < 15; i_4 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 17; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 1; i_6 < 16; i_6 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */int) ((((/* implicit */int) (unsigned char)129)) != (((/* implicit */int) (unsigned short)46029))));
                                var_15 += ((4294967295U) - (((/* implicit */unsigned int) ((/* implicit */int) var_1))));
                                var_16 = arr_4 [i_2] [i_3];
                                arr_23 [i_2] [i_2 - 1] [i_2] [i_3] [i_2] [i_6 + 1] = ((/* implicit */signed char) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)127))) == (var_0)))));
                            }
                        } 
                    } 
                    arr_24 [i_3] [i_4 - 2] = ((12644803605318212885ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))));
                }
            } 
        } 
        var_17 ^= ((/* implicit */unsigned char) 4294967295U);
        arr_25 [i_2] = ((/* implicit */_Bool) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) & (6054528324818234132ULL)))));
        arr_26 [i_2 - 1] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_7))));
        /* LoopSeq 1 */
        for (int i_7 = 1; i_7 < 14; i_7 += 4) 
        {
            var_18 = ((/* implicit */short) ((((/* implicit */int) ((signed char) arr_28 [i_7]))) % (((/* implicit */int) arr_14 [i_2 - 1] [i_2 - 1] [i_7] [i_7 + 1]))));
            var_19 = ((/* implicit */unsigned long long int) (+(1745051669)));
            arr_29 [i_7] = 1481813453;
            var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) var_5)) + (arr_27 [i_7])));
        }
    }
}

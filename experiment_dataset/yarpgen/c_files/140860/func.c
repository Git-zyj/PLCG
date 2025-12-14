/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140860
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
    var_11 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)50743)) : (((/* implicit */int) var_8)))) << (((var_7) - (770414203U))))) / (((/* implicit */int) var_1))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) min((((/* implicit */unsigned char) arr_1 [i_0] [i_0])), (var_8)))), ((+(((/* implicit */int) (_Bool)0))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_0 [i_0])) <= (var_2))))) != (arr_0 [i_0]))))) : (arr_0 [i_0])));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) var_9);
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                for (int i_3 = 0; i_3 < 18; i_3 += 3) 
                {
                    {
                        var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) max((((/* implicit */int) (short)-16535)), (((((/* implicit */int) arr_10 [i_1] [i_1])) & (((/* implicit */int) arr_10 [i_1] [i_2])))))))));
                        var_13 += ((/* implicit */unsigned short) (-(arr_11 [i_0] [i_1] [(short)12])));
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_14 = ((/* implicit */short) (unsigned short)14779);
                            arr_15 [i_0] [(short)14] [i_3] [i_1] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4965634235964113939LL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_1]))))) ? (((/* implicit */long long int) max((4294967295U), (((/* implicit */unsigned int) arr_7 [i_0] [i_3] [i_4]))))) : (max((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)50743))))), (((((/* implicit */_Bool) arr_0 [i_4])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [i_1])))))))));
                            arr_16 [i_0] [i_0] [i_2] [i_0] [i_0] [i_4] [i_0] = ((/* implicit */long long int) (~(16646144U)));
                            var_15 = ((/* implicit */unsigned char) (~((~(arr_0 [i_1])))));
                        }
                        var_16 = ((/* implicit */_Bool) var_3);
                    }
                } 
            } 
        } 
    }
    for (long long int i_5 = 0; i_5 < 25; i_5 += 1) 
    {
        arr_21 [(short)8] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_5])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_19 [i_5]))))) ? (((/* implicit */int) arr_19 [i_5])) : (((/* implicit */int) arr_19 [i_5]))))) ? (((((/* implicit */_Bool) arr_18 [i_5])) ? (((((/* implicit */_Bool) arr_18 [i_5])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_18 [i_5]))))))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_19 [i_5]))))));
        arr_22 [i_5] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) max((((/* implicit */long long int) 4278321122U)), (var_6)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) min(((unsigned short)14786), (((/* implicit */unsigned short) arr_18 [i_5])))))))));
        var_17 += ((/* implicit */unsigned char) min((var_7), (((/* implicit */unsigned int) (-(((/* implicit */int) max((((/* implicit */unsigned char) arr_19 [i_5])), (var_4)))))))));
        arr_23 [i_5] = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_18 [i_5])) ? (((/* implicit */int) arr_18 [i_5])) : (((/* implicit */int) arr_18 [i_5])))), ((+(((/* implicit */int) arr_18 [i_5]))))));
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_18 [i_5])), (var_6)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */int) arr_18 [i_5])) % (((/* implicit */int) arr_18 [i_5])))) >= (((/* implicit */int) var_3)))))) : (var_10)));
    }
    for (unsigned char i_6 = 0; i_6 < 19; i_6 += 1) 
    {
        var_19 = ((/* implicit */short) max((var_7), (((/* implicit */unsigned int) (~(((/* implicit */int) var_9)))))));
        var_20 += ((/* implicit */unsigned char) min((max(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_27 [i_6] [i_6])))), (-136941546)));
        /* LoopNest 2 */
        for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 1) 
        {
            for (unsigned int i_8 = 3; i_8 < 18; i_8 += 1) 
            {
                {
                    arr_32 [i_8] [i_7] = var_4;
                    arr_33 [i_6] [i_8] [i_8] [10] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_7])) ? (((/* implicit */int) arr_25 [i_6] [i_8])) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) max((arr_28 [i_6] [i_6]), (arr_20 [i_7])))) : (((/* implicit */int) max((arr_20 [i_8 - 3]), (((/* implicit */short) arr_19 [i_8]))))))) + ((-(((/* implicit */int) max((var_0), (var_8))))))));
                    var_21 = ((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))), (4255882867088207169ULL))) >> (((((/* implicit */int) arr_27 [i_6] [i_6])) - (136)))));
                }
            } 
        } 
    }
    var_22 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_5)), (var_10)));
}

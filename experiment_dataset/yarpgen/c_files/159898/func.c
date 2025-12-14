/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159898
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
    var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) (~(((((((/* implicit */_Bool) (short)-17284)) ? (16972613245139187698ULL) : (((/* implicit */unsigned long long int) 28U)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        {
                            var_13 *= ((/* implicit */short) max((min((1365768819U), (((/* implicit */unsigned int) arr_0 [i_1 - 1] [i_1 + 2])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1365768819U)) ? (((/* implicit */int) arr_0 [i_1 - 2] [i_1 - 2])) : (((/* implicit */int) var_8)))))));
                            arr_9 [i_3] [i_3] [i_3] [i_3] &= ((/* implicit */unsigned int) -9223372036854775807LL);
                            var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 17U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (4294967240U))))))), (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_4))) - (1971224834635398343LL)))) ? (9669171713932938392ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))))));
                        }
                    } 
                } 
                arr_10 [i_0] [i_1 + 2] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 9669171713932938392ULL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (8149423255944564215LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15984)))))) ? (min((-1971224834635398343LL), (((/* implicit */long long int) (unsigned char)183)))) : (((/* implicit */long long int) var_6))))) : (((((((/* implicit */_Bool) arr_3 [i_0])) ? (10407833333677538445ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))))) | (((/* implicit */unsigned long long int) min((6LL), (((/* implicit */long long int) (_Bool)1)))))))));
                var_15 = ((/* implicit */unsigned short) arr_4 [i_0] [i_1 - 2] [i_0]);
                var_16 *= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) 4294967247U)) : (-8149423255944564215LL)))) ? (((/* implicit */int) (short)17284)) : (((/* implicit */int) (!(((/* implicit */_Bool) 0U)))))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 28672LL)) ? (-9223372036854775805LL) : (var_0)))), (((((/* implicit */_Bool) (short)-27316)) ? (var_9) : (((/* implicit */unsigned long long int) 3006983840U))))))));
                var_17 = ((/* implicit */unsigned int) (unsigned short)16380);
            }
        } 
    } 
    var_18 = ((/* implicit */int) -161360131620244729LL);
}

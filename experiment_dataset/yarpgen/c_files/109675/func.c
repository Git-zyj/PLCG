/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109675
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
    var_16 = ((/* implicit */unsigned int) max((var_16), ((-(((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_0)), (var_10))))) - ((-(4U)))))))));
    var_17 = ((/* implicit */unsigned char) (+(max((((/* implicit */int) ((((/* implicit */_Bool) 4U)) || (((/* implicit */_Bool) 4294967282U))))), (((((/* implicit */int) var_10)) >> (((var_6) - (12503316309921668286ULL)))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_1] = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_4 [i_1]) : (arr_5 [i_1] [i_1])))) ? (((unsigned long long int) 4294967288U)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) 3069589055U)))))))), (((/* implicit */unsigned long long int) (short)32766))));
                arr_8 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])), (((((/* implicit */_Bool) (short)32743)) ? (6461892780367125760ULL) : (((/* implicit */unsigned long long int) 4294967276U))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned long long int) min((var_18), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) & (max((min((((/* implicit */unsigned long long int) 4294967294U)), (15579520981645020454ULL))), (((/* implicit */unsigned long long int) arr_11 [0U] [0] [i_2] [0U]))))))));
                            arr_14 [8U] [i_0] [i_2] [8U] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_4 [i_2]) & (((/* implicit */unsigned long long int) arr_9 [i_0]))))))))) & (max((max((arr_10 [i_0] [i_0] [i_2] [i_0]), (var_8))), (((/* implicit */unsigned long long int) ((arr_2 [7U] [i_1]) + (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))))));
                            var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) min((max((10508665430065632559ULL), (((/* implicit */unsigned long long int) arr_2 [i_2] [i_3])))), (((2867223092064531146ULL) & (((/* implicit */unsigned long long int) 7U)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) (short)-32745);
}

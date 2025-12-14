/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124143
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
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)42)) ? ((-(((/* implicit */int) var_9)))) : (((/* implicit */int) (_Bool)1))))) | (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (short)-26315))))) ? (max((((/* implicit */unsigned long long int) (unsigned short)48776)), (var_7))) : (((/* implicit */unsigned long long int) ((long long int) var_0)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned short) (+(max((10306183660919969875ULL), (((/* implicit */unsigned long long int) arr_2 [i_0]))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_19 = ((/* implicit */unsigned char) var_0);
                    arr_6 [i_0] = ((/* implicit */unsigned int) arr_0 [i_1]);
                    var_20 = ((/* implicit */unsigned char) (~(((((/* implicit */int) var_4)) | (((/* implicit */int) var_6))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 15; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4 - 2] = ((/* implicit */unsigned short) ((arr_8 [i_0] [7ULL] [i_0] [(_Bool)1] [i_4] [i_2]) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))) != (-3627380022237140769LL))))) : (arr_5 [i_0])));
                                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_16)) : ((-(((/* implicit */int) (short)-19846))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 16; i_5 += 1) 
                {
                    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) 9216283427822140294ULL))));
                    var_23 *= ((((/* implicit */_Bool) var_1)) ? (8561570695416288338ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))));
                    var_24 -= ((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) != (var_14));
                }
                var_25 = ((/* implicit */long long int) (+((+(arr_2 [i_1])))));
                /* LoopNest 2 */
                for (unsigned short i_6 = 0; i_6 < 16; i_6 += 2) 
                {
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */short) 10306183660919969866ULL);
                            var_27 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 8140560412789581740ULL)) ? (max((((/* implicit */unsigned long long int) (_Bool)1)), (8140560412789581730ULL))) : (((/* implicit */unsigned long long int) -7316017782183557058LL))));
                            var_28 = ((/* implicit */long long int) arr_10 [i_0] [i_0] [i_0] [i_0] [(short)5]);
                            arr_23 [i_0 - 3] [(signed char)7] [i_1] [i_0] [i_7 - 1] = ((/* implicit */_Bool) var_6);
                            arr_24 [i_7 - 1] [i_7 - 1] [i_6] [i_7] [i_0] = ((/* implicit */unsigned short) var_7);
                        }
                    } 
                } 
            }
        } 
    } 
}

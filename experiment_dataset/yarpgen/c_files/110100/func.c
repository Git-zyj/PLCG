/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110100
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
    var_11 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) var_1))) ? (((/* implicit */unsigned int) var_10)) : ((-(13U)))))) : (((unsigned long long int) (unsigned short)22))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_7 [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((signed char) ((unsigned long long int) arr_3 [i_0]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((16192963875431546191ULL), (((/* implicit */unsigned long long int) (unsigned short)51037))))) ? (((/* implicit */int) max((var_9), (((/* implicit */unsigned char) arr_4 [i_3 - 1]))))) : (((/* implicit */int) arr_3 [i_2]))))), (1023ULL)));
                                arr_12 [i_3] [(unsigned char)5] [(unsigned short)3] [i_3 + 1] [(unsigned short)3] [i_3] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (unsigned char)116)) ? (1337826765U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)25311))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_3] [i_3] [i_3 - 1] [i_3 - 1])) ? (((/* implicit */int) arr_5 [i_3 - 1] [i_3 + 1] [i_3 + 1] [i_3 + 1])) : (((/* implicit */int) arr_5 [(unsigned char)15] [i_3 - 1] [i_3 + 1] [i_3 + 1])))))));
                                arr_13 [i_3] = ((/* implicit */long long int) arr_10 [i_3] [i_1] [i_2] [i_3] [i_1] [(signed char)11]);
                                var_13 -= ((/* implicit */signed char) ((((/* implicit */_Bool) 940542395)) ? (((/* implicit */int) arr_4 [i_4])) : (((/* implicit */int) (unsigned char)0))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_10 [i_1] [i_1] [i_1] [i_2] [i_2] [i_2]);
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_14 = ((/* implicit */int) var_8);
                        var_15 = ((/* implicit */unsigned short) var_8);
                    }
                    arr_19 [i_0] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_1] [i_2])) ? (((/* implicit */int) arr_15 [i_0] [i_0] [i_1] [i_2])) : (-1633169560)))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_2])) ? (arr_16 [i_0] [i_1]) : (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0] [i_0])))) : (((/* implicit */unsigned long long int) ((int) arr_2 [i_0] [i_1] [(short)16])))));
                }
            } 
        } 
    } 
    var_16 = var_10;
    var_17 *= ((/* implicit */long long int) ((_Bool) 7012166854098087903LL));
}

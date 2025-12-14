/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178096
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            for (unsigned char i_2 = 3; i_2 < 18; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        var_14 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_10 [i_0])) > (((/* implicit */int) arr_10 [i_1 + 1])))) ? (((((/* implicit */int) var_0)) & (((/* implicit */int) var_0)))) : (((/* implicit */int) ((_Bool) var_5)))));
                        var_15 += ((unsigned long long int) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11))))), (1717574681312446977ULL)));
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 2; i_4 < 17; i_4 += 4) 
                        {
                            var_16 = arr_0 [i_0] [i_3];
                            var_17 = ((/* implicit */signed char) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)114))) ^ (arr_0 [i_0] [i_1 + 1]))), (arr_6 [(signed char)11] [i_2 + 1])));
                            var_18 += arr_14 [i_0] [i_0] [i_0] [i_0] [i_0];
                        }
                    }
                    var_19 *= ((/* implicit */_Bool) (unsigned char)192);
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 19; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 4; i_6 < 17; i_6 += 3) 
                        {
                            {
                                var_20 -= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) arr_15 [i_5] [i_6 - 2])), (((((4294967295U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_5]))))) / (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */signed char) arr_1 [i_0])), ((signed char)-1)))))))));
                                var_21 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((unsigned int) (_Bool)0))) * (((((/* implicit */_Bool) (-(((/* implicit */int) var_13))))) ? ((~(arr_6 [i_5] [i_6]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (_Bool)0))))))));
                                var_22 = ((/* implicit */unsigned long long int) max((var_22), ((+(((unsigned long long int) max((((/* implicit */unsigned short) (unsigned char)53)), (var_3))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)63))) + (2793878812U)))))));
    var_24 = var_10;
    var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_1)))) ? (((/* implicit */int) var_3)) : (((((/* implicit */int) (unsigned char)255)) << (((((/* implicit */int) var_8)) + (80)))))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)0)))))));
    var_26 = ((/* implicit */signed char) ((((((/* implicit */int) ((signed char) ((var_1) * (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))) + (2147483647))) << (((((/* implicit */int) var_6)) - (10)))));
}

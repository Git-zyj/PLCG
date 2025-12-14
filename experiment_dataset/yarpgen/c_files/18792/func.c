/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18792
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
    for (unsigned int i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_8 [i_0] [(unsigned short)7] [i_1 - 1] [i_3] [(_Bool)1] [i_3] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((unsigned int) ((short) 6702396908641026178LL)))), (max((((/* implicit */long long int) (+(((/* implicit */int) var_7))))), (min((-6702396908641026179LL), (((/* implicit */long long int) arr_0 [i_0]))))))));
                            var_15 = ((/* implicit */int) ((long long int) arr_5 [i_0] [i_3] [i_2]));
                            var_16 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (((/* implicit */long long int) 2013265920U)) : (min((arr_2 [i_0] [(unsigned short)9]), (((/* implicit */long long int) arr_7 [i_0])))))) & (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) min((arr_0 [i_1]), (((/* implicit */unsigned short) arr_1 [i_3]))))) : (((/* implicit */int) ((_Bool) arr_3 [i_0 - 2] [i_2] [i_3]))))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 12; i_5 += 2) 
                    {
                        for (long long int i_6 = 0; i_6 < 12; i_6 += 1) 
                        {
                            {
                                arr_19 [i_5] [0LL] [i_4] [i_5] = ((/* implicit */signed char) (~(((/* implicit */int) var_2))));
                                var_17 = ((/* implicit */signed char) min((((long long int) arr_16 [7LL] [7LL] [i_4 - 1] [i_5] [7LL])), (((/* implicit */long long int) var_8))));
                                var_18 = ((/* implicit */unsigned short) (signed char)50);
                                var_19 = ((/* implicit */signed char) arr_17 [i_0 - 1] [i_1] [i_4] [i_4 - 1] [i_6] [i_4]);
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */short) arr_17 [i_0 - 2] [i_0 - 3] [(_Bool)1] [i_1 - 1] [2U] [i_0 - 3]);
                    arr_20 [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_4] [i_1 - 1])) ? (((unsigned int) var_2)) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [i_1])), (arr_16 [i_0] [i_0] [i_0] [(signed char)11] [i_4])))))))) - (-6702396908641026199LL)));
                    var_21 = ((/* implicit */long long int) (-((~(arr_18 [i_0] [i_1] [i_4] [i_1] [(unsigned short)0])))));
                }
                arr_21 [i_0 - 2] [i_0 - 2] [i_0] |= (-(((/* implicit */int) ((((/* implicit */int) arr_5 [i_0 - 1] [i_1 - 1] [i_1 - 1])) > (((/* implicit */int) arr_9 [i_0] [(signed char)1] [i_1] [i_1 - 1]))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) min((((unsigned long long int) min((((/* implicit */unsigned int) var_9)), (var_6)))), (((/* implicit */unsigned long long int) var_2)))))));
    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) var_5))));
}

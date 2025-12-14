/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175125
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
    for (unsigned short i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0] [i_0 - 2])) / (var_5)))) ? (((/* implicit */int) arr_2 [i_0] [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0 - 2] [i_0 - 2]))))), (((arr_3 [i_0 - 1] [i_0 - 1]) | (arr_3 [i_0 - 2] [i_1])))));
                arr_5 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0])) | (((/* implicit */int) arr_0 [i_0]))))), (max((((/* implicit */long long int) arr_2 [i_0] [i_1])), (arr_3 [i_0] [i_1])))))) ? (max((arr_3 [i_0 - 2] [i_0 - 2]), (arr_3 [i_0 - 2] [i_0]))) : (((long long int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_1])))))));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */int) max((arr_0 [i_0 - 2]), (arr_0 [i_0 - 2])))), ((-(((/* implicit */int) arr_0 [i_0 - 1]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 1; i_2 < 12; i_2 += 3) 
    {
        for (unsigned long long int i_3 = 2; i_3 < 14; i_3 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned long long int) arr_3 [i_3 - 1] [i_3]);
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 1) 
                {
                    for (short i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (int i_6 = 0; i_6 < 15; i_6 += 4) 
                            {
                                var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_2 + 2])))))));
                                var_14 |= ((/* implicit */unsigned int) arr_7 [i_3 - 1] [i_6]);
                            }
                            var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) (-(((/* implicit */int) max((var_0), (((/* implicit */unsigned char) arr_13 [i_3] [i_4]))))))))));
                            var_16 = ((/* implicit */unsigned int) max(((unsigned short)12084), ((unsigned short)53464)));
                        }
                    } 
                } 
                var_17 = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_2 [i_2] [i_2]), (((/* implicit */short) (unsigned char)250))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_2] [i_3])))))) : (((long long int) arr_13 [i_2] [i_3]))));
                var_18 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_2] [i_3])) && ((!(((/* implicit */_Bool) arr_9 [i_3]))))));
                var_19 = ((/* implicit */signed char) arr_9 [i_2]);
            }
        } 
    } 
    var_20 *= ((/* implicit */short) (_Bool)0);
    var_21 = ((/* implicit */long long int) ((((((/* implicit */_Bool) 6474054361816790323LL)) && (((((/* implicit */int) var_7)) >= (var_5))))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) var_3)) ? (((((/* implicit */int) (unsigned short)16563)) / (((/* implicit */int) var_0)))) : (((/* implicit */int) max((var_7), (((/* implicit */unsigned char) (_Bool)1)))))))));
}

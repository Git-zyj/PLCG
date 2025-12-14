/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159848
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
    for (signed char i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) ((((/* implicit */int) ((((((/* implicit */int) arr_14 [i_0] [i_0] [i_1 + 1] [(signed char)11] [i_3] [i_0])) ^ (((/* implicit */int) (signed char)(-127 - 1))))) >= (((/* implicit */int) (!((_Bool)1))))))) ^ (((/* implicit */int) arr_14 [i_0] [i_2] [i_2] [i_3] [i_0 - 2] [i_1])))))));
                            var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_9 [i_1 + 1] [i_0] [i_1 - 2]) ? (((/* implicit */int) arr_9 [i_1 - 2] [i_0] [i_1 - 1])) : (((/* implicit */int) var_0))))) ? (((((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)111)))) + (((/* implicit */int) ((((/* implicit */int) (unsigned char)236)) > (((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 1] [i_2]))))))) : ((((-(((/* implicit */int) (unsigned char)28)))) - (((/* implicit */int) min((var_0), (var_0))))))));
                            arr_15 [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_0 - 2] [i_0] = ((/* implicit */short) arr_2 [i_0] [i_0]);
                            arr_16 [i_0] [i_2] = ((/* implicit */unsigned char) max((max((((arr_8 [i_0] [i_1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) arr_6 [i_3])))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0 - 2]))) | (arr_8 [i_0] [i_0])))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 4) 
                {
                    for (signed char i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_26 [i_4] [i_0] [i_0] [i_0] [i_6] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_9))))) : (max(((-(arr_8 [i_0] [i_1]))), (((/* implicit */unsigned long long int) ((unsigned char) arr_21 [i_1] [i_1] [i_1 - 2] [i_1 - 2] [10ULL] [10ULL])))))));
                                arr_27 [i_0 + 1] [i_0] [i_0] [i_0 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32768)) ? (((/* implicit */int) arr_19 [i_0] [i_1] [i_1])) : (((/* implicit */int) arr_19 [i_0 + 1] [i_0] [i_1]))))) && ((!(((/* implicit */_Bool) arr_19 [i_0 - 3] [i_0] [i_1]))))));
                                arr_28 [i_0 - 2] [i_0] [i_0 - 3] [i_0 - 2] = ((/* implicit */_Bool) ((int) max((((/* implicit */int) var_2)), ((~(((/* implicit */int) var_7)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_13 *= ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) max((((/* implicit */int) var_9)), (var_5)))), (var_3)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_0)) | (((/* implicit */int) var_0)))))))) : (((/* implicit */int) var_1))));
}

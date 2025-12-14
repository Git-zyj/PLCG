/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170009
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
    var_13 = ((/* implicit */long long int) var_9);
    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) var_1)) > (var_11))))))) * (max((((/* implicit */unsigned long long int) var_0)), (var_2))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 4; i_0 < 17; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_2] [i_0] [i_0] = ((((/* implicit */unsigned long long int) ((((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) (unsigned char)137)))) << (((/* implicit */int) (_Bool)1))))) - (min((max((13214409932878456534ULL), (((/* implicit */unsigned long long int) 3572399013U)))), (((/* implicit */unsigned long long int) max((arr_5 [i_0]), (((/* implicit */short) (_Bool)1))))))));
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) (~(min((arr_4 [i_0] [i_2]), (((/* implicit */long long int) ((unsigned char) (_Bool)1)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 15; i_4 += 4) 
                        {
                            {
                                arr_15 [i_0 + 1] [i_0] [i_0 - 4] [i_0] = ((/* implicit */unsigned short) ((signed char) ((signed char) var_8)));
                                var_15 = ((/* implicit */unsigned short) var_3);
                                arr_16 [i_4 - 2] [i_0] [i_2] [i_0] [i_1] [i_0] [i_0] = ((((/* implicit */_Bool) min((((/* implicit */int) arr_14 [i_3])), (((((/* implicit */_Bool) (unsigned short)192)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_2 [i_2]))))))) ? (arr_11 [i_0] [i_1] [i_1] [i_3]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_0 - 3] [i_0 + 1] [i_0] [i_0 - 3] [i_4 - 3])) ? (((((((/* implicit */int) arr_13 [i_3] [i_1] [i_1] [i_4] [i_3])) + (2147483647))) >> (((((/* implicit */int) arr_10 [i_0] [i_3] [i_0] [i_3] [i_4])) + (110))))) : (((/* implicit */int) (_Bool)0))))));
                                var_16 = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_5) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)-78)) : (((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                    var_17 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_14 [i_0]))))) && (((/* implicit */_Bool) arr_2 [i_2])))) ? (((((/* implicit */_Bool) (signed char)94)) ? (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)103)) : (((/* implicit */int) (unsigned char)7))))) : (((1990641668U) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_0 - 1])) ? (((((/* implicit */int) var_6)) >> (((arr_1 [i_0] [i_0]) - (4596836009563479742ULL))))) : ((-(((/* implicit */int) arr_5 [i_1])))))))));
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 1; i_6 < 16; i_6 += 2) 
                        {
                            {
                                arr_21 [i_0 + 1] [i_1] [i_0 + 1] [i_5] [i_6] [i_1] [i_0 - 1] = ((/* implicit */_Bool) var_8);
                                arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] = (unsigned short)65529;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) var_3)))));
}

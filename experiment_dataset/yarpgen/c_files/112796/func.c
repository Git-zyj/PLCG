/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112796
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
    for (unsigned char i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                arr_4 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_0 + 2])) ? (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)-1)))) : (((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */int) arr_3 [i_0 - 1])) : (((/* implicit */int) arr_3 [i_0 - 1]))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (long long int i_4 = 0; i_4 < 12; i_4 += 1) 
                            {
                                var_19 = ((/* implicit */unsigned short) (unsigned char)244);
                                var_20 *= ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65535))));
                                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) -6043425058698619571LL))));
                                var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) -3756424628569336752LL))));
                                var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) (short)-32758))));
                            }
                            for (signed char i_5 = 0; i_5 < 12; i_5 += 4) 
                            {
                                arr_18 [i_3] &= ((/* implicit */unsigned char) (unsigned short)14908);
                                var_24 = ((/* implicit */signed char) arr_17 [i_0] [i_1] [i_2]);
                                var_25 = arr_2 [i_1];
                            }
                            for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 3) 
                            {
                                var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((((/* implicit */int) var_17)) | (((/* implicit */int) min((arr_19 [i_0 + 2] [i_2] [i_1] [i_0 + 2]), (arr_19 [i_0 - 2] [i_6] [i_2] [i_3])))))))));
                                arr_21 [i_6] [i_1] [i_1] [i_3] [i_6] [i_0] = ((/* implicit */long long int) (unsigned short)3);
                            }
                            var_27 += ((/* implicit */unsigned int) ((arr_20 [i_0 - 2] [i_0 + 2] [i_0 - 2]) ? (((/* implicit */int) ((unsigned char) arr_20 [i_0 - 2] [i_0 + 2] [i_0 + 1]))) : (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)2)), (arr_14 [i_2] [i_1] [i_2] [i_3] [i_0 + 2]))))));
                            arr_22 [i_1] = ((/* implicit */unsigned long long int) (~(max((6043425058698619571LL), (((/* implicit */long long int) (_Bool)0))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) var_9))));
    var_29 = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) max(((signed char)100), ((signed char)127)))))) > (((/* implicit */int) ((unsigned char) min((var_0), (var_16)))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129019
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
    var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((((/* implicit */int) var_7)) == (((/* implicit */int) var_2)))))));
    var_14 = ((/* implicit */unsigned long long int) (short)-496);
    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) var_11))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            {
                arr_8 [i_0 + 1] [i_1] = ((/* implicit */unsigned int) ((short) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-496))) + (16376ULL)))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 11; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        {
                            arr_14 [i_0] [i_1] [i_3] = ((/* implicit */signed char) (~(max((7981061381022594721ULL), (arr_12 [i_0 + 1] [i_1 - 1] [i_1 + 1] [i_2 + 1])))));
                            /* LoopSeq 2 */
                            for (unsigned long long int i_4 = 1; i_4 < 11; i_4 += 4) /* same iter space */
                            {
                                var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 7981061381022594738ULL)) ? (16372ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16376ULL)) ? (((((/* implicit */_Bool) (short)-503)) ? (arr_0 [i_4 - 1]) : (((/* implicit */int) (short)-496)))) : (((((/* implicit */_Bool) (unsigned short)6583)) ? (((/* implicit */int) (unsigned short)6581)) : (((/* implicit */int) (unsigned short)6595))))))))))));
                                var_17 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_16 [i_0] [i_1] [i_1] [i_3] [i_4])), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2] [i_1] [i_0]))) / (16364ULL)))));
                                arr_17 [i_4] [i_1] [i_2 - 2] [i_1] [i_0 - 1] = ((/* implicit */int) (short)-496);
                                var_18 &= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)96)) ? (var_4) : (((/* implicit */long long int) (-2147483647 - 1))))) < (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 18301701857626676374ULL))))))));
                            }
                            for (unsigned long long int i_5 = 1; i_5 < 11; i_5 += 4) /* same iter space */
                            {
                                var_19 = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_0] [i_0 - 1] [i_0] [i_0] [i_0])) ? (arr_1 [i_3]) : (arr_1 [i_5 - 1])))), (((((/* implicit */_Bool) arr_6 [i_2] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)31744))) : (arr_10 [i_1]))))) / (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_20 [i_0 + 1] [i_1 - 1] [i_2] [i_3] [i_5 - 1])))))));
                                var_20 = ((/* implicit */unsigned long long int) (~(min((((/* implicit */unsigned int) -629293001)), (arr_3 [i_0] [i_0])))));
                            }
                            var_21 += ((/* implicit */_Bool) ((((((/* implicit */_Bool) max((arr_10 [0]), (((/* implicit */unsigned long long int) arr_7 [8] [i_1 + 1]))))) ? (((((/* implicit */_Bool) arr_20 [i_3] [i_3] [i_2] [i_1] [i_0])) ? (((/* implicit */int) (_Bool)0)) : (-478659576))) : ((+(1403688284))))) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_3])))))));
                        }
                    } 
                } 
            }
        } 
    } 
}

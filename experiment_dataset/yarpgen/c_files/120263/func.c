/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120263
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (long long int i_1 = 4; i_1 < 11; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */signed char) (short)-7574);
                var_12 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-7590))))), (((((/* implicit */_Bool) arr_0 [i_0] [i_1 + 1])) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(signed char)0])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_5 [i_0] [(unsigned char)8])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)(-32767 - 1))))) > (((/* implicit */int) (signed char)1)))))) : (max((max((var_2), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_1])))), (var_9)))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 11; i_2 += 1) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (unsigned char i_4 = 0; i_4 < 12; i_4 += 4) 
                            {
                                var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) arr_12 [i_0] [i_4] [i_2] [i_3] [i_3] [i_4] [i_4]))));
                                var_14 = ((/* implicit */unsigned int) var_9);
                                var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_10))));
                                var_16 = min((((/* implicit */unsigned long long int) 2128346536U)), (14124539049789811461ULL));
                            }
                            for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 1) /* same iter space */
                            {
                                var_17 += ((/* implicit */long long int) arr_14 [i_2]);
                                var_18 += ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)7576)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-11))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7568))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (signed char)-11)))))), (((/* implicit */unsigned long long int) min((((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_1] [8LL] [i_3 - 1] [i_5]))) * (2987699992U))), (((/* implicit */unsigned int) arr_11 [i_2 - 1] [i_1] [i_2 - 1] [(unsigned short)7] [i_5] [i_3 - 1] [(signed char)3])))))));
                            }
                            for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 1) /* same iter space */
                            {
                                arr_17 [i_0] [i_3 - 1] [i_2 + 1] [i_1] [i_0] = ((/* implicit */unsigned short) (-(3352462668U)));
                                var_19 = min((((/* implicit */long long int) (-(((((/* implicit */_Bool) -4596985825355462071LL)) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_2] [i_3] [(signed char)10] [i_6] [i_6])) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_1] [i_1] [9] [i_3] [3]))))))), (max((((/* implicit */long long int) arr_0 [i_1 + 1] [i_3])), (((long long int) (signed char)7)))));
                                var_20 = ((/* implicit */_Bool) ((unsigned short) ((unsigned long long int) 4416568046125392585LL)));
                                arr_18 [i_0] [i_1] [(unsigned short)8] [i_3] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-51)) || (((/* implicit */_Bool) (unsigned short)32767))));
                            }
                            /* vectorizable */
                            for (unsigned short i_7 = 2; i_7 < 11; i_7 += 3) 
                            {
                                var_21 = ((((/* implicit */_Bool) arr_0 [i_1 + 1] [i_2])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_14 [i_1 + 1])));
                                arr_22 [i_0] [i_0] = arr_9 [i_1 - 2] [i_1 - 4] [i_1 - 2] [i_3 - 1];
                                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_0])) < (((/* implicit */int) arr_19 [i_1 - 4] [i_3 - 1] [i_3 - 1] [i_1 - 4] [i_3 - 1] [i_7]))));
                                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_2 + 1])) ? (((/* implicit */int) arr_12 [i_1] [i_0] [i_2] [3U] [i_7 - 1] [i_7 - 2] [(short)11])) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0]))));
                            }
                            var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [4])) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_14 [i_1])))) : (var_7)))) ? ((-((-(arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)128)), (var_3)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-41)) || (((/* implicit */_Bool) (signed char)-51))))) : ((~(((/* implicit */int) arr_11 [i_0] [9U] [i_2] [i_3] [i_1] [i_0] [i_3 - 1]))))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7594))) : (1073741760ULL)))));
    var_26 &= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) <= (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_0)), (2193757492U)))) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28142)))))));
}

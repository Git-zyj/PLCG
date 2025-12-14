/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134607
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_15)), (arr_4 [8LL])))) : (arr_2 [i_0] [i_1] [i_1]))) | (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_13))))), (((((/* implicit */_Bool) arr_0 [i_2])) ? (5746941795699077036LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-20)))))))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 19; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */long long int) arr_0 [i_0]);
                                var_18 = ((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_3 - 1]))) <= (1809909648U)))), (((arr_3 [i_1]) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_0]))))));
                                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_4])) ? (max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_12 [i_4] [i_2] [(signed char)19] [i_2] [i_0]))))), (((unsigned int) arr_8 [i_0] [i_0] [3LL] [i_0] [(signed char)3])))) : ((+(((((/* implicit */_Bool) (short)14336)) ? (arr_11 [i_0] [i_0] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0])))))))));
                                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_9), (((/* implicit */short) (signed char)-20))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_2] [i_1]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) ^ (var_3)))))) ? (((/* implicit */int) arr_6 [i_0] [i_2] [(short)5])) : ((-((+(((/* implicit */int) arr_7 [i_2] [i_2] [i_0] [i_3] [(short)10] [i_2]))))))));
                                var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)9)) - (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    var_22 -= ((/* implicit */short) max((((/* implicit */unsigned int) ((((((/* implicit */int) arr_9 [(unsigned char)2] [i_1] [i_2])) / (((/* implicit */int) (unsigned char)120)))) <= ((~(((/* implicit */int) (_Bool)1))))))), (min((((/* implicit */unsigned int) (-(((/* implicit */int) var_2))))), (arr_11 [i_0] [i_1] [i_1])))));
                }
                for (long long int i_5 = 0; i_5 < 20; i_5 += 4) 
                {
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 20; i_6 += 3) 
                    {
                        for (unsigned long long int i_7 = 1; i_7 < 19; i_7 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */long long int) min((6656901284006096790ULL), (((/* implicit */unsigned long long int) max((((/* implicit */short) arr_7 [i_6] [i_7 + 1] [(short)3] [i_7 + 1] [(unsigned char)7] [i_7 - 1])), (arr_19 [7LL] [(short)18] [i_7 + 1] [(short)18] [i_7] [(short)18] [i_7 - 1]))))));
                                var_24 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) || (arr_7 [i_6] [2LL] [9ULL] [i_7 - 1] [i_6] [i_6]))) ? (((/* implicit */unsigned long long int) ((arr_7 [i_6] [i_6] [(signed char)18] [i_6] [i_6] [i_6]) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_5)), (var_10)))) : (((/* implicit */int) arr_8 [i_5] [i_5] [i_5] [i_5] [i_5]))))) : (((((/* implicit */_Bool) 10499830214719337688ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_17 [(signed char)12] [i_1] [10LL] [i_6])))) : (arr_14 [i_0] [i_1])))));
                                arr_20 [i_0] [i_0] [i_5] [i_6] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_6] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 1])) ? (((/* implicit */int) ((unsigned char) 2097151U))) : (((/* implicit */int) arr_13 [i_0] [4LL] [i_6]))))) ? (max((max((((/* implicit */unsigned int) var_6)), (4292870133U))), (((unsigned int) (signed char)1)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_6] [(signed char)15] [i_5] [i_6])) - (((/* implicit */int) arr_19 [i_0] [11U] [i_6] [i_6] [5ULL] [i_6] [i_0]))))) ? (((/* implicit */int) min((arr_5 [i_6] [11U] [i_5] [(unsigned char)19]), (var_14)))) : (((/* implicit */int) max((arr_16 [(unsigned char)11] [(unsigned char)11] [19U] [19U]), (arr_17 [(signed char)7] [i_1] [i_1] [i_1])))))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [(short)14] [(_Bool)1] [(signed char)4] [19U])) : (((/* implicit */int) arr_5 [i_5] [i_5] [i_5] [i_5])))) * (((/* implicit */int) min((arr_10 [(signed char)17] [(signed char)18] [i_1] [i_1] [18ULL]), (arr_10 [i_0] [(signed char)4] [i_1] [i_5] [(short)5]))))))), (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (short)12722))))), (max((((/* implicit */unsigned int) var_11)), (arr_4 [(signed char)8])))))));
                }
                /* LoopNest 2 */
                for (long long int i_8 = 3; i_8 < 18; i_8 += 1) 
                {
                    for (unsigned int i_9 = 0; i_9 < 20; i_9 += 2) 
                    {
                        {
                            arr_27 [i_9] [i_1] [i_9] [i_8] = ((/* implicit */_Bool) min(((short)-26876), (((/* implicit */short) (_Bool)0))));
                            var_26 = ((/* implicit */signed char) ((short) max((max((((/* implicit */short) arr_5 [i_8] [(short)16] [(short)16] [(short)4])), (arr_19 [(signed char)11] [(signed char)11] [(signed char)11] [i_9] [(signed char)11] [(unsigned char)12] [(short)0]))), (((/* implicit */short) max((var_15), (((/* implicit */unsigned char) arr_15 [(_Bool)1] [(_Bool)1] [2LL]))))))));
                            var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [i_1])) ? (((/* implicit */int) (short)14909)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [(signed char)12] [i_1] [(signed char)12]))) : (max((arr_23 [i_0] [i_0] [7ULL]), (((/* implicit */long long int) var_8))))))) ? (max((((/* implicit */long long int) ((unsigned int) (signed char)4))), (((((/* implicit */long long int) ((/* implicit */int) (short)-26877))) / (arr_23 [i_8 - 1] [i_8 - 1] [i_8 + 1]))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_5 [i_1] [i_8 + 2] [i_8 - 1] [i_1])))))))));
                        }
                    } 
                } 
                arr_28 [i_0] [i_1] = ((/* implicit */_Bool) min((max((((/* implicit */unsigned int) arr_1 [i_0] [i_0])), (min((((/* implicit */unsigned int) arr_18 [i_1] [i_1] [i_1] [i_1] [i_1])), (2849386574U))))), (((/* implicit */unsigned int) var_0))));
                var_28 = ((/* implicit */unsigned char) ((short) (((_Bool)1) ? ((+(8355840U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_0] [i_1] [(_Bool)1] [i_1])) ? (((/* implicit */int) (short)12722)) : (((/* implicit */int) var_8))))))));
            }
        } 
    } 
    var_29 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (-((~(((/* implicit */int) var_9))))))) ? (((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned char) var_6))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)22822), (((/* implicit */short) (signed char)34)))))) : (min((var_3), (((/* implicit */unsigned long long int) var_12)))))) : (max((((/* implicit */unsigned long long int) ((var_2) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_13))))), (((((/* implicit */_Bool) (short)-29866)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_3)))))));
    var_30 = ((/* implicit */short) ((long long int) var_9));
}

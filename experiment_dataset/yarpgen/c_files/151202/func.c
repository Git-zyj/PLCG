/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151202
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
    var_12 ^= ((/* implicit */signed char) var_2);
    var_13 = ((/* implicit */short) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (((((/* implicit */int) var_10)) - (((/* implicit */int) var_7))))))));
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (((/* implicit */unsigned int) (~(max((1141730274), (((/* implicit */int) var_7))))))) : (var_3)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned int i_2 = 0; i_2 < 17; i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_1] [i_1] [i_1] = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17968246556708825029ULL)) || (((/* implicit */_Bool) (unsigned char)102))))), (((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)16392)) / (((/* implicit */int) (signed char)51))))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_2] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [10U] [i_0] [i_2] [i_2] [i_2]))) : (arr_9 [i_0] [i_0]))))));
                                var_15 *= ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) arr_11 [i_4] [i_1])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)154))) : (var_0)))))));
                                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_1) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [(unsigned char)12] [i_2] [i_0])))))))) ? (((((/* implicit */_Bool) arr_11 [i_0] [i_0])) ? (arr_11 [i_0] [i_0]) : (arr_11 [i_0] [i_0]))) : (((/* implicit */unsigned int) min((((/* implicit */int) (short)16392)), (((((/* implicit */int) (short)-32713)) | (((/* implicit */int) arr_7 [i_1] [i_0] [i_2] [i_3] [i_4])))))))));
                                arr_14 [i_0] [i_2] [(unsigned short)3] [i_0] [i_4] = ((/* implicit */unsigned char) max((((/* implicit */signed char) (((+(((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) > (((((/* implicit */int) (signed char)-66)) | (((/* implicit */int) arr_10 [i_4] [i_4] [i_0] [16ULL] [i_4] [i_4]))))))), (arr_12 [i_0] [i_1] [i_1] [15U] [i_1] [i_1])));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) max((arr_8 [10ULL] [(short)4] [i_2] [i_2]), (((/* implicit */unsigned int) ((var_11) == (((((/* implicit */_Bool) arr_12 [(short)10] [16U] [i_1] [i_2] [i_2] [16])) ? (var_1) : (arr_9 [4ULL] [(short)0])))))))))));
                }
                for (unsigned int i_5 = 0; i_5 < 17; i_5 += 1) /* same iter space */
                {
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_5] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)51897)) : (((/* implicit */int) (short)0))))) ? (var_0) : (arr_1 [i_0] [i_0])))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_0 [i_0] [i_0])), (arr_11 [i_0] [i_0])))) ? (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0])) <= (((/* implicit */int) arr_10 [(signed char)7] [i_1] [i_0] [i_1] [(unsigned short)1] [i_0]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0]))))))) : (((/* implicit */int) min(((unsigned char)15), (((/* implicit */unsigned char) ((arr_1 [i_0] [i_1]) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))))));
                    arr_17 [i_0] [i_1] [(unsigned short)2] |= -1LL;
                    var_19 = (+(var_4));
                }
                for (unsigned int i_6 = 0; i_6 < 17; i_6 += 1) /* same iter space */
                {
                    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) min(((+(((var_2) ? (5664866071406467461ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))), (((/* implicit */unsigned long long int) ((unsigned char) ((1651344683978105466ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))))))))));
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 17; i_7 += 3) 
                    {
                        for (int i_8 = 0; i_8 < 17; i_8 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((((max((((/* implicit */unsigned long long int) arr_8 [(unsigned char)16] [i_8] [(unsigned char)16] [i_7])), (12781878002303084155ULL))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_8])) ? (((/* implicit */int) (short)23824)) : (arr_19 [i_8])))))) & (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)21543)) >> (((((/* implicit */int) ((unsigned short) var_4))) - (59093)))))))))));
                                arr_26 [i_0] [i_0] [(short)12] [i_0] [i_0] [14U] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_23 [i_8] [i_0] [i_6] [i_1] [i_0] [(unsigned char)6]))));
                            }
                        } 
                    } 
                    arr_27 [i_0] [i_1] [i_0] [(_Bool)1] = ((/* implicit */short) ((((((/* implicit */_Bool) ((402653184) >> (((((/* implicit */int) (short)-23833)) + (23852)))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)16)) >= (((/* implicit */int) arr_23 [i_6] [i_0] [i_6] [i_1] [i_0] [i_0]))))) : ((+(((/* implicit */int) var_10)))))) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_0])))))));
                }
                arr_28 [i_0] = ((/* implicit */unsigned int) var_10);
                var_22 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_7))))), (max((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [(signed char)3]), (((/* implicit */unsigned short) var_2))))))) ? (((long long int) arr_25 [i_0] [i_0] [i_1] [i_1] [i_0] [i_1] [(_Bool)1])) : (((/* implicit */long long int) (+(((/* implicit */int) var_2)))))));
                var_23 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (12781878002303084155ULL) : (((/* implicit */unsigned long long int) 1141730274))))) ? (((/* implicit */int) var_10)) : ((+(((/* implicit */int) (unsigned short)65535)))))) >> (((((((/* implicit */_Bool) (unsigned short)18)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-23833))) : ((-9223372036854775807LL - 1LL)))) + (23847LL)))));
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109143
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
    var_20 = ((/* implicit */short) ((var_3) / (((/* implicit */unsigned long long int) 1497844981U))));
    var_21 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 2147483630)))))) != (var_11)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 20; i_1 += 1) 
        {
            {
                arr_7 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) arr_1 [i_0 + 1]))))) == (3471985447U)));
                arr_8 [4LL] [i_0] [(short)18] = ((/* implicit */int) max((max((2797122314U), (((/* implicit */unsigned int) 2147450880)))), (((/* implicit */unsigned int) arr_4 [i_0 - 2]))));
                /* LoopSeq 1 */
                for (int i_2 = 4; i_2 < 19; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 21; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                arr_18 [i_0] [i_1] [i_2 + 1] [i_3] [i_0] = ((min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_13 [(signed char)20] [i_1] [5ULL] [i_3] [i_4])), (0LL)))), (arr_10 [i_0] [i_1] [13] [i_4]))) ^ (((/* implicit */unsigned long long int) ((arr_16 [i_3]) % (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))));
                                arr_19 [i_0] [i_0] [i_0 + 1] [18] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_6 [i_3] [i_4]), (((/* implicit */unsigned int) 2097151))))) ? (((/* implicit */int) arr_11 [i_0 - 1] [i_1 + 1] [i_2 - 4] [i_3 + 1])) : ((+(((/* implicit */int) arr_1 [i_2]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_2] [i_3] [18]))) > (822981849U))) || (((/* implicit */_Bool) arr_15 [i_1 - 2] [i_1 + 2] [i_1 - 2] [i_1 - 3] [i_1 + 2])))))) : ((-(arr_12 [0ULL] [i_0] [8U] [i_3])))));
                                arr_20 [i_0 + 1] [i_1] [i_0 + 1] [i_1] = max((max((((469091144093820095ULL) << (((14319720628012977369ULL) - (14319720628012977358ULL))))), (((/* implicit */unsigned long long int) ((arr_16 [i_1]) + (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_1])))))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_11 [i_0] [i_0] [i_0 - 1] [i_0])), (arr_6 [i_0] [i_0])))));
                                arr_21 [i_4] [i_1] [i_1] [i_4] [i_4] [1ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_9 [i_0] [i_1] [i_2]) / (((/* implicit */unsigned int) -441864515))))) ? (arr_5 [i_0] [17]) : (((((/* implicit */_Bool) 2797122283U)) ? (2797122315U) : (var_13)))))) ? (min((((/* implicit */long long int) arr_15 [i_3] [i_3] [i_3 - 2] [i_3 - 1] [i_3])), (arr_16 [i_1]))) : (((/* implicit */long long int) ((((int) (short)20359)) / (((/* implicit */int) ((signed char) arr_17 [i_0] [i_0] [i_0 - 2] [i_0] [i_0]))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (int i_5 = 0; i_5 < 22; i_5 += 4) 
                    {
                        arr_26 [i_2] [i_2] [i_5] = ((/* implicit */int) min((((((/* implicit */_Bool) ((arr_5 [i_0] [i_0]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 + 2] [i_1 + 2] [i_0])))))) ? (((((/* implicit */unsigned long long int) 3659822743U)) | (arr_10 [i_1] [i_2] [i_1] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))))), (max((11001313667529327463ULL), (((/* implicit */unsigned long long int) arr_23 [i_2 - 4] [i_2] [i_0 + 1]))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 2) 
                        {
                            arr_29 [i_6] [i_1] [6U] [i_1 + 1] [i_1] [i_0 - 1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_24 [i_5] [i_2] [i_2 - 3] [i_0 - 1] [(unsigned short)15]), (arr_24 [i_6] [(unsigned short)12] [i_2 - 3] [i_0 - 1] [i_0]))))) != (((((/* implicit */_Bool) ((unsigned int) arr_5 [i_0] [i_1]))) ? (((((/* implicit */_Bool) arr_28 [i_0] [i_1] [2] [i_2] [i_5] [2])) ? (((/* implicit */unsigned long long int) -1LL)) : (arr_12 [i_5] [i_2] [i_1] [1]))) : (((/* implicit */unsigned long long int) min((1497844981U), (arr_9 [i_0] [i_0] [i_2]))))))));
                            arr_30 [i_6] [i_1] [i_1] [i_5] [i_6] [i_1] [i_1 + 1] = ((/* implicit */int) min((((((/* implicit */_Bool) ((unsigned char) 17977652929615731523ULL))) ? (((/* implicit */unsigned long long int) min((arr_14 [i_2 - 4] [3LL] [i_2] [i_5] [i_6] [i_6] [i_2]), (arr_15 [i_0 - 2] [i_2] [i_2] [i_5] [i_6])))) : (min((0ULL), (((/* implicit */unsigned long long int) 5)))))), (((/* implicit */unsigned long long int) ((6ULL) >= (((/* implicit */unsigned long long int) arr_15 [i_2 - 3] [i_0 + 1] [4ULL] [16ULL] [19U])))))));
                        }
                        arr_31 [i_1] [i_2] [14] [i_1] = ((/* implicit */int) max((((var_13) ^ (((/* implicit */unsigned int) ((/* implicit */int) min((arr_22 [(unsigned short)21] [i_1] [i_1 - 3]), (((/* implicit */unsigned char) (_Bool)0)))))))), ((-(((unsigned int) 822981835U))))));
                    }
                    /* LoopSeq 1 */
                    for (signed char i_7 = 0; i_7 < 22; i_7 += 3) 
                    {
                        arr_36 [i_1] = ((/* implicit */signed char) ((long long int) arr_11 [i_2] [i_1] [i_2] [i_7]));
                        arr_37 [i_1] [(short)4] = ((/* implicit */unsigned int) arr_22 [i_0] [i_0] [8ULL]);
                    }
                    arr_38 [i_1] [i_2] [i_2] [i_0] = ((/* implicit */unsigned long long int) arr_6 [i_0 - 1] [i_0 - 1]);
                }
            }
        } 
    } 
}

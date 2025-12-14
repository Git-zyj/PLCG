/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133267
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
    for (short i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    arr_6 [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) var_9);
                    var_16 = ((/* implicit */signed char) min((((((/* implicit */_Bool) 616585032U)) ? (13642637053049524427ULL) : (((13642637053049524436ULL) * (0ULL))))), (((/* implicit */unsigned long long int) (((-(((/* implicit */int) (unsigned short)46420)))) + (((/* implicit */int) arr_3 [i_1])))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        arr_9 [i_0] [i_1] [(short)21] [i_1] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_1])) && (((/* implicit */_Bool) var_0))));
                        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) var_6)) ? (arr_0 [(short)8]) : (((/* implicit */long long int) var_5)))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1])))));
                        arr_10 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((13642637053049524434ULL) / (((/* implicit */unsigned long long int) 616585032U))));
                    }
                    /* LoopSeq 3 */
                    for (long long int i_4 = 0; i_4 < 23; i_4 += 3) 
                    {
                        arr_13 [i_1] [i_1] [i_2] [i_4] = ((/* implicit */short) (~(arr_8 [i_1])));
                        arr_14 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)125)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_1] [i_4])) ? (((/* implicit */unsigned long long int) var_8)) : (13642637053049524427ULL))))));
                        var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) ((max((((/* implicit */unsigned long long int) arr_1 [i_2] [19ULL])), (13642637053049524427ULL))) >= (((/* implicit */unsigned long long int) var_2))))) + (((/* implicit */int) max((((/* implicit */short) (unsigned char)49)), (arr_3 [i_1]))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 3) /* same iter space */
                    {
                        arr_17 [i_2] [i_2] [i_0 + 3] [i_2] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))))) : (4804107020660027176ULL)));
                        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((long long int) arr_5 [i_2] [i_0] [i_0 - 3] [i_0 - 1])))));
                        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-113))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((13642637053049524445ULL) >= (13642637053049524437ULL))))));
                        arr_18 [i_1] [i_1] [i_1] [i_5] = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) arr_16 [(signed char)0] [i_1]))))));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 3) /* same iter space */
                    {
                        var_21 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) var_4))) && (((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)0)) * (((/* implicit */int) (signed char)-27))))) + (arr_12 [i_2] [i_1]))))));
                        arr_21 [i_0] [i_1] [i_2] [i_6] [i_6] |= ((/* implicit */unsigned long long int) ((short) ((((/* implicit */int) ((short) arr_12 [i_2] [(short)6]))) >= (((/* implicit */int) ((unsigned short) var_11))))));
                        var_22 = ((/* implicit */long long int) ((min((((/* implicit */unsigned int) var_4)), (arr_2 [i_1]))) + (((/* implicit */unsigned int) max((arr_8 [i_1]), (((/* implicit */int) (unsigned short)57344)))))));
                    }
                }
                var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-117)) ? (((/* implicit */int) (unsigned char)66)) : (((/* implicit */int) (unsigned char)149))));
                arr_22 [i_1] [10U] [i_1] = ((/* implicit */unsigned int) (signed char)118);
                var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(12754149422012028156ULL)))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_7)), (arr_4 [16LL] [16] [i_1] [i_0 + 2])))) : (((/* implicit */int) var_10))))) ? (max((((/* implicit */unsigned int) var_3)), (arr_2 [(unsigned char)10]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_5 [14U] [i_1] [(short)6] [i_0])))))))));
            }
        } 
    } 
    var_25 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) 13642637053049524436ULL)) ? (((/* implicit */int) ((unsigned short) var_14))) : (((/* implicit */int) var_11))));
}

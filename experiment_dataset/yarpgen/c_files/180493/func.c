/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180493
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
    /* LoopSeq 3 */
    for (signed char i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [(unsigned short)14])) ? (((((/* implicit */_Bool) max((arr_1 [i_0]), (arr_1 [i_0])))) ? (((/* implicit */long long int) (-(arr_0 [i_0 + 1])))) : ((-(var_6))))) : (((/* implicit */long long int) ((unsigned int) (!(((/* implicit */_Bool) -1071097071884122914LL))))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 4; i_1 < 12; i_1 += 3) 
        {
            var_18 -= ((/* implicit */signed char) max((((/* implicit */long long int) (((-(arr_0 [i_1]))) / (((((/* implicit */_Bool) arr_3 [i_0] [(short)0] [12ULL])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_8))))))), (var_4)));
            arr_5 [i_1 - 1] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0 - 2] [i_1] [i_1 + 2])) && (((/* implicit */_Bool) (+(arr_0 [i_1])))))))));
        }
    }
    for (unsigned int i_2 = 2; i_2 < 20; i_2 += 3) 
    {
        arr_10 [i_2] [(unsigned short)20] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) var_15)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2] [i_2 - 1])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2] [i_2])))))) ? (((var_16) ^ (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2]))))) : (((/* implicit */long long int) ((/* implicit */int) (!(var_9))))))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_7 [i_2 - 1] [i_2 - 2])), (arr_6 [i_2 - 1])))))));
        arr_11 [i_2 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((int) arr_9 [i_2 + 1]))) : (((long long int) -1071097071884122914LL))));
        var_19 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_9 [i_2]) % (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_10)), (arr_7 [i_2 + 1] [i_2])))) : (((/* implicit */int) ((((/* implicit */int) arr_6 [i_2])) < (((/* implicit */int) var_8)))))))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2] [i_2])))))) ? (((/* implicit */unsigned long long int) max((var_1), (arr_9 [i_2])))) : (max((arr_8 [i_2 - 1]), (arr_8 [14LL])))))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_20 = ((/* implicit */int) max(((-(-1071097071884122914LL))), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_12)), (arr_3 [4ULL] [(unsigned char)14] [i_3])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_3])) ? (((/* implicit */int) (signed char)-71)) : (((/* implicit */int) var_2))))) : (((((/* implicit */long long int) ((/* implicit */int) var_2))) % (arr_1 [(unsigned short)11])))))));
        var_21 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) min((arr_8 [i_3]), (((/* implicit */unsigned long long int) var_10))))) ? (((/* implicit */long long int) ((var_9) ? (((/* implicit */int) var_11)) : (var_12)))) : (min((1071097071884122913LL), (((/* implicit */long long int) (_Bool)0))))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_17 [i_4] [(unsigned short)9] &= ((/* implicit */long long int) var_12);
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_16 [i_4] [10]))) - (arr_14 [i_4]))) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_4])))));
    }
    var_23 = ((/* implicit */unsigned int) ((int) ((unsigned long long int) 2198561890U)));
}

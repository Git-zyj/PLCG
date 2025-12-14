/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139095
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
    var_10 = ((/* implicit */int) (signed char)-121);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned int i_2 = 2; i_2 < 19; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        arr_12 [i_1] = ((/* implicit */unsigned long long int) (+(arr_3 [i_0 - 1])));
                        var_11 = ((/* implicit */unsigned short) (short)20085);
                        arr_13 [(signed char)5] [i_1] [i_2] [i_3] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)78)) != (((/* implicit */int) var_1))));
                        arr_14 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_2 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_3]))) : (arr_9 [i_2 + 1])));
                    }
                    var_12 += ((/* implicit */unsigned short) max((min((137438953471ULL), (((/* implicit */unsigned long long int) arr_1 [i_0 - 3])))), (((/* implicit */unsigned long long int) arr_1 [i_0 + 1]))));
                    arr_15 [i_2] [(unsigned short)9] [i_1] [9ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)38)) ? (max((var_8), (((/* implicit */int) (unsigned char)39)))) : (((/* implicit */int) (signed char)120))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_2] [i_1] [i_0])) >> (((arr_2 [i_1]) + (1000214504)))))), (((((/* implicit */long long int) var_8)) / (arr_7 [12] [i_1] [i_1])))))) : (min((((((/* implicit */_Bool) arr_1 [i_0])) ? (var_5) : (((/* implicit */unsigned long long int) 7475130037397090187LL)))), (((/* implicit */unsigned long long int) arr_0 [i_0]))))));
                    var_13 += ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) max(((unsigned char)232), (((/* implicit */unsigned char) arr_5 [i_2] [i_1] [i_0])))))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned char)218)), (((((/* implicit */_Bool) (signed char)121)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_1 [i_2])))))) : (min((var_5), (((/* implicit */unsigned long long int) ((arr_7 [i_2] [i_1] [i_0]) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)124))))))))));
                    arr_16 [i_2] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((((/* implicit */_Bool) (signed char)6)) ? (((/* implicit */int) (unsigned char)132)) : (arr_2 [i_0]))) : (((/* implicit */int) (signed char)121))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */_Bool) (+(((/* implicit */int) var_7))));
}

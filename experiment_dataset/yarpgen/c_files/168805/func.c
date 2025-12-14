/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168805
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
    var_12 = ((/* implicit */_Bool) ((unsigned long long int) ((int) var_6)));
    var_13 = ((/* implicit */unsigned char) var_7);
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) (~(((/* implicit */int) ((unsigned short) 1252408736U)))));
        var_14 = ((/* implicit */unsigned char) (~((~(arr_0 [i_0])))));
        var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 942952535))));
    }
    for (int i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        var_16 = ((/* implicit */short) min((((/* implicit */unsigned int) min((min((((/* implicit */int) (signed char)85)), (942952535))), (((int) arr_3 [i_1] [i_1]))))), ((+((-(var_6)))))));
        arr_6 [i_1] [i_1] &= ((/* implicit */int) max((((/* implicit */unsigned long long int) (~((+(((/* implicit */int) arr_1 [i_1] [i_1]))))))), (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)15))))), (((unsigned long long int) var_2))))));
        arr_7 [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) max((-1827727979), (-942952535))))));
    }
    for (short i_2 = 0; i_2 < 11; i_2 += 3) 
    {
        var_17 += min((min((18446744073709551615ULL), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)194)))))), (((/* implicit */unsigned long long int) min((min((1446725856U), (((/* implicit */unsigned int) (unsigned char)154)))), (((/* implicit */unsigned int) (signed char)110))))));
        arr_10 [i_2] = ((/* implicit */signed char) min((min(((+(((/* implicit */int) (short)12154)))), (((/* implicit */int) arr_3 [i_2] [i_2])))), ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))));
        var_18 = ((/* implicit */long long int) max((((/* implicit */unsigned int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_8 [i_2] [i_2]))))), (max(((unsigned short)17172), (((/* implicit */unsigned short) (_Bool)1))))))), (max((((/* implicit */unsigned int) ((signed char) 63488ULL))), (min((var_2), (((/* implicit */unsigned int) arr_3 [i_2] [i_2]))))))));
    }
}

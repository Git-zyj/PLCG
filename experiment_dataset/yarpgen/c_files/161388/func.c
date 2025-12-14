/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161388
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
    /* LoopSeq 4 */
    for (int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        var_10 = min(((~((~(arr_0 [i_0] [i_0]))))), (((/* implicit */unsigned long long int) ((136902082560LL) * (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)92), (((/* implicit */unsigned char) (_Bool)0))))))))));
        var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) min(((+(arr_1 [(signed char)22] [(signed char)22]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) % ((+(((/* implicit */int) var_1))))))))))));
        arr_2 [i_0] [12LL] &= ((/* implicit */int) ((((/* implicit */_Bool) (+(max((var_0), (((/* implicit */unsigned int) var_9))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)38212)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) (signed char)-119))))) : (((min((((/* implicit */unsigned long long int) var_9)), (arr_0 [i_0 + 1] [2U]))) << (min((((/* implicit */int) (_Bool)1)), (1584092460)))))));
    }
    for (short i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        var_12 = 3029484468U;
        var_13 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))), ((-(arr_0 [i_1] [i_1])))));
    }
    /* vectorizable */
    for (short i_2 = 1; i_2 < 17; i_2 += 1) 
    {
        var_14 = ((/* implicit */unsigned short) arr_8 [i_2]);
        var_15 = ((/* implicit */unsigned short) arr_0 [i_2] [i_2]);
    }
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        var_16 = ((/* implicit */_Bool) arr_0 [i_3] [i_3]);
        arr_12 [i_3] = ((/* implicit */_Bool) max(((-(arr_0 [i_3] [i_3 - 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_8)))))));
        var_17 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) -1370616272662039646LL)) || (((/* implicit */_Bool) var_0)))) ? (var_0) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_4)))))))), ((-(var_5)))));
        var_18 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) 855023764U)), (arr_11 [i_3])));
    }
    var_19 ^= ((/* implicit */unsigned short) var_1);
}

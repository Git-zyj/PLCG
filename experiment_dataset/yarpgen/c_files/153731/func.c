/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153731
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
    var_12 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (+(var_1)))), (((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (var_3) : (((var_3) % (var_3)))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 2) /* same iter space */
    {
        arr_2 [(unsigned char)6] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_10))));
        arr_3 [i_0] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [12LL])) ? (min((((/* implicit */unsigned long long int) 5244014800296245285LL)), (270215977642229760ULL))) : (((/* implicit */unsigned long long int) 3425402232U))))) ? (((/* implicit */int) ((signed char) (unsigned char)0))) : (((/* implicit */int) arr_0 [i_0]))));
        var_13 -= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-92)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) : (((((/* implicit */_Bool) (unsigned char)38)) ? (((/* implicit */long long int) arr_1 [i_0] [i_0])) : (var_3))))), (((/* implicit */long long int) arr_1 [i_0] [i_0]))));
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) (~(-21619404188894056LL))))) < (((/* implicit */int) ((unsigned char) ((arr_1 [10ULL] [i_0]) >= (869565064U)))))));
    }
    for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            var_15 = ((/* implicit */unsigned long long int) ((var_5) % (((/* implicit */unsigned int) min(((+(((/* implicit */int) arr_9 [i_2])))), (((/* implicit */int) ((signed char) var_9))))))));
            var_16 += ((/* implicit */signed char) ((((/* implicit */unsigned int) ((int) ((unsigned short) (unsigned short)2016)))) * ((~(min((((/* implicit */unsigned int) arr_0 [i_1])), (4294967294U)))))));
        }
        arr_10 [i_1] [i_1] = ((/* implicit */unsigned short) arr_6 [(short)12] [i_1] [i_1]);
        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)46))))))))));
    }
}

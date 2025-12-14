/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170914
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
    var_11 += ((/* implicit */unsigned char) 4026531840U);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 3; i_0 < 13; i_0 += 3) 
    {
        arr_2 [9U] = ((/* implicit */int) (((!(((/* implicit */_Bool) 17431056619653459515ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)39))) : (max((((/* implicit */unsigned long long int) (short)18120)), (max((12838750729381585188ULL), (((/* implicit */unsigned long long int) (signed char)124))))))));
        arr_3 [9ULL] = ((/* implicit */int) 1585899163U);
    }
    for (unsigned short i_1 = 2; i_1 < 11; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_2 = 3; i_2 < 10; i_2 += 4) 
        {
            var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) 2709068138U))));
            var_13 = ((/* implicit */unsigned int) min((var_13), (var_1)));
        }
        arr_10 [(unsigned short)11] [i_1] = ((/* implicit */short) var_0);
        var_14 = max((min((((/* implicit */unsigned long long int) 1792636217)), (12838750729381585188ULL))), (((/* implicit */unsigned long long int) var_7)));
        var_15 = max((max(((+(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) min((var_2), (((/* implicit */unsigned char) (signed char)-72))))))), ((~(((/* implicit */int) (_Bool)1)))));
        arr_11 [i_1] = (unsigned short)54214;
    }
    var_16 = ((/* implicit */unsigned char) var_7);
    var_17 = ((/* implicit */signed char) max(((+(((/* implicit */int) min(((_Bool)1), ((_Bool)0)))))), (((/* implicit */int) (unsigned short)65534))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125824
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
    var_13 = (~((~(((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) arr_1 [i_0]))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            arr_5 [i_1] = ((/* implicit */unsigned int) ((long long int) (((-2147483647 - 1)) == (2147483647))));
            var_15 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_2 [i_0])) ? (2147483647) : (((/* implicit */int) arr_0 [i_1]))))));
            var_16 = ((((/* implicit */_Bool) (unsigned short)51956)) ? ((-2147483647 - 1)) : (((/* implicit */int) (_Bool)0)));
            var_17 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 2147483647))));
            var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (signed char)127))));
        }
        arr_6 [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 2147483647)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 201323982)) ? (-1LL) : (((/* implicit */long long int) -2147483638))))))))) - (-8197018801333854174LL)));
    }
    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) 2ULL))));
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-13667)) ? ((~(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)70))) ^ (262143U))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34274)))));
    var_21 = ((/* implicit */unsigned long long int) var_11);
}

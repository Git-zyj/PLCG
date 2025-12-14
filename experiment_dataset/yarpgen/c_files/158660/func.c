/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158660
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
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 17236003720143869588ULL)) ? (var_4) : (var_4)))) ? (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (var_1)))) : (((/* implicit */int) var_9)))) : (((/* implicit */int) var_6))));
    var_17 = ((/* implicit */_Bool) (short)-12421);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((((((/* implicit */_Bool) (short)-23302)) ? (((/* implicit */int) (unsigned short)3674)) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)3665)) > (((/* implicit */int) var_3))))))) == (((/* implicit */int) (unsigned short)61835)))))));
            /* LoopSeq 2 */
            for (unsigned short i_2 = 1; i_2 < 6; i_2 += 1) 
            {
                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((max((var_11), (((/* implicit */unsigned long long int) (unsigned short)7)))) - (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned short)61835)), (1486985055U)))))))));
                arr_6 [i_0] [i_1] [i_1] = max((((0ULL) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7228428741108136734ULL)) ? (((/* implicit */int) (unsigned short)38)) : (((/* implicit */int) var_7))))))), ((_Bool)1));
                var_20 = ((/* implicit */_Bool) (unsigned short)3);
            }
            /* vectorizable */
            for (unsigned short i_3 = 0; i_3 < 10; i_3 += 3) 
            {
                var_21 = ((/* implicit */short) (signed char)78);
                var_22 = ((/* implicit */unsigned short) -925917570);
            }
        }
        var_23 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)3700)) % (-925917570)));
        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)7))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)3)) / (-925917570)))) ? (12987424333688367775ULL) : (((12987424333688367775ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)38)) : (var_5)))))))));
    }
}

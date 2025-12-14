/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158203
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
    var_16 |= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned short)51547)) : (((/* implicit */int) var_9))))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) (+(var_3)))) == (var_15)))) : ((~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)37760)) : (((/* implicit */int) (unsigned short)53263))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        var_17 = ((((/* implicit */unsigned long long int) 8635128749598198931LL)) >= (18446744073709551615ULL));
        var_18 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((min((((/* implicit */unsigned int) arr_3 [i_0])), (3409506020U))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (signed char)-120)))))))) ^ (min((-7698762756287750228LL), (((/* implicit */long long int) min((((/* implicit */signed char) arr_2 [i_0] [i_0])), ((signed char)-120))))))));
    }
    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (-2097152))))) ? (min(((~(((/* implicit */int) var_1)))), (((/* implicit */int) var_8)))) : ((((+(((/* implicit */int) var_9)))) << (((((var_3) / (2097151))) - (765))))))))));
    var_20 += ((/* implicit */long long int) (~(((/* implicit */int) min((((unsigned char) -2097128)), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_12))))))))));
}

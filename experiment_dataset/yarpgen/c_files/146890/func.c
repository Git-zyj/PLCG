/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146890
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
    for (int i_0 = 1; i_0 < 14; i_0 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) (~(min((((/* implicit */int) (signed char)51)), ((-(-850060104))))))))));
        var_15 = ((/* implicit */signed char) max((var_15), ((signed char)-76)));
        var_16 = ((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 - 1]);
    }
    for (int i_1 = 1; i_1 < 14; i_1 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned short) -17LL);
        var_18 += ((/* implicit */unsigned int) ((unsigned short) min((arr_1 [(signed char)0]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [(unsigned short)6])) && (((/* implicit */_Bool) var_0))))))));
        var_19 |= ((/* implicit */unsigned long long int) (_Bool)1);
        arr_7 [(short)9] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((4015674053U), (((/* implicit */unsigned int) var_13))))) ? (-7060133665143809502LL) : (-2342456838204264262LL)))) : (((((/* implicit */_Bool) -1834882980)) ? (min((arr_1 [(signed char)6]), (((/* implicit */unsigned long long int) 8489616685467660416LL)))) : (((((/* implicit */_Bool) -8489616685467660417LL)) ? (((/* implicit */unsigned long long int) -7060133665143809502LL)) : (15594286588175757583ULL)))))));
        var_20 *= ((/* implicit */short) 15594286588175757583ULL);
    }
    for (unsigned long long int i_2 = 2; i_2 < 13; i_2 += 3) 
    {
        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((((((/* implicit */_Bool) arr_10 [i_2] [i_2])) && (((/* implicit */_Bool) ((long long int) var_8))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_13)))) : (var_8))))));
        arr_12 [(unsigned short)11] [i_2] = ((/* implicit */unsigned int) var_7);
    }
    var_22 = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) ((signed char) min((16LL), (var_8))))), (var_10)));
}

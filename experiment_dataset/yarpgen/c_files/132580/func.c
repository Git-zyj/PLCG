/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132580
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
    var_19 = ((/* implicit */unsigned short) ((unsigned long long int) (short)(-32767 - 1)));
    var_20 = ((/* implicit */signed char) var_6);
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 12; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) (+(var_14)));
        arr_4 [(signed char)6] [i_0] = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */int) min(((unsigned short)4497), ((unsigned short)61024)))) >= (((/* implicit */int) min(((unsigned short)45777), ((unsigned short)22627)))))));
        arr_5 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) (signed char)53)), (492396197)))) ? (max((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1862))) : (4294967295U))), (((/* implicit */unsigned int) ((-6) >= (((/* implicit */int) (signed char)-118))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (((+(((/* implicit */int) var_1)))) > (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (short)-32765)) : (((/* implicit */int) (short)22634))))))))));
        arr_6 [(signed char)6] = ((/* implicit */int) 15989988550557858902ULL);
    }
    for (short i_1 = 0; i_1 < 12; i_1 += 3) /* same iter space */
    {
        var_21 &= ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((var_18) << (((3387562356U) - (3387562343U)))))) ^ (min((var_15), (18446744073709551615ULL))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22877)))));
        var_22 = ((/* implicit */unsigned short) 511503819);
    }
    for (short i_2 = 0; i_2 < 12; i_2 += 3) /* same iter space */
    {
        var_23 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_6)))))))), (min((((((/* implicit */_Bool) var_12)) ? (540829803005059330ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-22629))))), (((/* implicit */unsigned long long int) ((unsigned short) (signed char)0)))))));
        var_24 = ((unsigned int) 8191);
        arr_12 [i_2] = var_16;
    }
    var_25 = ((/* implicit */int) ((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 531134959)) ? (var_0) : (((/* implicit */int) var_12))))), (var_17))) <= (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)23), (min((((/* implicit */unsigned short) (short)-32760)), ((unsigned short)26894)))))))));
}

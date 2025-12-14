/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172451
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [4ULL] |= ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_0 [(signed char)2]) : (arr_0 [(unsigned short)0]))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) arr_1 [i_0] [i_0]);
    }
    for (short i_1 = 0; i_1 < 12; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [i_1] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) min((max((((/* implicit */int) (short)-7535)), (var_6))), (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))), (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-7535))))), (((arr_5 [i_1]) ? (arr_1 [i_1] [(unsigned short)5]) : (var_11)))))));
        var_17 |= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (~((-(var_10)))))), (max((min((((/* implicit */unsigned long long int) arr_5 [i_1])), (var_11))), (((/* implicit */unsigned long long int) min((var_4), (var_13))))))));
        var_18 *= ((/* implicit */unsigned short) max((var_15), (((/* implicit */short) ((_Bool) (!(((/* implicit */_Bool) arr_4 [i_1] [i_1]))))))));
    }
    var_19 = ((/* implicit */unsigned short) (short)-7535);
    /* LoopSeq 3 */
    for (short i_2 = 1; i_2 < 19; i_2 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned long long int) -8073264342375439427LL);
        arr_9 [i_2] [i_2 + 1] = ((/* implicit */unsigned short) ((unsigned char) var_1));
        arr_10 [i_2] = ((/* implicit */short) (signed char)-53);
    }
    for (short i_3 = 1; i_3 < 19; i_3 += 2) /* same iter space */
    {
        arr_13 [i_3] = ((/* implicit */unsigned char) -22);
        var_21 -= ((/* implicit */short) arr_8 [i_3 - 1] [i_3 + 1]);
        var_22 = ((/* implicit */long long int) (-(min((((15400945367297827183ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)245))))), (((/* implicit */unsigned long long int) arr_8 [i_3] [i_3 - 1]))))));
    }
    for (short i_4 = 0; i_4 < 20; i_4 += 1) 
    {
        arr_16 [i_4] = ((/* implicit */unsigned short) arr_11 [i_4]);
        arr_17 [i_4] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_14 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)25271))) : (arr_15 [i_4] [i_4]))), (min((arr_15 [i_4] [i_4]), (((/* implicit */long long int) arr_8 [i_4] [i_4]))))));
    }
    var_23 |= ((min((((/* implicit */unsigned long long int) min((578865091), (-22)))), (max((((/* implicit */unsigned long long int) var_10)), (var_11))))) * (max((((/* implicit */unsigned long long int) -8073264342375439427LL)), (max((((/* implicit */unsigned long long int) var_1)), (3045798706411724442ULL))))));
}

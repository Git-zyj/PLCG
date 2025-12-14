/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123077
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_18 = ((/* implicit */_Bool) ((unsigned short) arr_1 [i_0]));
        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0])))))));
        arr_2 [i_0] = ((_Bool) (signed char)-125);
    }
    /* LoopSeq 2 */
    for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        var_20 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_5)), (((unsigned short) (signed char)-103))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_4 [i_1])), (var_3))))));
        var_21 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(min((((/* implicit */unsigned long long int) var_1)), (25ULL))))))));
    }
    for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        var_22 = ((/* implicit */unsigned long long int) max((var_22), ((-(15018721841786629326ULL)))));
        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((_Bool) (((-(((/* implicit */int) (signed char)-109)))) % (((var_9) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_17))))))))));
        var_24 = arr_5 [i_2];
        arr_7 [i_2] = ((/* implicit */_Bool) min((arr_6 [8U]), (min(((signed char)-113), ((signed char)124)))));
        var_25 = ((/* implicit */_Bool) min((32767U), (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) * (((((/* implicit */unsigned int) ((/* implicit */int) var_17))) * (var_0)))))));
    }
    var_26 -= ((/* implicit */unsigned int) var_15);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127651
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) 10654613474120182590ULL)))) ? (((((/* implicit */_Bool) 10654613474120182582ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (max((((/* implicit */unsigned long long int) arr_0 [(short)17] [i_0])), (10654613474120182595ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) (((!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23000))) : (7792130599589369033ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_1 [i_0]), (arr_1 [i_0]))))) : (((((/* implicit */_Bool) (signed char)23)) ? (10654613474120182588ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))))));
        var_12 = ((/* implicit */short) arr_1 [i_0]);
        var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7792130599589369014ULL)) ? ((~(((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) (short)32767))))) ? (((/* implicit */long long int) ((/* implicit */int) max(((signed char)96), (arr_1 [i_0]))))) : (((((/* implicit */long long int) min((((/* implicit */int) arr_1 [i_0])), (8388604)))) + (max((-1326505722041829076LL), (((/* implicit */long long int) var_8))))))));
    }
    /* LoopSeq 2 */
    for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */long long int) arr_0 [i_1] [i_1]);
        arr_7 [i_1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)192))))) ? (7792130599589369022ULL) : (((/* implicit */unsigned long long int) 0)))) - (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [i_1]))) : (var_11)))), (min((10654613474120182593ULL), (((/* implicit */unsigned long long int) arr_0 [i_1] [i_1]))))))));
    }
    for (unsigned short i_2 = 0; i_2 < 18; i_2 += 4) /* same iter space */
    {
        var_14 |= ((/* implicit */short) min((max((((arr_0 [i_2] [i_2]) ? (((/* implicit */int) (signed char)-97)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) max((arr_9 [i_2] [0U]), (((/* implicit */signed char) arr_0 [i_2] [5LL]))))))), (((/* implicit */int) max((((signed char) arr_0 [i_2] [i_2])), (arr_11 [i_2]))))));
        var_15 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (signed char)-118)), (7792130599589369045ULL)));
        var_16 = ((/* implicit */signed char) max(((-(1326505722041829075LL))), (((/* implicit */long long int) arr_0 [i_2] [i_2]))));
    }
}

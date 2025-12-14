/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120217
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
    var_15 = ((/* implicit */long long int) min((((((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)3)), (4294967295U)))) ? (max((((/* implicit */int) var_1)), (var_12))) : (((/* implicit */int) var_8)))), (((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (var_14) : (((/* implicit */int) ((short) var_4)))))));
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((319371767U) > (((/* implicit */unsigned int) -296027203))))) % (((/* implicit */int) var_3))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_10)) / (((/* implicit */int) (unsigned short)3)))))))) : (var_14)));
    var_17 = ((/* implicit */signed char) (((((+(var_14))) + (2147483647))) << (((((var_5) ? (10783566835857974736ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) - (18446744073709551570ULL)))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)34698)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6175))) : (1U)))), (arr_2 [i_0] [i_0])))), (((((/* implicit */_Bool) arr_0 [4])) ? (min((((/* implicit */unsigned long long int) 319371791U)), (7663177237851576891ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (2098311310) : (((/* implicit */int) arr_1 [i_0])))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) max((((/* implicit */long long int) max((((arr_1 [3U]) ? (((/* implicit */unsigned int) 0)) : (arr_0 [i_0]))), (((/* implicit */unsigned int) arr_1 [i_0]))))), (max((((/* implicit */long long int) max((((/* implicit */unsigned int) -273031215)), (arr_0 [i_0])))), (((((/* implicit */_Bool) -1)) ? (arr_2 [i_0] [i_0]) : (((/* implicit */long long int) arr_0 [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 16; i_1 += 3) /* same iter space */
    {
        arr_8 [i_1] = ((/* implicit */_Bool) arr_4 [i_1] [i_1]);
        var_19 = ((/* implicit */short) ((((/* implicit */long long int) max((((/* implicit */unsigned int) (_Bool)1)), (((((/* implicit */_Bool) 377206884)) ? (3975595505U) : (319371787U)))))) != (-7735425360344252959LL)));
    }
}

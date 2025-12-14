/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1835
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
    for (short i_0 = 0; i_0 < 12; i_0 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) min((((/* implicit */unsigned short) var_10)), (arr_0 [i_0] [i_0]))))) ? (arr_1 [i_0]) : ((+(arr_1 [i_0]))))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) arr_1 [i_0])) % (((5773250904114656232ULL) << (((1850939767) - (1850939765))))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_1 [i_0])) <= (7793891816927823083ULL)))))));
    }
    for (short i_1 = 0; i_1 < 12; i_1 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */int) 10652852256781728533ULL);
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-27761)) * (((/* implicit */int) arr_4 [i_1])))) == ((-(((/* implicit */int) arr_4 [i_1])))))))));
        arr_5 [i_1] [i_1] = ((/* implicit */long long int) arr_3 [i_1] [i_1]);
        var_23 |= ((/* implicit */short) 7793891816927823074ULL);
        arr_6 [i_1] = ((/* implicit */short) (+(((((/* implicit */int) var_2)) / (arr_1 [i_1])))));
    }
    var_24 = ((/* implicit */unsigned short) (+(min((((/* implicit */int) min((((/* implicit */short) (signed char)-107)), (var_0)))), (var_13)))));
}

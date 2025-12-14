/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102093
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
    var_13 *= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)27585))) / (((min((((/* implicit */long long int) (unsigned short)37950)), (var_11))) + (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)27567), ((unsigned short)37954)))))))));
    var_14 = ((((/* implicit */int) (unsigned short)37954)) ^ (((int) (~(((/* implicit */int) var_6))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_15 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) min(((unsigned short)37954), ((unsigned short)63173)))) && ((_Bool)1))))) != (max((((/* implicit */long long int) arr_1 [i_0])), (((((/* implicit */long long int) ((/* implicit */int) arr_0 [(_Bool)1]))) + (16777215LL)))))));
        arr_2 [i_0] = ((/* implicit */short) ((((min((((/* implicit */unsigned long long int) arr_1 [i_0])), (5594663394015499198ULL))) >> (((/* implicit */int) ((((/* implicit */_Bool) -6928123906325719970LL)) && (((/* implicit */_Bool) (short)-18249))))))) / (((/* implicit */unsigned long long int) -756224585))));
        var_16 += ((((/* implicit */unsigned long long int) ((/* implicit */int) ((min((((/* implicit */unsigned long long int) arr_0 [i_0])), (16236490960218331933ULL))) >= (((11517940632656083590ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))))))) + (min((((2210253113491219698ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))))), (((unsigned long long int) arr_1 [i_0])))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_17 *= ((/* implicit */short) ((min((max((arr_4 [i_1]), (((/* implicit */unsigned long long int) arr_1 [i_1 - 1])))), (((arr_4 [6U]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) >= (((/* implicit */unsigned long long int) ((long long int) (_Bool)1)))));
        var_18 += ((/* implicit */short) ((min((((1399287383) >> (((((/* implicit */int) (short)-1398)) + (1409))))), (((/* implicit */int) ((short) arr_4 [i_1]))))) == ((+(1399287358)))));
        var_19 += ((/* implicit */unsigned int) max((((((long long int) arr_4 [13ULL])) ^ (((arr_3 [(unsigned short)20] [i_1]) + (((/* implicit */long long int) ((/* implicit */int) (short)32767))))))), (((/* implicit */long long int) min((((/* implicit */int) ((unsigned short) arr_1 [i_1]))), (((((/* implicit */int) arr_0 [(unsigned short)13])) + (((/* implicit */int) arr_0 [i_1 - 1])))))))));
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) 12076515457998831972ULL))));
    }
}

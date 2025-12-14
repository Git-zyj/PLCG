/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156597
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
    var_11 &= ((/* implicit */short) (~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (var_8)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 4; i_0 < 7; i_0 += 2) 
    {
        arr_3 [i_0 + 2] = ((/* implicit */signed char) (-(((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 2]))));
        arr_4 [i_0 + 3] = 6683330222917523549ULL;
    }
    var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) var_6))));
    /* LoopSeq 1 */
    for (int i_1 = 4; i_1 < 18; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            var_13 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned short)3030)) ? (((/* implicit */unsigned long long int) max((523970582U), (((/* implicit */unsigned int) (short)-3427))))) : (9731901285027508817ULL)))));
            var_14 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)-3427)) + (2147483647))) >> (((((/* implicit */int) var_10)) - (30807)))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-3423)) ? (((/* implicit */int) (short)3427)) : (((/* implicit */int) var_0))))), (arr_8 [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
            var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (!(((/* implicit */_Bool) max((-828244240), (((/* implicit */int) max(((unsigned short)3030), (((/* implicit */unsigned short) (_Bool)1)))))))))))));
        }
        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(4196843909770874061LL)))) ? (min((((/* implicit */int) (unsigned short)62506)), (1282638055))) : (((((/* implicit */int) arr_5 [i_1 - 1] [i_1])) + (((/* implicit */int) (unsigned short)62506)))))))));
        var_17 += ((/* implicit */unsigned long long int) ((unsigned short) var_9));
    }
}

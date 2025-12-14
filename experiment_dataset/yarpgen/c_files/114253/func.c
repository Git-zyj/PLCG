/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114253
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
    var_16 = ((/* implicit */unsigned long long int) (_Bool)0);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1)))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) (_Bool)1);
        /* LoopSeq 2 */
        for (unsigned short i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            var_18 = ((/* implicit */unsigned long long int) max((var_18), ((-(min((((/* implicit */unsigned long long int) arr_0 [i_0])), (((15ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1])))))))))));
            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 7391669348159591214ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */_Bool) 7391669348159591228ULL)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)44918)))))))))));
        }
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_20 += var_0;
            var_21 = ((/* implicit */unsigned short) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (arr_1 [i_2] [i_0])))));
        }
        arr_12 [i_0] [i_0] = max((((unsigned short) 3ULL)), (((/* implicit */unsigned short) ((((_Bool) arr_11 [i_0])) || ((_Bool)1)))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 3) 
        {
            arr_19 [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) (_Bool)0);
            arr_20 [i_3] [i_4] [i_4] = ((((/* implicit */_Bool) arr_8 [i_3])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)55185)) || (((/* implicit */_Bool) arr_10 [i_3] [i_4] [i_3])))))));
            var_22 *= ((/* implicit */unsigned short) arr_1 [i_3] [i_3]);
        }
        arr_21 [i_3] [i_3] = arr_17 [i_3];
        var_23 *= ((/* implicit */unsigned short) ((_Bool) ((((234369129613956703ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)59190))))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)65530))))) : (((unsigned long long int) 11478257216883170879ULL)))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_26 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)6370)) ? (((((14448118011392074673ULL) - (6968486856826380713ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_5])))));
        var_24 = ((/* implicit */unsigned short) var_2);
        var_25 = ((/* implicit */_Bool) max((var_25), (((_Bool) max((((/* implicit */unsigned short) ((_Bool) (_Bool)1))), (arr_11 [i_5]))))));
    }
}

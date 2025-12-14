/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146477
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
    for (int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            arr_5 [i_1] = ((/* implicit */short) (+((+(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (((/* implicit */int) var_2))))))));
            var_12 = ((/* implicit */unsigned short) arr_3 [i_0]);
            arr_6 [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_3 [(short)22])) + (2147483647))) << (((((((((/* implicit */_Bool) 8654271637940693205ULL)) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) var_11)))) + (70))) - (19)))));
            arr_7 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) max(((~(var_10))), (min((((/* implicit */unsigned long long int) var_8)), (var_10)))))) ? (((min(((_Bool)1), ((_Bool)1))) ? (((/* implicit */int) (signed char)105)) : (((/* implicit */int) (unsigned char)164)))) : (((/* implicit */int) var_8))));
            var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) (short)-14386))));
        }
        var_14 = ((/* implicit */unsigned long long int) ((_Bool) 5595543297372795196ULL));
        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (+((-(((/* implicit */int) var_5)))))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) (((~(((/* implicit */int) arr_8 [i_2] [i_2])))) < ((+(-1754216502)))))) >> (((((12851200776336756419ULL) * ((-(12851200776336756419ULL))))) - (8181668820559959917ULL)))));
        var_17 = ((/* implicit */unsigned short) ((((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (signed char)117)))) * (((/* implicit */int) min((arr_3 [i_2]), (((/* implicit */short) arr_2 [i_2] [i_2])))))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_12 [i_3] = ((/* implicit */unsigned long long int) var_3);
        var_18 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)32528))))) * (max((12851200776336756406ULL), (((/* implicit */unsigned long long int) arr_1 [i_3]))))))) ? (((((((((/* implicit */int) arr_2 [i_3] [i_3])) + (2147483647))) >> (((/* implicit */int) var_6)))) / (((((/* implicit */int) var_3)) + (((/* implicit */int) var_2)))))) : ((-(((((/* implicit */int) arr_0 [9] [i_3])) - (((/* implicit */int) arr_0 [i_3] [i_3]))))))));
    }
    var_19 += ((/* implicit */unsigned long long int) var_1);
}

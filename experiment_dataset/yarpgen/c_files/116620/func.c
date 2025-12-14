/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116620
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
    var_11 += ((/* implicit */unsigned short) var_2);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        var_12 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -169639944)) * (var_1)))) ? (((var_3) & (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) ((short) 319369446495637357ULL)))));
        var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_7) % (((/* implicit */int) var_0))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (((/* implicit */int) (short)3216)) : (var_3)))))))));
    }
    for (signed char i_1 = 1; i_1 < 21; i_1 += 2) 
    {
        var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */int) (short)-7389)) / (((/* implicit */int) ((signed char) (short)-9037)))))))));
        var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) min((var_10), (((/* implicit */unsigned short) ((_Bool) min(((unsigned char)113), ((unsigned char)74))))))))));
        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (-((~(3526023497U))))))));
        var_17 -= ((/* implicit */_Bool) 1995106401U);
    }
    for (unsigned char i_2 = 3; i_2 < 12; i_2 += 2) 
    {
        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (!(((/* implicit */_Bool) max(((+(arr_5 [i_2 + 1]))), (((/* implicit */int) var_2))))))))));
        /* LoopNest 3 */
        for (signed char i_3 = 3; i_3 < 13; i_3 += 2) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (short i_5 = 0; i_5 < 14; i_5 += 4) 
                {
                    {
                        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-23978))))) - (min((((/* implicit */unsigned long long int) var_10)), (arr_4 [i_2 + 1] [i_2 - 2]))))))));
                        var_20 |= ((/* implicit */long long int) arr_5 [i_2 - 3]);
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-34)) ? (arr_12 [13LL] [13LL] [13LL]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) & (((/* implicit */int) (_Bool)0)))))))) ? ((~(min((((/* implicit */unsigned long long int) arr_6 [i_2])), (18127374627213914259ULL))))) : (((/* implicit */unsigned long long int) var_3)))))));
        var_22 *= ((/* implicit */unsigned long long int) ((short) (+(((arr_16 [i_2]) & (((/* implicit */long long int) var_7)))))));
    }
    var_23 += ((/* implicit */unsigned char) var_0);
    var_24 -= ((/* implicit */int) var_8);
}

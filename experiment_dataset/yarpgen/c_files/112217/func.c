/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112217
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 21; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((12121165839380505301ULL) ^ (((/* implicit */unsigned long long int) var_11))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (var_0)))) : (((/* implicit */int) ((short) (short)6425))))))));
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_14 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_9))));
                        var_15 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) + (var_1)));
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_16 [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)141))) : (12121165839380505301ULL)));
                            arr_17 [i_0] [(signed char)16] [i_0] [(signed char)16] [i_3] [18] = ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_16 += ((/* implicit */unsigned short) (short)0);
                            arr_20 [i_3] = ((/* implicit */unsigned char) var_10);
                            arr_21 [i_0] [i_1 + 3] [i_2] [i_3] [i_3] [i_2] = ((/* implicit */unsigned short) ((unsigned int) var_10));
                            var_17 = ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */int) (unsigned short)10738)) << (((var_1) - (1565594021U))))) : (((/* implicit */int) (_Bool)1)));
                            var_18 = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) (_Bool)1))) - (((int) var_0))));
                        }
                        arr_22 [i_0] [i_3] [i_2] [i_2] [i_3] = ((/* implicit */int) var_10);
                        arr_23 [(_Bool)1] [i_1] [i_3] [i_3] = ((/* implicit */short) ((int) var_4));
                    }
                } 
            } 
            arr_24 [i_0] = ((/* implicit */unsigned long long int) ((var_1) / (((/* implicit */unsigned int) ((/* implicit */int) (short)-6410)))));
        }
        arr_25 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((2363121220U) / (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? (((/* implicit */int) (unsigned char)208)) : ((-(((/* implicit */int) (unsigned char)138))))));
    }
    /* vectorizable */
    for (short i_6 = 0; i_6 < 21; i_6 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned short) ((6325578234329046315ULL) != (13337606341051587324ULL)));
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_1)));
        arr_29 [i_6] = ((/* implicit */int) ((unsigned int) (-(((/* implicit */int) var_12)))));
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (short)-6413))));
    }
    for (short i_7 = 0; i_7 < 21; i_7 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) min((var_0), ((_Bool)1)))) >= (((/* implicit */int) ((((/* implicit */unsigned int) var_11)) == (1242070683U))))));
        arr_34 [i_7] &= ((/* implicit */signed char) ((((5109137732657964292ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)100)), (var_5))))))) - (18102632233764202902ULL)));
        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_10), (((/* implicit */short) (unsigned char)145))))) ? (min((288230376151711744LL), (-4925499389712742821LL))) : (((/* implicit */long long int) ((/* implicit */int) ((short) (unsigned char)142))))))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (unsigned short)13096))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)2141)) > (((/* implicit */int) ((((/* implicit */_Bool) -4925499389712742852LL)) && (var_12)))))))));
        var_24 = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned char)142)) == (((/* implicit */int) (short)23218)))) ? (((int) var_10)) : (((/* implicit */int) ((((/* implicit */int) var_0)) < (((/* implicit */int) (unsigned short)61440)))))));
        arr_35 [i_7] = ((/* implicit */_Bool) ((unsigned int) ((short) 13337606341051587324ULL)));
    }
    var_25 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_8))));
}

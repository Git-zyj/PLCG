/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183978
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
    var_17 = ((/* implicit */unsigned int) ((long long int) ((((_Bool) (_Bool)1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1308402895)) || (((/* implicit */_Bool) var_12)))))) : (var_12))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (+(((/* implicit */int) max(((_Bool)1), (var_16)))))))));
        arr_3 [i_0] = ((/* implicit */_Bool) (unsigned char)48);
        arr_4 [i_0] = ((/* implicit */int) var_14);
    }
    for (int i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        arr_7 [(_Bool)1] = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_0 [(signed char)2])) ? (((/* implicit */int) arr_0 [0U])) : (((/* implicit */int) arr_0 [(_Bool)1])))), (((((/* implicit */int) min((arr_6 [i_1]), ((unsigned char)171)))) - (((/* implicit */int) arr_6 [i_1]))))));
        var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max(((+(((/* implicit */int) arr_5 [3U] [i_1])))), (((/* implicit */int) (_Bool)1)))))));
        var_20 += ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) arr_6 [i_1]))) + (((/* implicit */int) arr_6 [i_1]))));
    }
    for (signed char i_2 = 0; i_2 < 11; i_2 += 2) 
    {
        var_21 = ((/* implicit */unsigned int) (signed char)-107);
        /* LoopNest 3 */
        for (long long int i_3 = 1; i_3 < 10; i_3 += 2) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (int i_5 = 0; i_5 < 11; i_5 += 2) 
                {
                    {
                        arr_19 [i_2] [i_3] [i_4] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? ((-(11882005642970022834ULL))) : (((/* implicit */unsigned long long int) ((int) -5207090327865663337LL)))));
                        arr_20 [i_2] [i_4] [i_4] [i_3] [8] [i_4] = (((_Bool)1) ? (((int) ((arr_14 [i_3]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1))))) : (min(((~(((/* implicit */int) (unsigned char)148)))), (((/* implicit */int) ((_Bool) var_2))))));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)-17)))))))) ? (((/* implicit */int) ((signed char) arr_0 [i_2]))) : (((/* implicit */int) (unsigned char)104))));
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((int) (unsigned char)75))))) ? (((((/* implicit */_Bool) ((arr_2 [i_2] [(_Bool)1]) ? (((/* implicit */unsigned long long int) 8908165600551568216LL)) : (arr_10 [5U] [i_2])))) ? (((/* implicit */unsigned long long int) arr_12 [i_2])) : (max((6564738430739528782ULL), (var_15))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)14)))));
    }
}

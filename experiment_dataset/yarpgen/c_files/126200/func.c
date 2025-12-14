/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126200
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_3 [0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(3706949229U)))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) ((arr_0 [13U] [i_0]) != (((/* implicit */int) (_Bool)1)))))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)52627))) + (588018067U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) max((((/* implicit */unsigned long long int) arr_2 [(_Bool)1] [(_Bool)1])), (arr_1 [i_0]))))))));
        arr_4 [i_0] = ((/* implicit */int) var_8);
        var_16 = ((/* implicit */unsigned char) min((max((((arr_1 [i_0]) / (arr_1 [i_0]))), (((/* implicit */unsigned long long int) (unsigned char)255)))), (((unsigned long long int) (!(((/* implicit */_Bool) var_1)))))));
        arr_5 [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)3)) ? (arr_1 [i_0]) : (((unsigned long long int) arr_0 [i_0] [i_0])))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            for (unsigned short i_3 = 0; i_3 < 24; i_3 += 1) 
            {
                for (unsigned short i_4 = 4; i_4 < 23; i_4 += 3) 
                {
                    {
                        var_17 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_12))));
                        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((var_2) & (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_4 - 4]))))))));
                        var_19 = ((var_14) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)));
                        var_20 = ((/* implicit */unsigned int) arr_8 [i_1] [i_4 + 1]);
                        var_21 = ((unsigned short) ((unsigned char) var_6));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)60271))) & (((((/* implicit */_Bool) 7522742310957986036LL)) ? (2500666742U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)52627)))))));
        arr_15 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_6 [i_1]) ? (2447339560U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)251)))))) ? (((/* implicit */unsigned int) arr_14 [i_1] [10] [i_1] [i_1] [10] [i_1])) : ((-(1459751502U)))));
    }
    var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned long long int) (short)4242)))));
    var_24 = ((/* implicit */unsigned short) var_6);
}

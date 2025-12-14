/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12681
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
    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)246)), (16516392429183527782ULL)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 15501888637479606060ULL)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)79))))) : ((~(min((var_6), (((/* implicit */unsigned int) (short)-23674))))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (short i_2 = 4; i_2 < 11; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_2 - 2] [i_2 - 2] [i_2 - 1]))))) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0] [i_2])))))));
                    var_16 = ((_Bool) var_12);
                    var_17 = ((/* implicit */int) ((short) min((1993026062), (((/* implicit */int) arr_3 [i_2 + 1])))));
                    var_18 = ((/* implicit */_Bool) (~(min((((/* implicit */int) arr_3 [i_2 - 4])), (var_8)))));
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned char) arr_2 [i_0] [i_0]);
        var_20 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))))) + (((((/* implicit */_Bool) 15501888637479606052ULL)) ? (((((/* implicit */_Bool) -8750966946351888906LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-27037))) : (15501888637479606052ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
        var_21 &= ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0])))))));
    }
    for (int i_3 = 0; i_3 < 14; i_3 += 2) 
    {
        var_22 = ((/* implicit */long long int) max((((/* implicit */unsigned int) (short)-28308)), (max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4))))), (var_6)))));
        /* LoopNest 3 */
        for (int i_4 = 3; i_4 < 12; i_4 += 1) 
        {
            for (unsigned int i_5 = 2; i_5 < 13; i_5 += 2) 
            {
                for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                {
                    {
                        var_23 = ((/* implicit */long long int) arr_10 [i_6 + 1]);
                        var_24 = ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) arr_9 [i_3] [i_6 + 1])))), (((/* implicit */int) var_7))));
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [12]))));
    }
    var_26 = var_5;
}

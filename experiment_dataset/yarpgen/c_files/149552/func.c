/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149552
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
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [6LL] [6LL] &= ((/* implicit */unsigned int) var_2);
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 8; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned int) (+((~(((/* implicit */int) (short)0))))));
                                arr_14 [i_0] [i_1] [i_0 + 1] [i_1] [i_2] [i_0] = ((/* implicit */signed char) (unsigned char)148);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_14 = (signed char)-69;
    /* LoopSeq 2 */
    for (signed char i_5 = 0; i_5 < 22; i_5 += 4) 
    {
        arr_18 [i_5] [i_5] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (signed char)31)), (5311794228887775593ULL)));
        arr_19 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)147)) ? (((/* implicit */unsigned long long int) -1)) : (13134949844821775998ULL)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)75)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10))))) : (((unsigned int) ((-463606453) != (var_11))))));
        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (~(var_11))))));
    }
    for (int i_6 = 1; i_6 < 17; i_6 += 4) 
    {
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) (unsigned short)8191)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_6]))) : (-4528917146888372496LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-6)) && (((/* implicit */_Bool) (signed char)-124))))))))));
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (arr_17 [i_6 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)68)))))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_6])) || (((/* implicit */_Bool) 1567234652U))))), ((+(1567234646U)))))) : (var_5)));
        arr_22 [i_6] [i_6] = ((/* implicit */short) (+(((((/* implicit */_Bool) 23805624)) ? (((/* implicit */long long int) (-(((/* implicit */int) var_10))))) : (var_6)))));
        arr_23 [i_6] [(short)5] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (signed char)-124)), (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)89))))) ? (13134949844821776022ULL) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (var_11) : (((/* implicit */int) var_12)))))))));
        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-124)) % ((-(((/* implicit */int) (short)13))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (13134949844821776022ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))))) : (((/* implicit */int) ((arr_21 [i_6] [i_6 + 1]) != (((/* implicit */unsigned long long int) var_7))))))))));
    }
}

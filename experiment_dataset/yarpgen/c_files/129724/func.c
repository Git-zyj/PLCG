/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129724
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
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) var_15))))))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-98))) : (var_2))) - (min((var_7), (((/* implicit */long long int) (signed char)-98))))))) : (var_17)));
    var_20 = ((var_16) + (((/* implicit */long long int) (+(((var_11) - (var_1)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */_Bool) max((4294967270U), (((((/* implicit */_Bool) ((short) 2057393158U))) ? (((((/* implicit */_Bool) 3474841534U)) ? (var_11) : (2057393147U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_0] [i_1])))))))));
                var_21 -= ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)51603))));
                var_22 = ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) - (min((((/* implicit */unsigned int) arr_3 [i_0] [i_1])), (var_11))));
                var_23 += ((/* implicit */unsigned char) ((((-19LL) + (9223372036854775807LL))) >> (((/* implicit */int) (_Bool)0))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_24 += (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2])) ? (arr_6 [i_2]) : (3514065658U)))));
        arr_8 [i_2] [i_2] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2])) ? (182460430198778719ULL) : (((/* implicit */unsigned long long int) 1284372364U))))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) var_4)) : (var_5)))) ? (max((3801795241U), (((/* implicit */unsigned int) (unsigned char)209)))) : (arr_7 [i_2])))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 25; i_3 += 1) 
        {
            for (int i_4 = 0; i_4 < 25; i_4 += 4) 
            {
                {
                    arr_14 [i_2] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-25)))) ? (2237574127U) : (arr_9 [i_2] [i_3])))) ? (var_5) : (((/* implicit */int) (!(((/* implicit */_Bool) 17540485226196844755ULL)))))));
                    var_25 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)0)))) ? (arr_12 [i_2] [i_2] [i_2] [i_2]) : (((-8855695402001224963LL) + (((/* implicit */long long int) 3801795226U))))))));
                    var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) (((+((~(var_16))))) % (var_12))))));
                    var_27 = ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-17270))))) ? (((unsigned int) (-(var_17)))) : (((/* implicit */unsigned int) ((/* implicit */int) (((-(arr_10 [i_2] [i_3] [i_4]))) < (-1563666582))))));
                }
            } 
        } 
    }
}

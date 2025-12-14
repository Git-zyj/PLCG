/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165793
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
    var_17 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) -3982191812955575293LL)) ? (-4693992401427566885LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-39)))))))) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))));
    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (unsigned char)1))));
    var_19 = var_6;
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 4; i_2 < 10; i_2 += 2) 
                {
                    for (long long int i_3 = 3; i_3 < 13; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (long long int i_4 = 4; i_4 < 11; i_4 += 4) 
                            {
                                arr_12 [i_0] [i_0] [0ULL] [i_3] [i_4] = ((((/* implicit */int) var_2)) >> (((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) 0U))))));
                                var_20 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) 0U)) == (-4693992401427566885LL))))) % (((long long int) arr_10 [i_1 - 2] [i_1 + 2] [i_1] [i_1 - 2] [i_3] [i_1]))));
                                var_21 += ((/* implicit */unsigned int) arr_5 [i_0] [2LL] [(_Bool)1]);
                                var_22 = (unsigned char)84;
                            }
                            var_23 = ((/* implicit */signed char) ((((/* implicit */int) var_13)) * ((+((-(((/* implicit */int) var_8))))))));
                            var_24 = ((/* implicit */long long int) arr_3 [i_2 + 1]);
                            arr_13 [i_3] [(unsigned char)11] [11] [i_3] = ((/* implicit */unsigned char) (+(max((arr_10 [i_0 + 1] [i_0] [i_1] [i_2 - 3] [i_3] [i_2]), (arr_10 [i_0 + 2] [i_0] [i_0] [i_2 - 3] [i_3] [i_0])))));
                        }
                    } 
                } 
                var_25 = ((((((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1 - 2])) && (((/* implicit */_Bool) var_13)))) ? (max((((/* implicit */unsigned long long int) (short)-1)), (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)84))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))));
                arr_14 [1U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [0LL] [10U])) ? (-6743946077011975711LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-39)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)172)) == (((/* implicit */int) var_8)))))) : (max((18274562062317015354ULL), (((/* implicit */unsigned long long int) (unsigned char)99)))))) : (1ULL)));
            }
        } 
    } 
    var_26 = ((((/* implicit */_Bool) (~(((var_9) | (var_9)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) max((((/* implicit */long long int) 2266433035U)), (var_6)))) ? (((unsigned int) var_12)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_16))))))));
}

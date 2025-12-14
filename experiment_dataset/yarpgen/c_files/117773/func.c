/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117773
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
    var_13 = ((/* implicit */unsigned int) (short)25383);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            arr_5 [i_0] = ((/* implicit */_Bool) (unsigned char)236);
            arr_6 [i_0] = ((/* implicit */unsigned short) var_5);
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 10; i_3 += 3) 
                {
                    for (long long int i_4 = 0; i_4 < 10; i_4 += 4) 
                    {
                        {
                            arr_17 [i_3] = ((/* implicit */_Bool) var_5);
                            var_14 = ((/* implicit */unsigned long long int) ((var_3) < (((/* implicit */long long int) ((((/* implicit */int) (short)0)) & (((/* implicit */int) (signed char)-1)))))));
                            var_15 += ((/* implicit */unsigned long long int) arr_1 [i_4] [i_1]);
                            var_16 = ((/* implicit */signed char) (unsigned short)45328);
                        }
                    } 
                } 
            } 
        }
        var_17 = ((((/* implicit */_Bool) (unsigned char)202)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)66))) : (((var_8) << (((arr_0 [i_0]) + (6886436142026859418LL))))));
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)207)) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) arr_3 [i_0]))));
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 0LL)) ? (15LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)63028)))));
    }
    for (int i_5 = 0; i_5 < 16; i_5 += 3) 
    {
        arr_20 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)0))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [4U])) ? (668575034U) : (((/* implicit */unsigned int) var_7))))) ? (max((((/* implicit */unsigned long long int) (short)32767)), (2ULL))) : (((/* implicit */unsigned long long int) var_6))))));
        var_20 -= ((/* implicit */long long int) arr_18 [i_5]);
        var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((10742089392866000645ULL) % (((/* implicit */unsigned long long int) arr_19 [i_5])))))));
    }
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)192))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)-11713)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-58))) : (7704654680843550983ULL)))));
}

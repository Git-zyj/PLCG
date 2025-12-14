/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103771
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
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */short) (unsigned short)38471);
                var_13 = var_9;
            }
        } 
    } 
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (-16700946)))) ? (max((-3579165436134217504LL), (((/* implicit */long long int) var_9)))) : (((/* implicit */long long int) 16700940))))) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) var_2)), (var_8)))) ? (12187382732942919865ULL) : (((/* implicit */unsigned long long int) 16700949)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-5359)))));
    /* LoopSeq 1 */
    for (long long int i_2 = 0; i_2 < 18; i_2 += 3) 
    {
        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_6) : (-875602268)))) ? (((int) 23290832)) : (((((/* implicit */_Bool) (unsigned short)48249)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)-1))))))) ? (var_4) : (((/* implicit */long long int) 0))));
        arr_10 [i_2] = ((/* implicit */unsigned char) ((_Bool) 373385360));
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 18; i_3 += 4) 
        {
            for (int i_4 = 3; i_4 < 16; i_4 += 1) 
            {
                {
                    var_16 ^= ((/* implicit */unsigned char) ((short) var_6));
                    var_17 = ((/* implicit */unsigned char) (short)-5386);
                    var_18 = ((/* implicit */int) var_7);
                    arr_15 [i_4] [i_3] [i_4] = var_9;
                }
            } 
        } 
    }
    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) var_10))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)5368)) : (((/* implicit */int) (unsigned char)37))))) ? (((unsigned long long int) var_7)) : (((/* implicit */unsigned long long int) ((var_11) ? (-16777216) : (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)34)))))))))));
}

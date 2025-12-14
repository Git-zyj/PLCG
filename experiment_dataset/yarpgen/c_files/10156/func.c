/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10156
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
    var_18 = ((/* implicit */unsigned char) var_7);
    var_19 -= ((unsigned short) ((((/* implicit */_Bool) (+(var_1)))) && (((/* implicit */_Bool) var_14))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned int) var_17);
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((long long int) var_11))))) == (var_16)));
        arr_4 [i_0] = ((((/* implicit */unsigned int) ((((((/* implicit */int) ((short) (unsigned short)65523))) + (2147483647))) << (((((/* implicit */int) ((unsigned char) var_17))) - (109)))))) > (var_16));
    }
    for (short i_1 = 0; i_1 < 14; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            var_21 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)0))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((unsigned int) var_8))))) : (((((((var_8) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)111))))) + (9223372036854775807LL))) >> (((((unsigned long long int) var_9)) - (12665823496578450749ULL)))))));
            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) var_1))) * ((~(((/* implicit */int) var_3))))))) : (((((/* implicit */_Bool) ((unsigned char) var_5))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_17)))) : (var_1))))))));
            var_23 = ((((/* implicit */int) ((((var_1) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)117))))) <= (((/* implicit */long long int) ((/* implicit */int) var_17)))))) < (((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)22641)))) + (((/* implicit */int) (unsigned char)75)))));
            /* LoopNest 3 */
            for (unsigned long long int i_3 = 2; i_3 < 13; i_3 += 1) 
            {
                for (unsigned int i_4 = 0; i_4 < 14; i_4 += 2) 
                {
                    for (unsigned short i_5 = 1; i_5 < 12; i_5 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */short) (+(((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_1)))) : (var_9)))));
                            arr_18 [i_1] [i_1] [i_1] [(signed char)0] [i_1] [8ULL] = ((/* implicit */unsigned int) ((((long long int) (unsigned char)0)) >> (((/* implicit */int) ((var_16) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-109))))))));
                            arr_19 [i_1] [i_2] [i_3 - 2] [i_4] [i_1] = ((/* implicit */long long int) 2613326736U);
                            var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((_Bool) (((~(var_8))) | (((((/* implicit */long long int) ((/* implicit */int) var_17))) | (var_9)))))))));
                        }
                    } 
                } 
            } 
        }
        var_26 = ((/* implicit */int) (+((((!(((/* implicit */_Bool) var_9)))) ? ((~(var_16))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_1))))))));
    }
    var_27 = ((/* implicit */_Bool) max((var_27), ((((-(((long long int) (_Bool)1)))) == (((/* implicit */long long int) (-(((/* implicit */int) ((unsigned short) var_6))))))))));
}

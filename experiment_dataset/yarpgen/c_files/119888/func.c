/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119888
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
    var_17 = ((/* implicit */long long int) var_16);
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_14))))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))))) ? (((var_7) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_9) != (((/* implicit */unsigned long long int) var_10))))))));
    var_19 = ((/* implicit */short) max((((3106059748467990236ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)13))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((var_6) + (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))))))));
    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (min((((/* implicit */long long int) (+(((/* implicit */int) var_16))))), (((((/* implicit */_Bool) var_15)) ? (var_12) : (((/* implicit */long long int) var_6)))))) : (max((((((/* implicit */_Bool) var_8)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_4))))), (((/* implicit */long long int) var_14)))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_21 += ((/* implicit */unsigned short) ((((/* implicit */int) ((((((/* implicit */int) var_2)) + (((/* implicit */int) var_14)))) == (((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) var_16))))))) >> (((min((var_13), (((/* implicit */long long int) var_5)))) + (4168192135500857450LL)))));
        var_22 = ((/* implicit */short) var_10);
    }
    /* vectorizable */
    for (signed char i_1 = 1; i_1 < 12; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            for (int i_3 = 0; i_3 < 13; i_3 += 4) 
            {
                {
                    var_23 *= var_14;
                    var_24 = ((/* implicit */short) var_10);
                }
            } 
        } 
        /* LoopNest 3 */
        for (int i_4 = 3; i_4 < 12; i_4 += 4) 
        {
            for (unsigned int i_5 = 0; i_5 < 13; i_5 += 4) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) var_12))));
                        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) var_15))));
                        var_27 = ((/* implicit */unsigned long long int) arr_7 [i_1] [i_4]);
                    }
                } 
            } 
        } 
    }
}

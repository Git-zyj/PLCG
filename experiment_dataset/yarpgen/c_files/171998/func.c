/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171998
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
    var_20 = ((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) var_18))) % (min((var_16), (((/* implicit */long long int) var_10)))))) == (((/* implicit */long long int) ((/* implicit */int) ((((int) var_19)) < (((/* implicit */int) ((unsigned char) var_4)))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_21 = ((/* implicit */int) var_17);
        var_22 = ((/* implicit */unsigned char) ((long long int) ((((var_12) | (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_18)))))));
    }
    for (int i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 11; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 11; i_3 += 1) 
            {
                {
                    var_23 += ((/* implicit */int) ((((/* implicit */int) max((var_0), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_7)) <= (var_9))))))) == (((((/* implicit */int) ((var_2) < (((/* implicit */long long int) var_8))))) / (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_13)))))))));
                    var_24 = ((/* implicit */unsigned int) ((((max((var_4), (((/* implicit */long long int) var_14)))) * (((((/* implicit */long long int) ((/* implicit */int) var_13))) / (var_4))))) >> (((var_11) + (1394941716)))));
                    var_25 = ((/* implicit */int) ((_Bool) ((long long int) ((int) var_0))));
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned int) ((((((max((var_8), (((/* implicit */int) var_14)))) + (2147483647))) << (((((long long int) var_18)) - (1639LL))))) / (((/* implicit */int) var_18))));
        var_27 ^= ((/* implicit */unsigned long long int) var_8);
        var_28 |= ((/* implicit */unsigned int) ((((((((/* implicit */unsigned long long int) var_19)) % (var_9))) > (((/* implicit */unsigned long long int) min((var_7), (((/* implicit */int) var_1))))))) && (((/* implicit */_Bool) ((((var_6) + (var_6))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))));
        var_29 = ((/* implicit */unsigned char) ((unsigned int) min((min((var_13), (var_13))), (((/* implicit */unsigned char) var_0)))));
    }
    var_30 &= ((/* implicit */_Bool) ((min((max((var_16), (((/* implicit */long long int) var_3)))), (max((var_2), (((/* implicit */long long int) var_1)))))) % (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_12)))) ^ (min((((/* implicit */unsigned int) var_8)), (var_12))))))));
    var_31 ^= ((/* implicit */int) ((((/* implicit */int) ((_Bool) var_10))) < (var_5)));
}

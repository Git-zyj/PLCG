/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11920
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
    var_19 = ((/* implicit */signed char) max((((/* implicit */long long int) ((int) var_2))), (((-591833719269661379LL) * (((/* implicit */long long int) ((/* implicit */int) (short)9)))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        var_20 = ((/* implicit */short) ((int) var_14));
        var_21 *= ((/* implicit */signed char) ((int) 2535023873U));
        var_22 += ((/* implicit */unsigned short) (+(((/* implicit */int) ((short) var_3)))));
    }
    for (unsigned int i_1 = 3; i_1 < 22; i_1 += 3) 
    {
        var_23 = ((/* implicit */unsigned char) min((max((((((/* implicit */_Bool) var_18)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) var_0))))))), (((/* implicit */unsigned long long int) ((unsigned char) ((unsigned char) var_1))))));
        var_24 = ((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) ((int) var_10))))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            for (unsigned short i_3 = 0; i_3 < 23; i_3 += 4) 
            {
                {
                    var_25 = ((/* implicit */int) ((unsigned short) ((int) ((((/* implicit */_Bool) 1641652868U)) ? (7691032018352025034LL) : (((/* implicit */long long int) 12288))))));
                    var_26 += ((/* implicit */short) ((unsigned char) (-(((/* implicit */int) var_12)))));
                }
            } 
        } 
        var_27 ^= ((/* implicit */signed char) var_6);
        var_28 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) max((var_6), (((/* implicit */unsigned short) var_4))))))) & (min((((unsigned long long int) var_13)), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) & (((/* implicit */int) var_6)))))))));
    }
    /* vectorizable */
    for (unsigned char i_4 = 0; i_4 < 25; i_4 += 3) 
    {
        arr_13 [i_4] [i_4] = ((int) ((unsigned long long int) var_14));
        arr_14 [i_4] [i_4] = var_17;
        var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((/* implicit */int) ((short) var_5))) : (((/* implicit */int) var_11))));
    }
    for (signed char i_5 = 0; i_5 < 24; i_5 += 3) 
    {
        arr_17 [i_5] = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */int) var_17)) >= (((/* implicit */int) var_3))))), (((((/* implicit */_Bool) (unsigned char)229)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (4561731600684637181LL)))));
        var_30 ^= ((/* implicit */unsigned char) ((unsigned short) (+(((/* implicit */int) var_4)))));
    }
    var_31 = ((/* implicit */signed char) var_16);
}

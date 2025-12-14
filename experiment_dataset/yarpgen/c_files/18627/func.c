/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18627
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_11 = var_6;
        var_12 = ((/* implicit */int) var_7);
        var_13 = ((/* implicit */int) var_8);
        arr_2 [8ULL] |= ((((/* implicit */_Bool) min((((/* implicit */long long int) (-2147483647 - 1))), ((-(var_8)))))) ? (((((/* implicit */int) var_7)) | (var_0))) : (((/* implicit */int) (unsigned short)21578)));
    }
    for (int i_1 = 1; i_1 < 22; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (short i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            for (signed char i_3 = 1; i_3 < 22; i_3 += 4) 
            {
                for (unsigned short i_4 = 4; i_4 < 23; i_4 += 3) 
                {
                    {
                        arr_13 [i_4] [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4))));
                        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((-5), (-5)))) ? (((/* implicit */long long int) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)233)) : (-2011142586)))))) : (var_1)));
                        var_15 = ((/* implicit */unsigned long long int) 10);
                    }
                } 
            } 
        } 
        var_16 ^= ((/* implicit */long long int) (~(((((/* implicit */_Bool) 6)) ? (((/* implicit */int) (unsigned short)2335)) : (((/* implicit */int) var_7))))));
        var_17 *= ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */short) var_7)), (var_2)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */int) var_2)))))))), ((-(var_1)))));
        var_18 = var_7;
    }
    var_19 -= ((/* implicit */int) var_10);
    var_20 = ((/* implicit */unsigned short) 2147483647);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115318
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
    var_18 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((var_2) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_10))))))) : (((((/* implicit */_Bool) min(((unsigned char)106), (var_8)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_17))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 13; i_2 += 1) 
            {
                for (unsigned int i_3 = 3; i_3 < 13; i_3 += 4) 
                {
                    {
                        var_19 = max((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_3 + 1] [i_3 + 1] [i_3 + 2] [i_3 + 2]))) > (var_4)))), (min((((((/* implicit */_Bool) var_14)) ? (var_16) : (arr_6 [i_0] [i_0]))), (((((/* implicit */_Bool) arr_3 [i_3] [i_3 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_6))))));
                        var_20 &= ((/* implicit */unsigned char) min((((/* implicit */int) var_15)), (((((/* implicit */_Bool) 1227109716)) ? ((-(((/* implicit */int) var_8)))) : ((+(((/* implicit */int) var_11))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (long long int i_4 = 0; i_4 < 16; i_4 += 4) 
        {
            for (long long int i_5 = 0; i_5 < 16; i_5 += 4) 
            {
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    {
                        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_6 [(unsigned char)8] [i_4]) : (var_7))))))) >= ((-(((/* implicit */int) arr_12 [i_4] [i_5] [i_5] [i_4])))))))));
                        var_22 ^= ((/* implicit */unsigned char) arr_2 [i_0] [i_0]);
                        var_23 -= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) -4426989835668526485LL)) ? (((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [i_0])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_6] [i_6] [i_6]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_4] [i_5] [i_6 - 1])))))));
                    }
                } 
            } 
        } 
    }
}

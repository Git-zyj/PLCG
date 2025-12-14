/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112355
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
    var_11 *= ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)253))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) * (((var_1) / (((/* implicit */long long int) var_3)))))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned char i_2 = 3; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        var_13 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_2] [i_2] [i_2 - 1] [i_2 + 1] [i_2 - 2] [i_2 - 1])) && (((/* implicit */_Bool) var_10))));
                        var_14 = ((/* implicit */_Bool) min((var_14), (((var_1) >= (((/* implicit */long long int) ((/* implicit */int) var_7)))))));
                    }
                    for (unsigned char i_4 = 1; i_4 < 19; i_4 += 3) 
                    {
                        arr_15 [i_0] [i_0] [(unsigned short)10] [(unsigned short)10] [i_0] |= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) > (1991828888U)));
                        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */int) var_7)) < (((/* implicit */int) var_9)))))));
                    }
                    var_16 ^= ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) | (var_3))));
                    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_9)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))))));
                }
            } 
        } 
    }
    for (unsigned char i_5 = 0; i_5 < 20; i_5 += 3) /* same iter space */
    {
        arr_19 [i_5] &= ((/* implicit */_Bool) ((4264686863U) << (((/* implicit */int) (_Bool)1))));
        var_18 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)43200)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (_Bool)1))));
        var_19 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) max((((/* implicit */unsigned int) arr_16 [i_5])), (var_10))))) ? (arr_2 [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_9), (((/* implicit */signed char) var_0))))))));
        var_20 -= ((((/* implicit */unsigned int) ((/* implicit */int) (short)-4096))) != (4264686868U));
        var_21 += ((/* implicit */_Bool) min((((/* implicit */long long int) (~(((var_7) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2))))))), (((((/* implicit */_Bool) arr_8 [i_5] [i_5] [i_5])) ? (((/* implicit */long long int) (~(((/* implicit */int) var_2))))) : ((+(var_8)))))));
    }
    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-13)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-29))) : (1752772968U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)93)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)43200)) : (((/* implicit */int) (unsigned char)10))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)225)))) : (((/* implicit */int) var_2)))))));
    var_23 -= ((/* implicit */unsigned short) (+(min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */int) var_6))))), (var_10)))));
    var_24 ^= var_4;
}

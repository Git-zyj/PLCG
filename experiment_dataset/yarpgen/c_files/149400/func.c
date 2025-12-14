/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149400
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
    var_14 = ((/* implicit */unsigned char) ((var_5) ? (((min((2147483647), (((/* implicit */int) var_3)))) - (max((2147483647), (((/* implicit */int) (unsigned char)0)))))) : ((~(((/* implicit */int) var_6))))));
    var_15 |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))));
        var_17 = ((((/* implicit */_Bool) (unsigned short)55782)) ? (((/* implicit */int) (unsigned char)255)) : ((-2147483647 - 1)));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((var_5) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_13)));
    }
    for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        var_18 = ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */int) (short)29131)) != (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (short)32762)) : (((/* implicit */int) (_Bool)0))))))), ((+(2147483647)))));
        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) (-(((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (min((((/* implicit */unsigned int) (unsigned char)0)), (var_13))))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 4) 
    {
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 14; i_3 += 4) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 15603386022419637410ULL)) ? (9453107838352561276ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */int) var_5)) : (var_4)));
                    arr_13 [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) var_12);
                }
            } 
        } 
        arr_14 [13] = ((/* implicit */_Bool) var_11);
        arr_15 [i_2] [i_2] = ((/* implicit */long long int) var_11);
    }
    /* LoopNest 3 */
    for (short i_5 = 0; i_5 < 18; i_5 += 3) 
    {
        for (unsigned char i_6 = 0; i_6 < 18; i_6 += 4) 
        {
            for (int i_7 = 0; i_7 < 18; i_7 += 4) 
            {
                {
                    var_21 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)9))) : (-1121318206411184138LL)))) ? (((/* implicit */int) (unsigned char)0)) : (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) var_1))))))));
                    arr_28 [i_5] [i_5] [i_6] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (short)21542)) : ((+(((/* implicit */int) (unsigned short)65535)))))));
                }
            } 
        } 
    } 
}

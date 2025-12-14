/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108631
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_16 += ((/* implicit */unsigned short) ((((((var_6) / (((/* implicit */int) (unsigned char)240)))) ^ (((/* implicit */int) min((arr_0 [12]), (var_12)))))) * (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)240)) ? (((/* implicit */int) (unsigned char)234)) : (((/* implicit */int) (signed char)-1))))) != (((arr_1 [i_0] [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (127U))))))));
        var_17 -= ((/* implicit */int) ((((((/* implicit */_Bool) (short)255)) ? (min((var_2), (((/* implicit */unsigned int) (_Bool)1)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (_Bool)1)))))) != (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
        var_18 ^= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (unsigned char)64)) : (((/* implicit */int) arr_1 [i_0] [i_0]))))));
        arr_2 [i_0] = arr_0 [i_0];
    }
    /* LoopSeq 1 */
    for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            for (unsigned char i_3 = 3; i_3 < 24; i_3 += 3) 
            {
                {
                    arr_10 [i_1] [i_1] [i_3] = ((/* implicit */signed char) 4398046511103ULL);
                    arr_11 [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)101))))) ? (((/* implicit */int) (unsigned short)54081)) : (((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1))))))) >= ((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1] [i_1])))))))));
                }
            } 
        } 
        var_19 = (_Bool)1;
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((((/* implicit */_Bool) min(((unsigned char)240), (((/* implicit */unsigned char) var_1))))) || (((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_6))))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_2)) / (18446739675663040531ULL)))) || ((!((_Bool)1))))))));
        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) arr_0 [i_1]))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)96)) : (((/* implicit */int) (unsigned short)54081))))) ? (((/* implicit */int) arr_8 [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_4 [i_1] [i_1])))))));
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173859
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
    var_14 = ((/* implicit */unsigned char) var_0);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((((((/* implicit */int) arr_0 [i_0])) / (arr_1 [i_0]))) / ((+(((/* implicit */int) arr_0 [i_0])))))) : (((arr_1 [i_0]) * (((((/* implicit */int) (_Bool)1)) % (var_12)))))));
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)0)) ? (1073725440ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_0 [i_0]), (((/* implicit */unsigned char) var_10))))))))) ? (arr_1 [i_0]) : (((/* implicit */int) ((_Bool) var_1)))));
        var_17 = ((/* implicit */int) min((var_17), ((((!(((/* implicit */_Bool) arr_0 [i_0])))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) arr_1 [(signed char)2])) ? ((((_Bool)1) ? (((/* implicit */int) (unsigned char)193)) : (((/* implicit */int) var_0)))) : (max((((/* implicit */int) (unsigned short)0)), (var_7)))))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (signed char)-46))));
                    arr_6 [i_0] [(_Bool)1] [0LL] = ((/* implicit */unsigned short) (+(((/* implicit */int) max((arr_5 [i_0] [i_1] [i_1]), (arr_5 [i_0] [i_0] [i_2]))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_19 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_3] [i_3]))))) ? (((/* implicit */int) var_8)) : (((((/* implicit */int) arr_7 [i_3] [i_3])) ^ (arr_8 [3])))));
        var_20 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_7 [i_3] [i_3]))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_4 = 0; i_4 < 22; i_4 += 4) 
    {
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((var_10) ? (((/* implicit */int) arr_10 [i_4] [i_4])) : (((/* implicit */int) arr_11 [i_4]))))) / (arr_9 [i_4] [i_4])));
        var_22 &= ((/* implicit */_Bool) arr_11 [i_4]);
        arr_12 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_10 [i_4] [i_4])) <= (((/* implicit */int) arr_10 [i_4] [i_4]))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        arr_15 [i_5] = ((/* implicit */int) ((unsigned char) ((((arr_9 [i_5] [i_5]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_5]))))) & (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_4)))))));
        var_23 -= ((/* implicit */unsigned char) arr_13 [i_5] [i_5]);
        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) max((((((/* implicit */_Bool) ((-1017342381) * (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [12] [i_5]))))) : (((/* implicit */int) arr_11 [i_5])))), (((((/* implicit */int) arr_11 [i_5])) << (((/* implicit */int) (unsigned char)0)))))))));
        var_25 &= ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_7 [i_5] [i_5])) : (var_9)));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
    {
        var_26 = ((/* implicit */_Bool) var_9);
        var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 24LL)) ? (((/* implicit */int) (unsigned short)21169)) : (((/* implicit */int) var_8))));
    }
    var_28 = ((var_3) ? (((/* implicit */int) (_Bool)1)) : ((((+(((/* implicit */int) (signed char)110)))) << (((/* implicit */int) var_2)))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184267
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        var_12 = ((/* implicit */int) var_0);
        var_13 = (-(((/* implicit */int) (short)-19500)));
    }
    for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
    {
        var_14 = ((/* implicit */unsigned char) (~(min((((/* implicit */long long int) (unsigned char)214)), (-3036779854048467312LL)))));
        var_15 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((unsigned int) var_10)), (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_1])) ^ (((/* implicit */int) (signed char)-53)))))))) ? (((/* implicit */int) max((((/* implicit */short) ((_Bool) arr_3 [i_1]))), (min((var_4), (((/* implicit */short) (signed char)53))))))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) -318579807)))))))));
    }
    for (unsigned long long int i_2 = 3; i_2 < 18; i_2 += 4) 
    {
        arr_9 [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) 5253391530199168178ULL))))), ((unsigned char)213))))));
        arr_10 [i_2 - 3] [i_2] = ((/* implicit */unsigned long long int) min((((((/* implicit */int) min(((unsigned short)36764), (((/* implicit */unsigned short) (_Bool)1))))) + (((/* implicit */int) (short)-18993)))), (((/* implicit */int) (unsigned short)21067))));
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 4) 
    {
        var_16 = ((-5672548215518024053LL) | (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3]))));
        arr_13 [i_3] [(unsigned short)4] &= ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) 13121330427297532664ULL)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_3]))))));
        arr_14 [i_3] = ((/* implicit */long long int) (((+(((/* implicit */int) (unsigned short)302)))) + ((((_Bool)1) ? (arr_4 [i_3]) : (-284079397)))));
        arr_15 [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1750635154943590857ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3]))) : (-8963985732086256879LL)))) ? (((((/* implicit */_Bool) arr_3 [i_3])) ? (15107620709216389064ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_3]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (_Bool)0))))));
        var_17 += ((/* implicit */unsigned short) (short)7317);
    }
    var_18 = ((/* implicit */unsigned int) ((min((((/* implicit */int) (short)11523)), (((((/* implicit */int) (unsigned short)18237)) >> (((((/* implicit */int) (unsigned short)35854)) - (35826))))))) != ((((+(((/* implicit */int) (unsigned short)54227)))) & (((/* implicit */int) max(((unsigned char)144), (((/* implicit */unsigned char) var_9)))))))));
    var_19 ^= ((/* implicit */int) ((((/* implicit */_Bool) (+(min((((/* implicit */unsigned int) (signed char)-41)), (var_5)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : ((-(var_5)))));
    /* LoopSeq 1 */
    for (int i_4 = 0; i_4 < 19; i_4 += 4) 
    {
        arr_19 [(_Bool)0] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) 14912847111254720409ULL)) ? (((/* implicit */int) arr_8 [i_4])) : (((/* implicit */int) (signed char)71))))) ? (((arr_18 [i_4] [i_4]) << (((8019070) - (8019044))))) : (min((((/* implicit */unsigned long long int) var_11)), (arr_18 [i_4] [i_4])))))));
        var_20 = min(((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)2)) ? (16346082664718441694ULL) : (arr_18 [i_4] [i_4])))))), (max(((!(((/* implicit */_Bool) var_0)))), (((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) -1080668610)))))));
    }
}

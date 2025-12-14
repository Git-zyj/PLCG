/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164338
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
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_9 [(unsigned char)9] [6U] [i_2] = ((/* implicit */signed char) (~(((/* implicit */int) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) var_16)) : (var_1))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 646167905098537736LL)) ? (-646167905098537736LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)15)))))))))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 2; i_3 < 10; i_3 += 1) 
                    {
                        arr_13 [i_0] [i_0] [(unsigned char)0] [(_Bool)1] [3ULL] &= ((((((/* implicit */_Bool) arr_12 [i_1 + 1] [i_1 + 1])) || (((/* implicit */_Bool) var_14)))) ? (12177448154565497497ULL) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) var_5)) : (517989947481935279ULL))));
                        var_17 ^= ((/* implicit */unsigned int) ((((_Bool) ((((/* implicit */_Bool) 7395955224102577773ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-9))) : (-646167905098537711LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)448))))) ? (min((((/* implicit */long long int) (short)-6946)), (arr_6 [0ULL] [10U]))) : (((((/* implicit */_Bool) 8368012261552537414LL)) ? (-1445150463674647576LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-12410)))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned short)59798)))) + (var_1)))));
                        var_18 |= ((/* implicit */short) ((min((((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)12419))) != (11050788849606973842ULL)))), (9223372036854775805LL))) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
                    }
                    arr_14 [(unsigned char)0] [i_1] [i_2] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */long long int) 507904U)) & (-8309223262070174424LL)))))) ? (((arr_0 [i_0 - 1]) * (((/* implicit */unsigned long long int) 0U)))) : (((((arr_1 [i_2]) / (((/* implicit */unsigned long long int) var_16)))) << (((3251717873U) - (3251717821U)))))));
                    var_19 &= ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1560780001U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_10))))) >= (((arr_11 [i_0]) | (((/* implicit */unsigned long long int) var_3)))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((_Bool) var_7)))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((unsigned int) ((var_16) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)148))))))) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)12043)) ? (var_9) : (((/* implicit */unsigned long long int) -8368012261552537432LL))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (var_12) : (3251717892U)))) : (var_3)))));
}

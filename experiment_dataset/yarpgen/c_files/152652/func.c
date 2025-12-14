/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152652
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
    var_13 -= ((/* implicit */long long int) max((((/* implicit */unsigned int) ((signed char) (!(((/* implicit */_Bool) var_7)))))), (var_4)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 12; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        {
                            arr_10 [i_2] [i_1] [i_2] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) max(((unsigned char)132), (((/* implicit */unsigned char) (signed char)127))))) | (((/* implicit */int) ((signed char) var_4)))));
                            var_14 = ((/* implicit */unsigned char) (+(((long long int) arr_6 [i_1 + 2] [i_1 - 1]))));
                        }
                    } 
                } 
                var_15 |= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_6 [(_Bool)1] [i_1])) ? (var_12) : (((/* implicit */long long int) var_6)))))), ((-(((((/* implicit */unsigned long long int) var_4)) / (var_9)))))));
                var_16 = ((((/* implicit */long long int) ((unsigned int) max((var_2), (((/* implicit */unsigned int) arr_6 [8LL] [i_1])))))) + (((long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0]))) / (var_8)))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((_Bool) ((signed char) (signed char)-82))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        arr_13 [i_4] = ((/* implicit */long long int) ((unsigned int) 3578771265U));
        var_18 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (18446744073709551600ULL) : (((/* implicit */unsigned long long int) var_12))))) ? (((unsigned int) arr_11 [13])) : (((/* implicit */unsigned int) ((int) -5893139122292317666LL)))));
        arr_14 [i_4] [i_4] = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_12 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)35))) : (-8528714141874011159LL)))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        arr_17 [i_5] [i_5] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned int) min((arr_15 [i_5]), (arr_15 [i_5])))))));
        arr_18 [19] = ((/* implicit */long long int) ((int) ((unsigned int) ((short) (signed char)45))));
        arr_19 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), (var_0)))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) < (var_3)))) : (((/* implicit */int) ((-313846982) > (532787817))))));
        arr_20 [i_5] [i_5] &= ((/* implicit */unsigned long long int) ((unsigned int) 8U));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
    {
        arr_23 [i_6] [i_6] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) arr_16 [i_6] [i_6])) ? (var_8) : (((/* implicit */long long int) var_6)))));
        arr_24 [i_6] [i_6] = ((/* implicit */long long int) min((((unsigned long long int) 491888909349159563LL)), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_12 [i_6])), (1047569458U))))));
        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (!(((/* implicit */_Bool) arr_15 [i_6])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((unsigned int) var_6))))) : (max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_11 [i_6]))))), (((long long int) var_8)))))))));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */long long int) ((signed char) (~(1209867024500008549LL))));
        var_21 = (~(((unsigned long long int) ((long long int) (-2147483647 - 1)))));
    }
}

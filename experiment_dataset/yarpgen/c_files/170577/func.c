/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170577
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
    var_15 = ((/* implicit */short) var_12);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 23; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] = min((min((arr_1 [i_0]), (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_0 [i_0 - 1])) | (((/* implicit */int) (_Bool)1))))))));
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((134201344LL) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)-26))))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) ((unsigned short) var_3)))))) ? (((8548263196118460291LL) - (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(signed char)6]))) : (var_1)))))) : (((((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) arr_0 [(unsigned short)12]))))) + (var_8))))))));
    }
    for (unsigned short i_1 = 1; i_1 < 23; i_1 += 4) /* same iter space */
    {
        arr_5 [18LL] &= ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (min((-134201349LL), (var_12))))) | (((/* implicit */long long int) ((unsigned int) -14LL)))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 25; i_3 += 4) 
            {
                {
                    var_17 = ((((/* implicit */_Bool) ((var_1) & (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_8 [17LL] [i_1 + 2] [i_1]))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)31895)) && (((/* implicit */_Bool) var_8))))) : ((-(((/* implicit */int) arr_4 [i_1] [(_Bool)1]))))))) : (((((/* implicit */_Bool) ((signed char) arr_1 [i_1]))) ? (((/* implicit */long long int) (-(arr_9 [4U] [i_1])))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) var_1)) : (var_12))))));
                    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((unsigned int) var_10))))))))));
                    var_19 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3466748114U)) ? (((/* implicit */int) (signed char)-4)) : (((/* implicit */int) (unsigned short)31895))));
                }
            } 
        } 
    }
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)31883)) && (((/* implicit */_Bool) var_12))))) > (((/* implicit */int) var_7))))))));
}

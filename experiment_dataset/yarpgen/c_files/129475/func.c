/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129475
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
    var_16 = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_6)) == (((/* implicit */int) (_Bool)1)))))) % (((((/* implicit */_Bool) var_4)) ? (431985101U) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) (~(var_9)))) ? (((((/* implicit */_Bool) -377963410)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (68715282432ULL))) : (((/* implicit */unsigned long long int) 251658240)))));
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) max((var_9), (min((((/* implicit */unsigned int) var_8)), (var_2)))))) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned short) var_7);
        var_19 ^= ((/* implicit */int) min((max((arr_1 [i_0] [i_0 + 2]), (((/* implicit */signed char) var_14)))), (arr_1 [i_0] [i_0])));
        var_20 = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_1 [i_0] [i_0 + 1])) ^ (((/* implicit */int) var_10))))));
        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) 4194304U))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 431985101U)) || (((((/* implicit */int) var_6)) >= (((/* implicit */int) (unsigned char)35)))))))) : (arr_0 [i_0 + 3]))))));
        var_22 *= ((/* implicit */unsigned int) max((((/* implicit */int) var_8)), ((-(((/* implicit */int) (_Bool)1))))));
    }
    for (unsigned char i_1 = 1; i_1 < 17; i_1 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned char i_2 = 1; i_2 < 19; i_2 += 2) 
        {
            for (unsigned short i_3 = 0; i_3 < 20; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 1; i_4 < 17; i_4 += 4) 
                {
                    {
                        var_23 = 33292288;
                        var_24 = ((/* implicit */unsigned int) (+(((long long int) ((unsigned char) var_2)))));
                        var_25 = ((/* implicit */_Bool) var_12);
                        var_26 = ((/* implicit */unsigned int) ((((/* implicit */long long int) (~(var_2)))) + (((var_13) ? ((~(var_4))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)233))) != (9223371761976868864LL)))))))));
                    }
                } 
            } 
        } 
        var_27 = ((/* implicit */int) (+(((((/* implicit */long long int) ((/* implicit */int) var_15))) * (min((-4949252578286959142LL), (((/* implicit */long long int) (unsigned short)2040))))))));
    }
    for (unsigned char i_5 = 1; i_5 < 17; i_5 += 2) /* same iter space */
    {
        var_28 = ((/* implicit */unsigned long long int) (((_Bool)1) && ((!(((/* implicit */_Bool) var_2))))));
        var_29 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (min((((/* implicit */unsigned long long int) arr_10 [i_5] [i_5])), (var_11))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_5] [i_5])))));
    }
    var_30 = ((/* implicit */_Bool) var_4);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129253
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) /* same iter space */
    {
        var_10 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [(unsigned short)10])) ? (max((((/* implicit */int) (unsigned short)8)), (-1944656531))) : (((arr_0 [i_0] [i_0]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_0 [i_0] [i_0]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 262143)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) (_Bool)1))))) : (((((((/* implicit */unsigned int) ((/* implicit */int) var_3))) >= (4173568899U))) ? (var_9) : (((unsigned long long int) 255U))))));
        arr_3 [i_0] = (((+(4294967049U))) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (signed char i_2 = 3; i_2 < 23; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    {
                        var_11 = ((/* implicit */long long int) ((int) (unsigned char)216));
                        var_12 = ((/* implicit */_Bool) arr_4 [i_1] [i_2]);
                        var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) ((unsigned int) arr_1 [i_0] [i_3])))));
                    }
                } 
            } 
            var_14 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((unsigned int) 511))) * (((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32759))) : (-4133561179396478835LL)))));
        }
    }
    for (long long int i_4 = 0; i_4 < 24; i_4 += 4) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned char) ((var_9) + (((/* implicit */unsigned long long int) max((arr_8 [i_4]), (arr_8 [i_4]))))));
        arr_14 [13U] = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_4] [i_4] [i_4] [i_4]))) == (((((((/* implicit */_Bool) arr_4 [i_4] [i_4])) ? (14099987263040683068ULL) : (var_7))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))));
        var_16 = ((/* implicit */int) var_3);
    }
    var_17 *= ((/* implicit */unsigned char) var_6);
}

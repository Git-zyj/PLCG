/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129682
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 |= ((/* implicit */short) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) var_4)), (8972014882652160ULL))), (((/* implicit */unsigned long long int) arr_1 [i_0]))))) ? (((/* implicit */int) ((unsigned short) (+(((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) (short)-1))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */short) (+(((/* implicit */int) (_Bool)0))));
                    var_14 = ((/* implicit */int) max((min((3040592897866775456ULL), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_2])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2]))))))));
                    var_15 = ((/* implicit */signed char) ((arr_1 [i_2]) ? (((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (var_8))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned int) max((((/* implicit */int) min((arr_0 [i_1]), (((/* implicit */short) arr_8 [i_0] [i_0]))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_7 [21] [21])))))))));
                    var_16 = ((/* implicit */long long int) min((var_16), (var_0)));
                    arr_10 [i_0] [i_0] = var_8;
                }
            } 
        } 
    }
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)198)) < ((+(((((/* implicit */int) arr_7 [i_3] [i_3])) << (((((/* implicit */int) arr_12 [(_Bool)1])) - (125)))))))));
        var_18 &= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)68)) ? (10433235406807398696ULL) : (((/* implicit */unsigned long long int) 9U))))) ? (((arr_1 [21LL]) ? (2644178315359597034ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [8U] [(short)7]))))) : (min((((/* implicit */unsigned long long int) (_Bool)0)), (10433235406807398707ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)146)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 9U)))) : (max((((/* implicit */unsigned int) arr_4 [i_3] [i_3] [i_3])), (var_10))))))));
        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [(signed char)17]))) < (var_4))))) | (((var_10) + (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_3])))))))) ? (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */int) arr_0 [i_3 - 1])) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)58)) || (((/* implicit */_Bool) arr_4 [i_3] [i_3] [(unsigned short)11])))))))) : (10U)));
    }
    var_20 = ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((((((/* implicit */_Bool) (short)32751)) || (((/* implicit */_Bool) var_2)))) || (((/* implicit */_Bool) var_10))))) : ((+(((/* implicit */int) var_6)))));
}

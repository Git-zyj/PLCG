/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149019
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
    var_11 = ((/* implicit */unsigned int) (((((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_5))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)63)) <= (((/* implicit */int) (unsigned short)51321))))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            arr_6 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])) != (((var_5) >> (((((/* implicit */int) arr_2 [i_0] [i_1])) - (84)))))));
            var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) var_2))));
        }
        for (unsigned int i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            var_13 += ((/* implicit */signed char) ((unsigned short) 3030659259U));
            arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max((arr_4 [i_0] [i_2] [i_2]), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-20304))) <= ((+(1536315161U))))))));
            arr_10 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) min(((-(var_10))), (((/* implicit */int) ((unsigned char) (~(36028797018963967ULL)))))));
        }
        var_14 = var_8;
        var_15 = ((/* implicit */signed char) (~(arr_7 [i_0])));
    }
    for (unsigned char i_3 = 1; i_3 < 22; i_3 += 3) 
    {
        var_16 = ((/* implicit */unsigned int) (-(((((/* implicit */int) ((var_10) <= (((/* implicit */int) var_3))))) << (((((((/* implicit */_Bool) var_3)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) - (2418171151562020763ULL)))))));
        var_17 = ((/* implicit */int) var_7);
    }
    /* vectorizable */
    for (unsigned char i_4 = 1; i_4 < 16; i_4 += 4) 
    {
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)21837)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)42568)))))));
        var_19 = ((/* implicit */unsigned char) ((arr_14 [i_4 - 1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1)))));
        arr_16 [i_4] [i_4] = ((/* implicit */unsigned char) ((unsigned short) -1109486445));
        arr_17 [i_4] = ((/* implicit */int) arr_11 [i_4]);
        arr_18 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((-10) != (((/* implicit */int) (unsigned char)255))))) >> (((((/* implicit */int) ((signed char) -1))) + (29)))));
    }
    var_20 = ((/* implicit */short) var_5);
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) max((0), (var_2)))) + (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)42569))) * (491520U)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) : (((unsigned long long int) ((((/* implicit */long long int) var_4)) / ((-9223372036854775807LL - 1LL)))))));
}

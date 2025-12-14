/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148891
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
    /* vectorizable */
    for (short i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0])) | (((/* implicit */int) (signed char)126))));
        arr_4 [i_0] [i_0 + 2] = (((-(var_4))) / (var_10));
        var_13 ^= ((/* implicit */unsigned long long int) arr_2 [i_0 - 2] [i_0 - 1]);
        var_14 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) (signed char)-121))));
        arr_5 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-23653))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65535)) && (((/* implicit */_Bool) 16348491701688507617ULL)))))) : (((long long int) var_7))));
    }
    for (unsigned int i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        arr_8 [i_1] = ((/* implicit */long long int) var_12);
        var_15 = ((/* implicit */long long int) (~(((unsigned long long int) var_4))));
    }
    for (short i_2 = 0; i_2 < 20; i_2 += 2) 
    {
        arr_12 [17] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)36))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) min(((short)1709), (((/* implicit */short) arr_11 [i_2]))))) : (((/* implicit */int) (unsigned char)151)))) : (((/* implicit */int) ((signed char) (short)-11667)))));
        var_16 = ((/* implicit */long long int) arr_9 [i_2] [i_2]);
    }
    for (short i_3 = 0; i_3 < 14; i_3 += 4) 
    {
        arr_16 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) ((long long int) var_12))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_3])) ? (((/* implicit */int) var_6)) : (arr_13 [i_3]))))))) >> (((var_4) - (7313233011338552476LL)))));
        var_17 ^= ((/* implicit */unsigned int) ((((/* implicit */int) (short)-31945)) ^ (((/* implicit */int) (short)18755))));
    }
    var_18 = min((((/* implicit */long long int) (unsigned short)65535)), (var_4));
    var_19 = ((/* implicit */unsigned int) var_3);
    var_20 ^= ((((/* implicit */int) ((((/* implicit */int) (signed char)-3)) >= (((/* implicit */int) (signed char)97))))) / (((/* implicit */int) var_6)));
    var_21 = ((/* implicit */unsigned short) var_5);
}

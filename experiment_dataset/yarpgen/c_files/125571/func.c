/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125571
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((long long int) var_18)))));
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (-5665952629552130668LL) : (((/* implicit */long long int) ((/* implicit */int) var_12)))));
        var_21 ^= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45743))) * ((+(1266960354130812685ULL)))));
        var_22 = ((((/* implicit */_Bool) (short)15457)) ? ((-(((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) var_7)));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) /* same iter space */
    {
        arr_6 [i_1] [i_1] = ((/* implicit */signed char) (!(((-665662098140145276LL) <= (((/* implicit */long long int) var_8))))));
        arr_7 [i_1] = ((((/* implicit */_Bool) (short)255)) ? (4610306560953619348LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-121))));
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 17; i_2 += 3) 
    {
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            for (long long int i_4 = 1; i_4 < 16; i_4 += 1) 
            {
                {
                    var_23 = ((/* implicit */long long int) ((unsigned char) var_19));
                    arr_15 [i_2] [i_3] [i_2] [i_2] = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (short)255)) : (((/* implicit */int) (short)(-32767 - 1)))))) <= ((~(var_14))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) var_4)) < (var_9))))) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)11387)) ? (var_8) : (-1030339696)))) ? (((((/* implicit */int) (signed char)21)) * (((/* implicit */int) (short)22214)))) : (max((((/* implicit */int) (short)1)), (1967265058))))))))));
    var_25 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) ((_Bool) var_6))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_19))) > (-7062344285013103931LL)))))))));
    var_26 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_12))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165891
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
    var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_3)) ? (6996474656850527205LL) : (((/* implicit */long long int) ((/* implicit */int) (short)21340))))), (((/* implicit */long long int) ((var_14) != (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) != ((+(((/* implicit */int) arr_1 [i_0] [2ULL]))))));
        arr_3 [i_0] [(unsigned char)12] = (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_6)))) != (max((4282824379U), (var_14)))))));
        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (((-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_9)))))) * (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (4282824400U))))))))))));
        var_17 = ((/* implicit */unsigned short) (((~(((/* implicit */int) arr_0 [i_0])))) << ((((~((~(((/* implicit */int) var_9)))))) + (17496)))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        var_18 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(-2394867305300920634LL))))));
        arr_6 [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) > (var_14)))) / (((/* implicit */int) var_6))));
    }
    var_19 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (~(min((12142882U), (((/* implicit */unsigned int) (signed char)-57))))))), ((((!(((/* implicit */_Bool) (unsigned short)16642)))) ? (min((((/* implicit */unsigned long long int) var_14)), (7602854135842117017ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (9055590539267515245LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))))))));
}

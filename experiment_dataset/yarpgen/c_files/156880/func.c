/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156880
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_7 [i_2] [3U] [i_2] = ((/* implicit */unsigned char) ((_Bool) (~(((/* implicit */int) arr_6 [i_2] [9ULL])))));
                    var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_2])))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)25)) ? (((/* implicit */int) var_11)) : (var_6)))) ? (2806193194U) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_4))))))) ? (((/* implicit */unsigned long long int) max(((-(3116307023631008548LL))), (((/* implicit */long long int) (-(((/* implicit */int) (short)-1962)))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)76), (((/* implicit */signed char) (_Bool)1)))))) - (max((((/* implicit */unsigned long long int) var_9)), (18446744073709551596ULL)))))));
    var_14 = ((/* implicit */_Bool) var_10);
}

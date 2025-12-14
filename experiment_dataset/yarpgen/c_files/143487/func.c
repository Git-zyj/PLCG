/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143487
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
    for (unsigned char i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 15; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 15; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 1; i_3 < 15; i_3 += 1) 
                    {
                        var_20 ^= ((/* implicit */unsigned char) var_3);
                        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_16)) * (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_2)))))) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_11))) / (var_12)))) ? (((((/* implicit */_Bool) (unsigned short)51450)) ? (((/* implicit */unsigned long long int) 15872U)) : (var_9))) : ((+(var_8))))) : (((/* implicit */unsigned long long int) (-(((long long int) var_13)))))));
                        var_22 += ((/* implicit */short) ((((/* implicit */_Bool) max((var_17), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 3218780195U)))))))) ? (((/* implicit */int) (unsigned short)33301)) : (var_15)));
                        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)32509)) ? (3905966223566173272ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                    }
                    arr_12 [(unsigned char)12] = ((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) var_14)), ((unsigned short)6336)))) << (((((arr_2 [i_0 - 1]) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)39372))))) - (2601214273U)))));
                }
            } 
        } 
    } 
    var_24 ^= ((/* implicit */unsigned int) var_7);
    var_25 += ((/* implicit */int) ((((/* implicit */_Bool) ((var_2) + (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6)))))))) ? (max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (_Bool)1)), (var_19)))), (((((/* implicit */_Bool) var_18)) ? (var_8) : (((/* implicit */unsigned long long int) var_5)))))) : (((/* implicit */unsigned long long int) -10LL))));
    var_26 *= ((/* implicit */short) -1LL);
}

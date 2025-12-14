/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173482
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
    var_15 &= ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)30520))));
    var_16 = ((/* implicit */unsigned short) (~((+(max((((/* implicit */long long int) var_6)), (var_7)))))));
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)65518)))) ? (((/* implicit */long long int) (-(((((/* implicit */int) (unsigned short)35016)) * (((/* implicit */int) var_6))))))) : (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) arr_1 [(unsigned char)0] [(unsigned char)0])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1))) : (-1009460688156311574LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)224))) : (var_14))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)9921))))) < (max((((/* implicit */unsigned long long int) (unsigned char)234)), (var_0)))))) >> (((long long int) arr_1 [i_0 + 2] [i_0]))));
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (+(((((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (short)0)) : (928228263)))) ^ (((((/* implicit */_Bool) var_4)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_13))))))))))));
        arr_3 [i_0] [(unsigned short)14] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_0 [i_0 + 1])), (max((var_9), (((/* implicit */unsigned short) (unsigned char)120))))))) ? (max((((/* implicit */long long int) arr_0 [i_0 + 1])), (var_5))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))));
    }
}

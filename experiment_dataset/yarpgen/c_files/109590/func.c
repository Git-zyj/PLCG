/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109590
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
    var_10 = ((/* implicit */unsigned char) min((var_6), (((/* implicit */long long int) (-(((((/* implicit */int) var_4)) ^ (((/* implicit */int) (unsigned short)8)))))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_11 &= ((/* implicit */long long int) (((+(var_1))) < (((/* implicit */long long int) ((/* implicit */int) var_2)))));
        arr_2 [i_0] = ((/* implicit */long long int) (unsigned char)5);
        var_12 = ((/* implicit */long long int) (~(((/* implicit */int) min((min(((unsigned short)18639), (var_0))), (((/* implicit */unsigned short) ((var_3) <= (((/* implicit */unsigned long long int) -7222991088213005518LL))))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 4) 
    {
        arr_5 [7LL] &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)7))));
        arr_6 [i_1] [i_1] = (+(var_7));
    }
    for (unsigned char i_2 = 0; i_2 < 22; i_2 += 1) 
    {
        arr_9 [i_2] = min((min((((/* implicit */unsigned long long int) var_8)), (18446744073709551603ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) / (((/* implicit */int) (short)-1014))))));
        var_13 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? ((+(var_7))) : (((/* implicit */long long int) ((/* implicit */int) min((var_5), (var_8))))))), (((/* implicit */long long int) ((var_3) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))));
        var_14 &= ((/* implicit */unsigned short) min((((/* implicit */int) (unsigned char)234)), ((+((+(((/* implicit */int) var_9))))))));
    }
}

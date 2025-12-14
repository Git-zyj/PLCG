/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18764
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
    var_16 = ((/* implicit */unsigned int) max((var_16), (2227569305U)));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) ((unsigned short) arr_1 [3]));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) ((unsigned char) 1366453997)));
        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((2067397990U) + (2227569305U)))) ? (((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) (unsigned char)175)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (18446744073709551596ULL))) : (18446744073709551606ULL))) : (((/* implicit */unsigned long long int) var_5)))))));
    }
    for (unsigned int i_1 = 0; i_1 < 14; i_1 += 4) 
    {
        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 9ULL)))) ? (min((1421364919U), (arr_5 [i_1] [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)51548)))))) ? (((/* implicit */unsigned long long int) ((int) var_5))) : (((18446744073709551603ULL) / ((+(var_9))))))))));
        arr_6 [i_1] [i_1] = ((/* implicit */int) min((((((/* implicit */_Bool) 2032)) ? (((unsigned long long int) -2015)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned long long int) var_12))));
    }
    for (int i_2 = 0; i_2 < 14; i_2 += 4) /* same iter space */
    {
        arr_9 [(unsigned short)7] = ((/* implicit */unsigned char) ((unsigned short) (~(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)59087))) * (var_4))))));
        var_19 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) 18446744073709551606ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 2227569328U)) >= (var_9))))) : (min((((/* implicit */unsigned int) (unsigned short)33021)), (4294967295U)))))));
        arr_10 [i_2] [i_2] = var_6;
        arr_11 [i_2] = ((/* implicit */unsigned char) 13273747289590785557ULL);
        var_20 = ((/* implicit */unsigned int) min((var_20), (((unsigned int) (unsigned char)50))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 14; i_3 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [(unsigned char)0]))) * (arr_5 [i_3] [i_3])));
        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [4U] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_13 [i_3]))))));
    }
}

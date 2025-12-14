/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101540
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
    var_12 = ((/* implicit */signed char) ((((/* implicit */long long int) (+(((/* implicit */int) var_7))))) / (var_4)));
    var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) * (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_3)) : (4043673608120013327ULL))))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) max(((((!(((/* implicit */_Bool) 562949945032704LL)))) ? (var_11) : (((/* implicit */unsigned long long int) (+(562949945032704LL)))))), (((/* implicit */unsigned long long int) ((short) ((arr_1 [i_0]) ? (((/* implicit */int) (_Bool)0)) : (var_0)))))));
        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((1326325838229984355LL), (((/* implicit */long long int) (signed char)-16))))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((int) ((arr_1 [i_0]) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (unsigned short)31413))))))));
    }
    for (int i_1 = 2; i_1 < 14; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            for (long long int i_3 = 0; i_3 < 18; i_3 += 3) 
            {
                {
                    var_15 = ((/* implicit */long long int) max((((/* implicit */int) var_5)), (((((/* implicit */_Bool) (-(1477462842)))) ? (((arr_6 [i_1]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)-25482)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10))))))));
                    var_16 = ((/* implicit */unsigned int) max((((unsigned long long int) (!(((/* implicit */_Bool) arr_8 [i_1]))))), (((/* implicit */unsigned long long int) ((var_0) == (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))));
                }
            } 
        } 
        arr_12 [i_1 + 1] = ((/* implicit */_Bool) var_5);
        arr_13 [i_1] = ((/* implicit */unsigned short) ((-8911731076447192075LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)59994)))));
        arr_14 [i_1] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_3) : (var_6)))) ? (((unsigned long long int) 16775168ULL)) : (max((9246356695038251718ULL), (((/* implicit */unsigned long long int) 3334479476U)))))))));
    }
    var_17 = ((/* implicit */signed char) ((unsigned long long int) (unsigned char)45));
}

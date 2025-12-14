/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189031
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
    var_16 = ((/* implicit */int) ((unsigned short) var_7));
    var_17 = ((/* implicit */signed char) (((~(var_11))) & (min((((/* implicit */long long int) var_13)), (((((/* implicit */_Bool) var_7)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1] [(unsigned short)5])) ? (arr_2 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1))))))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 1; i_3 < 17; i_3 += 2) 
                    {
                        var_19 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */long long int) arr_5 [i_0] [i_2] [i_2] [i_2])) : (var_11)))) ? (((((/* implicit */_Bool) (unsigned char)20)) ? (140737488355327LL) : (var_1))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [8]))) == (3105137792865047342ULL))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_3 + 1]))) : (((((/* implicit */_Bool) arr_7 [i_0])) ? (arr_5 [12LL] [(unsigned short)10] [(unsigned short)10] [i_3]) : (arr_7 [i_0]))))))));
                        var_20 |= ((/* implicit */int) (!(((((/* implicit */unsigned long long int) arr_5 [i_3 + 1] [(_Bool)0] [i_3 + 1] [i_3 + 1])) < (((((/* implicit */_Bool) 187281165372411233LL)) ? (10767142666669079659ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [(short)2])))))))));
                    }
                    var_21 = ((/* implicit */unsigned int) 140737488355327LL);
                }
            } 
        } 
    } 
}

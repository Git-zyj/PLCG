/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178584
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
    var_19 -= ((/* implicit */signed char) (_Bool)1);
    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (((((_Bool)1) || (((/* implicit */_Bool) ((((/* implicit */int) var_13)) | (((/* implicit */int) var_8))))))) ? (1956216134U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -474666897)) ? (((/* implicit */int) ((unsigned short) var_5))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-16)) || (((/* implicit */_Bool) var_18)))))))))))));
    var_21 = ((/* implicit */_Bool) var_13);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 4; i_0 < 15; i_0 += 2) 
    {
        var_22 = ((/* implicit */int) ((((432656009U) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)66)) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned long long int) 7140066443178515292LL)) : (min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) < (((/* implicit */int) var_5))))), (((arr_2 [i_0 - 2]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))))));
        var_23 = ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [9])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1))))) || ((!(((/* implicit */_Bool) 16814008213963521140ULL))))))), ((~(((/* implicit */int) arr_0 [i_0 - 4]))))));
        var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((int) var_13)))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 4; i_1 < 14; i_1 += 4) /* same iter space */
    {
        var_25 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) 3862311287U))));
        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((arr_2 [i_1 + 1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1 - 3]))))))));
    }
    for (unsigned int i_2 = 4; i_2 < 14; i_2 += 4) /* same iter space */
    {
        var_27 = ((/* implicit */_Bool) 536347962U);
        arr_8 [i_2 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-43)) + (((/* implicit */int) var_2))))) ? (((/* implicit */int) arr_0 [i_2 - 1])) : ((+(((/* implicit */int) (_Bool)1))))));
    }
}

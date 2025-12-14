/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169565
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
    var_11 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) (unsigned char)233)))))) >= (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))))), (max((var_8), (((/* implicit */unsigned long long int) 2916670283U))))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 1378297012U)) % ((((!(((/* implicit */_Bool) 1280875674)))) ? (((arr_1 [i_0]) & (((/* implicit */unsigned long long int) 2916670283U)))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_0])))))))));
        var_12 = ((/* implicit */long long int) (+((+((-(arr_1 [i_0])))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            var_13 |= ((/* implicit */unsigned int) 3155138028623327956LL);
            arr_5 [i_1] = ((/* implicit */unsigned char) (_Bool)1);
        }
    }
    var_14 += ((/* implicit */_Bool) max((((/* implicit */int) (!(((((/* implicit */unsigned int) ((/* implicit */int) var_7))) <= (2916670282U)))))), ((-(((/* implicit */int) (_Bool)0))))));
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (3155138028623327956LL))) <= (((((/* implicit */_Bool) var_6)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))))) * (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (var_5))))));
    var_16 |= ((/* implicit */unsigned long long int) (+(var_1)));
}

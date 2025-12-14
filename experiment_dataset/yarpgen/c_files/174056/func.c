/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174056
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
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */int) min(((unsigned short)34168), (((/* implicit */unsigned short) (_Bool)1))))) | (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (short)-31610)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)255))))))));
    var_12 = ((/* implicit */long long int) var_5);
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0 - 2] = ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)183)), (8191LL)))) ? (4294967295U) : (((/* implicit */unsigned int) (-(((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (-2147483647 - 1))))))))));
                arr_6 [i_0] [(unsigned char)7] = ((/* implicit */_Bool) (((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0]))))))) | (min((((/* implicit */int) arr_2 [i_0 - 2] [i_1])), (((((/* implicit */int) (unsigned short)13129)) >> (((((/* implicit */int) arr_2 [4] [4])) - (21593)))))))));
                arr_7 [i_0] [(unsigned short)10] = ((/* implicit */unsigned short) 6861179783544871632LL);
            }
        } 
    } 
}

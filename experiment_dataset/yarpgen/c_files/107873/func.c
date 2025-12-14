/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107873
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                arr_7 [(unsigned short)16] &= ((/* implicit */int) max((max((3989323307U), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-6740))) : (1213804228U))))), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 4878969355652946046LL)) ? (((/* implicit */int) var_6)) : (arr_5 [12ULL]))))))));
                var_16 ^= ((/* implicit */unsigned long long int) max((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 3081163067U)) ? (6170859311513228683ULL) : (((/* implicit */unsigned long long int) 1213804228U)))))), ((-(((/* implicit */int) min(((_Bool)0), (var_9))))))));
                var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) min((((/* implicit */short) arr_4 [i_1] [i_0] [i_0])), (var_14))))))) ? (((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)40561))))))) : (max(((-(-5056858200806211041LL))), (((/* implicit */long long int) (-(1703061774))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) var_11);
}

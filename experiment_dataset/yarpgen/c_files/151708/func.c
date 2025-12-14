/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151708
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
    var_11 = ((/* implicit */_Bool) var_4);
    var_12 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)32))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) * (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (var_0)))))));
    var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)117)) - (((/* implicit */int) var_2))))) ? (7912424864865916029LL) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) -7912424864865916028LL);
                    var_15 ^= ((/* implicit */_Bool) ((((_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 7912424864865916016LL)) ? (var_10) : (2825050695U)))))))) : (((long long int) ((((/* implicit */_Bool) arr_2 [(unsigned short)20])) && (((/* implicit */_Bool) 9223372036853727232ULL)))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned char) (~(1023)));
}

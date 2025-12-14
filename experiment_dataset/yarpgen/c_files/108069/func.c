/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108069
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
    var_10 |= ((/* implicit */_Bool) min((max((((/* implicit */long long int) var_9)), (((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */long long int) var_8)))))), ((~(-4309468588592023069LL)))));
    var_11 = ((/* implicit */unsigned char) var_4);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (var_8) : (arr_0 [i_2])))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_6 [4ULL] [(unsigned short)3] [i_0])) : (((/* implicit */int) arr_6 [i_2] [(short)16] [11LL])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [15U] [4] [(signed char)13])))))));
                    var_13 = ((/* implicit */int) min((((/* implicit */long long int) arr_8 [i_0] [17] [(short)1] [i_2])), (min((((/* implicit */long long int) arr_8 [i_0] [18U] [(signed char)7] [i_2])), (-8537207120751500715LL)))));
                    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((4294967270U), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [18] [17] [2])))))))) ? (((/* implicit */int) var_9)) : (arr_0 [(unsigned short)4]))))));
                    var_15 -= ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [(_Bool)1] [i_2])) ? (((/* implicit */int) arr_3 [i_0] [(unsigned short)6] [(unsigned short)11])) : (((/* implicit */int) var_2))))), (min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_8 [8LL] [14LL] [2U] [(_Bool)1]))))), (-1LL)))));
                }
            } 
        } 
    } 
}

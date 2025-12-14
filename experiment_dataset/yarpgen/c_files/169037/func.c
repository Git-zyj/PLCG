/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169037
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
    var_17 |= ((((/* implicit */_Bool) max(((unsigned char)45), ((unsigned char)210)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((unsigned int) var_13)) : (((/* implicit */unsigned int) -1630507909))))) : ((~(min((((/* implicit */unsigned long long int) 5930473728387170065LL)), (13272891192170871610ULL))))));
    var_18 = ((/* implicit */unsigned int) var_1);
    var_19 = ((/* implicit */unsigned long long int) min((4681533057021098539LL), (((/* implicit */long long int) ((unsigned char) (!(((/* implicit */_Bool) var_13))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) ((unsigned long long int) (~(((((-1LL) + (9223372036854775807LL))) >> (((1630507887) - (1630507886))))))));
                    arr_7 [i_0] [i_1] [i_2] [i_0 + 1] = min((((((/* implicit */_Bool) ((unsigned int) var_12))) ? (((unsigned int) arr_1 [i_0])) : (((/* implicit */unsigned int) max((1630507887), (((/* implicit */int) arr_6 [3ULL] [i_1] [(_Bool)1] [i_0 + 1]))))))), (((/* implicit */unsigned int) (~(((((/* implicit */int) arr_0 [(unsigned short)12])) - (((/* implicit */int) arr_0 [i_0 - 1]))))))));
                    arr_8 [i_0] = ((/* implicit */signed char) (+(((((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1])) / (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) (signed char)83))))))));
                }
            } 
        } 
    } 
}

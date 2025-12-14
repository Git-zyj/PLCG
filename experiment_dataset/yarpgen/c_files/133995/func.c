/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133995
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
    var_13 -= ((/* implicit */_Bool) var_11);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+((-(789890279282487353LL)))))) ? (((((/* implicit */_Bool) (unsigned char)236)) ? (2199014866944ULL) : (((/* implicit */unsigned long long int) 789890279282487353LL)))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)33716))) - (-789890279282487350LL))))));
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (unsigned char)234)) ? (-789890279282487356LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_2] [i_2])))))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_4 [i_0] [i_1] [(_Bool)0] [i_2])), ((unsigned short)10164)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_3 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_0] [i_2])))))))));
                    arr_8 [i_2] [i_1] [i_1] [i_0] = (((!(((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1]))))))) ? (((((/* implicit */_Bool) min((6108829925039737651ULL), (((/* implicit */unsigned long long int) var_0))))) ? (((((/* implicit */_Bool) (unsigned short)44292)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)147))) : (4546759674601256944ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 11844772463833478545ULL)) || (((/* implicit */_Bool) (unsigned char)47)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)121)) || (((/* implicit */_Bool) (unsigned short)5)))))));
                    var_14 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)0))))) != (-789890279282487354LL)));
                }
            } 
        } 
    } 
}

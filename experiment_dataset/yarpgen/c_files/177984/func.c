/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177984
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
    var_19 = ((/* implicit */unsigned char) var_6);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_1 + 1] [i_0] [i_2] &= ((/* implicit */unsigned short) min((2049114982313811190ULL), (((/* implicit */unsigned long long int) ((short) ((1152921503533105152LL) ^ (((/* implicit */long long int) var_2))))))));
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((long long int) arr_1 [i_0] [i_0])) + (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))))) || (((/* implicit */_Bool) ((((var_2) < (((/* implicit */int) var_8)))) ? (var_18) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2049114982313811209ULL)) ? (((/* implicit */int) (short)31620)) : (arr_2 [i_0] [i_0] [i_0])))))))));
                    arr_8 [i_0] [i_1 - 1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_4 [i_0] [i_1 + 1]) : (((/* implicit */unsigned long long int) var_2))))) ? (((((/* implicit */_Bool) (short)-32763)) ? (arr_4 [i_1] [i_1 + 1]) : (((/* implicit */unsigned long long int) arr_6 [i_1] [i_1 + 1] [i_1 + 1])))) : (min((arr_4 [i_1 + 1] [i_1 - 1]), (arr_4 [i_0] [i_1 - 1])))));
                    var_21 = ((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-31631)) ? (((/* implicit */int) arr_3 [i_2])) : (((/* implicit */int) (signed char)116))))) ? (((/* implicit */int) max((((/* implicit */signed char) arr_1 [i_1 - 1] [i_1 - 1])), (var_8)))) : (((((/* implicit */_Bool) (short)32746)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)-32763))))))));
                }
            } 
        } 
    } 
}

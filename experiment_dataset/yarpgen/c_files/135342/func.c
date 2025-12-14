/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135342
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
    var_10 = ((/* implicit */_Bool) max((var_10), (((/* implicit */_Bool) var_0))));
    var_11 = ((/* implicit */unsigned char) min((3926264817U), (368702481U)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_0] [i_0] = (unsigned char)1;
                var_12 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((short) arr_2 [i_0])))) / (((((/* implicit */_Bool) 1ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5073))) : (arr_0 [i_1])))))) ? (((arr_5 [i_0]) << (((((/* implicit */int) var_0)) - (64607))))) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (((((/* implicit */_Bool) -6888421798068584199LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (3U))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (368702464U) : (arr_5 [i_0])))))));
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183243
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
    var_17 |= ((/* implicit */_Bool) min((((/* implicit */long long int) (((-(((/* implicit */int) (signed char)-60)))) / (((/* implicit */int) var_9))))), (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)41712)) : (((/* implicit */int) (unsigned short)240))))) ? (((((/* implicit */_Bool) 16619944613822883149ULL)) ? (-6448854157037953649LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)23839))))) : (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1)))))))));
    var_18 ^= var_7;
    var_19 = min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_10)) : (((-1766411834) / (((/* implicit */int) (signed char)15)))))), ((+(((((/* implicit */_Bool) (signed char)-59)) ? (((/* implicit */int) (unsigned short)47327)) : (-1809127546))))));
    var_20 -= ((/* implicit */unsigned short) var_7);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (~((-((~(((/* implicit */int) (short)4784)))))))))));
                var_22 += ((/* implicit */short) (((-(((/* implicit */int) (unsigned short)38891)))) > (((/* implicit */int) (unsigned char)119))));
                arr_5 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-32)) ? (-6448854157037953649LL) : (((/* implicit */long long int) ((/* implicit */int) (short)32596)))))) | (1826799459886668467ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((short)7892), ((short)12350))))) : ((((_Bool)1) ? (390958791U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-19390)))))));
            }
        } 
    } 
}

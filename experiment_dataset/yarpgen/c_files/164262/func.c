/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164262
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_13 *= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) -779641288002210376LL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_7)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27547))) : ((~(arr_4 [i_0])))));
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)-52)), (9772230320861710012ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)11984), ((unsigned short)37990))))) : (((unsigned long long int) (unsigned short)27545))));
                var_14 = var_0;
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)25362)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))));
                    var_16 = ((/* implicit */signed char) 779641288002210383LL);
                    arr_9 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_1 [i_1] [i_2])) : (((/* implicit */int) (unsigned short)27544))));
                }
            }
        } 
    } 
    var_17 = 5771860932037658057LL;
    var_18 = ((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_8)), (var_9)))) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_3), (var_3)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_12))))));
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -7419073131179591447LL)) ? (((/* implicit */int) (signed char)-75)) : (((/* implicit */int) (short)3534))))) && (((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (unsigned short)27578)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)-73))))))));
}

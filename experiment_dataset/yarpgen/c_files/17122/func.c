/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17122
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_15 *= ((/* implicit */unsigned char) ((unsigned short) arr_1 [i_0] [(_Bool)1]));
        var_16 = min((13068997135031464330ULL), (((/* implicit */unsigned long long int) var_1)));
        var_17 = ((((/* implicit */_Bool) (unsigned short)4)) ? (((/* implicit */int) (unsigned short)65517)) : (769927318));
    }
    var_18 *= ((/* implicit */unsigned char) min(((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 532676608)) ? (532676608) : (((/* implicit */int) (unsigned short)65517))))))), ((_Bool)1)));
    var_19 = ((/* implicit */unsigned char) var_3);
    /* LoopNest 3 */
    for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        for (short i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            for (unsigned short i_3 = 0; i_3 < 13; i_3 += 3) 
            {
                {
                    var_20 += ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)28647))))), (((((/* implicit */_Bool) var_1)) ? (arr_9 [i_1] [i_2] [i_3] [(unsigned short)6]) : (arr_9 [12ULL] [i_2] [i_2] [12ULL])))));
                    arr_10 [i_3] [(unsigned char)6] [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)4)) ? (((/* implicit */int) max((min(((unsigned short)65519), (((/* implicit */unsigned short) (_Bool)0)))), (((/* implicit */unsigned short) (short)23602))))) : (((/* implicit */int) var_7))));
                    var_21 ^= ((-532676609) % (((/* implicit */int) (short)23611)));
                }
            } 
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156283
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) (signed char)-2)) ? (279223176896970752LL) : (((/* implicit */long long int) ((/* implicit */int) (short)29214))))));
                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_1 [i_0] [i_1]))))))))));
                /* LoopSeq 2 */
                for (long long int i_2 = 2; i_2 < 20; i_2 += 4) 
                {
                    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (-(((/* implicit */int) var_1)))))));
                    arr_7 [i_0] [i_0] [(_Bool)1] = ((/* implicit */unsigned int) ((long long int) (short)-29215));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_20 = ((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned int) (short)32766)), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) : (var_7))))), (((/* implicit */unsigned int) var_2))));
                    arr_11 [(unsigned char)17] [i_0] [i_3] = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [9ULL] [9ULL] [i_3] [(unsigned char)4])) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) arr_0 [i_0] [i_1]))))) ? (var_5) : (((/* implicit */unsigned long long int) arr_0 [i_0] [i_1])))) << ((((+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (13851773072272065629ULL))))) - (82ULL)))));
                    var_21 = min((var_4), ((+(arr_0 [i_0] [i_1]))));
                    var_22 -= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) (short)-29222))) ? (arr_0 [i_3] [i_3]) : ((+(-6937088041895808317LL)))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) * (max((((/* implicit */unsigned long long int) -4216816552202011619LL)), (14421218879981334235ULL)))))));
                }
            }
        } 
    } 
    var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) var_11))));
}

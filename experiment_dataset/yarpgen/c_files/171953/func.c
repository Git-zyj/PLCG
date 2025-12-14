/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171953
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 21; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        var_17 = ((/* implicit */unsigned long long int) var_3);
                        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) var_9))));
                        var_19 *= ((/* implicit */signed char) arr_1 [(signed char)0] [i_3]);
                    }
                    var_20 = ((/* implicit */int) ((short) min((((/* implicit */unsigned int) (unsigned short)1099)), (var_6))));
                    arr_9 [i_0] [i_1] [19LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2 - 1] [i_2] [i_2])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2 + 1] [i_2] [i_2 - 1] [i_2 - 1] [18LL] [i_2])))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) : (4006148546027239085LL)));
                }
            } 
        } 
    } 
    var_21 -= ((/* implicit */int) ((((/* implicit */_Bool) 571475601928493415LL)) ? (((long long int) -571475601928493415LL)) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) 1098974756864LL)) ? (((/* implicit */int) (unsigned short)22784)) : (((/* implicit */int) (signed char)1)))) : (((/* implicit */int) var_9)))))));
    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -571475601928493415LL)) ? (((/* implicit */int) (signed char)-11)) : (((/* implicit */int) (signed char)23))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)38656))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967292U)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (signed char)41))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)239))) : (((((/* implicit */_Bool) -966702716)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)44)))))))));
    var_23 *= var_4;
    var_24 = ((long long int) var_0);
}

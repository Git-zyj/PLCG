/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173817
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((int) (unsigned char)155)))));
        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) arr_2 [i_0]))));
        var_17 *= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) max(((unsigned char)87), (((/* implicit */unsigned char) (_Bool)0))))) ? (max((((/* implicit */unsigned long long int) (unsigned char)165)), (0ULL))) : (((((/* implicit */_Bool) (unsigned char)91)) ? (18417506716970961594ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)110))))))), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0 + 3]))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 2) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */long long int) max((max((((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_5 [i_1])) : (-751921476))), (((/* implicit */int) min(((unsigned char)100), ((unsigned char)0)))))), (((/* implicit */int) ((short) ((signed char) (unsigned short)20859))))));
        var_18 -= ((/* implicit */unsigned char) (~(7073469024950187006LL)));
    }
    for (short i_2 = 1; i_2 < 11; i_2 += 3) 
    {
        var_19 -= ((/* implicit */unsigned char) ((int) arr_9 [i_2] [i_2]));
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)156))) : (283726776524341248ULL)));
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) max((15361899929971480058ULL), (((/* implicit */unsigned long long int) (unsigned short)44677)))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)182))))) : (min((281474976710528ULL), (((/* implicit */unsigned long long int) (unsigned char)150))))));
    }
    var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)165)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)99))) : (114688U))))));
}

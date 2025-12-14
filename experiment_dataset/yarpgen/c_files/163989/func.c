/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163989
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned int) arr_3 [i_0]);
                var_16 &= ((/* implicit */signed char) (-(((/* implicit */int) min(((unsigned short)0), ((unsigned short)65535))))));
            }
        } 
    } 
    var_17 &= min((((/* implicit */long long int) (unsigned short)65523)), (5715185918087038090LL));
    /* LoopSeq 1 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_18 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min(((unsigned short)550), (((/* implicit */unsigned short) (_Bool)1))))), (min((max((arr_7 [i_2]), (((/* implicit */unsigned long long int) arr_6 [i_2] [i_2])))), (((/* implicit */unsigned long long int) arr_6 [i_2] [i_2]))))));
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((+(14124520129274912092ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) arr_6 [i_2] [i_2])), (var_13))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_7 [i_2]), (((/* implicit */unsigned long long int) (unsigned short)4))))))))) : (436277029U)));
        /* LoopSeq 1 */
        for (signed char i_3 = 1; i_3 < 13; i_3 += 2) 
        {
            var_20 &= ((/* implicit */unsigned int) arr_5 [i_3 + 1]);
            var_21 &= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5))) - (14192230785895106740ULL)));
            var_22 = ((/* implicit */int) ((short) max((4841159411732336305LL), ((-(arr_8 [i_2] [i_3 - 1]))))));
            var_23 = ((/* implicit */unsigned long long int) (+(max((((/* implicit */int) arr_9 [i_2] [i_2] [i_2])), (((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)12))))))));
        }
    }
}

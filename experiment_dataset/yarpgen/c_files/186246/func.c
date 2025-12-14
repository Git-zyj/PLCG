/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186246
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
    for (long long int i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */_Bool) 6160710215270827357ULL);
                arr_6 [i_0] = ((/* implicit */_Bool) (((+(arr_5 [i_0 + 1]))) * ((+((+(arr_5 [i_0])))))));
                arr_7 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) ((long long int) arr_0 [i_0] [4])))) ? (((((((/* implicit */_Bool) arr_2 [7ULL])) ? (arr_5 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_1]))))) << ((((~(((/* implicit */int) arr_4 [i_1] [i_1] [i_0])))) + (57))))) : (((/* implicit */unsigned int) (((+(((/* implicit */int) arr_1 [i_0] [i_0])))) * (((/* implicit */int) arr_1 [i_0] [i_0 - 1])))))));
                var_14 ^= ((/* implicit */_Bool) (-((+(((((/* implicit */_Bool) (unsigned short)19112)) ? (6828619602813184719ULL) : (((/* implicit */unsigned long long int) arr_5 [i_0 - 2]))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)170)) ? (-11LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)46438)))))) ? (((long long int) var_4)) : (((/* implicit */long long int) (((_Bool)1) ? (120620722U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19097))))))));
    var_16 = ((/* implicit */long long int) (unsigned short)63);
    var_17 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)46438)) + (var_9))))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129647
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((unsigned short)56721), (var_11)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)1))))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (unsigned short)64937)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)8787))))))));
                var_17 = ((/* implicit */int) ((min((((((/* implicit */_Bool) 4909497927867965014ULL)) ? (7490499739691802084ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)56694))))), (14341938998882804297ULL))) > (var_2)));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 3) 
    {
        for (int i_3 = 2; i_3 < 9; i_3 += 2) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)27139)) | (((/* implicit */int) (unsigned short)8818))))) ? (((((/* implicit */_Bool) (unsigned short)56717)) ? (15) : (((/* implicit */int) (unsigned short)25649)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))));
                    var_19 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (-4172668543144651399LL) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (min((((/* implicit */int) (unsigned short)56721)), (-16))) : (-13)))) ? (((18446744073709551615ULL) & (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (+(((/* implicit */int) var_11)))))))));
                }
            } 
        } 
    } 
}

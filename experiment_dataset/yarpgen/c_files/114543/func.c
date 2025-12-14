/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114543
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
        for (signed char i_1 = 3; i_1 < 19; i_1 += 3) 
        {
            {
                var_16 ^= ((/* implicit */signed char) ((((((_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_2 [16LL] [16LL])) : (((/* implicit */int) (short)30495)))) * (((/* implicit */int) ((signed char) ((int) (_Bool)1))))));
                var_17 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (0U)))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    var_18 = ((/* implicit */short) min((((/* implicit */int) min((min((arr_5 [i_0]), ((short)-8937))), (((/* implicit */short) ((-311367583126148107LL) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))))), (var_7)));
                    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) max((((/* implicit */int) (_Bool)0)), ((+(-2123926398))))))));
                    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (-(((((((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (signed char)-80)) : (((/* implicit */int) (_Bool)1)))) + (2147483647))) << ((((+(((/* implicit */int) var_10)))) - (247))))))))));
                    var_21 = 2123926375;
                }
                var_22 = ((/* implicit */int) var_15);
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) var_11))));
    var_24 = ((/* implicit */_Bool) min((((((/* implicit */int) min((var_8), (var_14)))) * ((~(((/* implicit */int) (_Bool)1)))))), ((-(((/* implicit */int) var_2))))));
    var_25 = ((/* implicit */unsigned char) var_8);
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 1; i_3 < 20; i_3 += 3) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                var_26 = ((/* implicit */long long int) min((((/* implicit */unsigned int) -211879424)), (((((/* implicit */_Bool) ((short) var_15))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(var_5))))) : ((-(3783701960U)))))));
                arr_12 [i_4] = ((/* implicit */long long int) var_14);
                var_27 = ((/* implicit */long long int) (-(((/* implicit */int) (signed char)-127))));
            }
        } 
    } 
}

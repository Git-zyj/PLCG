/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10497
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
    var_10 += ((/* implicit */unsigned long long int) ((var_3) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(var_0))))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */signed char) arr_1 [i_1]);
                    var_12 = ((/* implicit */unsigned char) (((_Bool)1) ? (((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)128))) : (2427759631U)))) : (arr_1 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)12), (arr_4 [i_1])))))));
                    var_13 -= ((/* implicit */_Bool) max(((+(arr_3 [i_0]))), (((/* implicit */unsigned int) ((((((/* implicit */long long int) 1867207664U)) & (-337765147969594710LL))) == ((~(-5256824419976474635LL))))))));
                    var_14 = ((/* implicit */unsigned short) max((max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_3))))), ((~(-6354469362462069770LL))))), (((/* implicit */long long int) (~(((((/* implicit */_Bool) 131068U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)25842))) : (4294967294U))))))));
                    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) (((+(arr_0 [i_2]))) & (min((var_3), (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_0 [i_1]) : (2845241754U))))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned short) var_7);
    /* LoopSeq 2 */
    for (long long int i_3 = 0; i_3 < 12; i_3 += 3) 
    {
        var_17 = ((/* implicit */unsigned short) (~(max((((((/* implicit */unsigned long long int) 4294967289U)) & (8707854288134520000ULL))), (((/* implicit */unsigned long long int) arr_8 [i_3] [i_3]))))));
        var_18 |= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((unsigned int) (+(var_3))))) == ((-(arr_2 [i_3])))));
    }
    for (unsigned int i_4 = 0; i_4 < 10; i_4 += 1) 
    {
        var_19 = ((/* implicit */unsigned int) (_Bool)1);
        var_20 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) min((arr_5 [i_4]), ((unsigned short)12541)))) || ((!(((/* implicit */_Bool) 1744499433778110634LL)))))));
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176877
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
    for (int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_15 |= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)19597)) / (((/* implicit */int) ((unsigned char) arr_2 [(unsigned char)12] [(unsigned char)12])))));
        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (unsigned short)19585))));
        var_17 *= ((/* implicit */unsigned int) min((((/* implicit */long long int) arr_0 [(unsigned short)12])), (var_4)));
    }
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) var_14))) ? (max((((/* implicit */unsigned int) (unsigned short)19585)), (var_7))) : (((/* implicit */unsigned int) min((((/* implicit */int) var_10)), (((((/* implicit */_Bool) (unsigned short)45944)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_10)))))))));
    /* LoopNest 2 */
    for (short i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        for (signed char i_2 = 1; i_2 < 17; i_2 += 3) 
        {
            {
                var_19 *= ((/* implicit */unsigned char) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45963))) / (var_11))), (((/* implicit */unsigned long long int) ((((unsigned long long int) (unsigned short)19617)) < (((/* implicit */unsigned long long int) max((-7074293715641380746LL), (((/* implicit */long long int) var_13))))))))));
                arr_8 [i_1] [i_2 - 1] [i_2] = ((/* implicit */signed char) ((unsigned char) ((signed char) var_6)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 2; i_3 < 20; i_3 += 4) 
    {
        for (signed char i_4 = 2; i_4 < 20; i_4 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) ((((((((/* implicit */int) var_12)) - (((/* implicit */int) var_14)))) | (((/* implicit */int) max(((unsigned char)50), (((/* implicit */unsigned char) var_5))))))) > ((((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */int) (unsigned short)19597)) : (((/* implicit */int) arr_13 [i_4]))))));
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_11 [i_4 + 1] [i_3 - 2] [i_3 - 1]) * (((/* implicit */unsigned long long int) var_4))))) ? (((((/* implicit */_Bool) var_12)) ? ((-(((/* implicit */int) (unsigned short)45940)))) : (((/* implicit */int) (unsigned short)45930)))) : (((/* implicit */int) var_12))));
                arr_14 [i_4 - 1] [i_3 + 1] = ((/* implicit */_Bool) arr_10 [i_3 + 1]);
            }
        } 
    } 
}

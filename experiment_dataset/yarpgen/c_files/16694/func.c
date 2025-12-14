/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16694
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
    for (short i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        var_17 += ((/* implicit */unsigned long long int) (_Bool)1);
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 23; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 &= ((/* implicit */unsigned char) (+(min((var_10), (((/* implicit */unsigned long long int) (+(-7207804178319524130LL))))))));
                    var_19 ^= ((/* implicit */short) (!(((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned long long int) var_4)))))));
                }
            } 
        } 
    }
    var_20 = ((/* implicit */_Bool) min((((/* implicit */unsigned char) var_5)), (var_6)));
    var_21 = ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) min(((short)-1761), (((/* implicit */short) var_5)))))) < (7207804178319524130LL))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) <= (var_10))))) : (min((((long long int) 7207804178319524130LL)), (((/* implicit */long long int) (signed char)124))))));
    /* LoopNest 3 */
    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 2) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (short i_5 = 0; i_5 < 13; i_5 += 2) 
            {
                {
                    var_22 = ((/* implicit */long long int) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)254)) || (((/* implicit */_Bool) (unsigned char)145))))), (arr_14 [i_3] [i_3] [i_4] [i_3])));
                    var_23 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(var_13))))) > (((((/* implicit */_Bool) arr_11 [i_3] [i_3])) ? (((/* implicit */unsigned int) (+(-20)))) : (((((/* implicit */_Bool) (short)17678)) ? (4294967287U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_4] [i_4])))))))));
                    var_24 = ((/* implicit */unsigned char) (_Bool)1);
                }
            } 
        } 
    } 
    var_25 |= ((/* implicit */signed char) (~(18)));
}

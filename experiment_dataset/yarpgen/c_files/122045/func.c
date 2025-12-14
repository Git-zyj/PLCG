/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122045
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
    var_19 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_17)) + (var_18)))) ? (((/* implicit */int) max((var_5), (((/* implicit */short) var_16))))) : (((/* implicit */int) var_0))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                arr_4 [i_1] = ((/* implicit */unsigned char) (+(4294967286U)));
                arr_5 [i_1] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) -1152139600)) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : (13255577091094723699ULL)));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 2; i_2 < 10; i_2 += 2) 
                {
                    var_20 -= ((/* implicit */int) var_0);
                    var_21 = ((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_2 + 1]);
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 4) 
    {
        for (signed char i_4 = 0; i_4 < 18; i_4 += 3) 
        {
            {
                var_22 *= ((/* implicit */signed char) (-((+(((((/* implicit */_Bool) arr_8 [i_4])) ? (13255577091094723699ULL) : (arr_11 [i_3] [i_4] [i_3])))))));
                var_23 -= ((/* implicit */signed char) (unsigned char)222);
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_5 = 0; i_5 < 10; i_5 += 2) 
    {
        for (unsigned short i_6 = 0; i_6 < 10; i_6 += 1) 
        {
            for (unsigned short i_7 = 0; i_7 < 10; i_7 += 2) 
            {
                {
                    arr_20 [i_5] [i_5] [i_5] [5LL] = ((/* implicit */short) (-((+((-(((/* implicit */int) (signed char)45))))))));
                    arr_21 [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */short) (signed char)-1)), ((short)-32753))))));
                }
            } 
        } 
    } 
    var_24 = var_1;
}

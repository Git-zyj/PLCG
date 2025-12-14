/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13902
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
    var_16 = ((/* implicit */long long int) var_8);
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 -= ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) arr_1 [0LL])) ^ (((/* implicit */int) arr_4 [(unsigned short)2] [i_1] [(unsigned short)2])))))) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [24ULL] [i_1] [i_2]))));
                    var_18 = ((/* implicit */_Bool) ((int) (+(((/* implicit */int) arr_2 [i_2 - 1] [i_0 - 2])))));
                    arr_8 [13ULL] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_0 [17ULL] [i_0])) ? (var_5) : (((/* implicit */int) arr_1 [i_0])))))) < (((/* implicit */int) arr_1 [i_0]))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((-155855127), (var_14)))) ? ((~(70368207306752ULL))) : (var_1))))));
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 22; i_3 += 4) 
    {
        for (unsigned long long int i_4 = 2; i_4 < 23; i_4 += 2) 
        {
            {
                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (+((~(arr_3 [i_3]))))))));
                var_21 -= ((/* implicit */long long int) var_15);
                var_22 *= ((/* implicit */unsigned int) min((((663991349948249281ULL) - (min((7846525154008675007ULL), (((/* implicit */unsigned long long int) arr_4 [i_4] [i_3 + 3] [i_4])))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_4] [i_4 - 2] [i_4 - 2] [i_4])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) : (-1602338451))))));
            }
        } 
    } 
}

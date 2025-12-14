/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136549
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
    var_11 -= ((/* implicit */unsigned short) ((((/* implicit */int) var_0)) < (((((/* implicit */int) var_3)) & (((/* implicit */int) var_1))))));
    var_12 = ((/* implicit */int) 6531111285852786649ULL);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)-16479)) > (((/* implicit */int) ((((((var_6) + (9223372036854775807LL))) >> (((/* implicit */int) (_Bool)1)))) >= (((/* implicit */long long int) ((/* implicit */int) max((arr_1 [i_0]), ((_Bool)1))))))))));
                var_14 = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */int) ((7609016840734950113ULL) != (((/* implicit */unsigned long long int) 1054360934))))) <= (((/* implicit */int) arr_5 [i_0 - 1] [i_0 + 1] [i_0 + 1])))))));
                var_15 = ((/* implicit */long long int) ((((min((((/* implicit */int) (!(((/* implicit */_Bool) 2576061611184978783ULL))))), (((((/* implicit */int) (signed char)-98)) | (((/* implicit */int) (short)19516)))))) + (2147483647))) << (((max((((((/* implicit */int) var_9)) + (((/* implicit */int) var_4)))), (((/* implicit */int) arr_2 [i_0])))) - (228)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 2) 
        {
            {
                arr_11 [i_2] [i_3] = ((/* implicit */_Bool) (unsigned char)186);
                arr_12 [i_3] [i_3] |= ((/* implicit */_Bool) ((arr_9 [i_2] [i_3] [i_2]) - (15870682462524572832ULL)));
            }
        } 
    } 
}

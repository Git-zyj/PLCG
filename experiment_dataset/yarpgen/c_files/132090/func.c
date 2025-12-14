/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132090
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
    for (int i_0 = 2; i_0 < 6; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 765988553U)) ? (-3785463244838655506LL) : (var_1))) < (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_0 + 4])))));
                arr_7 [i_0] [i_1] = ((/* implicit */int) (unsigned char)218);
                arr_8 [i_0 + 1] [i_0] [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_0 + 3] [i_1])) ? (((((/* implicit */unsigned long long int) -7362854657449599886LL)) + (15077796865732277697ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))))) < (((/* implicit */unsigned long long int) 912019275))));
            }
        } 
    } 
    var_18 += ((/* implicit */int) var_12);
    var_19 ^= ((/* implicit */short) -1000574625);
    /* LoopNest 2 */
    for (unsigned short i_2 = 1; i_2 < 8; i_2 += 3) 
    {
        for (long long int i_3 = 2; i_3 < 10; i_3 += 4) 
        {
            {
                var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) arr_12 [i_2 + 1] [i_3 - 2]))));
                var_21 ^= ((/* implicit */unsigned short) (+(912019292)));
            }
        } 
    } 
}

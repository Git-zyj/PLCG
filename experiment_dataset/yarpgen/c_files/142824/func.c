/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142824
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
    var_18 = ((/* implicit */unsigned char) (signed char)-119);
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_17))))) | ((~(((/* implicit */int) var_8))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            {
                var_20 *= ((/* implicit */short) ((unsigned short) arr_2 [i_0]));
                arr_8 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) (signed char)118)), (var_1)))) ? (17082311269613071200ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1 + 3] [i_0])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_12)));
                arr_9 [i_0] [i_1] = ((/* implicit */short) arr_7 [i_0]);
                arr_10 [i_0] [i_0] = 4400706939068771352ULL;
                arr_11 [i_0] [i_0] [i_1 + 2] = -7498004112647873120LL;
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 1; i_2 < 13; i_2 += 1) 
    {
        for (long long int i_3 = 0; i_3 < 17; i_3 += 3) 
        {
            {
                arr_18 [i_2] [2ULL] [i_2] = ((/* implicit */unsigned long long int) ((_Bool) min((((((/* implicit */_Bool) -535186187)) ? (var_13) : (10311524795124463960ULL))), (((/* implicit */unsigned long long int) (+(-1365537325)))))));
                arr_19 [i_2] = ((/* implicit */signed char) min(((-((+(2005928294))))), (((/* implicit */int) (signed char)-119))));
                arr_20 [i_2] [i_3] [9ULL] = ((/* implicit */unsigned int) var_9);
            }
        } 
    } 
}

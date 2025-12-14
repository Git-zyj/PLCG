/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165438
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
    var_17 -= ((/* implicit */short) max((((unsigned long long int) max(((short)104), (var_10)))), (((/* implicit */unsigned long long int) var_4))));
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (max((((/* implicit */unsigned long long int) ((((/* implicit */int) ((4227858432ULL) != (4227858432ULL)))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) 18446744069481693183ULL)))))))), (((var_8) & (var_6)))))));
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_6 [18ULL] [18ULL] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -72340313)) ? (((((/* implicit */unsigned long long int) 4262575365861315788LL)) * (arr_0 [i_0 + 2] [i_2]))) : ((~(9007199254478848ULL)))))) ? ((-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (11743419477643235633ULL))))) : (((((/* implicit */_Bool) arr_3 [i_0 - 2] [i_0 - 2])) ? (var_0) : (((/* implicit */unsigned long long int) 7989003471027111370LL))))));
                    var_19 = ((/* implicit */unsigned char) var_2);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 4) 
    {
        for (short i_4 = 0; i_4 < 25; i_4 += 3) 
        {
            {
                arr_14 [i_3] [i_4] [7LL] = ((/* implicit */short) (+(var_13)));
                arr_15 [i_3] [i_3] [i_4] = ((/* implicit */signed char) var_2);
            }
        } 
    } 
}

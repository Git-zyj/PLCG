/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132252
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */short) var_1);
                var_19 = ((/* implicit */unsigned long long int) (-((-(((((/* implicit */_Bool) (short)16384)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
            }
        } 
    } 
    var_20 += (signed char)-55;
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 13; i_2 += 2) 
    {
        for (unsigned char i_3 = 1; i_3 < 11; i_3 += 4) 
        {
            {
                var_21 = ((/* implicit */long long int) max(((short)11080), (((/* implicit */short) min(((_Bool)1), (var_11))))));
                arr_11 [i_3] = ((/* implicit */unsigned short) (short)-5056);
                var_22 = ((/* implicit */long long int) (+(444171204)));
            }
        } 
    } 
    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (((-(((/* implicit */int) var_6)))) + (((/* implicit */int) (short)-30176))))) ? (15920349335016167494ULL) : (7641089097997598064ULL)));
}

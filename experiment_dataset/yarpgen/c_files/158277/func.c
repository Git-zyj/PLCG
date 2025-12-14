/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158277
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
    var_10 = ((/* implicit */unsigned char) var_4);
    var_11 = ((/* implicit */unsigned char) min(((signed char)-81), ((signed char)-65)));
    var_12 = ((((/* implicit */long long int) ((/* implicit */int) var_0))) ^ (var_7));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [(signed char)15] [i_2] [(unsigned char)22] [(signed char)9] = ((((((/* implicit */int) arr_7 [i_2])) ^ (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-32)), (arr_7 [i_2])))))) + (((/* implicit */int) min((arr_7 [i_2]), (((/* implicit */unsigned short) var_2))))));
                    arr_10 [i_2] = (+(min((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)39156))))), (min((((/* implicit */long long int) arr_4 [14LL])), (var_6))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)81))));
}

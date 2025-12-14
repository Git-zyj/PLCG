/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178494
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
    var_20 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) (signed char)-74))) ? (((long long int) -1550931980659968964LL)) : (((/* implicit */long long int) ((/* implicit */int) ((short) (_Bool)1))))))), (var_19)));
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_15)) ? (var_13) : (var_13))), (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))))) && (((/* implicit */_Bool) ((((long long int) (_Bool)1)) ^ (5774130613187793442LL))))));
    var_22 = ((/* implicit */unsigned char) min((min((((/* implicit */short) var_8)), (((short) (_Bool)1)))), (((/* implicit */short) (unsigned char)77))));
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                for (int i_3 = 1; i_3 < 22; i_3 += 2) 
                {
                    {
                        var_23 *= ((/* implicit */unsigned long long int) (_Bool)1);
                        var_24 *= ((/* implicit */unsigned char) (_Bool)1);
                        var_25 -= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)229))) : (((long long int) (_Bool)1)))) / (var_15)));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (short i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            for (long long int i_5 = 0; i_5 < 24; i_5 += 2) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        arr_19 [i_0 + 3] [i_0] [i_0] [i_0 + 3] [(unsigned char)20] [i_6] = ((/* implicit */short) ((((((_Bool) arr_5 [i_0] [6] [i_5] [i_0])) ? (((((/* implicit */_Bool) 12278340921133075337ULL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) min((((/* implicit */unsigned char) var_10)), ((unsigned char)249)))))) << ((((+(((/* implicit */int) min((arr_5 [15ULL] [i_4] [15ULL] [i_0]), (((/* implicit */unsigned char) var_11))))))) - (73)))));
                        arr_20 [i_0] [i_4] [i_5] [(short)11] = ((/* implicit */short) var_18);
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_7 = 3; i_7 < 23; i_7 += 2) 
        {
            arr_24 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_18))))) ? (((/* implicit */int) arr_22 [i_7 + 1])) : (((/* implicit */int) var_4))));
            var_26 *= ((/* implicit */short) (!(((/* implicit */_Bool) 10016019247220172805ULL))));
        }
    }
}

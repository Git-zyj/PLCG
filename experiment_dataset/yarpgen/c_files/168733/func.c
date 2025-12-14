/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168733
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
    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) var_12))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            var_19 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) (unsigned char)7)) ? (var_13) : (arr_5 [5LL] [i_1 + 3]))));
            arr_6 [i_1 + 2] = ((/* implicit */unsigned long long int) var_2);
        }
        var_20 = ((/* implicit */short) (unsigned char)61);
        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((short) ((((/* implicit */unsigned long long int) var_12)) < (((((/* implicit */_Bool) 0LL)) ? (arr_4 [(short)13] [i_0]) : (((/* implicit */unsigned long long int) 6491912083330550722LL))))))))));
    }
    for (signed char i_2 = 1; i_2 < 20; i_2 += 3) 
    {
        arr_10 [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(arr_4 [i_2] [i_2]))))));
        var_22 &= ((/* implicit */unsigned char) (~(-3805759733921568383LL)));
    }
    /* LoopNest 3 */
    for (long long int i_3 = 0; i_3 < 24; i_3 += 2) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 1) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    var_23 = (short)8900;
                    /* LoopNest 2 */
                    for (short i_6 = 2; i_6 < 23; i_6 += 3) 
                    {
                        for (long long int i_7 = 0; i_7 < 24; i_7 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned long long int) min((var_24), (((((_Bool) var_0)) ? (arr_5 [i_3] [i_3]) : (13032841168084513928ULL)))));
                                var_25 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [4ULL] [i_6 - 1] [i_6] [i_6 - 1] [i_6 - 1])) ? (((/* implicit */int) arr_23 [i_6 + 1] [i_6 + 1] [i_6] [(signed char)21] [i_6 - 1])) : (((/* implicit */int) (signed char)-91))))) || ((!(((/* implicit */_Bool) min((((/* implicit */long long int) (short)1792)), (arr_14 [15LL])))))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */signed char) ((unsigned char) ((short) ((((/* implicit */_Bool) 2450652054635974510LL)) ? (((/* implicit */int) arr_3 [i_4])) : (((/* implicit */int) (signed char)89))))));
                    var_27 = ((/* implicit */unsigned long long int) max((var_27), (min((((/* implicit */unsigned long long int) ((_Bool) arr_20 [i_3] [i_3] [i_3] [i_3]))), (((((/* implicit */_Bool) 0LL)) ? (var_9) : ((+(18230334149105044670ULL)))))))));
                }
            } 
        } 
    } 
    var_28 += ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 9920115001039253131ULL)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))))) | ((+(((unsigned long long int) var_15))))));
}

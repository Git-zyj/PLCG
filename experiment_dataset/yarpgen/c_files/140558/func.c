/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140558
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (long long int i_3 = 3; i_3 < 21; i_3 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_4 = 1; i_4 < 22; i_4 += 2) 
                        {
                            var_14 = ((/* implicit */long long int) (+(arr_6 [i_0 + 2] [i_1 + 1] [i_2] [i_0 + 3])));
                            var_15 = ((/* implicit */signed char) ((((unsigned long long int) arr_5 [i_0] [i_0 + 2])) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                        }
                        arr_12 [i_0] [i_0] [i_0] [i_3 + 3] = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_5 [i_2] [i_1 + 1])), (678743206604408734ULL)))) ? (((/* implicit */long long int) min((-893207321), (((/* implicit */int) var_10))))) : (((long long int) arr_0 [i_1 + 1] [i_0]))))), (678743206604408734ULL));
                        var_16 = ((/* implicit */int) ((17768000867105142873ULL) > (((/* implicit */unsigned long long int) 367295099))));
                    }
                } 
            } 
        } 
        var_17 = ((long long int) min((min((((/* implicit */unsigned long long int) var_3)), (arr_8 [i_0] [i_0] [i_0] [6] [i_0 + 3]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0)))))));
    }
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        var_18 = (_Bool)0;
        arr_15 [i_5] = ((/* implicit */int) ((((/* implicit */int) ((var_10) || (((/* implicit */_Bool) ((short) var_8)))))) < (((/* implicit */int) (!((_Bool)0))))));
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 1; i_6 < 11; i_6 += 1) 
        {
            for (signed char i_7 = 4; i_7 < 11; i_7 += 3) 
            {
                {
                    var_19 = ((/* implicit */long long int) max(((+(((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (var_1)))))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((3360467491801358265LL) << (((((((/* implicit */int) arr_19 [i_5] [i_6] [i_5])) + (158))) - (43)))))) != (17768000867105142881ULL))))));
                    var_20 = ((/* implicit */unsigned char) max((((/* implicit */long long int) (_Bool)0)), (min((max((((/* implicit */long long int) (_Bool)1)), (3360467491801358283LL))), (((/* implicit */long long int) ((int) var_7)))))));
                    var_21 = ((/* implicit */unsigned char) 17768000867105142881ULL);
                }
            } 
        } 
    }
    var_22 = max((((((/* implicit */unsigned long long int) ((long long int) var_8))) + (var_6))), (((/* implicit */unsigned long long int) (_Bool)1)));
}

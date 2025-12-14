/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131325
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
    var_11 = ((((((/* implicit */_Bool) 17179344896LL)) || ((((_Bool)1) || ((_Bool)1))))) ? (min((((((/* implicit */unsigned long long int) var_9)) | (var_10))), (((/* implicit */unsigned long long int) var_5)))) : ((+(min((var_8), (((/* implicit */unsigned long long int) (_Bool)1)))))));
    var_12 = ((/* implicit */signed char) var_0);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 10; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)43254)) ? (((/* implicit */int) (!(((/* implicit */_Bool) min(((unsigned short)55266), (((/* implicit */unsigned short) (_Bool)1)))))))) : (((/* implicit */int) arr_1 [i_0 + 1]))));
                    var_14 = max((arr_3 [i_0 + 1] [i_0] [i_0]), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_0 + 1] [i_2 + 1]))))));
                    var_15 = ((/* implicit */unsigned short) 4735977412347433791LL);
                    arr_7 [i_0] = ((/* implicit */unsigned long long int) (+(((long long int) (+(((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1])))))));
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned short) min((max((var_8), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((short) var_1)))) ^ (max((((/* implicit */long long int) arr_0 [4LL] [4LL])), (arr_2 [i_0] [i_0 + 1] [i_0 + 1]))))))));
        /* LoopNest 3 */
        for (unsigned int i_3 = 0; i_3 < 11; i_3 += 4) 
        {
            for (unsigned long long int i_4 = 1; i_4 < 9; i_4 += 3) 
            {
                for (long long int i_5 = 0; i_5 < 11; i_5 += 4) 
                {
                    {
                        var_17 = (~(arr_10 [i_4] [i_4] [i_4]));
                        var_18 = ((/* implicit */short) max((max(((((_Bool)1) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0]))))), (min((((/* implicit */unsigned long long int) var_4)), (arr_14 [i_0] [i_0] [i_4] [i_4]))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_8 [i_0 + 1] [i_4 + 2])))))));
                        var_19 = ((/* implicit */short) max(((+(arr_3 [i_4 + 1] [i_4] [i_0 + 1]))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_0)))))));
                    }
                } 
            } 
        } 
    }
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (var_3) : ((~(((((/* implicit */_Bool) var_8)) ? (var_3) : (((/* implicit */unsigned long long int) var_9))))))));
}

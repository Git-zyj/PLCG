/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170440
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned int i_2 = 3; i_2 < 14; i_2 += 2) 
            {
                {
                    var_10 &= ((/* implicit */signed char) max((arr_3 [i_2 + 3]), (min((((/* implicit */long long int) (unsigned char)182)), (arr_3 [i_2 + 3])))));
                    var_11 = ((/* implicit */long long int) min((max((arr_7 [i_0 - 1]), (arr_7 [i_0 - 1]))), (((((/* implicit */int) var_8)) > (((/* implicit */int) var_0))))));
                }
            } 
        } 
        arr_8 [(unsigned short)9] = ((/* implicit */signed char) ((int) min((arr_3 [i_0 - 1]), (((/* implicit */long long int) -344755384)))));
        var_12 = ((/* implicit */unsigned long long int) max((var_12), ((((!(((/* implicit */_Bool) (-(((/* implicit */int) var_9))))))) ? ((+(arr_4 [i_0 - 1] [i_0 - 1] [i_0 - 1]))) : (max((arr_4 [i_0 - 1] [i_0 - 1] [i_0 - 1]), (15964353945994633052ULL)))))));
    }
    for (unsigned long long int i_3 = 2; i_3 < 14; i_3 += 3) 
    {
        var_13 = ((/* implicit */long long int) arr_9 [(short)4]);
        /* LoopSeq 2 */
        for (int i_4 = 0; i_4 < 17; i_4 += 1) 
        {
            var_14 = ((/* implicit */_Bool) max((var_14), ((!((!((!(((/* implicit */_Bool) var_1))))))))));
            var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_15 [i_3])) ? (((/* implicit */long long int) var_6)) : (-4479826725884390834LL))), (((/* implicit */long long int) ((short) (_Bool)1))))))));
            arr_16 [i_4] [i_4] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) 4294967270U)), (max((((((/* implicit */_Bool) 625893504639439817ULL)) ? (((/* implicit */long long int) var_6)) : (9223372036854775792LL))), (((/* implicit */long long int) (+(((/* implicit */int) var_3)))))))));
        }
        for (int i_5 = 3; i_5 < 15; i_5 += 1) 
        {
            var_16 *= ((/* implicit */unsigned char) (+(((/* implicit */int) var_8))));
            arr_19 [i_3 - 1] [10ULL] [i_3] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) min((((/* implicit */signed char) var_3)), (var_7)))) ? (arr_3 [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) : (((/* implicit */long long int) arr_12 [i_3] [i_5]))));
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 15; i_6 += 1) 
            {
                for (unsigned short i_7 = 3; i_7 < 16; i_7 += 4) 
                {
                    {
                        var_17 = ((/* implicit */signed char) var_2);
                        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_13 [i_3] [i_3]))))), (var_7)))) ? ((~(((/* implicit */int) ((unsigned short) arr_0 [6ULL]))))) : (((/* implicit */int) var_5))));
                    }
                } 
            } 
        }
    }
    var_19 = ((/* implicit */int) var_7);
    var_20 = ((/* implicit */signed char) var_6);
}

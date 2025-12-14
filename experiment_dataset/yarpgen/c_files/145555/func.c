/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145555
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
    var_14 = ((/* implicit */unsigned short) -146343059);
    var_15 = ((((/* implicit */long long int) ((/* implicit */int) ((short) max((-146343048), (-146343059)))))) != ((((_Bool)1) ? (((/* implicit */long long int) min((146343058), (-146343059)))) : (min((var_13), (((/* implicit */long long int) -146343058)))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            var_16 = ((/* implicit */unsigned int) (+(16119009871755190286ULL)));
            arr_6 [i_0] [i_0] = ((((/* implicit */_Bool) ((long long int) ((2327734201954361330ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_9) / (((/* implicit */int) (short)-32760))))) ? (2701777623U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 146343058)) && (((/* implicit */_Bool) 320806779726104564ULL))))))))));
        }
        var_17 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) var_5)) ? (var_3) : (((/* implicit */int) arr_2 [i_0])))));
        /* LoopNest 3 */
        for (long long int i_2 = 3; i_2 < 18; i_2 += 3) 
        {
            for (int i_3 = 3; i_3 < 21; i_3 += 4) 
            {
                for (unsigned short i_4 = 4; i_4 < 20; i_4 += 1) 
                {
                    {
                        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((1593189672U) ^ (((/* implicit */unsigned int) -146343059))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_11 [i_4]) * (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))))) : (((/* implicit */int) (unsigned short)48062))));
                        arr_16 [i_4] [i_4 - 3] [i_3] [i_2] [16U] [i_4] = ((/* implicit */unsigned long long int) (unsigned short)64509);
                        arr_17 [i_0] [14U] [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)511))))) != (((((/* implicit */_Bool) ((((/* implicit */int) var_6)) * (((/* implicit */int) (unsigned short)48069))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_2] [4LL])))))) : (var_5)))));
                        var_19 = ((/* implicit */_Bool) 146343059);
                        var_20 = ((/* implicit */int) ((1593189672U) * (((/* implicit */unsigned int) -146343066))));
                    }
                } 
            } 
        } 
    }
    for (int i_5 = 3; i_5 < 10; i_5 += 1) 
    {
        var_21 = ((/* implicit */unsigned long long int) arr_10 [i_5] [i_5]);
        arr_20 [i_5] = ((/* implicit */long long int) arr_15 [i_5] [(_Bool)1]);
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 2327734201954361323ULL)) ? (-146343072) : (((/* implicit */int) (unsigned short)17485)))) / (((146343087) ^ (((/* implicit */int) var_1))))))) ? (arr_15 [i_5 - 1] [i_5 - 3]) : (((/* implicit */unsigned long long int) (-(max((((/* implicit */long long int) var_1)), ((-9223372036854775807LL - 1LL)))))))));
        var_23 = arr_18 [i_5] [i_5];
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139458
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
    var_16 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) 3493780622342712481LL))))), (var_9)))) ? (((int) 0ULL)) : (min((var_11), (((((/* implicit */_Bool) 668344319)) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) (short)28044))))))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_3] [i_2] [i_0 - 1] [i_0])) ? (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0 + 2] [i_0])) : (15472107937774669467ULL)));
                        /* LoopSeq 2 */
                        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            arr_12 [i_4] = ((/* implicit */signed char) ((15911076729261207848ULL) + (((/* implicit */unsigned long long int) 1387569181U))));
                            var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_0 - 3] [i_0 - 1])) >= (((/* implicit */int) arr_4 [i_0 - 1] [i_0 + 1])))))));
                            arr_13 [i_0] [i_1] [i_4] = ((/* implicit */long long int) ((var_5) ? (((/* implicit */unsigned int) var_1)) : (arr_0 [i_2])));
                            arr_14 [i_4] [i_4] = var_0;
                        }
                        for (long long int i_5 = 0; i_5 < 12; i_5 += 3) 
                        {
                            var_19 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0] [i_1] [i_2] [i_3] [i_5]))) % (arr_0 [i_0 - 1])));
                            var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (~(((/* implicit */int) arr_4 [i_0] [i_0 + 2])))))));
                            var_21 = ((/* implicit */long long int) 3240628205U);
                            arr_19 [i_5] [i_3] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) 5895849109625139933LL)) ? (((/* implicit */unsigned long long int) arr_0 [i_5])) : (1125865547104256ULL)))));
                        }
                    }
                    for (long long int i_6 = 0; i_6 < 12; i_6 += 2) 
                    {
                        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-24965)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)-24965))))) ? (var_9) : (((/* implicit */int) arr_18 [i_0] [i_0] [i_2] [i_6] [i_2])))) > (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65523))))))))));
                        arr_24 [i_6] [i_1] [i_0] = ((/* implicit */signed char) arr_4 [i_1] [(_Bool)1]);
                        var_23 = ((/* implicit */unsigned long long int) 1716467161U);
                    }
                    var_24 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((4807270304316333284LL) % (((/* implicit */long long int) (~(-1463697639))))))) ? (max((max((((/* implicit */long long int) (_Bool)1)), (arr_6 [i_2] [i_2] [i_1] [i_0]))), (((((/* implicit */_Bool) (signed char)-6)) ? (((/* implicit */long long int) 683495608)) : (-5895849109625139933LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 2307397755U)) ? (arr_0 [i_0 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)94))))))));
                    var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 997904918U))))))))));
                    arr_25 [1U] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 997904894U)) ? (3557255520101362144ULL) : (((/* implicit */unsigned long long int) arr_7 [i_2] [i_1] [i_2] [i_0]))));
                }
                for (int i_7 = 0; i_7 < 12; i_7 += 2) 
                {
                    var_26 *= ((/* implicit */short) ((unsigned long long int) arr_11 [i_0] [i_0 - 1] [i_1] [i_7] [i_7] [i_7] [(unsigned char)3]));
                    var_27 = (~(((long long int) var_1)));
                }
                var_28 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_20 [i_0] [i_0] [i_0 + 2]))))) ? (((/* implicit */int) (short)-24976)) : (((var_11) / (((/* implicit */int) (short)-20228))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_21 [i_0] [i_1] [i_0]), (((/* implicit */unsigned short) arr_27 [i_1]))))) ? (((/* implicit */long long int) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0 + 2])) : (((((/* implicit */long long int) ((/* implicit */int) arr_23 [i_0 - 3] [i_0]))) - (-5895849109625139935LL)))))) : (((((/* implicit */_Bool) (signed char)-2)) ? (13752967028406905771ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24965)))))));
                arr_28 [i_0] = ((/* implicit */unsigned int) min((((/* implicit */int) arr_1 [i_0 + 2])), (550908847)));
            }
        } 
    } 
}

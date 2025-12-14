/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16494
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
    var_13 = ((/* implicit */int) min((var_0), ((short)32764)));
    var_14 = ((/* implicit */unsigned long long int) var_10);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] = ((((/* implicit */_Bool) min(((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_11))), (((/* implicit */unsigned int) var_6))))) && (((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) 1280639837)) > (1845821799204698676ULL))) ? (((/* implicit */unsigned long long int) min((35184372088831LL), (((/* implicit */long long int) var_8))))) : (min((7994322416918279070ULL), (((/* implicit */unsigned long long int) var_1))))))));
                /* LoopSeq 2 */
                for (unsigned short i_2 = 1; i_2 < 21; i_2 += 3) 
                {
                    arr_9 [i_2] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0)))), (((/* implicit */int) ((((/* implicit */unsigned long long int) 6890097046802341012LL)) <= (7994322416918279062ULL))))))), (((((/* implicit */_Bool) -2974764650881080538LL)) ? (((/* implicit */unsigned long long int) var_11)) : (min((1845821799204698676ULL), (((/* implicit */unsigned long long int) var_9))))))));
                    var_15 = min((((/* implicit */unsigned int) (short)-15622)), ((+(max((((/* implicit */unsigned int) (short)-32764)), (3732918240U))))));
                    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) -794805328))) ? (min((var_5), (((/* implicit */long long int) var_0)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_7))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 19; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2 + 1] [i_0] [i_4] [i_4] [i_0] = ((/* implicit */short) min((((7994322416918279070ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_2)))))), (((/* implicit */unsigned long long int) (_Bool)1))));
                                arr_15 [i_4] [i_3] [i_3] [(_Bool)1] [i_1] [20ULL] = ((/* implicit */signed char) (+(((2974764650881080546LL) & (((/* implicit */long long int) ((/* implicit */int) ((short) -537096719229656935LL))))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (short i_5 = 0; i_5 < 22; i_5 += 3) 
                {
                    var_17 = ((/* implicit */_Bool) ((var_8) ? (((115943749833299388LL) << (((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) var_0)) ? (411710059349030840LL) : (((/* implicit */long long int) var_11))))));
                    arr_18 [i_0] [i_0] [i_5] = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)62801))))) : (((/* implicit */int) (unsigned short)62789))));
                    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)48135)) ? (((/* implicit */int) (unsigned short)62801)) : (((/* implicit */int) (unsigned char)255))))) ? (((unsigned long long int) var_3)) : (((/* implicit */unsigned long long int) var_7))));
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_6 = 0; i_6 < 21; i_6 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_7 = 1; i_7 < 17; i_7 += 1) 
        {
            arr_26 [i_6] [i_6] = ((((/* implicit */_Bool) (-(((((/* implicit */long long int) var_4)) & (4301776224212811559LL)))))) ? (((/* implicit */long long int) ((((/* implicit */int) (signed char)71)) & (((/* implicit */int) var_1))))) : (min((((/* implicit */long long int) ((unsigned short) var_0))), (((var_8) ? (-5098348877602000760LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)46))))))));
            arr_27 [i_6] [i_6] [i_7] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) max((9223372036854775807LL), (((/* implicit */long long int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)244))) : ((((_Bool)1) ? (-5661387617040651544LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)3))))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)0)), (var_3)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 16351504605560200606ULL)) ? (((/* implicit */int) var_2)) : (-1280639837)))) : (((((/* implicit */_Bool) -1280639831)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (-5661387617040651544LL)))))));
            var_19 = ((/* implicit */long long int) max((var_19), ((~(((((/* implicit */_Bool) var_6)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))))));
            var_20 = ((/* implicit */_Bool) max((2894094722U), (((/* implicit */unsigned int) (_Bool)0))));
        }
        for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 1) 
        {
            var_21 = ((/* implicit */int) ((((_Bool) var_10)) ? (min((((((/* implicit */_Bool) (signed char)-56)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_10))))), (((/* implicit */long long int) var_11)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((0ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-53)))))) ? (((/* implicit */int) (signed char)-53)) : (((/* implicit */int) max(((unsigned short)56048), (((/* implicit */unsigned short) (unsigned char)167))))))))));
            arr_32 [i_6] = ((/* implicit */unsigned long long int) min((((/* implicit */short) (signed char)46)), ((short)-15110)));
        }
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min((1280639836), (((/* implicit */int) (_Bool)1))))) & (min((16769240949815647345ULL), (18446744073709551615ULL)))));
    }
}

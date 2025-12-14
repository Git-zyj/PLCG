/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148949
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        arr_2 [i_0] [i_0 + 1] &= ((unsigned short) max((arr_0 [i_0 - 1]), (arr_0 [i_0 + 1])));
        var_19 = ((/* implicit */int) ((((((/* implicit */_Bool) (short)-19311)) ? (-5000195735640941515LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)39345))))) ^ (max((((/* implicit */long long int) var_1)), (((((/* implicit */_Bool) arr_1 [(_Bool)1] [i_0])) ? (-3243420827811460079LL) : (((/* implicit */long long int) var_5))))))));
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((int) (((-(231254527))) / (((/* implicit */int) var_15))))))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 3) 
    {
        for (long long int i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                {
                    var_21 = 13110062988289431394ULL;
                    var_22 = ((/* implicit */unsigned char) max((13110062988289431394ULL), (((unsigned long long int) ((6200372582663806372ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)85))))))));
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 231254527)) > (((arr_3 [i_1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2]))) : (12246371491045745244ULL)))));
                }
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                {
                    var_24 = ((/* implicit */unsigned long long int) arr_5 [i_4]);
                    arr_12 [i_1] [i_4] [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((((/* implicit */_Bool) 5336681085420120229ULL)) || (((/* implicit */_Bool) var_13))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_18)) != (((/* implicit */int) var_4)))))) > (((unsigned long long int) -1LL)))))));
                    arr_13 [i_4] [i_4] [i_2] [i_4] = ((/* implicit */long long int) min((min((134217727ULL), (((/* implicit */unsigned long long int) arr_4 [i_2])))), (((/* implicit */unsigned long long int) min((958241943U), (((/* implicit */unsigned int) (~(-231254538)))))))));
                }
                /* LoopSeq 1 */
                for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 4) 
                {
                    var_25 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_0))))) > (((/* implicit */int) ((short) arr_9 [i_1] [i_2] [(unsigned short)2] [i_2]))))) ? (((((/* implicit */_Bool) arr_11 [i_1] [i_2] [i_5] [i_5])) ? (8866243080366663788LL) : (((/* implicit */long long int) arr_11 [i_1] [i_2] [i_5] [i_5])))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_4 [i_5]) < (((/* implicit */long long int) arr_9 [i_1] [i_2] [i_2] [i_5]))))))));
                    arr_16 [i_2] = ((/* implicit */long long int) var_15);
                    arr_17 [9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -231254527)) || (((/* implicit */_Bool) arr_1 [i_2] [i_2]))));
                }
                arr_18 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2])) ? (var_12) : (((/* implicit */long long int) ((arr_11 [(_Bool)1] [i_1] [(unsigned short)5] [i_2]) + (((/* implicit */int) arr_7 [i_1] [i_1] [i_2])))))))) ? (((/* implicit */int) ((unsigned char) 5997431494343591728ULL))) : (((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) >= (var_0)))) & (((((/* implicit */_Bool) 12449312579365959887ULL)) ? (((/* implicit */int) (unsigned char)31)) : (((/* implicit */int) arr_14 [i_1]))))))));
            }
        } 
    } 
}

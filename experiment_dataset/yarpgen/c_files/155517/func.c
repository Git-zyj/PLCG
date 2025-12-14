/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155517
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */int) var_6)) << (((/* implicit */int) var_10))))), (min((-1499800594929850992LL), (-1499800594929850990LL)))))), (((((/* implicit */_Bool) max((((/* implicit */long long int) 2936222627U)), (-5244327628129448485LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [(signed char)12] [i_1] [(signed char)12])) ? (2652839699322408635LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2])))))) : (var_9))))))));
                    var_15 ^= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_5 [(short)22])) ? (arr_5 [10U]) : (arr_5 [(signed char)20]))) & (((((/* implicit */_Bool) arr_1 [(signed char)4])) ? (arr_1 [20ULL]) : (arr_1 [(short)8])))));
                    var_16 = ((/* implicit */unsigned short) arr_2 [i_0] [i_1]);
                }
            } 
        } 
    } 
    var_17 -= ((/* implicit */unsigned long long int) 1499800594929851003LL);
    /* LoopNest 2 */
    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 1) 
    {
        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 3) 
        {
            {
                var_18 ^= -1499800594929850992LL;
                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? ((-(((((/* implicit */_Bool) arr_11 [13LL])) ? (((/* implicit */long long int) var_13)) : (var_11))))) : ((-(max((arr_0 [19LL] [i_4]), (arr_9 [i_3])))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 3) 
                {
                    var_20 = ((/* implicit */unsigned long long int) max((((unsigned int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)0))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 0ULL)) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_3]))))))))));
                    var_21 = ((/* implicit */unsigned int) max((min((-8751256625659346167LL), (((/* implicit */long long int) (+(3859466425U)))))), (((/* implicit */long long int) var_10))));
                    arr_15 [i_5] [5LL] [i_4] [i_5] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_5 [i_5])))) ? (((/* implicit */unsigned long long int) (+(2652839699322408643LL)))) : (13837184360323101376ULL)));
                }
                arr_16 [i_3] [i_3] [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max(((signed char)73), ((signed char)-61)))), (((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) * (0ULL))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */short) (signed char)-5);
}

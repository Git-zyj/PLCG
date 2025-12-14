/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160810
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
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) 1125899906842623LL)))))) - (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) 3621857671U)) : (12127369449648524284ULL)))))) ? (arr_4 [i_0] [10U] [i_1]) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1448344993)) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (var_9)))) ? ((-(arr_4 [i_0] [i_1] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 673109624U)) || (((/* implicit */_Bool) var_8))))))))));
                arr_5 [i_1] = ((/* implicit */long long int) (~((-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (673109625U)))))));
                var_18 -= ((/* implicit */short) (((!(((/* implicit */_Bool) arr_0 [i_1])))) ? (18446744073709551595ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((arr_0 [i_1]), (((/* implicit */unsigned long long int) 3621857671U))))) || (((((/* implicit */_Bool) arr_4 [i_1] [i_0] [i_0])) || (((/* implicit */_Bool) arr_0 [i_0]))))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    arr_8 [i_0] = ((/* implicit */unsigned long long int) (-(((int) var_12))));
                    arr_9 [i_1] [i_1] |= ((((/* implicit */_Bool) ((unsigned long long int) 487201091U))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) var_14)) : (arr_7 [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3621857670U)) ? (-7630022334865963255LL) : (((/* implicit */long long int) 673109626U))))));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_3 = 1; i_3 < 17; i_3 += 3) 
                {
                    var_19 = ((/* implicit */int) ((((((/* implicit */_Bool) 2097151U)) ? (673109625U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) % (2147483648U)));
                    arr_12 [i_1] [i_3] [i_0] [i_0] = ((/* implicit */long long int) arr_2 [i_0 + 1]);
                    var_20 -= ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-20607))) == (17412168024108436307ULL))))));
                }
            }
        } 
    } 
    var_21 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 20ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) 228674337U)) != (var_14))))) : ((+(2109431650U)))))) ? (((((/* implicit */_Bool) -21104452)) ? (17412168024108436305ULL) : (18446744073709551593ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
    var_22 &= ((/* implicit */long long int) ((((unsigned int) min((21ULL), (11084849526163557781ULL)))) == (((/* implicit */unsigned int) max(((+(((/* implicit */int) var_15)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))))));
}

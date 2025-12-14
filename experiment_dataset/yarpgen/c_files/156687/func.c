/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156687
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
    for (long long int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 1]))) | (13835058055282163712ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_0 [(signed char)17] [i_0])) ? (((/* implicit */long long int) var_7)) : (-8212516441873878647LL))))))));
        var_14 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((arr_0 [i_0 - 1] [i_0 + 1]) + (arr_0 [i_0 - 1] [i_0 - 1])))), (((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 1]))) : (var_12)))));
        var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */long long int) min((var_7), (((/* implicit */int) (short)-24907))))) : (-7705412805283629900LL)))) ? (15460806393369755155ULL) : (((1596629208535817579ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 1]))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 16; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_16 ^= ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_14 [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0 + 1])) - (arr_12 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 - 1])))) ? (((((/* implicit */_Bool) arr_11 [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)19022))) : (16850114865173734036ULL))) : (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */unsigned long long int) var_7)) / (var_1))))));
                                arr_16 [i_0 + 1] [i_1] [i_1] [i_1] [i_4] = ((/* implicit */_Bool) 7705412805283629899LL);
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_3 [i_1] [i_1] [i_2])), (13835058055282163712ULL)));
                    var_18 = ((((/* implicit */long long int) (-(((/* implicit */int) var_10))))) + (((long long int) (signed char)75)));
                    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_2 - 3])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1] [i_0 + 1] [i_2 - 3])) ? (arr_9 [17] [(signed char)15] [i_2 - 3]) : (((/* implicit */int) var_8))))) : (((long long int) arr_9 [i_2] [12] [i_2 - 2]))));
                }
            } 
        } 
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_20 [i_5] = ((/* implicit */int) 16850114865173734036ULL);
        var_20 ^= ((/* implicit */short) (~((((_Bool)1) ? (arr_12 [i_5] [i_5] [i_5] [i_5]) : (((/* implicit */unsigned long long int) var_7))))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 1) 
    {
        for (signed char i_7 = 0; i_7 < 23; i_7 += 2) 
        {
            {
                arr_27 [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 1784108423505570439ULL)) || (((/* implicit */_Bool) arr_23 [i_7])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) : (arr_23 [i_6])))) ? (((((/* implicit */_Bool) arr_22 [i_6])) ? (-5826816619993471645LL) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_6]))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_13))))) || (((/* implicit */_Bool) arr_21 [i_7]))))))));
                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_7])) ? (((/* implicit */int) arr_25 [i_6])) : (((/* implicit */int) arr_25 [i_6]))))) ? ((-(((/* implicit */int) var_11)))) : ((-(((/* implicit */int) arr_25 [i_6])))))))));
            }
        } 
    } 
    var_22 = var_1;
    var_23 = ((/* implicit */signed char) ((_Bool) var_4));
    var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) (((-(((13835058055282163723ULL) - (((/* implicit */unsigned long long int) var_7)))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))));
}

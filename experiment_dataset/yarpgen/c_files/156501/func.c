/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156501
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
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) var_2)), ((~(((/* implicit */int) var_13))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : ((~(var_1)))));
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_15)))) ? (max((((/* implicit */unsigned long long int) var_3)), (var_7))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_0)), (var_1)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(12148712098131464286ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1))))) : (var_3))))));
    var_20 = ((/* implicit */long long int) ((var_4) / (((/* implicit */int) ((min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (_Bool)1)))) < (((/* implicit */long long int) ((((/* implicit */int) var_2)) << (((/* implicit */int) (_Bool)1))))))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_21 += var_9;
        arr_2 [i_0] = ((/* implicit */int) ((300365386138109281ULL) >> (((((/* implicit */int) (signed char)107)) - (92)))));
        arr_3 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (1707622744) : (((/* implicit */int) var_10))))), (var_1))))));
    }
    for (signed char i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */long long int) ((short) var_15));
        arr_7 [i_1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((max((var_11), (((/* implicit */long long int) arr_0 [i_1])))) / (((/* implicit */long long int) (-(((/* implicit */int) var_12)))))))), (((((/* implicit */_Bool) (signed char)36)) ? (((/* implicit */unsigned long long int) ((var_1) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) : (((((/* implicit */_Bool) arr_0 [i_1])) ? (12836534675479004250ULL) : (((/* implicit */unsigned long long int) 1707622744))))))));
    }
    for (short i_2 = 1; i_2 < 10; i_2 += 2) 
    {
        var_22 |= ((/* implicit */unsigned long long int) (((+(((/* implicit */int) ((signed char) 1707622721))))) - (((/* implicit */int) ((2305843009146585088ULL) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2] [i_2]))) : (var_11)))))))));
        var_23 = ((/* implicit */long long int) (~(((/* implicit */int) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2]))) : (var_7))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-106))))))));
        var_24 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) / (max((((/* implicit */unsigned long long int) var_11)), (300365386138109279ULL))))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_3 = 2; i_3 < 12; i_3 += 4) 
    {
        for (int i_4 = 0; i_4 < 13; i_4 += 4) 
        {
            for (short i_5 = 0; i_5 < 13; i_5 += 2) 
            {
                {
                    var_25 += ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_16))))) ? (((((var_4) + (2147483647))) >> (((((/* implicit */int) arr_1 [i_3] [i_5])) - (177))))) : (((/* implicit */int) ((_Bool) var_17))))));
                    arr_18 [i_3] [i_4] [i_5] = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))));
                    arr_19 [i_3] [i_3] [2ULL] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)44)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 281474975662080ULL)))) : (5967372091527972361LL)));
                    arr_20 [i_3] [i_4] [i_3] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_17)) < (((/* implicit */int) arr_0 [i_5])))) ? (((((/* implicit */int) arr_17 [i_3] [i_4] [i_5])) % (1133611858))) : (((int) var_11))));
                }
            } 
        } 
    } 
}

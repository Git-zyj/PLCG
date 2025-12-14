/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157365
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
    var_14 = ((/* implicit */long long int) var_9);
    var_15 = ((/* implicit */int) var_5);
    var_16 = ((/* implicit */long long int) min((((/* implicit */int) (unsigned short)33906)), (1533931183)));
    var_17 = ((/* implicit */unsigned long long int) var_1);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((4299665527865748602ULL) * (((/* implicit */unsigned long long int) ((((arr_2 [i_0]) ? (((/* implicit */int) (unsigned char)0)) : (1533931183))) >> (((((/* implicit */int) ((unsigned char) -1533931183))) - (61))))))));
        var_18 = ((/* implicit */long long int) var_6);
        arr_4 [i_0] = ((/* implicit */short) 1551274954793289426ULL);
    }
    for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        var_19 = ((/* implicit */unsigned char) min((min((arr_5 [i_1] [i_1]), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) >> (((-1533931184) + (1533931215)))))))), (((1551274954793289426ULL) >> (((8182705993236416491ULL) - (8182705993236416445ULL)))))));
        arr_7 [i_1] = ((/* implicit */unsigned char) arr_5 [i_1] [i_1]);
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            var_20 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)169)) ? (((/* implicit */int) (unsigned char)79)) : (((/* implicit */int) (unsigned char)96))))) ? (6ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-12)))));
            arr_10 [i_2] = ((/* implicit */signed char) min((((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_3)), (1835008U)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))), (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_9 [i_1])), (18446744073709551610ULL)))))))));
        }
        /* vectorizable */
        for (unsigned short i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 1) 
            {
                var_21 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) -1533931184)) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)24))) ^ (3739579803U)))) : (arr_11 [i_4] [i_3] [i_1])));
                arr_16 [i_1] [(unsigned char)5] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)14)) ? (((/* implicit */int) (unsigned short)16832)) : (((/* implicit */int) (short)12996))))) ? ((-2147483647 - 1)) : (((1587611970) / (var_12)))));
                arr_17 [i_3] [(_Bool)1] [i_3] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [10U] [i_4])) ? (576460683583946752LL) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_4])))));
            }
            var_22 = ((/* implicit */unsigned char) ((12775455205442858318ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)101)))));
        }
    }
    for (signed char i_5 = 0; i_5 < 22; i_5 += 2) 
    {
        arr_20 [i_5] = ((/* implicit */short) arr_19 [i_5]);
        arr_21 [i_5] [12] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_5))) * (((((/* implicit */long long int) ((/* implicit */int) (signed char)3))) / (-8237059941305229111LL)))));
        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((8908471693459633669ULL) ^ (1551274954793289432ULL)))) ? (((/* implicit */int) ((arr_19 [i_5]) != (var_0)))) : (((/* implicit */int) arr_18 [i_5] [(signed char)17]))));
        var_24 = ((/* implicit */signed char) (unsigned char)235);
    }
}

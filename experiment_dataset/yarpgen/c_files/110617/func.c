/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110617
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
    var_19 = ((/* implicit */unsigned short) (+((~(var_12)))));
    /* LoopSeq 4 */
    for (int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0])) <= (max((((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (var_9)))), (min((((/* implicit */int) (short)-26499)), (arr_0 [i_0] [i_0])))))));
        var_21 = ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) max((var_8), (var_4))))))) % ((+((+(((/* implicit */int) var_6)))))));
        /* LoopSeq 1 */
        for (long long int i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_2 [i_0])) ? (max((var_12), (((/* implicit */unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 - 1]))))))));
            var_23 |= ((/* implicit */unsigned long long int) ((short) (signed char)53));
        }
    }
    for (long long int i_2 = 2; i_2 < 12; i_2 += 1) 
    {
        var_24 = min((((min((((/* implicit */unsigned long long int) arr_0 [7U] [i_2])), (var_18))) % (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) & (-4)))))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_8)) * (((/* implicit */int) (unsigned char)38)))) - (((((/* implicit */int) (unsigned char)29)) * (((/* implicit */int) (_Bool)1))))))));
        var_25 ^= var_6;
        var_26 = var_10;
    }
    for (unsigned char i_3 = 2; i_3 < 14; i_3 += 3) /* same iter space */
    {
        var_27 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3)) ? (((/* implicit */int) arr_8 [i_3 - 2] [i_3 - 2])) : (((/* implicit */int) arr_4 [i_3 - 1])))))));
        var_28 = ((/* implicit */unsigned char) arr_2 [i_3 - 2]);
        /* LoopSeq 1 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_29 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_3 - 2] [5U] [i_3 - 1])) == (((((/* implicit */int) max((var_11), (((/* implicit */short) (unsigned char)227))))) % (((((/* implicit */_Bool) arr_0 [i_3 - 2] [i_3])) ? (4) : (((/* implicit */int) (short)11487))))))));
            var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 3)) ? (var_13) : (var_3)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)252))) : (-5642951959141523891LL)))) ? (((/* implicit */int) arr_3 [16ULL])) : (((/* implicit */int) var_16))))) : (((((_Bool) var_16)) ? ((+(var_17))) : (16488859120045446347ULL))))))));
        }
    }
    for (unsigned char i_5 = 2; i_5 < 14; i_5 += 3) /* same iter space */
    {
        var_31 = ((/* implicit */short) (+((+((+(3396659657U)))))));
        var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) arr_2 [i_5])), (((((/* implicit */int) arr_4 [i_5])) >> (((/* implicit */int) arr_11 [i_5 - 1]))))))) ? (((((/* implicit */int) ((var_18) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_5 + 1] [i_5] [i_5])))))) << ((((+(var_3))) + (174050763))))) : (((((((/* implicit */_Bool) var_6)) ? (var_10) : (((/* implicit */int) arr_10 [i_5])))) - (max((arr_0 [i_5] [i_5]), (5)))))));
    }
}

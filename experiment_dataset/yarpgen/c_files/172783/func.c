/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172783
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
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_19 |= ((/* implicit */_Bool) max((((max((arr_3 [i_0] [i_1] [i_0]), (((/* implicit */int) arr_2 [6LL] [i_1])))) / (((/* implicit */int) ((unsigned short) arr_3 [i_0] [i_0] [i_0]))))), (min((arr_1 [i_1]), ((+(((/* implicit */int) (unsigned short)17))))))));
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((arr_3 [i_0] [(short)11] [i_0]) / (arr_3 [i_0] [i_1] [i_1]))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_17)), (3848290697216ULL)))) ? (((/* implicit */int) (unsigned short)13)) : (((/* implicit */int) arr_4 [i_1] [i_1]))))));
                arr_6 [i_1] |= ((/* implicit */int) max((((/* implicit */unsigned long long int) var_6)), (((((/* implicit */_Bool) (short)14073)) ? (min((arr_5 [i_0] [i_1] [i_1]), (((/* implicit */unsigned long long int) arr_0 [i_1])))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))) : (arr_5 [i_1] [i_1] [i_0])))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_2 = 3; i_2 < 22; i_2 += 4) 
    {
        /* LoopSeq 3 */
        for (signed char i_3 = 0; i_3 < 24; i_3 += 2) 
        {
            arr_14 [i_3] = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_11 [i_2] [i_2 - 1] [i_3])) ? (((/* implicit */int) arr_12 [i_2])) : (((/* implicit */int) arr_12 [i_2])))));
            var_21 -= ((/* implicit */unsigned short) (~(((int) ((((/* implicit */int) var_16)) % (((/* implicit */int) var_11)))))));
        }
        for (unsigned short i_4 = 2; i_4 < 21; i_4 += 4) 
        {
            var_22 -= ((/* implicit */short) arr_15 [i_4 + 3] [i_2]);
            var_23 = ((_Bool) (((~(4192746540661139011ULL))) + (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_16))) / (arr_18 [i_2] [i_2] [i_4 + 3]))))));
            arr_19 [i_4] [i_4 + 3] [i_2] = ((/* implicit */signed char) arr_10 [i_4] [(unsigned short)9]);
        }
        /* vectorizable */
        for (short i_5 = 3; i_5 < 21; i_5 += 1) 
        {
            var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_5 + 3]))));
            var_25 *= ((/* implicit */unsigned short) ((signed char) ((arr_9 [i_2 - 1] [i_2 - 1]) ? (((/* implicit */int) (short)6144)) : (((/* implicit */int) var_2)))));
            var_26 = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)74)))))));
            arr_22 [(signed char)1] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_11 [i_2] [i_5] [i_5])) < (((/* implicit */int) arr_7 [i_5]))))) >> (((((/* implicit */int) arr_17 [i_5 + 3] [i_5] [i_5])) - (51)))));
            var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((14253997533048412576ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3984))))))));
        }
        var_28 = arr_10 [i_2 - 3] [i_2 - 2];
    }
    for (long long int i_6 = 1; i_6 < 9; i_6 += 3) 
    {
        var_29 = ((/* implicit */_Bool) arr_21 [2] [2]);
        arr_25 [i_6] = ((/* implicit */int) ((unsigned char) (-(arr_10 [i_6 + 1] [i_6 - 1]))));
        var_30 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) arr_18 [i_6] [i_6] [i_6]))))))) % (((arr_5 [(signed char)18] [2] [i_6 - 1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
        arr_26 [i_6] [i_6] = ((/* implicit */unsigned char) (+(((((/* implicit */long long int) arr_13 [i_6 - 1] [i_6] [i_6])) ^ (var_0)))));
    }
}

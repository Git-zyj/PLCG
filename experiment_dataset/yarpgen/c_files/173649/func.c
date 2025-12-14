/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173649
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
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_0)))) ? (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (arr_0 [i_0 + 1]))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-14)) + (2147483647))) >> (((/* implicit */int) (_Bool)1)))))))) ? (max((((((/* implicit */_Bool) 771955060963869336LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_0 [i_0 + 1]))), (((/* implicit */unsigned long long int) ((unsigned int) (signed char)96))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned long long int) -1156559958)) : (1930873696970262501ULL)))) ? (((/* implicit */int) arr_1 [i_0 - 1] [i_0])) : ((+(((/* implicit */int) (unsigned char)225)))))))));
        var_10 *= ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)3)) % (((/* implicit */int) ((unsigned char) var_2)))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            var_11 = ((/* implicit */unsigned char) (+(arr_4 [i_0 + 1] [i_1 - 3])));
            arr_7 [(unsigned short)4] |= ((/* implicit */_Bool) (unsigned char)23);
        }
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_10 [i_0 + 1] [i_2] [i_0] = ((/* implicit */int) arr_8 [i_2]);
            arr_11 [i_0] [i_2] = ((/* implicit */signed char) (-(arr_9 [i_0 - 1] [i_0] [i_0 + 1])));
            var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2] [i_2])) ? (((/* implicit */unsigned long long int) 1162540158)) : (arr_0 [i_2])));
        }
        var_13 -= ((/* implicit */signed char) (~(((((/* implicit */int) (signed char)-93)) - (((((/* implicit */int) (unsigned short)53146)) * (((/* implicit */int) arr_3 [i_0]))))))));
        var_14 -= ((/* implicit */int) (-(((arr_3 [i_0 - 1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 + 1]))) : (var_1)))));
    }
    for (signed char i_3 = 1; i_3 < 10; i_3 += 1) /* same iter space */
    {
        var_15 &= ((/* implicit */int) max((((/* implicit */unsigned char) max((arr_3 [i_3 - 1]), (arr_3 [i_3 + 1])))), (min((arr_14 [0LL]), (arr_14 [4U])))));
        var_16 ^= ((/* implicit */int) arr_13 [i_3 - 1] [(unsigned char)6]);
    }
    for (signed char i_4 = 1; i_4 < 10; i_4 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */_Bool) ((((long long int) arr_15 [i_4])) * (((/* implicit */long long int) ((arr_16 [i_4 - 1]) - (arr_16 [i_4 + 1]))))));
        var_18 |= ((/* implicit */unsigned short) ((unsigned char) (-(1033949435))));
        var_19 = ((/* implicit */unsigned char) arr_6 [i_4 - 1]);
    }
    var_20 = ((/* implicit */short) (unsigned short)16384);
    var_21 = ((/* implicit */signed char) ((var_8) - (((/* implicit */long long int) max((max((var_9), (var_0))), (((/* implicit */int) (signed char)-1)))))));
    /* LoopNest 2 */
    for (long long int i_5 = 0; i_5 < 13; i_5 += 1) 
    {
        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
        {
            {
                var_22 = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((var_3) / (var_9)))) ? (var_2) : (((((/* implicit */int) arr_20 [i_6 + 1] [i_5])) / (((/* implicit */int) (signed char)-51))))))), (max((((/* implicit */long long int) ((((/* implicit */_Bool) 10741645675373742404ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) var_2)) ? (-8311942724780590683LL) : (0LL)))))));
                arr_22 [i_5] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) ((8124292257213928577ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_6 + 1] [i_6])))))) || ((_Bool)1)));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) var_4);
}

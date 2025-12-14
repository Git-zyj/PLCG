/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178005
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
    var_17 = ((_Bool) var_6);
    var_18 = ((/* implicit */_Bool) var_9);
    var_19 = var_6;
    var_20 = ((/* implicit */unsigned short) var_5);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_21 = ((/* implicit */signed char) var_2);
        var_22 *= ((/* implicit */unsigned short) arr_1 [i_0]);
        var_23 += ((/* implicit */signed char) arr_1 [(_Bool)1]);
    }
    for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 2) 
    {
        var_24 += ((/* implicit */signed char) arr_3 [i_1 + 1]);
        var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)39124)) ? (((/* implicit */int) (signed char)-16)) : (((((/* implicit */_Bool) arr_2 [i_1 - 1])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_2 [(unsigned short)16]))))));
        arr_4 [i_1] |= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65530)) ^ (((/* implicit */int) (signed char)-4))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_2 = 1; i_2 < 18; i_2 += 2) 
        {
            arr_7 [i_2] [i_2] = ((/* implicit */unsigned short) arr_5 [i_2]);
            var_26 ^= ((/* implicit */signed char) arr_2 [i_2]);
            var_27 = ((/* implicit */signed char) ((int) ((6271880392893072045LL) + (((/* implicit */long long int) ((/* implicit */int) var_3))))));
        }
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_28 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_6) ? (arr_5 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_3])))))) ? (arr_8 [i_1 + 1]) : (arr_8 [i_1])));
            var_29 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [(short)12])) ? (arr_5 [i_1]) : (((/* implicit */unsigned int) -1805469039))));
            arr_10 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_1 + 1])) > (((/* implicit */int) arr_2 [i_1 + 1]))));
        }
        /* vectorizable */
        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 4) 
        {
            arr_14 [(unsigned char)4] = ((/* implicit */unsigned int) ((unsigned short) arr_11 [12ULL] [(_Bool)1] [i_1 - 2]));
            arr_15 [i_1] [i_1] &= ((/* implicit */signed char) arr_2 [i_1]);
            arr_16 [(_Bool)1] [(signed char)6] [i_4] = ((unsigned char) var_9);
            var_30 = ((/* implicit */signed char) arr_9 [(unsigned char)9] [i_4]);
        }
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 4) 
    {
        var_31 = ((/* implicit */int) arr_11 [i_5] [i_5] [i_5]);
        arr_20 [17ULL] [i_5] = arr_19 [(unsigned char)18] [i_5];
        /* LoopSeq 1 */
        for (int i_6 = 1; i_6 < 18; i_6 += 1) 
        {
            var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) arr_13 [i_5] [i_6 - 1]))));
            var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [14] [i_6 + 1])) ? (((/* implicit */int) arr_19 [i_5] [i_6 - 1])) : (((/* implicit */int) arr_19 [9U] [i_6 + 2]))));
        }
    }
}

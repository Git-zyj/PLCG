/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10556
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) var_11))));
                    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? ((-(((/* implicit */int) arr_5 [i_2] [i_1] [i_2])))) : (((/* implicit */int) ((((/* implicit */_Bool) 11593094229998888721ULL)) && (((/* implicit */_Bool) arr_2 [i_0] [(_Bool)0])))))))) ? (((/* implicit */int) ((unsigned char) min(((unsigned char)86), (var_12))))) : (((/* implicit */int) arr_6 [i_2] [14U] [(_Bool)1]))));
                    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_12))) > (min((arr_4 [i_1] [i_1] [15U]), (((/* implicit */long long int) var_2)))))))));
                    arr_8 [i_2] [i_2] [(signed char)6] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? ((+(7))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (arr_2 [i_0] [i_0])))) : (((/* implicit */int) var_14))))));
                }
            } 
        } 
    } 
    var_18 = ((short) (((!((_Bool)1))) ? (((long long int) var_5)) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 3) 
    {
        var_19 ^= ((/* implicit */unsigned short) var_3);
        arr_13 [i_3] [i_3] = ((/* implicit */unsigned long long int) (unsigned char)232);
        /* LoopSeq 1 */
        for (unsigned int i_4 = 2; i_4 < 8; i_4 += 1) 
        {
            var_20 ^= ((/* implicit */signed char) ((arr_4 [i_3] [i_3] [i_4]) < (((var_9) / (((/* implicit */long long int) ((/* implicit */int) arr_3 [(signed char)0] [i_4 + 2])))))));
            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (_Bool)1))));
        }
        var_22 = ((((/* implicit */_Bool) arr_9 [(unsigned char)9])) ? (((/* implicit */int) arr_16 [i_3])) : (((/* implicit */int) arr_7 [i_3])));
        /* LoopNest 3 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (signed char i_6 = 0; i_6 < 12; i_6 += 2) 
            {
                for (unsigned char i_7 = 2; i_7 < 11; i_7 += 4) 
                {
                    {
                        arr_28 [i_3] = arr_0 [17];
                        arr_29 [i_3] [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) var_12);
                        var_23 = ((/* implicit */int) arr_19 [i_3] [i_5]);
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_8 = 0; i_8 < 25; i_8 += 4) 
    {
        var_24 |= ((/* implicit */_Bool) arr_31 [i_8]);
        var_25 *= ((/* implicit */signed char) arr_30 [i_8]);
        var_26 -= ((/* implicit */signed char) ((unsigned short) var_1));
    }
}

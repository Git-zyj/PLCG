/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171728
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
    var_19 |= ((/* implicit */unsigned long long int) var_17);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2446798376224730462ULL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_1 [i_0]) : (arr_2 [i_0])))) : (2446798376224730461ULL)));
        var_21 &= ((/* implicit */unsigned long long int) ((unsigned char) -1150864601));
    }
    for (int i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            var_22 = ((int) (unsigned char)32);
            var_23 = ((/* implicit */signed char) ((((/* implicit */int) var_18)) * (((var_0) ? (((((/* implicit */int) (unsigned char)229)) * (((/* implicit */int) arr_4 [i_1] [i_1])))) : (((/* implicit */int) max((arr_7 [i_1] [i_2]), (arr_7 [i_1] [i_2]))))))));
        }
        for (long long int i_3 = 0; i_3 < 12; i_3 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned char i_4 = 0; i_4 < 12; i_4 += 4) 
            {
                for (int i_5 = 0; i_5 < 12; i_5 += 1) 
                {
                    for (int i_6 = 0; i_6 < 12; i_6 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */_Bool) arr_6 [(unsigned char)7] [i_1]);
                            arr_23 [i_6] [i_5] [i_1] [i_4] [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) var_18)) ? ((-(((/* implicit */int) (signed char)112)))) : (((/* implicit */int) (signed char)112)));
                            var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_4 [i_4] [i_5])) : (((((((/* implicit */_Bool) (signed char)-113)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_5 [i_1] [i_4])))) | (((/* implicit */int) arr_4 [i_1] [i_1]))))));
                        }
                    } 
                } 
            } 
            arr_24 [i_1] = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_15))) | (arr_12 [i_1]))));
        }
        for (long long int i_7 = 0; i_7 < 12; i_7 += 1) /* same iter space */
        {
            var_26 = ((/* implicit */signed char) arr_3 [i_1] [i_7]);
            var_27 = ((/* implicit */int) arr_26 [i_1]);
            var_28 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned char)222)) ? (((((/* implicit */_Bool) (unsigned char)127)) ? (15999945697484821164ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [(signed char)5])))))));
            var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) ((int) var_8)))));
        }
        var_30 = ((/* implicit */unsigned long long int) var_6);
    }
    var_31 = ((/* implicit */unsigned int) var_16);
}

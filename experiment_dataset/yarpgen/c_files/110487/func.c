/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110487
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
    var_18 = ((/* implicit */unsigned long long int) (unsigned char)162);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 9; i_2 += 2) 
            {
                {
                    var_19 -= ((/* implicit */unsigned int) arr_4 [i_2]);
                    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (((+(637022565U))) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1382749266)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_6 [i_1 + 1] [i_1 - 1] [i_1]))))))))));
                    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (~(max((((((/* implicit */_Bool) 7686118327692150987LL)) ? (3657944706U) : (559397956U))), (((/* implicit */unsigned int) arr_8 [i_0] [i_2 + 2] [i_2 - 1])))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned int) ((var_11) > (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)91)))))));
    /* LoopSeq 3 */
    for (signed char i_3 = 0; i_3 < 14; i_3 += 3) /* same iter space */
    {
        var_23 = max((((((/* implicit */int) arr_11 [i_3])) / (((/* implicit */int) arr_11 [i_3])))), (((((/* implicit */_Bool) arr_11 [i_3])) ? (((/* implicit */int) arr_11 [i_3])) : (((/* implicit */int) arr_11 [i_3])))));
        arr_13 [i_3] = ((/* implicit */unsigned int) ((unsigned long long int) max((((/* implicit */long long int) max((((/* implicit */int) arr_9 [i_3])), (var_8)))), (((long long int) var_16)))));
        arr_14 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) arr_12 [i_3])), ((~(((/* implicit */int) arr_11 [i_3]))))))) ? (max((((/* implicit */unsigned long long int) arr_12 [i_3])), (var_5))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_5) - (((/* implicit */unsigned long long int) 1595656710811921673LL))))) ? (((/* implicit */int) arr_9 [i_3])) : (((/* implicit */int) arr_9 [i_3])))))));
    }
    /* vectorizable */
    for (signed char i_4 = 0; i_4 < 14; i_4 += 3) /* same iter space */
    {
        arr_17 [i_4] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 6565662606559044539ULL)) ? (((/* implicit */int) var_7)) : (((var_4) ^ (1790147645)))));
        arr_18 [(unsigned short)5] = ((/* implicit */int) arr_10 [i_4] [i_4]);
    }
    /* vectorizable */
    for (signed char i_5 = 0; i_5 < 14; i_5 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_6 = 2; i_6 < 13; i_6 += 1) 
        {
            var_24 = ((/* implicit */unsigned long long int) var_1);
            var_25 = ((/* implicit */int) ((((/* implicit */long long int) ((var_4) - (((/* implicit */int) arr_22 [i_5] [i_5] [i_6 + 1]))))) == (((((/* implicit */_Bool) var_12)) ? (4565997468818384028LL) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_5])))))));
            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -27)) ? (((/* implicit */int) (signed char)110)) : (((/* implicit */int) (signed char)-53))));
        }
        /* LoopSeq 1 */
        for (long long int i_7 = 2; i_7 < 13; i_7 += 1) 
        {
            var_27 = ((/* implicit */short) arr_26 [i_7 - 1]);
            var_28 = ((/* implicit */int) (~(((unsigned int) 3735569339U))));
        }
        arr_27 [i_5] = 637022589U;
    }
}

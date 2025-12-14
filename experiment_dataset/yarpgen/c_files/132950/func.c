/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132950
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
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            /* LoopSeq 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
            {
                var_19 = ((/* implicit */signed char) min((var_19), (((signed char) ((9146283222097526612ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))))))));
                var_20 = ((/* implicit */unsigned long long int) var_12);
                arr_10 [i_1] [(signed char)15] [i_1] = arr_6 [i_0] [i_0];
                arr_11 [i_1] [i_1] [i_1 - 1] = (!((_Bool)1));
            }
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
            {
                var_21 ^= ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */int) min(((signed char)-35), (((/* implicit */signed char) (_Bool)1))))) <= ((~(((/* implicit */int) (_Bool)1))))))), ((-(((var_2) ? (((/* implicit */int) arr_13 [i_3] [i_1] [i_0])) : (((/* implicit */int) (signed char)126))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 2) 
                {
                    arr_19 [i_0] [(_Bool)1] [i_1] [i_0] &= ((/* implicit */signed char) ((long long int) (_Bool)0));
                    arr_20 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)-13))));
                    var_22 &= ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) var_1)))))));
                    var_23 = ((/* implicit */unsigned short) ((long long int) arr_7 [i_0] [i_1] [i_1 - 1] [i_1 - 1]));
                    /* LoopSeq 1 */
                    for (long long int i_5 = 2; i_5 < 15; i_5 += 4) 
                    {
                        arr_25 [i_0] [i_1] [(unsigned short)12] [i_4] [(unsigned short)12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)23)) ? (((/* implicit */int) arr_18 [i_1 + 1] [12ULL] [i_1] [i_1 + 1])) : (((/* implicit */int) (_Bool)1))));
                        var_24 = ((/* implicit */long long int) (+(1099710925039728525ULL)));
                        var_25 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)-42))));
                    }
                }
            }
            for (signed char i_6 = 0; i_6 < 19; i_6 += 2) 
            {
                var_26 -= ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)11))))) && ((!(((/* implicit */_Bool) arr_24 [i_6] [i_6] [i_6] [i_1 + 1] [8ULL] [i_1 - 1])))));
                var_27 = min(((unsigned short)8191), (var_8));
                var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_26 [i_0] [i_0])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) 0LL))))) : ((-(((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))))))));
                var_29 = ((/* implicit */long long int) (signed char)26);
            }
            var_30 = ((/* implicit */unsigned long long int) (signed char)102);
        }
        var_31 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 741082500126165156LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)4))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) != ((~(var_16))))))) : ((-((((_Bool)1) ? (11987715198461615812ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-96)))))))));
        var_32 = ((/* implicit */signed char) min((var_32), ((signed char)-21)));
        arr_28 [(_Bool)1] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (signed char)-94)))) && (((/* implicit */_Bool) (signed char)51))));
    }
    for (long long int i_7 = 0; i_7 < 11; i_7 += 1) 
    {
        var_33 = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
        var_34 = ((/* implicit */unsigned long long int) max((var_34), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (signed char)-80)))) && (((/* implicit */_Bool) max((-361382483102287017LL), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_3 [i_7] [i_7] [i_7])))))))))))));
    }
    for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 1) 
    {
        arr_34 [3ULL] = ((/* implicit */unsigned long long int) (signed char)-23);
        arr_35 [i_8] = ((/* implicit */long long int) (((+(((unsigned long long int) var_16)))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((_Bool) arr_21 [(_Bool)1] [i_8] [i_8] [i_8] [i_8] [i_8]))) <= (((/* implicit */int) arr_8 [(signed char)16] [i_8] [i_8]))))))));
        var_35 = ((/* implicit */unsigned long long int) ((((((((/* implicit */long long int) ((/* implicit */int) (signed char)84))) - (-7982138823465089005LL))) - (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (signed char)-1))))))) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-29)))));
    }
    for (signed char i_9 = 0; i_9 < 14; i_9 += 3) 
    {
        var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) ((_Bool) var_1)))));
        arr_39 [i_9] [i_9] = ((/* implicit */_Bool) ((signed char) (-(((/* implicit */int) max((arr_23 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]), ((signed char)-63)))))));
    }
    var_37 = ((/* implicit */signed char) (unsigned short)30336);
    var_38 = ((/* implicit */unsigned long long int) ((signed char) 7907933068737246825ULL));
}

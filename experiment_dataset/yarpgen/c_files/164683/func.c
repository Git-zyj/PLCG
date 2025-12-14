/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164683
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
    var_12 |= ((/* implicit */unsigned char) -1053205619);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) arr_1 [i_0 - 1]);
        arr_3 [i_0] |= ((/* implicit */_Bool) (((-(-4913176868016200669LL))) + (((/* implicit */long long int) ((/* implicit */int) ((short) var_4))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) arr_5 [i_0 - 3] [i_1] [i_0 - 3]);
            arr_7 [i_0 - 1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */long long int) arr_4 [i_1] [i_0 - 2])) * (((((/* implicit */_Bool) (unsigned short)8)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_0 [i_0 + 1] [i_0 + 1])))));
        }
        for (unsigned int i_2 = 0; i_2 < 22; i_2 += 4) /* same iter space */
        {
            arr_10 [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) arr_4 [i_2] [i_0 - 1]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1499))) : (min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) - (var_10))), (((/* implicit */unsigned long long int) 1053205647))))));
            arr_11 [i_0 - 2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) var_0))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((var_10) == (((/* implicit */unsigned long long int) arr_0 [i_0 - 1] [i_0 - 1])))))))) ? (min((((/* implicit */long long int) arr_4 [i_2] [i_2])), (max((((/* implicit */long long int) (signed char)-118)), (arr_1 [i_0]))))) : (((((/* implicit */_Bool) min(((unsigned short)51105), (((/* implicit */unsigned short) (_Bool)1))))) ? (((long long int) var_9)) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0]))))));
        }
        for (unsigned int i_3 = 0; i_3 < 22; i_3 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 1; i_4 < 18; i_4 += 3) 
            {
                for (int i_5 = 2; i_5 < 20; i_5 += 4) 
                {
                    {
                        arr_19 [i_0] &= var_4;
                        arr_20 [i_5] [i_4] [i_3] [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((short) (unsigned short)49441)))))) ? (((((/* implicit */_Bool) arr_16 [i_0 - 3] [i_0 - 2] [i_4 + 3] [i_5 + 2])) ? (((/* implicit */int) arr_16 [i_0 + 1] [i_0 + 1] [i_4 + 4] [i_5 - 1])) : (((/* implicit */int) arr_16 [i_0 - 1] [i_0 - 1] [i_4 + 3] [i_5 + 1])))) : (((/* implicit */int) arr_12 [i_0] [i_3] [i_4 + 4]))));
                        var_13 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_18 [i_5] [i_5]))))))))));
                        arr_21 [i_0 - 1] [i_0] [i_0 - 1] [i_4 + 2] [i_4 + 2] [(_Bool)1] = ((((/* implicit */_Bool) ((unsigned int) (unsigned char)26))) ? (max((arr_1 [i_5]), (((/* implicit */long long int) (+(arr_8 [i_5] [i_4 + 2])))))) : (((((/* implicit */_Bool) arr_4 [i_5] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (min((arr_15 [i_4]), (((/* implicit */long long int) var_5)))))));
                    }
                } 
            } 
            var_14 += ((/* implicit */signed char) min((((arr_1 [i_0 + 1]) - (var_7))), (((/* implicit */long long int) ((_Bool) arr_1 [i_0 - 3])))));
        }
        for (int i_6 = 1; i_6 < 21; i_6 += 3) 
        {
            var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) arr_4 [(unsigned char)4] [(unsigned char)4]))));
            arr_26 [i_0 + 1] = ((/* implicit */long long int) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_12 [i_6 - 1] [i_0 + 1] [i_0 + 1])) : (var_6))), ((-(((/* implicit */int) arr_12 [i_6 + 1] [i_0 - 2] [i_0 - 1]))))));
        }
        var_16 += ((/* implicit */unsigned short) (+((+(((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [(_Bool)1] [i_0 - 1]))) + (var_7)))))));
    }
    var_17 = ((/* implicit */short) min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_3)) : (var_10))))), (((/* implicit */unsigned long long int) var_3))));
}

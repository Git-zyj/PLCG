/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160783
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
    for (long long int i_0 = 1; i_0 < 13; i_0 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) -633885388);
                    var_21 -= ((/* implicit */unsigned short) ((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 1]))) ^ (min((9554078837653422816ULL), (((/* implicit */unsigned long long int) (short)-18)))))));
                    arr_9 [i_0] = ((/* implicit */unsigned char) ((signed char) (!(((_Bool) arr_5 [i_0 - 1] [i_0])))));
                }
            } 
        } 
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_5) <= (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 - 1] [i_0]))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 1]))) % (((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) % (arr_6 [i_0])))))));
    }
    for (long long int i_3 = 1; i_3 < 13; i_3 += 3) /* same iter space */
    {
        var_23 -= (signed char)-20;
        arr_12 [i_3] = ((/* implicit */unsigned char) ((int) 1024U));
        var_24 += ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (short)-18)) : (((/* implicit */int) arr_5 [12LL] [12LL])))));
        var_25 -= ((/* implicit */signed char) ((((/* implicit */int) arr_5 [i_3 - 1] [4U])) | (((/* implicit */int) var_12))));
    }
    for (unsigned short i_4 = 1; i_4 < 21; i_4 += 1) 
    {
        var_26 = ((/* implicit */short) min((((/* implicit */int) arr_14 [i_4])), ((+(((((/* implicit */int) var_13)) / (((/* implicit */int) (unsigned char)20))))))));
        var_27 += ((/* implicit */unsigned int) arr_14 [(short)14]);
        arr_15 [i_4] = ((/* implicit */unsigned short) max((((((((/* implicit */_Bool) arr_13 [i_4])) ? (1024U) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))) >= (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)0))))))), (arr_14 [i_4])));
        arr_16 [i_4] = ((/* implicit */signed char) arr_14 [i_4]);
        var_28 = ((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned char)1)), (((unsigned int) min(((unsigned char)219), (((/* implicit */unsigned char) var_15)))))));
    }
    var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) min((((/* implicit */unsigned int) var_18)), (992U)))) <= (((long long int) var_6)))))))))));
    var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) max((var_19), (((/* implicit */unsigned long long int) var_18)))))));
}

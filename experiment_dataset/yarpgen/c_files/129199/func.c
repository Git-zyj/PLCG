/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129199
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(318904740)))) ? (((((/* implicit */_Bool) min((var_0), (((/* implicit */long long int) var_16))))) ? ((-(((/* implicit */int) var_16)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)1))))))) : (((/* implicit */int) var_16))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        arr_2 [(short)2] = ((/* implicit */long long int) var_13);
        arr_3 [i_0] [i_0 - 2] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 - 2])) || (((/* implicit */_Bool) arr_1 [i_0 - 2])))))));
    }
    for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        /* LoopSeq 2 */
        for (long long int i_2 = 1; i_2 < 19; i_2 += 3) /* same iter space */
        {
            arr_9 [i_1] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_6 [(unsigned char)9])) && (((/* implicit */_Bool) var_12)))))));
            arr_10 [14U] [i_1] [14U] = ((/* implicit */signed char) var_1);
            arr_11 [18ULL] [i_1] = ((/* implicit */unsigned long long int) arr_4 [1ULL]);
            arr_12 [i_1] [12LL] [0] = ((/* implicit */short) ((long long int) var_0));
        }
        for (long long int i_3 = 1; i_3 < 19; i_3 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_4 = 4; i_4 < 19; i_4 += 4) 
            {
                for (unsigned char i_5 = 0; i_5 < 21; i_5 += 3) 
                {
                    {
                        arr_20 [i_1] [(unsigned char)6] [11] [(_Bool)1] = ((/* implicit */int) var_13);
                        arr_21 [i_1] = ((/* implicit */signed char) min((min((arr_14 [i_3 - 1] [9LL] [i_4 + 2]), (((/* implicit */unsigned long long int) ((unsigned char) var_12))))), (arr_17 [i_1] [i_1] [19ULL] [i_1])));
                    }
                } 
            } 
            arr_22 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_3 + 1] [i_3 + 2] [(short)15])) ? (arr_17 [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_1])))))) ? (arr_17 [i_3 + 1] [i_3 + 1] [i_3] [i_3 + 1]) : (((unsigned long long int) (short)-16745))));
            arr_23 [i_1] [(unsigned char)8] = ((/* implicit */unsigned int) arr_16 [i_3 + 1] [i_3 + 1] [(unsigned char)13]);
        }
        arr_24 [i_1] [16] = (-(((/* implicit */int) (_Bool)0)));
        arr_25 [i_1] = ((/* implicit */signed char) ((unsigned char) 965289765U));
    }
    var_18 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_9)), (((unsigned long long int) var_0))));
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) (unsigned char)36)) ? (14399473486440779458ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32619))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
    var_20 = ((/* implicit */unsigned int) var_0);
}

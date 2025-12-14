/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189229
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
    var_13 += ((/* implicit */signed char) var_10);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((((/* implicit */_Bool) -605788568)) ? (((/* implicit */int) (signed char)-24)) : (arr_2 [i_0] [i_0]))) : (1066278249)));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            for (int i_2 = 3; i_2 < 9; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    {
                        arr_10 [i_3] [i_2] [i_3] [i_3] [i_0] [i_0] = ((((/* implicit */_Bool) arr_2 [i_2] [i_3])) ? (arr_9 [i_0] [2] [i_0] [i_0] [i_3] [i_0]) : (((/* implicit */int) (signed char)-24)));
                        var_14 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [(unsigned short)10] [i_2 + 3] [i_2 + 3] [(short)6] [i_1] [i_3])) ? (arr_9 [i_1 - 2] [i_2 + 3] [i_1 - 2] [i_1 - 2] [i_0] [i_1 - 2]) : (((/* implicit */int) arr_7 [i_1] [i_2 + 3] [i_1] [i_3]))));
                        var_15 ^= ((/* implicit */int) ((_Bool) arr_9 [i_1] [i_1 - 2] [4LL] [i_1] [i_0] [i_1]));
                        arr_11 [i_0] [i_0] [i_0] [1U] [i_3] = ((/* implicit */signed char) arr_2 [i_0] [i_1 + 1]);
                        arr_12 [i_3] [6] [i_2] [i_3] [i_3] = ((/* implicit */unsigned char) ((arr_9 [i_0] [i_2] [1ULL] [i_2] [i_3] [i_2]) != (arr_9 [i_0] [i_0] [i_1] [i_0] [i_3] [i_1])));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 4) /* same iter space */
    {
        arr_15 [i_4] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) <= (arr_5 [i_4] [i_4]))))));
        arr_16 [i_4] = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_4] [i_4] [i_4] [0U] [i_4] [0U])))))));
    }
    for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_6 = 1; i_6 < 9; i_6 += 3) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 4) 
            {
                {
                    var_16 = ((/* implicit */signed char) arr_14 [i_5]);
                    var_17 -= ((/* implicit */unsigned long long int) 605788567);
                    var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)60108)) ? (-1603644591) : ((-(((/* implicit */int) (signed char)24)))))))));
                    var_19 = ((/* implicit */unsigned char) ((((arr_19 [i_5] [i_6] [i_7]) << (((/* implicit */int) (unsigned char)7)))) ^ (((/* implicit */unsigned long long int) arr_22 [i_5] [i_6] [i_7] [i_7]))));
                }
            } 
        } 
        var_20 -= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) -605788568))) ? (((((/* implicit */_Bool) arr_0 [i_5] [i_5])) ? (((/* implicit */int) (signed char)-24)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */_Bool) 17944253196035442497ULL)) || (((/* implicit */_Bool) 854340089U)))))))) <= (((((/* implicit */_Bool) (((_Bool)1) ? (-605788567) : (arr_9 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])))) ? (10311937296668781585ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [4ULL] [i_5] [i_5] [1LL])) ? (((/* implicit */int) arr_17 [i_5])) : (((/* implicit */int) (unsigned char)80)))))))));
    }
    var_21 = ((/* implicit */unsigned long long int) ((_Bool) var_12));
}

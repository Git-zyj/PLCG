/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152783
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
    var_14 = ((/* implicit */short) ((signed char) (-((~(((/* implicit */int) var_11)))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (unsigned short i_1 = 4; i_1 < 20; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_6 [(signed char)2] [(signed char)2] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) var_11)), ((~(((/* implicit */int) var_10))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) min(((signed char)48), ((signed char)34))))) >= (((long long int) arr_0 [(signed char)22])))))) : (((long long int) min((((/* implicit */unsigned long long int) (_Bool)1)), (12535429801258905442ULL))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 4) /* same iter space */
                    {
                        arr_9 [i_0] [i_0] [i_1 - 2] [i_2] [i_0] [i_3] = ((/* implicit */short) ((arr_3 [i_0] [i_1] [i_3]) ? (((/* implicit */int) arr_3 [i_0] [i_1 + 2] [i_2])) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_0]))));
                        arr_10 [i_0 - 1] [i_1] [i_0] [i_3] [i_3] [i_2] = arr_8 [i_3] [i_3] [i_2] [i_0] [i_3] [i_3];
                        var_15 = ((/* implicit */unsigned int) (~(((arr_4 [i_0] [i_0] [i_0] [i_3]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_2])))))));
                        arr_11 [i_0] = ((/* implicit */signed char) ((unsigned short) (short)-26));
                    }
                    /* vectorizable */
                    for (unsigned short i_4 = 0; i_4 < 23; i_4 += 4) /* same iter space */
                    {
                        arr_15 [i_4] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0] [i_4]) : (((/* implicit */long long int) arr_7 [i_0] [i_1] [i_1] [6LL] [i_0] [i_4])))));
                        arr_16 [i_0] [i_4] [i_2] [i_4] |= ((/* implicit */short) (_Bool)1);
                        var_16 = ((/* implicit */unsigned char) (!(((((/* implicit */int) arr_12 [i_0 + 2] [i_0 + 2] [i_0])) >= (((/* implicit */int) arr_3 [i_0] [i_2] [i_0]))))));
                    }
                    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */int) (signed char)-48)) | (((/* implicit */int) (signed char)(-127 - 1))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)98)) && (var_6))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) max(((unsigned char)56), (((/* implicit */unsigned char) var_10)))))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) var_9))))))) : (((/* implicit */int) var_10))));
}

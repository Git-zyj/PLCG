/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147668
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 11; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) max((var_19), (min((var_4), (((/* implicit */unsigned long long int) arr_3 [11LL]))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 1; i_4 < 10; i_4 += 3) /* same iter space */
                        {
                            arr_13 [(signed char)8] [i_3] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) ((arr_0 [i_0]) << (((((/* implicit */int) var_2)) - (76)))));
                            arr_14 [0U] [i_1] [i_2 - 3] [(_Bool)1] [i_2 - 1] = ((((((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned char)89)), (arr_0 [i_1])))) != (min((arr_11 [2U] [5U] [5U] [9LL] [i_1] [3LL] [5U]), (arr_11 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] [i_4 + 1]))))) ? (((/* implicit */unsigned long long int) var_7)) : (((unsigned long long int) ((((/* implicit */_Bool) 3916402360U)) ? (((/* implicit */int) arr_1 [7U] [7U])) : (((/* implicit */int) var_2))))));
                            var_20 -= ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) 3817727953U)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0])) ? (arr_10 [(signed char)2] [(signed char)2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)47119))))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_5 = 1; i_5 < 10; i_5 += 3) /* same iter space */
                        {
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_5 - 1] [i_1])) ? (arr_0 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((((/* implicit */unsigned long long int) var_15)) * (9887418161078395161ULL))) : (((/* implicit */unsigned long long int) ((var_15) >> (((var_11) - (12328290465038220880ULL))))))));
                            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) var_18))));
                            arr_17 [i_0] [(_Bool)1] [i_0] [(_Bool)1] [7LL] [i_1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [10LL] [(unsigned char)9])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_18))) : (378564933U)))) + (((unsigned long long int) var_18))));
                        }
                        arr_18 [i_1] [5LL] [11ULL] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) ((signed char) arr_2 [i_0] [i_2 - 2])))))) || (((/* implicit */_Bool) (unsigned char)250))));
                        var_23 = ((/* implicit */signed char) min((arr_11 [(_Bool)1] [(_Bool)1] [i_2 - 3] [i_2 + 1] [i_1] [5U] [5U]), (((/* implicit */long long int) (unsigned char)58))));
                    }
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */signed char) var_4);
    var_25 = ((/* implicit */unsigned char) (unsigned short)18417);
    var_26 = ((/* implicit */unsigned char) var_10);
}

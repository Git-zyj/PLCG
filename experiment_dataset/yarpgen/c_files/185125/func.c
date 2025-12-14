/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185125
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
    var_13 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_5)) != (max((((/* implicit */unsigned long long int) var_11)), (var_10)))));
    var_14 |= ((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) 17592186044415ULL)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    for (unsigned char i_3 = 1; i_3 < 13; i_3 += 4) 
                    {
                        {
                            var_15 += ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) ((short) arr_10 [(unsigned short)2] [i_1] [i_1] [12ULL]))) && (((/* implicit */_Bool) arr_7 [i_3 + 1] [i_1 - 1] [i_0 - 1] [6LL]))))) >> (((arr_10 [8U] [i_2] [(unsigned char)6] [8U]) - (1531030871)))));
                            var_16 -= ((/* implicit */short) max((((/* implicit */unsigned long long int) arr_4 [i_0])), (((((/* implicit */_Bool) ((long long int) arr_9 [i_3] [i_2] [i_1] [i_0]))) ? (17592186044415ULL) : (((/* implicit */unsigned long long int) arr_7 [i_0 - 3] [i_0 + 1] [i_1 - 1] [(_Bool)1]))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 1) 
                {
                    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) (((+(-768091447))) / (((/* implicit */int) (signed char)-61)))))));
                    var_18 += ((/* implicit */unsigned char) arr_2 [i_1 + 1] [i_0 + 1]);
                }
                for (unsigned int i_5 = 1; i_5 < 13; i_5 += 1) 
                {
                    var_19 = ((/* implicit */unsigned short) max((18446726481523507200ULL), (((/* implicit */unsigned long long int) (unsigned short)48515))));
                    arr_18 [i_1] [i_0] = ((((/* implicit */unsigned long long int) (((-(563408737U))) * (((/* implicit */unsigned int) ((/* implicit */int) ((arr_11 [i_0] [i_0] [i_0]) > (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))))) / (var_10));
                }
            }
        } 
    } 
}

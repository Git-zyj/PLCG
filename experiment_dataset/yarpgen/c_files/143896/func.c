/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143896
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
    var_14 = ((/* implicit */short) var_9);
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) ((signed char) var_3))), (var_6)))) ? (min((((/* implicit */int) var_11)), (((((/* implicit */_Bool) (short)-512)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-512)))))) : (((/* implicit */int) ((signed char) max((((/* implicit */unsigned short) var_8)), (var_3)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] = ((unsigned long long int) max(((~(((/* implicit */int) var_9)))), ((~(((/* implicit */int) var_7))))));
                                var_16 = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_0] [i_4] [i_2] [i_3] [i_4]))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3]))) | (arr_1 [i_0] [i_1]))) : (((((/* implicit */_Bool) arr_6 [i_0])) ? (arr_11 [(_Bool)1] [i_2] [10]) : (((/* implicit */long long int) ((/* implicit */int) var_12))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 13; i_5 += 2) 
                    {
                        for (int i_6 = 0; i_6 < 13; i_6 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) min((((/* implicit */int) ((((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_2 [i_2] [i_0])))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_2] [i_2] [i_2] [i_0])) % (((/* implicit */int) arr_13 [i_5] [i_1] [i_1] [i_5] [i_5])))))))), (((((/* implicit */int) min((var_11), (var_2)))) + (((/* implicit */int) ((((/* implicit */int) var_6)) == (((/* implicit */int) var_2))))))))))));
                                var_18 = ((/* implicit */int) ((unsigned int) min((((long long int) -3324486855000286610LL)), (((/* implicit */long long int) (+(((/* implicit */int) var_9))))))));
                            }
                        } 
                    } 
                    var_19 += ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((unsigned char) var_3))) ? (((((/* implicit */_Bool) 819215762)) ? (-3324486855000286612LL) : (18014364149743616LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [3LL] [(unsigned short)0]))))))))));
                    var_20 -= ((/* implicit */unsigned short) arr_13 [i_2] [i_2] [i_2] [(unsigned char)8] [(signed char)12]);
                }
            } 
        } 
    } 
}

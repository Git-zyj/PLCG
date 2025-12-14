/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111396
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_18 = 1851403358;
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 7; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                arr_11 [i_4] [i_2] [i_1] [i_4] = ((/* implicit */int) ((unsigned long long int) max((((/* implicit */int) var_9)), (arr_6 [i_3 + 4] [i_3 - 3] [i_3 - 3] [i_3 - 1]))));
                                var_19 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 685933875))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 3) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (unsigned char i_8 = 3; i_8 < 12; i_8 += 4) 
                    {
                        {
                            arr_24 [i_5] [i_5] [i_5] [i_8] [12ULL] = ((/* implicit */int) ((min((var_13), (((/* implicit */long long int) arr_23 [i_7])))) / (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 3348710596U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_5] [i_5]))) : (12435074883998434341ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)23564))))))))))));
                            arr_25 [0ULL] [i_6] [i_5] [i_8] [i_7] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)48))) * (var_12)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (short i_10 = 1; i_10 < 13; i_10 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */long long int) min((((/* implicit */unsigned int) (~((~(((/* implicit */int) var_9))))))), (((min((arr_26 [i_5] [i_10]), (((/* implicit */unsigned int) 675915770)))) ^ (((/* implicit */unsigned int) ((var_5) ^ (((/* implicit */int) (_Bool)0)))))))));
                            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) max(((((-(9223372036854775795LL))) - (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_5] [i_5] [i_5] [i_10 + 3]))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) 4294967287U))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */int) ((short) max(((+(1217817385U))), (min((((/* implicit */unsigned int) var_5)), (var_17))))));
}

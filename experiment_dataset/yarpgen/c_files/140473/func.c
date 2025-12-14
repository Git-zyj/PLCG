/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140473
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
    var_11 = ((/* implicit */unsigned short) min((3752361687135694219ULL), (((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_5)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    var_12 = ((/* implicit */short) min((((unsigned int) (_Bool)1)), (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0] [i_2])) != (((/* implicit */int) (signed char)-1)))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((min((((((/* implicit */_Bool) 4565030414030067692LL)) ? (-4565030414030067704LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)19))))), (((/* implicit */long long int) ((short) 4565030414030067718LL))))) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                                arr_14 [i_0] [i_3] [i_0] [i_3] [i_1] [i_1] [i_0] = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_3 [i_3] [12U] [i_0]), ((unsigned short)30714))))) <= (14694382386573857410ULL))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 23; i_6 += 4) 
                        {
                            {
                                arr_20 [(unsigned short)11] [i_0] [i_2] [(unsigned short)5] [i_0] [i_0] = ((/* implicit */signed char) max((arr_7 [i_0 - 1]), (((/* implicit */unsigned int) ((signed char) 2147483640)))));
                                var_14 = ((/* implicit */unsigned short) var_4);
                            }
                        } 
                    } 
                    arr_21 [9LL] [9LL] [i_2] [i_0] = ((/* implicit */signed char) arr_4 [i_0]);
                }
                /* LoopNest 2 */
                for (unsigned short i_7 = 0; i_7 < 23; i_7 += 1) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */long long int) var_5);
                            arr_26 [i_0] [(signed char)3] [i_0] [i_0] = ((/* implicit */signed char) (~(3752361687135694241ULL)));
                            var_16 = ((/* implicit */long long int) max((var_16), (((((-4565030414030067680LL) + (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_9)), (arr_25 [i_0] [i_8] [i_8] [i_8]))))))) | (((/* implicit */long long int) arr_7 [i_0 - 1]))))));
                        }
                    } 
                } 
                arr_27 [4] [i_1] [i_0] = ((/* implicit */int) var_5);
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (max((var_3), (var_2))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_7)), (max((((/* implicit */unsigned short) (short)17155)), (var_6))))))))))));
}

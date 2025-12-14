/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134048
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
    var_20 = ((/* implicit */unsigned long long int) var_1);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (+(((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) == (((/* implicit */int) (_Bool)0)))))) ^ (((((/* implicit */unsigned int) -5)) % (arr_9 [i_0] [i_0] [i_0] [i_0]))))))))));
                                var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) (signed char)-9))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) min((min((arr_5 [i_0] [i_1] [i_0]), (arr_5 [i_0] [i_1] [i_2]))), (((/* implicit */signed char) max((((arr_0 [i_0] [i_1]) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))), ((!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_1] [i_1])))))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */long long int) max((max((((/* implicit */int) var_17)), (4))), (((/* implicit */int) ((5) >= (((/* implicit */int) (signed char)-38)))))))) < (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0))))) : (((((/* implicit */long long int) ((/* implicit */int) var_0))) + (var_3)))))));
    /* LoopNest 2 */
    for (unsigned int i_5 = 0; i_5 < 12; i_5 += 4) 
    {
        for (unsigned int i_6 = 0; i_6 < 12; i_6 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_7 = 0; i_7 < 12; i_7 += 2) 
                {
                    var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) arr_19 [i_5] [i_5] [i_5]))));
                    var_25 = ((/* implicit */unsigned short) (+(arr_19 [i_5] [i_5] [i_5])));
                }
                arr_22 [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_5] [i_5]))) : (min((arr_21 [i_5] [i_6] [i_6] [i_5]), (((/* implicit */unsigned long long int) arr_20 [i_5] [i_5] [i_6] [i_5]))))));
            }
        } 
    } 
}

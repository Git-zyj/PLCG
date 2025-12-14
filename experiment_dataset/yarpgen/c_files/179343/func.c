/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179343
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
    var_10 = ((/* implicit */unsigned int) min((((/* implicit */long long int) var_8)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */int) var_0))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -1198597901)) ? (((/* implicit */int) var_6)) : (1198597879)))) : (max((((/* implicit */long long int) var_9)), (-7136452261870937248LL)))))));
    var_11 = ((/* implicit */long long int) max(((-(var_5))), ((-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_5)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) var_5);
                var_12 = ((((((/* implicit */unsigned long long int) arr_2 [i_1 - 1])) | (((var_5) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))) != ((-(var_5))));
                /* LoopSeq 1 */
                for (short i_2 = 2; i_2 < 8; i_2 += 4) 
                {
                    var_13 = ((/* implicit */short) ((((/* implicit */long long int) max(((+(var_7))), (((((/* implicit */_Bool) var_7)) ? (var_1) : (((/* implicit */int) var_3))))))) >= (max((((/* implicit */long long int) ((short) arr_2 [i_0]))), (max((((/* implicit */long long int) -1198597900)), (-7647406022189351460LL)))))));
                    var_14 = ((/* implicit */_Bool) max(((~(arr_8 [(unsigned char)0] [i_1 - 1]))), (((((/* implicit */_Bool) arr_7 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1])) ? (arr_8 [i_1] [i_1 - 1]) : (var_5)))));
                    arr_10 [i_0] [i_2 - 2] [i_2] = ((/* implicit */unsigned char) -233472063);
                }
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 11; i_3 += 4) 
                {
                    for (signed char i_4 = 1; i_4 < 10; i_4 += 4) 
                    {
                        {
                            arr_15 [i_0] [i_4] = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) arr_14 [i_4]))))))) * (var_7)));
                            var_15 += ((/* implicit */_Bool) ((unsigned short) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) max((max((((((/* implicit */_Bool) (short)-25450)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) var_3))));
    var_17 -= ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) / (((/* implicit */int) (signed char)-93))));
}

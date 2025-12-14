/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124765
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
    var_15 = ((/* implicit */unsigned long long int) ((((max((((/* implicit */unsigned int) (signed char)10)), (var_3))) ^ (((unsigned int) var_12)))) ^ (((/* implicit */unsigned int) min(((-2147483647 - 1)), (((/* implicit */int) (signed char)54)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */signed char) ((((arr_0 [i_0]) + (9223372036854775807LL))) << (((((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 3475042811056627828LL)) ? (((/* implicit */int) arr_6 [i_1] [i_1])) : (((/* implicit */int) arr_1 [i_0] [i_0]))))) <= (((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0]))) : (arr_0 [i_2])))))) - (1)))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                arr_17 [i_2] [i_4] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_2] [i_2])) ? (((/* implicit */long long int) ((((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])) | (((/* implicit */int) arr_14 [i_1] [i_1] [i_1]))))) : (arr_0 [i_0]))) + (((/* implicit */long long int) ((((/* implicit */_Bool) (short)13316)) ? (((/* implicit */unsigned int) -604034893)) : (3647162988U))))));
                                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (3475042811056627828LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-4884)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)215)) * (((/* implicit */int) arr_14 [i_0] [i_0] [i_0]))))) : (2447261977U))) << ((((~(((arr_10 [i_0] [i_0] [i_0]) ? (((/* implicit */int) (short)-13320)) : (((/* implicit */int) arr_14 [i_0] [i_0] [i_0])))))) - (13311))))))));
                                var_17 *= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) (~((-2147483647 - 1))))) != (max((-3475042811056627829LL), (((/* implicit */long long int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])))))))) >= (((((/* implicit */_Bool) max((((/* implicit */long long int) arr_4 [i_0] [i_0])), (1LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((2614199289U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))) : (arr_2 [i_0] [i_0] [i_2])))));
                                var_18 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) ((((-3475042811056627828LL) + (9223372036854775807LL))) >> (((/* implicit */int) arr_10 [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) ((short) (signed char)-58))) : (((/* implicit */int) arr_12 [i_0] [i_0])))));
                                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)27849)) ? (((/* implicit */int) (unsigned char)187)) : (-632719683)))) ? (max((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)55)) << (((1210553585) - (1210553585)))))), (((((/* implicit */_Bool) 6421411750571736848LL)) ? (7804902009411516866LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-127))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-10237)) ? (((/* implicit */int) (short)8115)) : (1261774649))))));
                            }
                        } 
                    } 
                    arr_18 [i_0] [i_0] = ((/* implicit */unsigned char) (signed char)(-127 - 1));
                    arr_19 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) >= (1LL)))), ((-(((((/* implicit */_Bool) -111275614)) ? (5850293128533054533ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))))));
                }
            } 
        } 
    } 
}

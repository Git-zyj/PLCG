/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148258
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) 18446462598732840960ULL)) || (((/* implicit */_Bool) 1129328781))));
                arr_5 [i_0 + 1] [i_0 + 1] = ((/* implicit */unsigned long long int) 201326592U);
                /* LoopSeq 3 */
                for (unsigned int i_2 = 1; i_2 < 16; i_2 += 1) 
                {
                    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) max((((/* implicit */unsigned char) ((_Bool) var_5))), ((unsigned char)254))))));
                    arr_8 [i_2] = ((/* implicit */unsigned long long int) arr_3 [i_0 + 3] [i_1]);
                }
                for (short i_3 = 3; i_3 < 17; i_3 += 3) 
                {
                    var_18 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((18446462598732840960ULL), (((/* implicit */unsigned long long int) var_6))))) ? (((/* implicit */int) ((short) var_12))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1] [i_1])) && (((/* implicit */_Bool) (unsigned short)2151)))))))) ? (((/* implicit */unsigned int) min(((+(((/* implicit */int) (signed char)-50)))), (((/* implicit */int) arr_9 [(_Bool)1] [(_Bool)1] [i_3 - 3]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 4026531840U)))))) ^ ((+(268435442U)))))));
                    var_19 = ((/* implicit */short) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)7425))) & (((((/* implicit */_Bool) 447697890U)) ? (1967168268550742661ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 1; i_4 < 19; i_4 += 2) 
                    {
                        for (short i_5 = 3; i_5 < 18; i_5 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) (((+(var_8))) != (((/* implicit */unsigned int) ((/* implicit */int) (!(((((/* implicit */int) (unsigned char)162)) >= (((/* implicit */int) (unsigned short)35370))))))))));
                                var_21 = var_3;
                                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_5)), (10111283307924818196ULL)))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (7238748414538063301ULL))) : (((/* implicit */unsigned long long int) 833155192U))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_4)) >> (((((/* implicit */int) (unsigned short)56616)) - (56588)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)33231))) >= (5278951833373077780LL))))) : (((1721381814U) % (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_5])) ? (18446462598732840954ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_5 - 2] [i_4] [i_1] [(unsigned short)13])))))) || (((/* implicit */_Bool) arr_0 [i_4 + 1]))))))));
                                var_23 = ((/* implicit */int) ((((unsigned long long int) arr_12 [i_3] [(unsigned short)10] [i_3 - 2] [i_3 + 2] [19ULL] [i_3 + 2])) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_0] [18U] [17ULL] [17ULL] [i_4 - 1] [1ULL])) && (((/* implicit */_Bool) 1129328781))))))));
                            }
                        } 
                    } 
                }
                for (int i_6 = 0; i_6 < 20; i_6 += 1) 
                {
                    arr_19 [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) min((((int) var_10)), (((/* implicit */int) ((((/* implicit */int) arr_16 [i_1] [i_1] [i_1] [i_1] [0LL])) >= (var_2))))))) ? (arr_6 [i_1]) : (max((((/* implicit */unsigned long long int) 1689525048U)), ((-(13155723005807935863ULL))))));
                    var_24 |= ((/* implicit */_Bool) (-(var_8)));
                    arr_20 [(unsigned short)19] [i_1] [i_1] |= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) 2139095040U)) ? (((int) (unsigned short)63385)) : (((/* implicit */int) (signed char)114))))));
                    var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -5278951833373077780LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)127))) : (5198268708863341688ULL))))));
                }
                var_26 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((unsigned int) 5278951833373077808LL))), (((arr_18 [i_1] [4ULL] [i_0 - 1]) / (13041604735894883426ULL)))));
            }
        } 
    } 
    var_27 |= ((/* implicit */unsigned long long int) (+(var_3)));
}

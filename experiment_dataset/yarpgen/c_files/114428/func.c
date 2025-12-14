/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114428
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
    var_18 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned int) (unsigned char)209))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 317984974)))) : (13987541305879047045ULL))) << (((((/* implicit */int) (signed char)-96)) + (120)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (long long int i_4 = 2; i_4 < 21; i_4 += 3) 
                        {
                            {
                                arr_14 [(short)10] [(short)10] [i_2] [(short)20] [i_4] &= ((/* implicit */signed char) (((~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)-19)) : (((/* implicit */int) (signed char)-8)))))) * (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 317984974)) ? (((/* implicit */int) (unsigned char)175)) : (((/* implicit */int) (signed char)4))))) >= (144115188071661568LL))))));
                                arr_15 [i_1] [i_1] [i_1] [5ULL] [i_0] = ((/* implicit */unsigned int) (+((-(((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_13 [i_1] [i_3] [i_4 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)8)))))))));
                                arr_16 [i_4 - 1] [i_3] [i_2] [i_3] [i_0] [i_0 - 2] [i_2] = ((/* implicit */long long int) (_Bool)1);
                                var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) (((!(((/* implicit */_Bool) -933197923)))) && (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)223)))))))) >> (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_7 [i_0 - 3])), (-19LL)))) || ((!(((/* implicit */_Bool) (short)31180)))))))));
                                var_20 = ((((/* implicit */_Bool) ((unsigned char) (unsigned char)223))) ? (((unsigned int) min((((/* implicit */int) arr_9 [i_1] [i_2] [i_4])), (933197923)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2698251123U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_3] [i_2] [i_0 + 1] [i_0]))) : (var_14)))))))));
                            }
                        } 
                    } 
                } 
                arr_17 [i_0] [i_0] = ((/* implicit */short) (unsigned char)28);
            }
        } 
    } 
    var_21 &= ((/* implicit */long long int) min((((/* implicit */unsigned int) ((unsigned char) min((755002917315723989LL), (((/* implicit */long long int) var_14)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 755002917315724005LL)) ? (3353090943629730659ULL) : (((/* implicit */unsigned long long int) 7383483132242967188LL))))) ? (2661452445U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
}

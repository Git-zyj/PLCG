/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123970
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
    var_11 = ((/* implicit */int) ((((/* implicit */long long int) max((((((/* implicit */int) var_1)) & (((/* implicit */int) (unsigned char)189)))), (((/* implicit */int) (!((_Bool)0))))))) % (11LL)));
    var_12 = ((/* implicit */unsigned char) var_1);
    var_13 = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) -506373290))) ^ (var_7)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_0] [i_0] = ((/* implicit */short) (~(((unsigned int) -11LL))));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    arr_10 [i_2] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((8660667182743886556ULL) >> (((/* implicit */int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_3 [i_2]))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                arr_17 [i_4] [i_3] [i_0] = ((/* implicit */int) arr_11 [i_3] [i_3]);
                                arr_18 [i_4] [i_3] [i_4] [i_0] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0] [i_4] [i_0] [i_0])) ? (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (-378674608)))) ? (((unsigned long long int) arr_3 [i_0])) : (((/* implicit */unsigned long long int) min((-11LL), (((/* implicit */long long int) arr_14 [i_3] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_7 [i_1] [i_2])))))));
                            }
                        } 
                    } 
                    arr_19 [i_0] = ((/* implicit */unsigned long long int) min((((long long int) max((arr_1 [i_1]), (((/* implicit */long long int) arr_15 [i_2] [i_1] [i_1] [i_0]))))), (((/* implicit */long long int) max((((arr_14 [i_2] [i_2] [i_0] [i_1] [i_2] [i_2] [i_0]) ? (((/* implicit */int) (_Bool)1)) : (315100694))), (((/* implicit */int) (_Bool)1)))))));
                }
                /* vectorizable */
                for (unsigned short i_5 = 3; i_5 < 14; i_5 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 1) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                arr_30 [i_7] [i_6] [i_6] [i_1] [i_0] = (!(((/* implicit */_Bool) arr_29 [i_6] [i_5 - 3] [i_5 - 2])));
                                arr_31 [i_6] [i_6] [i_5 + 2] [i_5] [i_5 - 1] [i_5 + 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -8654308366640243438LL)) ? (((((/* implicit */_Bool) 2833265998U)) ? (arr_0 [i_0]) : (((/* implicit */int) arr_28 [i_0] [i_1] [i_1] [i_0] [i_1] [i_7])))) : (((((/* implicit */_Bool) -15LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)40750))))));
                            }
                        } 
                    } 
                    arr_32 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(-2094406491)))) ? (((/* implicit */int) (signed char)20)) : (((/* implicit */int) (unsigned short)36447))));
                }
                arr_33 [i_0] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-20)) ? (((/* implicit */unsigned int) min(((~(((/* implicit */int) (unsigned short)36464)))), (((((/* implicit */_Bool) (signed char)-83)) ? (arr_25 [i_1]) : (arr_27 [i_1])))))) : (((1715818363U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_0])))))));
            }
        } 
    } 
    var_14 = (-(((/* implicit */int) ((short) ((int) (unsigned char)0)))));
}

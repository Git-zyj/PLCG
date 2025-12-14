/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112050
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
    var_12 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max(((-(((/* implicit */int) var_1)))), (-660750909))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                arr_15 [0LL] [0LL] [i_1] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */short) (!(((((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)-111)))) >= (((int) var_11))))));
                                var_13 = ((/* implicit */_Bool) (~((~(((/* implicit */int) (_Bool)1))))));
                                arr_16 [i_0] [i_0] [i_1] [11LL] [i_3] [i_4] [i_4] = ((/* implicit */short) (unsigned short)384);
                                var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) (+(-1647465482))))) ? ((~(-889267966))) : (((/* implicit */int) ((short) max((((/* implicit */int) (unsigned short)1104)), (var_9)))))));
                                var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned char) (unsigned char)5)))));
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */unsigned short) ((int) ((short) ((unsigned short) (unsigned short)8184))));
                arr_17 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)65152)), ((-(((/* implicit */int) var_0))))))) ? ((~((-(((/* implicit */int) var_0)))))) : (((((/* implicit */_Bool) arr_12 [i_1 - 2] [i_1 - 2] [i_1])) ? (((/* implicit */int) arr_12 [i_1 - 2] [i_1 - 1] [i_1])) : (((/* implicit */int) arr_12 [i_1 + 1] [i_1 - 2] [i_1]))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_5 = 0; i_5 < 19; i_5 += 2) 
    {
        var_17 = ((/* implicit */unsigned long long int) (unsigned short)15593);
        var_18 = max((((((/* implicit */_Bool) -230620930580815651LL)) ? (((((/* implicit */_Bool) 8191U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1104))) : (arr_18 [(unsigned short)15] [i_5]))) : (((((/* implicit */_Bool) 8559509144136154720ULL)) ? (arr_18 [i_5] [(unsigned short)6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))), (max((((((/* implicit */_Bool) arr_19 [i_5] [i_5])) ? (8593682742288770483ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned long long int) (((_Bool)1) ? (arr_19 [i_5] [i_5]) : (arr_19 [i_5] [i_5])))))));
    }
    var_19 = ((/* implicit */unsigned int) (-((+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5))))))));
    var_20 &= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6))))) : (var_10)))));
}

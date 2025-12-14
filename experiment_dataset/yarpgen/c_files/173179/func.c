/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173179
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
    var_15 = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)0))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 17; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) (_Bool)1))) ? (min((((/* implicit */unsigned long long int) (_Bool)0)), (arr_3 [i_2 - 1] [i_2 - 2] [i_0]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14743))) + (9477294154974987462ULL)))));
                            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)2702)))) : (((((/* implicit */_Bool) -5561267726063853533LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)119)) ? (((/* implicit */int) (unsigned short)50743)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)54634)) <= (((/* implicit */int) (unsigned short)30943))))) : (((/* implicit */int) (signed char)119))))) : (((max((5735546497081765037ULL), (((/* implicit */unsigned long long int) (unsigned short)25849)))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)11818)))))));
                            arr_10 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */short) max(((_Bool)1), (((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0])))))) == (max((2917090215068165352LL), (((/* implicit */long long int) (_Bool)1))))))));
                            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (_Bool)1))));
                        }
                    } 
                } 
                arr_11 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_2 [i_0]))))) ? (((((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)960))) : (arr_7 [i_1] [i_1] [i_0] [i_0]))) ^ (((/* implicit */unsigned long long int) ((arr_6 [i_0] [i_1] [i_0] [i_0]) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (arr_5 [i_1] [i_0] [i_0])))) - (7))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) var_12);
    var_20 = ((/* implicit */_Bool) ((((int) var_11)) % (((/* implicit */int) min((((/* implicit */short) (unsigned char)80)), (var_3))))));
    var_21 = ((/* implicit */unsigned long long int) (_Bool)1);
}

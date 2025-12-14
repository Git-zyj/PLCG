/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185215
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
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_6 [i_2] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)108))) : (2574462710U)))));
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (!(((((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_11)))) != (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_2])))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */signed char) var_12);
    var_21 = ((/* implicit */signed char) var_4);
    var_22 = ((/* implicit */short) (!(((((/* implicit */int) var_4)) < (((/* implicit */int) ((((/* implicit */int) var_3)) > (((/* implicit */int) var_0)))))))));
    /* LoopNest 3 */
    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 3) 
    {
        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 2) 
        {
            for (long long int i_5 = 0; i_5 < 12; i_5 += 2) 
            {
                {
                    var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) min((((/* implicit */long long int) (_Bool)1)), (21LL))))));
                    arr_16 [i_5] [i_4] [i_5] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_11 [i_4])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [(_Bool)1] [(_Bool)1])))) < (min((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_3] [(signed char)0] [i_5]))) < (arr_1 [i_3])))), (((((/* implicit */int) arr_12 [i_3] [i_5])) >> (((/* implicit */int) (_Bool)1))))))));
                    arr_17 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_3] [i_4] [i_5] [i_5])) ^ ((((_Bool)1) ? (((/* implicit */int) arr_9 [i_5])) : (((/* implicit */int) (_Bool)1))))))) ? ((-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_3] [i_4]))) : (var_5))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_13 [i_3] [i_3] [i_3]), (((/* implicit */signed char) (_Bool)1))))))));
                    var_24 -= ((/* implicit */unsigned short) min((((/* implicit */long long int) arr_14 [i_3] [i_4] [i_4] [i_5])), (min((((((/* implicit */_Bool) var_12)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (min((21LL), (((/* implicit */long long int) arr_9 [i_5]))))))));
                }
            } 
        } 
    } 
}

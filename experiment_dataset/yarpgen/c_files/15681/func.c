/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15681
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_14 += ((/* implicit */_Bool) min((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)54)), (14459583087400360025ULL)))) ? (var_5) : ((((_Bool)1) ? (var_12) : (arr_5 [i_3] [i_3] [i_3]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_3] [i_1])) ? (((/* implicit */int) (signed char)53)) : (((/* implicit */int) (short)-7950)))))));
                                var_15 += ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) arr_4 [i_1]))) ? (((/* implicit */int) (signed char)54)) : ((~(((/* implicit */int) arr_4 [i_0]))))));
                                var_16 *= ((/* implicit */signed char) (~((-(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)54))) - (1064650508U)))))));
                                arr_14 [i_0] [i_0] [(short)4] [i_3] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_1] [i_3])) ? (((var_5) + (arr_9 [i_2] [i_2]))) : (arr_9 [i_3] [i_3])));
                            }
                        } 
                    } 
                } 
                var_17 *= ((/* implicit */signed char) max((arr_8 [i_0] [i_1] [i_1]), (3892608057U)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (signed char i_6 = 0; i_6 < 21; i_6 += 3) 
        {
            {
                var_18 = ((((/* implicit */_Bool) max((((/* implicit */unsigned int) max((((/* implicit */int) (short)7680)), (arr_15 [i_6])))), (4294967290U)))) || (((/* implicit */_Bool) var_8)));
                var_19 ^= (signed char)-39;
                /* LoopNest 2 */
                for (unsigned short i_7 = 0; i_7 < 21; i_7 += 1) 
                {
                    for (signed char i_8 = 0; i_8 < 21; i_8 += 3) 
                    {
                        {
                            arr_24 [i_7] [i_7] [i_7] = ((/* implicit */_Bool) min((((unsigned int) arr_22 [i_7] [i_7])), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) 13038748997649424463ULL)) || (((/* implicit */_Bool) (signed char)0))))) >> (((((((/* implicit */_Bool) arr_22 [i_7] [i_6])) ? (((/* implicit */int) (signed char)69)) : (((/* implicit */int) (signed char)-69)))) - (39))))))));
                            arr_25 [i_8] [i_7] [i_7] [i_7] [i_5] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) 1912890245U)), (var_6)));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-126)) & (((/* implicit */int) (signed char)-54))))) : (((((/* implicit */_Bool) var_8)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)63)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((short) (short)-31748)))))) : ((-((-(((/* implicit */int) var_7)))))))))));
}

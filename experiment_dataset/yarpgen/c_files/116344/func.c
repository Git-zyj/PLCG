/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116344
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_11)), (min((arr_0 [(signed char)9]), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0])))))))));
                /* LoopSeq 3 */
                for (int i_2 = 2; i_2 < 12; i_2 += 3) 
                {
                    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)135)) ? (1275969572) : (((/* implicit */int) (signed char)-111)))))));
                    arr_10 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */int) ((unsigned char) 3441710046813385119ULL));
                }
                for (unsigned char i_3 = 0; i_3 < 14; i_3 += 3) /* same iter space */
                {
                    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) arr_0 [i_0]))));
                    var_20 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)125)) || (((/* implicit */_Bool) 2903709059974336989ULL))))) << ((+(((((/* implicit */_Bool) (signed char)-124)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (8345882436139343797ULL)))))));
                    arr_14 [i_1] [i_3] [i_1] [i_1] &= ((/* implicit */_Bool) min(((short)16819), (((/* implicit */short) (signed char)-111))));
                    arr_15 [i_0] [i_0] [i_3] [i_1] = ((((/* implicit */_Bool) (-((-(((/* implicit */int) arr_11 [0] [0] [i_3] [i_0]))))))) || (((/* implicit */_Bool) var_15)));
                    arr_16 [i_0] [(unsigned char)11] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) min((var_15), ((signed char)-111))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)234)) : (((/* implicit */int) (unsigned char)228))))) : (var_5)));
                }
                for (unsigned char i_4 = 0; i_4 < 14; i_4 += 3) /* same iter space */
                {
                    arr_20 [i_0] [i_0] [i_1] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) var_8)) : (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))) ? (((/* implicit */unsigned long long int) var_7)) : (((arr_0 [i_1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_4])))))));
                    arr_21 [i_0] [i_1] [i_1] = var_10;
                    arr_22 [i_0] = ((/* implicit */int) arr_19 [i_4] [i_1] [i_0]);
                }
                arr_23 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_12 [i_0] [i_0] [i_0]), (((/* implicit */int) var_13))))) ? ((((~(((/* implicit */int) (short)32759)))) / (((/* implicit */int) arr_18 [i_1] [i_0] [i_0])))) : (((min((arr_12 [i_1] [i_0] [i_0]), (-406700359))) - (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_0]))))))));
                arr_24 [i_0] = ((/* implicit */_Bool) ((((((var_3) + (2147483647))) >> (((/* implicit */int) arr_4 [i_0])))) + (((/* implicit */int) (!(arr_4 [i_0]))))));
            }
        } 
    } 
    var_21 &= ((/* implicit */_Bool) var_6);
    var_22 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) (short)-7679)) && (((/* implicit */_Bool) (signed char)-61)))));
    var_23 -= ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) & (17999731174065670941ULL))) != (((/* implicit */unsigned long long int) var_7))));
}

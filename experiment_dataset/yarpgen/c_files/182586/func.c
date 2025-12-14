/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182586
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
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) ((unsigned char) arr_8 [i_0] [i_0] [i_2]))) ? (((((/* implicit */_Bool) var_1)) ? (var_3) : (((/* implicit */unsigned long long int) var_0)))) : (((arr_6 [i_1] [i_1] [i_1]) ? (arr_3 [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))));
                    var_13 = ((/* implicit */int) ((short) max((((unsigned long long int) var_11)), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9))))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) ((var_8) ? (4393751543808LL) : (((long long int) ((((/* implicit */_Bool) (signed char)84)) ? (458752LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)14))))))));
    /* LoopNest 3 */
    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 1) 
    {
        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 4) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 3) 
            {
                {
                    var_15 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_5])) ? (((((/* implicit */_Bool) arr_8 [i_3] [i_5] [i_5])) ? (4688139214224602159ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_5))))))) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
                    var_16 ^= ((/* implicit */unsigned int) var_2);
                    var_17 += ((/* implicit */long long int) ((((((/* implicit */int) var_2)) == (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)78)) : (((/* implicit */int) (signed char)26)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_4] [i_4] [i_4])) ? (((/* implicit */unsigned long long int) var_5)) : (arr_8 [i_5] [i_4] [12LL])))) ? (((/* implicit */int) min((arr_0 [i_5] [i_3]), (var_10)))) : (((/* implicit */int) min((((/* implicit */signed char) arr_9 [i_3])), (var_2))))))) : (min((((((/* implicit */_Bool) 4290772992U)) ? (4688139214224602159ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) var_0))))));
                    var_18 = ((/* implicit */_Bool) ((max((((((/* implicit */_Bool) var_2)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))), (((((/* implicit */_Bool) arr_7 [i_4] [10U] [(signed char)12] [14])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_5]))))))) % (((2143289344U) << (((((/* implicit */int) arr_4 [i_5] [i_5])) - (219)))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */_Bool) max((min((2194728288256ULL), (((/* implicit */unsigned long long int) -595633368133915000LL)))), (((/* implicit */unsigned long long int) var_1))));
    var_20 += ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (var_1)));
}

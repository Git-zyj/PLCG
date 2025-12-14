/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152860
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 16; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) arr_8 [i_2 - 1] [i_2 - 1] [i_2 + 1])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2 - 1] [i_2 + 1] [i_2 - 2]))))));
                    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_6 [i_0]))))) == (((((/* implicit */_Bool) min((((/* implicit */int) (short)-32755)), (-840126563)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1] [i_0]))) : (min((var_15), (((/* implicit */unsigned int) var_3)))))))))));
                    var_20 = ((/* implicit */unsigned short) (~(min((((/* implicit */long long int) (signed char)76)), (var_17)))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_3 = 3; i_3 < 16; i_3 += 2) 
    {
        for (unsigned long long int i_4 = 3; i_4 < 16; i_4 += 1) 
        {
            {
                var_21 ^= ((/* implicit */signed char) (!(arr_13 [i_3] [i_3] [i_4])));
                arr_15 [i_4] [i_4] [(_Bool)1] = (-((((-(var_13))) | (((/* implicit */int) ((_Bool) arr_12 [i_3 + 1] [i_4 + 2]))))));
                var_22 = ((/* implicit */int) ((((((/* implicit */_Bool) ((unsigned short) arr_13 [i_3] [i_3] [i_4]))) ? (((((/* implicit */long long int) arr_12 [i_3] [i_3])) - (var_4))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-79))))) * (((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */int) (unsigned short)16)) & (arr_12 [i_4] [12ULL]))))))));
                arr_16 [8] [0U] &= ((/* implicit */long long int) (~(((/* implicit */int) (signed char)56))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) ((min((((unsigned long long int) var_13)), ((-(0ULL))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_0) > (((/* implicit */long long int) min((((/* implicit */unsigned int) var_3)), (var_15))))))))));
    /* LoopNest 3 */
    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
    {
        for (signed char i_6 = 0; i_6 < 23; i_6 += 1) 
        {
            for (unsigned int i_7 = 3; i_7 < 20; i_7 += 2) 
            {
                {
                    var_24 = ((/* implicit */short) (-(((((/* implicit */_Bool) var_13)) ? (((((/* implicit */int) (short)-11)) | (((/* implicit */int) (unsigned short)65535)))) : (((/* implicit */int) ((signed char) 710437861)))))));
                    arr_26 [(short)5] [i_6] [i_7] = ((/* implicit */_Bool) (short)-11);
                    var_25 |= ((/* implicit */short) ((((/* implicit */_Bool) 15314216007511216608ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)-75)) < (((/* implicit */int) (short)-3)))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65519))) | (arr_24 [i_7] [i_7] [i_7] [i_7 - 1])))));
                    arr_27 [i_6] [i_7 + 2] = ((/* implicit */long long int) var_10);
                }
            } 
        } 
    } 
}

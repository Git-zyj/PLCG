/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110242
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
    for (short i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (unsigned int i_1 = 4; i_1 < 15; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] |= ((/* implicit */short) (+(7923608150032110433ULL)));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                arr_12 [i_0] [i_1 + 2] [i_1] [i_2] [(short)3] [i_4] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)36826))));
                                arr_13 [i_0] [i_1] [(signed char)10] [i_3] [5U] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_0 + 2] [i_3 + 1] [i_3 + 1]))))) ? ((+(arr_8 [i_0] [i_0 - 1] [i_1 - 3]))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_9 [i_1 - 3] [(_Bool)1] [10U]), (arr_9 [i_1 - 3] [i_0] [i_0])))))));
                                var_10 |= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (unsigned char)12)) ? (((/* implicit */long long int) arr_8 [7LL] [i_2] [i_2])) : (arr_1 [i_0 - 1] [i_0 - 1])))))) == (min((var_8), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)111)) ? (2487474952U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)26659))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_11 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (short)4095)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 14072197519383048768ULL)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38888)))))) ? (min((((/* implicit */unsigned long long int) var_7)), (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
    /* LoopNest 2 */
    for (long long int i_5 = 0; i_5 < 12; i_5 += 2) 
    {
        for (unsigned short i_6 = 0; i_6 < 12; i_6 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_7 [i_6] [i_6] [i_5])) ? (((/* implicit */int) ((((/* implicit */int) arr_17 [(unsigned short)2] [i_6])) < (((/* implicit */int) arr_9 [i_5] [i_5] [i_6]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 18164206351544670032ULL))))))), ((-(((/* implicit */int) arr_17 [i_5] [i_6]))))));
                var_13 = ((/* implicit */short) (~(((unsigned long long int) min((var_3), (((/* implicit */unsigned int) arr_9 [(unsigned char)1] [i_6] [i_6])))))));
                var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((92074698U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)26641))))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) var_4);
}

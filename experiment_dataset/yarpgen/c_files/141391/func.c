/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141391
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
    var_13 = ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) max((var_3), (((/* implicit */long long int) var_5)))))))), (((((/* implicit */int) (unsigned char)64)) | (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)39483)) && (((/* implicit */_Bool) var_0)))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (unsigned char)96))))))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_2 [i_0]))))) : (((long long int) var_12))));
        var_15 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (short)-27416)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32640)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)192))) : (1023U)))))), (((/* implicit */unsigned long long int) min(((unsigned char)57), (((/* implicit */unsigned char) ((signed char) var_5))))))));
        var_16 ^= ((/* implicit */unsigned int) ((((/* implicit */int) (!(arr_2 [i_0])))) * ((-(((/* implicit */int) arr_2 [4]))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_9 [i_2] [i_2] [i_2] [6U] = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)67))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                arr_15 [6LL] [i_2] [i_3] [6LL] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (min((0LL), (((/* implicit */long long int) var_10)))) : (((/* implicit */long long int) min((3418854589U), (arr_5 [i_3] [i_2] [i_1]))))))) ? ((+(((/* implicit */int) arr_4 [i_2] [i_2 - 1] [i_3])))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_2 [i_2 - 1])), (var_5))))));
                                arr_16 [i_2] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_2 + 1] [i_2 + 1])) ? (((/* implicit */int) arr_4 [i_0] [i_2 - 1] [i_2])) : (((/* implicit */int) ((short) (_Bool)1)))))) ? (((/* implicit */long long int) ((/* implicit */int) (((-2147483647 - 1)) <= (((/* implicit */int) (unsigned short)26052)))))) : (var_11));
                            }
                        } 
                    } 
                    arr_17 [i_2] [i_1] = ((/* implicit */unsigned int) (unsigned char)242);
                    arr_18 [i_2] [i_1] [i_2] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) 3849498534686975471ULL)) ? (-7928151166432615262LL) : (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)65532)), (876112705U))))))));
                    var_17 ^= ((/* implicit */_Bool) ((signed char) arr_1 [i_0]));
                }
            } 
        } 
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        arr_21 [4U] [(unsigned char)6] |= ((/* implicit */_Bool) min((((/* implicit */long long int) arr_8 [4] [4] [4] [4])), (((((/* implicit */_Bool) (unsigned short)37092)) ? (((((/* implicit */_Bool) var_8)) ? (var_8) : (var_3))) : (((((/* implicit */_Bool) (short)-410)) ? (arr_3 [i_5] [i_5] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_5] [i_5] [(short)10] [i_5])))))))));
        arr_22 [i_5] = ((/* implicit */unsigned short) (signed char)-74);
        arr_23 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_5])) ? (((/* implicit */int) (unsigned short)26049)) : (((/* implicit */int) arr_20 [i_5]))))) ? (((((/* implicit */int) (short)-12)) / (((/* implicit */int) (unsigned char)191)))) : ((-(((/* implicit */int) (unsigned short)15721))))));
    }
}

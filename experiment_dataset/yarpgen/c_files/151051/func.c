/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151051
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
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            {
                arr_4 [1LL] [i_1 + 1] [i_1] = ((/* implicit */unsigned int) 8975078251719400228ULL);
                var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) ((((/* implicit */int) arr_3 [i_0])) >= (((/* implicit */int) arr_2 [i_1])))))) ? (((((/* implicit */_Bool) ((unsigned short) arr_0 [i_0]))) ? (((int) (signed char)23)) : (((/* implicit */int) max(((unsigned short)2986), (((/* implicit */unsigned short) arr_2 [17]))))))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? ((+(((/* implicit */int) (unsigned char)0)))) : (((/* implicit */int) arr_0 [i_0 + 1])))))))));
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 19; i_2 += 4) 
                {
                    for (int i_3 = 1; i_3 < 22; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (long long int i_4 = 0; i_4 < 23; i_4 += 2) 
                            {
                                var_16 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_9 [i_3] [i_3] [i_3] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_7 [i_1 - 2] [i_1] [i_1]))), (((/* implicit */long long int) var_9))));
                                arr_16 [(unsigned short)18] [i_1 - 2] [(short)4] [(_Bool)1] [i_3] = ((/* implicit */unsigned short) ((unsigned int) ((long long int) arr_1 [i_2 + 2])));
                                arr_17 [i_4] [i_3] [i_3] [i_2] [i_3] [i_0 + 1] [i_0 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_7 [(signed char)2] [i_1] [(_Bool)1]), (((/* implicit */long long int) min((((/* implicit */unsigned short) arr_2 [i_3])), (arr_3 [i_1]))))))) ? (((/* implicit */long long int) var_12)) : (max((((long long int) arr_7 [i_1 - 1] [(signed char)15] [(signed char)14])), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [(_Bool)1] [i_0 - 1] [20] [i_2 + 3] [i_2] [i_2] [(signed char)0]))) != (var_1))))))));
                                var_17 = ((((/* implicit */int) ((((/* implicit */unsigned long long int) -1839364415)) < (max((((/* implicit */unsigned long long int) -7665158474523966407LL)), (var_4)))))) < (((/* implicit */int) ((arr_7 [i_1 - 2] [i_1] [i_0 + 1]) > (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1 + 1] [i_2 - 2] [i_2 + 1])))))));
                            }
                            var_18 = ((/* implicit */_Bool) var_4);
                            var_19 ^= ((/* implicit */int) (unsigned char)255);
                            var_20 = ((/* implicit */int) ((((unsigned int) (short)31716)) <= (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_8 [i_2 + 1] [i_2] [(short)9]))))));
                            var_21 ^= arr_5 [i_0] [i_2] [i_0] [i_0];
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((unsigned short) min((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9)))))));
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (int i_6 = 1; i_6 < 17; i_6 += 4) 
        {
            {
                arr_22 [i_5] [i_6] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_5] [i_6 + 1] [(unsigned short)9] [i_5])) ? (((/* implicit */int) (_Bool)1)) : (arr_10 [17ULL] [i_6 + 1] [(unsigned char)18] [i_5])))), (((((_Bool) arr_0 [i_5])) ? (((unsigned long long int) var_11)) : ((-(18446744073709551605ULL)))))));
                var_23 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_11 [i_5] [i_5] [i_5] [i_5])), (var_14)))) && (((/* implicit */_Bool) var_1)))) ? (max((((/* implicit */unsigned long long int) 9223372036854775807LL)), (13077904743465536606ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_3 [i_5])) : (((/* implicit */int) var_0)))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */long long int) ((min((((/* implicit */int) var_9)), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)11365)) : (-526156103))))) >> (((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)-62)) : (((/* implicit */int) var_2)))))) - (192)))));
}

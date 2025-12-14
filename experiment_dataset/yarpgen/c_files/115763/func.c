/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115763
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 18; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) arr_3 [i_1])), (((((/* implicit */_Bool) arr_1 [i_1])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (arr_2 [i_2] [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) var_10)))))))));
                    var_14 = ((/* implicit */unsigned char) var_4);
                    var_15 = ((/* implicit */_Bool) max((var_15), ((((-(((((/* implicit */_Bool) 8263928861407746650ULL)) ? (((/* implicit */int) arr_6 [14LL] [14LL])) : (((/* implicit */int) (_Bool)1)))))) < (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)9219)) || (((/* implicit */_Bool) (short)-3654)))) && (((/* implicit */_Bool) arr_5 [(unsigned char)8] [(unsigned char)8])))))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (short i_3 = 2; i_3 < 20; i_3 += 3) 
        {
            arr_9 [i_3] [i_0] = ((/* implicit */unsigned int) arr_2 [i_0] [i_0]);
            /* LoopNest 3 */
            for (unsigned int i_4 = 3; i_4 < 19; i_4 += 3) 
            {
                for (short i_5 = 0; i_5 < 21; i_5 += 4) 
                {
                    for (unsigned short i_6 = 0; i_6 < 21; i_6 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) (((-(arr_3 [i_5]))) | (((/* implicit */int) arr_5 [i_5] [i_5]))))))))));
                            var_17 += ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned char)246)))) < (max((((/* implicit */unsigned long long int) var_11)), (var_0))))) ? (((/* implicit */int) max((((_Bool) var_3)), (((((/* implicit */_Bool) arr_11 [(unsigned char)13] [(unsigned char)13])) || (((/* implicit */_Bool) arr_15 [i_3] [i_5] [i_4] [i_3] [(unsigned short)18] [i_0]))))))) : (min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)15)) : (arr_3 [i_5]))), (((/* implicit */int) ((_Bool) 393777855)))))));
                        }
                    } 
                } 
            } 
            arr_17 [i_3] [i_0] = ((/* implicit */unsigned char) ((_Bool) arr_12 [i_3] [i_3] [i_0] [i_0]));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned char i_7 = 0; i_7 < 21; i_7 += 3) 
            {
                var_18 = ((/* implicit */unsigned char) var_2);
                arr_20 [i_7] [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_10);
            }
            for (unsigned int i_8 = 0; i_8 < 21; i_8 += 4) 
            {
                var_19 = ((/* implicit */long long int) min((min((((/* implicit */unsigned int) arr_15 [i_3 - 1] [i_3] [i_3 + 1] [i_3] [i_3] [i_3 - 2])), ((-(var_12))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_15 [i_8] [i_8] [i_8] [i_3] [i_0] [i_0])) : (((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1)))))))));
                var_20 = ((/* implicit */short) var_0);
                var_21 = ((((/* implicit */_Bool) (~(arr_3 [i_8])))) ? (((var_11) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)29328))) : (var_0))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_8] [i_8])) << (((((/* implicit */int) arr_8 [i_8] [i_0])) - (12545)))))));
                var_22 = ((/* implicit */unsigned char) max((((/* implicit */long long int) (unsigned short)25616)), ((-(((((/* implicit */_Bool) (unsigned short)9222)) ? (arr_4 [i_8] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)12)))))))));
            }
        }
    }
    var_23 = ((/* implicit */_Bool) var_1);
    var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) max((var_9), (((/* implicit */signed char) (_Bool)1)))))))) && (((/* implicit */_Bool) var_9))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10128
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */_Bool) max((max((min((arr_0 [i_0]), (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) arr_2 [3ULL] [i_0])))), (((/* implicit */unsigned long long int) ((var_6) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_11)))))));
                arr_4 [i_1] = ((/* implicit */_Bool) ((max(((_Bool)0), ((_Bool)1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 10052828165545110830ULL)) || (((/* implicit */_Bool) min((10052828165545110829ULL), (((/* implicit */unsigned long long int) var_14))))))))) : ((-(var_0)))));
                var_18 *= ((/* implicit */unsigned long long int) (_Bool)1);
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        {
                            var_19 |= ((/* implicit */_Bool) max((((/* implicit */int) max((arr_8 [i_1]), (arr_8 [i_0])))), ((+(((/* implicit */int) var_14))))));
                            var_20 |= ((/* implicit */unsigned long long int) ((_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (9860868851925613552ULL))));
                            arr_9 [i_0] [i_3] [i_2] [(_Bool)1] |= ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (3568458358126645186ULL)))) ? ((-(arr_3 [i_3] [i_3]))) : (((((arr_7 [2ULL] [2ULL] [2ULL] [i_1]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) ? (max((arr_3 [i_3] [i_3]), (((/* implicit */unsigned long long int) var_7)))) : (arr_3 [i_0] [i_3]))));
                            var_21 -= ((/* implicit */_Bool) (((_Bool)1) ? (3568458358126645189ULL) : (10052828165545110830ULL)));
                            arr_10 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) % (10052828165545110808ULL)));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 3) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            {
                arr_16 [i_4] |= ((/* implicit */_Bool) var_4);
                var_22 = ((/* implicit */_Bool) max((var_22), (((_Bool) ((var_7) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_4] [i_5]))) : (10052828165545110832ULL))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_6 = 3; i_6 < 18; i_6 += 3) 
    {
        for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            var_23 ^= ((/* implicit */unsigned long long int) var_2);
                            /* LoopSeq 3 */
                            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                            {
                                var_24 &= ((/* implicit */unsigned long long int) var_7);
                                arr_36 [i_8] [i_9] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_17 [i_9]), (var_8))))) ^ (((min((((/* implicit */unsigned long long int) arr_32 [i_6] [2ULL] [i_8] [(_Bool)1])), (var_10))) * (((/* implicit */unsigned long long int) ((arr_34 [i_10] [i_9] [i_8] [i_7] [i_6]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_14)))))))));
                                var_25 = ((/* implicit */unsigned long long int) min((var_25), (((unsigned long long int) (_Bool)1))));
                            }
                            /* vectorizable */
                            for (unsigned long long int i_11 = 2; i_11 < 18; i_11 += 3) 
                            {
                                var_26 = ((((/* implicit */_Bool) arr_27 [(_Bool)1] [(_Bool)1] [i_7] [i_8])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_27 [i_6 - 2] [i_6] [i_6] [i_6])))));
                                var_27 ^= ((/* implicit */_Bool) ((unsigned long long int) (_Bool)1));
                            }
                            for (unsigned long long int i_12 = 2; i_12 < 17; i_12 += 4) 
                            {
                                var_28 = arr_22 [(_Bool)1] [i_9];
                                var_29 = ((/* implicit */_Bool) min((var_29), (var_14)));
                                var_30 -= ((/* implicit */unsigned long long int) min((((((_Bool) var_11)) ? (((var_9) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6)))) : ((((_Bool)1) ? (((/* implicit */int) arr_34 [(_Bool)1] [i_7] [i_8] [i_9] [i_12])) : (((/* implicit */int) arr_23 [14ULL] [i_9] [i_12])))))), ((+(((/* implicit */int) var_13))))));
                                var_31 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_7) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (arr_39 [i_6] [i_7] [i_8] [i_9] [i_12] [i_8])))) ? (((/* implicit */int) min(((_Bool)1), (var_14)))) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_17 [i_12 + 2])) : (((/* implicit */int) (!(var_12))))));
                                var_32 *= ((/* implicit */_Bool) ((var_15) ? ((-(72057594037796864ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_32 [i_6] [i_6 - 1] [i_12] [i_12 + 1])) ^ (((/* implicit */int) var_16)))))));
                            }
                            var_33 |= (_Bool)1;
                            var_34 = ((/* implicit */_Bool) min(((+(((/* implicit */int) arr_19 [i_6] [i_6])))), (max((((/* implicit */int) var_11)), ((~(((/* implicit */int) arr_25 [i_7] [i_8]))))))));
                        }
                    } 
                } 
                arr_43 [i_6] [i_6 - 1] |= (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129648
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_17 = ((min((((/* implicit */unsigned int) min(((unsigned short)0), ((unsigned short)34196)))), (((arr_2 [i_1] [i_1] [i_0]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))))) << (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) (!(arr_1 [i_0])))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [i_0])), ((unsigned short)23258)))))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) ((max((max((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0] [i_4])), (arr_6 [i_4] [i_2] [i_2] [i_1] [i_1] [i_0]))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_15)), (arr_3 [i_0] [i_3] [i_2])))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)65521)), (arr_0 [i_1] [i_4]))))))))));
                                var_19 = ((/* implicit */_Bool) ((long long int) (_Bool)1));
                                var_20 = ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (max((arr_4 [7]), (((/* implicit */unsigned long long int) 1846546646)))))) >> (((/* implicit */int) (!(((((/* implicit */unsigned long long int) arr_8 [i_3] [i_1] [i_2] [i_4] [i_4])) != (11375067136568510444ULL)))))));
                                var_21 = ((/* implicit */signed char) arr_7 [i_0] [i_1] [i_0] [i_3] [(unsigned char)1]);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 21; i_5 += 2) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            arr_17 [i_6] [i_6] [15] [i_1] [i_0] = ((/* implicit */int) (-((~(max((((/* implicit */long long int) arr_2 [i_1] [i_5] [i_6])), (-2105262666489373430LL)))))));
                            arr_18 [i_0] = ((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_5] [i_5] [(unsigned short)14]);
                            var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) (+(((((/* implicit */long long int) ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (short)8401)))))) - (((long long int) (signed char)31)))))))));
                            arr_19 [i_0] [i_1] [i_5] [i_6] = ((/* implicit */short) (+(max((((/* implicit */unsigned int) (-(-1622876313)))), (((arr_2 [(_Bool)1] [i_1] [i_5]) + (3997935166U)))))));
                            var_23 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)8401))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((1479430299U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)-24041)))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_5] [i_1] [i_0]))) > (arr_4 [i_0])))) : (((((/* implicit */int) (unsigned char)110)) % (((/* implicit */int) (signed char)-19))))))) : (min((((/* implicit */unsigned long long int) ((arr_2 [i_0] [i_1] [i_1]) % (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))), (arr_4 [i_1])))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_7 = 4; i_7 < 18; i_7 += 1) 
                {
                    for (unsigned int i_8 = 0; i_8 < 21; i_8 += 2) 
                    {
                        for (unsigned long long int i_9 = 3; i_9 < 20; i_9 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_0] [i_1])) - (((/* implicit */int) var_16))))) != ((+(arr_2 [i_0] [i_1] [i_7])))))), (((unsigned int) ((unsigned long long int) (_Bool)1)))));
                                arr_28 [i_0] [i_1] [i_7 + 1] [i_7] [i_9 - 3] = ((/* implicit */int) (!((_Bool)1)));
                                var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) ^ ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_10 [i_0] [i_0] [i_0] [i_1] [i_0])))))) ? (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_1] [i_7] [i_8] [i_9 - 1])) ? (((/* implicit */int) (short)-20820)) : (((/* implicit */int) (short)1478)))) | (((/* implicit */int) max((arr_21 [i_1] [i_7] [i_8] [i_1]), (var_15))))))) : (((((/* implicit */_Bool) min((arr_8 [i_0] [i_1] [i_7 + 2] [i_8] [13U]), (((/* implicit */long long int) (unsigned char)118))))) ? (arr_2 [i_7] [i_1] [i_0]) : (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_16 [i_0] [i_1] [i_7] [i_8] [i_9]))))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_10 = 0; i_10 < 20; i_10 += 2) 
    {
        for (int i_11 = 0; i_11 < 20; i_11 += 2) 
        {
            for (unsigned char i_12 = 0; i_12 < 20; i_12 += 2) 
            {
                {
                    arr_37 [i_10] [i_10] [i_10] = ((/* implicit */signed char) arr_32 [i_12]);
                    arr_38 [i_10] [i_10] [i_12] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_12] [i_11] [i_10])) || (((/* implicit */_Bool) ((214765732U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)32739))))))));
                    arr_39 [i_10] [i_11] [i_10] [i_12] = ((((/* implicit */_Bool) ((arr_6 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_10] [i_11] [i_10])))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [0U] [0U] [i_12])))))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_10] [i_11])) && (((/* implicit */_Bool) arr_24 [i_10] [i_11] [i_11] [i_12]))))), ((((_Bool)0) ? (arr_8 [i_12] [(_Bool)1] [i_11] [i_11] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)42548))))))));
                }
            } 
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177280
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
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 + 1]))) - (min((((/* implicit */unsigned int) arr_2 [3U])), (arr_0 [i_1])))))) ? (((/* implicit */int) arr_2 [i_0])) : (((((/* implicit */_Bool) ((unsigned int) -499658852))) ? (((/* implicit */int) ((signed char) arr_4 [i_0]))) : (((/* implicit */int) arr_1 [i_0 + 2]))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        {
                            arr_9 [i_0] [7U] [7U] [i_2] [i_2] [i_3] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_0 [i_2 + 3])) ? (((((/* implicit */int) arr_3 [i_1] [i_1])) | (arr_5 [i_0] [i_1] [i_2 - 1] [i_0]))) : (((/* implicit */int) arr_7 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_2 + 1])))), (((((((/* implicit */_Bool) arr_7 [i_0] [i_2 - 1] [i_0] [i_2 - 1] [i_2] [i_0])) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0] [i_0 + 2] [i_0])) : (((/* implicit */int) arr_3 [i_3] [i_1])))) | ((+(((/* implicit */int) arr_7 [i_0] [i_1] [i_2 + 1] [i_1] [i_2] [i_2 + 2]))))))));
                            arr_10 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_6 [i_2 + 1] [i_2 + 1] [i_0 + 1] [i_2])) ? (((/* implicit */int) arr_6 [i_2 + 3] [i_2 + 3] [i_0 + 2] [i_2])) : (((/* implicit */int) arr_6 [i_2 + 3] [i_1] [i_0 + 1] [i_2]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_4 = 1; i_4 < 21; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */int) arr_6 [i_0 + 1] [i_0 + 1] [i_4 + 1] [i_1])) : (((((/* implicit */_Bool) 12897806738309630778ULL)) ? (((/* implicit */int) arr_12 [i_0] [i_1])) : (((/* implicit */int) arr_2 [i_1])))))) - (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_0 + 2] [i_0 + 1] [i_0] [i_4 - 1]))))))))));
                            var_20 = (+(((/* implicit */int) arr_13 [i_0 - 1] [i_1] [i_1] [i_4 - 1] [i_4])));
                            var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 + 1])) ? (((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_1] [i_4] [i_1])) ? (((/* implicit */int) (unsigned char)12)) : (((/* implicit */int) arr_3 [i_5] [i_0])))) : ((~(((/* implicit */int) arr_2 [i_1]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */short) arr_13 [i_0] [i_1] [4] [i_1] [i_4])), (arr_12 [i_4] [i_4])))))))) : ((~(((unsigned long long int) 9579919574036268361ULL)))));
                            /* LoopSeq 1 */
                            for (unsigned short i_6 = 1; i_6 < 20; i_6 += 2) 
                            {
                                var_22 = ((/* implicit */int) min((var_22), (((((/* implicit */int) ((short) arr_2 [i_4 - 1]))) - (((/* implicit */int) arr_2 [i_4 - 1]))))));
                                arr_18 [i_0] [i_1] [i_4] [i_4] [i_1] [i_4 + 1] |= ((/* implicit */unsigned int) max((((/* implicit */long long int) arr_7 [i_4] [5ULL] [i_4 + 1] [i_4] [i_4] [i_4])), (((((/* implicit */_Bool) min((6399019908203364470LL), (((/* implicit */long long int) (unsigned short)34772))))) ? ((~(8796093022207LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_0] [i_0] [i_0] [i_4] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (arr_8 [i_1]))))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 1934373610U)))) - (682856525U)))))));
    /* LoopNest 2 */
    for (int i_7 = 2; i_7 < 12; i_7 += 3) 
    {
        for (short i_8 = 1; i_8 < 12; i_8 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 3; i_9 < 9; i_9 += 3) 
                {
                    for (unsigned short i_10 = 3; i_10 < 11; i_10 += 4) 
                    {
                        {
                            arr_28 [i_8] [i_8] [i_8] = ((/* implicit */unsigned char) arr_4 [3U]);
                            var_24 += ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_26 [i_10 - 3] [i_10 - 3] [i_10] [i_10])) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)6))))) : (3612110771U))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [(unsigned short)2])))))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) min((((((/* implicit */_Bool) (-(arr_19 [i_7])))) ? (((/* implicit */int) ((_Bool) arr_2 [i_7]))) : (((/* implicit */int) arr_6 [i_7] [i_7] [i_8] [16])))), (((/* implicit */int) arr_16 [i_7] [i_7] [i_7] [i_8 + 1] [i_8] [i_8] [i_8 - 1])))))));
                arr_29 [i_8] = ((/* implicit */unsigned long long int) min((((arr_15 [i_7 - 1] [i_7 - 2] [i_8 + 1] [i_8 + 1] [i_8 + 1]) % (arr_15 [i_7 - 2] [i_7 - 2] [i_8 - 1] [i_8 + 1] [i_8 - 1]))), ((-(arr_15 [i_7 + 1] [i_7 - 1] [i_8 + 1] [i_8 + 1] [i_8 - 1])))));
                var_26 += ((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_7]))) + (-6399019908203364470LL)))) ? (((((/* implicit */_Bool) arr_20 [i_7] [i_7])) ? (((/* implicit */int) arr_23 [(_Bool)1])) : (((/* implicit */int) arr_20 [i_7] [i_8])))) : (((/* implicit */int) (!(((/* implicit */_Bool) 15614242593496095318ULL))))))) > (((/* implicit */int) (unsigned char)251)));
            }
        } 
    } 
}

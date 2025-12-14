/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157608
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
    var_10 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8)))) >= (((/* implicit */int) var_2))));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 4; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_10 [i_0 + 1] [i_1] [i_0] = ((/* implicit */unsigned char) ((((arr_9 [i_0] [(unsigned short)14] [i_2] [3ULL]) << (((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_2]))) : (arr_9 [(unsigned short)7] [(unsigned short)7] [i_2] [(short)17]))) - (190ULL))))) << (((var_7) - (3705573920476310782LL)))));
                    var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) var_5))));
                    var_12 = ((/* implicit */unsigned char) ((min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_2 - 2])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_8 [i_0]))))), (var_5))) / (((((/* implicit */_Bool) arr_4 [i_0 + 2] [i_2 - 3])) ? (var_7) : (((var_0) & (((/* implicit */long long int) ((/* implicit */int) var_2)))))))));
                    arr_11 [(unsigned char)0] [(unsigned char)0] &= var_8;
                }
            } 
        } 
        /* LoopSeq 1 */
        for (int i_3 = 0; i_3 < 23; i_3 += 4) 
        {
            var_13 = ((/* implicit */unsigned char) max((((/* implicit */int) var_8)), (((((/* implicit */int) var_9)) | ((~(((/* implicit */int) var_4))))))));
            /* LoopNest 2 */
            for (unsigned char i_4 = 2; i_4 < 21; i_4 += 2) 
            {
                for (unsigned char i_5 = 0; i_5 < 23; i_5 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_6 = 3; i_6 < 20; i_6 += 1) 
                        {
                            arr_24 [i_0] [i_3] [i_4] [i_0] [1LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_0 + 2])) ? (((((/* implicit */_Bool) arr_15 [i_0 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0 + 2]))) : (var_7))) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0 + 2])))));
                            arr_25 [i_0] [(unsigned short)13] [i_0] [i_5] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_5] [i_3] [i_6 + 2] [i_5])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0]))) : (var_7)));
                        }
                        for (unsigned char i_7 = 0; i_7 < 23; i_7 += 2) 
                        {
                            var_14 = (((((_Bool)1) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65518))))) << (((/* implicit */int) arr_3 [i_0])));
                            var_15 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((arr_14 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_3]) / (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_4])))))) > (((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_17 [i_4]))))) + (arr_19 [i_0] [i_0] [i_0] [i_4] [i_7])))));
                            var_16 = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_0)) == (arr_19 [i_4 - 1] [i_4 - 1] [i_4] [i_0] [i_4 + 1])))), (arr_14 [i_4 + 1] [i_4 - 1] [i_4] [i_0])));
                            var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_3] [i_0])) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_19 [i_5] [i_3] [i_4] [i_0] [i_7]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_4 - 1] [i_7])))))) ? (((/* implicit */int) arr_23 [i_5] [13LL] [i_4 - 1] [i_5])) : ((+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_7 [i_3] [i_7]))))))));
                            arr_28 [i_5] [i_3] [i_0] [i_5] [i_3] [i_0] [(unsigned char)8] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_15 [i_0 - 1])) : (((/* implicit */int) arr_15 [i_0 - 1]))))) ? (var_1) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [i_0 + 1])) - (((/* implicit */int) var_6))))));
                        }
                        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)239)) ? (8695610641647826718ULL) : (((/* implicit */unsigned long long int) -2147483646))))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_7)))) ? (((/* implicit */int) ((((((/* implicit */_Bool) 16ULL)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) > ((-(var_1)))))) : (((/* implicit */int) arr_23 [i_5] [i_0] [i_0] [i_0]))));
                        var_19 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_9 [i_0 + 2] [i_0 + 2] [i_0 + 1] [i_4 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_9 [i_0 + 1] [i_0 + 2] [i_0 + 1] [i_4 + 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)24)) : (((/* implicit */int) (unsigned short)10705)))))));
                        arr_29 [i_5] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (3920417465641925057ULL)));
                    }
                } 
            } 
        }
    }
}

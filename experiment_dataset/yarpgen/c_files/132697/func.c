/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132697
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
    var_12 = ((/* implicit */int) ((unsigned short) ((_Bool) var_5)));
    var_13 = ((/* implicit */unsigned int) var_1);
    var_14 = ((/* implicit */long long int) ((((((/* implicit */_Bool) max((1466261895756661770ULL), (((/* implicit */unsigned long long int) 16744448))))) ? (((((/* implicit */_Bool) var_6)) ? (var_11) : (var_2))) : (((((/* implicit */int) var_3)) + (var_11))))) >= (((/* implicit */int) var_4))));
    var_15 = max(((-(var_8))), (((/* implicit */unsigned long long int) max((var_2), (((/* implicit */int) max((var_5), (var_0))))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_16 += ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])) : (var_8))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (var_7) : (((/* implicit */int) arr_1 [i_0]))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            arr_5 [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)186))));
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((-5089289151721152472LL) / (((/* implicit */long long int) 536870911U))));
        }
        for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            arr_9 [(signed char)2] [i_2] = ((/* implicit */unsigned char) var_10);
            var_17 = ((/* implicit */long long int) max((((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_4 [i_0])))) && (((/* implicit */_Bool) var_2))))), (((((unsigned int) arr_1 [i_2])) | (((/* implicit */unsigned int) ((/* implicit */int) max(((short)(-32767 - 1)), ((short)(-32767 - 1))))))))));
            arr_10 [i_0] = ((/* implicit */short) ((arr_0 [i_0] [5LL]) + (((((/* implicit */_Bool) ((unsigned short) arr_2 [i_0]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)(-32767 - 1)))))) : (((/* implicit */int) arr_3 [(short)14] [i_2]))))));
        }
        for (signed char i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            arr_13 [i_0] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */short) (unsigned char)139)), ((short)(-32767 - 1))))), ((-(var_8)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [i_0])) < (var_7))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) - (arr_4 [i_0])))));
            var_18 = ((/* implicit */short) ((3728858967U) != (357072102U)));
            /* LoopSeq 1 */
            for (unsigned int i_4 = 1; i_4 < 23; i_4 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 24; i_5 += 3) 
                {
                    for (unsigned long long int i_6 = 1; i_6 < 22; i_6 += 4) 
                    {
                        {
                            var_19 = ((((/* implicit */_Bool) 3475930475U)) ? (333040847565872482ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [22LL] [i_6]))));
                            var_20 = ((/* implicit */unsigned int) ((unsigned long long int) ((arr_16 [i_4 - 1]) ^ (arr_16 [i_4 + 1]))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((var_10) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) arr_11 [i_0] [i_3] [i_3]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_3) ? (((/* implicit */unsigned int) arr_18 [i_0] [i_3] [i_3] [i_4 - 1])) : (arr_16 [i_0])))) ? (((/* implicit */unsigned long long int) ((var_10) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_15 [i_0] [i_3] [i_4]))))) : (max((((/* implicit */unsigned long long int) arr_15 [i_0] [i_0] [i_0])), (var_8))))))));
                arr_22 [i_0] [i_3] [i_0] |= ((/* implicit */unsigned char) arr_4 [i_3]);
            }
            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 819036821U)) ? (((/* implicit */int) (signed char)6)) : (((/* implicit */int) (short)(-32767 - 1)))))) ? (((((/* implicit */_Bool) arr_4 [(signed char)7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_21 [i_0] [i_0] [i_3] [i_3])))) : (arr_12 [i_0]))) : (max((max((((/* implicit */unsigned long long int) arr_16 [i_0])), (arr_2 [i_3]))), (((/* implicit */unsigned long long int) ((short) var_0))))))))));
        }
        arr_23 [i_0] [i_0] = ((/* implicit */unsigned char) ((arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) == (((/* implicit */long long int) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) max(((unsigned char)249), (((/* implicit */unsigned char) (signed char)-56))))) : (((/* implicit */int) ((3801048901U) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0])))))))))));
    }
}

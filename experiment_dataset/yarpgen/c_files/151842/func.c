/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151842
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
    var_12 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_10)), (((unsigned short) ((((/* implicit */int) var_0)) | (((/* implicit */int) var_0)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    var_13 = (unsigned short)1536;
                    var_14 = ((_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_7 [17] [i_0] [i_1 + 1] [i_2]))))), (((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */long long int) var_1)) : (var_11)))));
                }
                /* vectorizable */
                for (unsigned char i_3 = 4; i_3 < 19; i_3 += 2) 
                {
                    arr_13 [i_0] = ((/* implicit */_Bool) ((unsigned short) ((var_6) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_7 [i_0 - 1] [i_0] [8LL] [(unsigned char)2]))));
                    /* LoopSeq 1 */
                    for (unsigned short i_4 = 0; i_4 < 21; i_4 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_5 = 4; i_5 < 19; i_5 += 3) 
                        {
                            var_15 = ((/* implicit */unsigned short) ((unsigned int) ((arr_5 [i_1] [i_5]) << (((arr_8 [i_0]) - (17672931732634978421ULL))))));
                            var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)42195)) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)131))))))))));
                        }
                        for (unsigned short i_6 = 0; i_6 < 21; i_6 += 4) /* same iter space */
                        {
                            var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) arr_15 [i_6] [i_1] [i_6] [i_4]))));
                            arr_22 [6ULL] [i_1 + 1] [i_1 - 1] [i_1] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)8192)) | (((/* implicit */int) arr_15 [i_0] [i_3 - 3] [i_3] [(unsigned short)15]))));
                        }
                        for (unsigned short i_7 = 0; i_7 < 21; i_7 += 4) /* same iter space */
                        {
                            arr_26 [i_0] [i_1 - 1] [i_3] [16ULL] [i_4] [i_7] = ((/* implicit */int) ((36580388870282519ULL) / (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0 - 1]))));
                            arr_27 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10)))))));
                            arr_28 [i_0 - 1] [i_1] [i_1] [i_4] [i_4] [i_0] [i_1] = (~(((/* implicit */int) var_2)));
                            var_18 -= ((/* implicit */unsigned int) (+(((/* implicit */int) var_0))));
                            var_19 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_0 - 1] [i_0 - 1] [(unsigned char)4] [i_0 - 1])) || (((/* implicit */_Bool) (unsigned short)57335))));
                        }
                        arr_29 [8LL] [i_1 - 2] [i_3] [i_0] = (-(18188795303412193988ULL));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 3) 
                    {
                        for (int i_9 = 0; i_9 < 21; i_9 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_11)) : (arr_5 [i_1 + 1] [i_1]))));
                                arr_36 [i_0] [i_0] [i_3] [i_3] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)57412)) * (((/* implicit */int) (unsigned char)4))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_32 [i_0 - 1] [i_0] [4LL] [i_0 - 1] [i_0])));
                            }
                        } 
                    } 
                }
                /* LoopNest 3 */
                for (unsigned char i_10 = 3; i_10 < 20; i_10 += 2) 
                {
                    for (unsigned int i_11 = 0; i_11 < 21; i_11 += 3) 
                    {
                        for (unsigned short i_12 = 0; i_12 < 21; i_12 += 3) 
                        {
                            {
                                arr_45 [i_0] [i_1 - 1] [(unsigned short)9] [i_0] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) / (var_11)));
                                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) max((((arr_21 [(_Bool)1] [i_0 - 1]) / (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_0 - 1] [i_0 - 1] [i_1 - 1] [(unsigned short)6]))))), (max((arr_21 [6LL] [i_0 - 1]), (((/* implicit */long long int) arr_30 [i_0 - 1] [i_0 - 1] [i_1 + 1] [4])))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) var_3))));
    var_23 = ((/* implicit */unsigned long long int) min((var_9), (((/* implicit */unsigned int) var_0))));
    var_24 = ((/* implicit */_Bool) var_9);
}

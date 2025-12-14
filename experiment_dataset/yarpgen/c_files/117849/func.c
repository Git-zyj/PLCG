/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117849
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
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) var_6)) ? (0U) : (var_11))) : (((0U) & (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))) ? (var_10) : (var_11)));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    for (long long int i_3 = 1; i_3 < 22; i_3 += 4) 
                    {
                        {
                            arr_13 [i_3] [i_1] = ((/* implicit */unsigned short) arr_1 [i_0] [i_2]);
                            var_15 = ((/* implicit */unsigned short) (~((~(((((/* implicit */unsigned long long int) var_10)) ^ (arr_11 [i_0] [i_0] [i_2] [i_3] [i_2] [i_3])))))));
                        }
                    } 
                } 
                var_16 = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_13)) : (var_3)))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (0U)))) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) ((21U) == (0U))))))));
                var_17 ^= ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_1)))));
                arr_14 [i_1] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) min((arr_12 [i_0] [i_1] [i_0] [i_0]), (var_13)))) ? (min((((/* implicit */unsigned int) (unsigned short)0)), (4294967295U))) : (min((var_11), (((/* implicit */unsigned int) arr_9 [i_0] [i_0] [i_0] [i_1] [i_0])))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 6825425481168540625ULL)) ? (((/* implicit */int) (unsigned short)59921)) : (((/* implicit */int) arr_1 [i_0 - 2] [i_0 - 2])))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 2) /* same iter space */
                {
                    var_18 = ((/* implicit */unsigned char) var_5);
                    var_19 ^= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */unsigned int) var_0)) * (var_10)))) & (((((/* implicit */long long int) var_3)) % (var_9)))));
                    /* LoopSeq 1 */
                    for (int i_5 = 0; i_5 < 24; i_5 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned short i_6 = 0; i_6 < 24; i_6 += 4) 
                        {
                            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0 + 2] [i_1])) ? (var_8) : (((/* implicit */long long int) arr_10 [i_0] [i_1] [i_0 - 2] [i_0])))))));
                            arr_22 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1))))) ? (((/* implicit */unsigned int) var_3)) : (((((/* implicit */_Bool) -1986422156)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)6))) : (var_10)))));
                            arr_23 [i_6] [i_5] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) -18LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0 + 2]))) : (26LL)));
                        }
                        for (int i_7 = 0; i_7 < 24; i_7 += 4) 
                        {
                            arr_26 [i_7] [i_5] [i_4] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) (unsigned short)7)) ? (((/* implicit */long long int) 1265742856)) : (-7698787357919233739LL));
                            arr_27 [i_4] [i_5] = ((/* implicit */unsigned int) 26LL);
                        }
                        for (unsigned int i_8 = 0; i_8 < 24; i_8 += 4) /* same iter space */
                        {
                            arr_32 [i_0] [i_0] [i_0] [i_5] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) 1899758443)) ? (2399700322U) : (6U))) : (var_4)));
                            var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((((/* implicit */int) var_7)) < (((/* implicit */int) (_Bool)1)))))));
                        }
                        for (unsigned int i_9 = 0; i_9 < 24; i_9 += 4) /* same iter space */
                        {
                            var_22 = ((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_0])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_0] [i_0] [i_0])))));
                            arr_36 [i_9] [i_1] [i_1] [i_5] [i_9] = ((((/* implicit */int) arr_3 [i_0 + 1] [i_4])) | ((-(arr_9 [i_9] [i_9] [i_0] [i_9] [i_0]))));
                        }
                        arr_37 [i_0] [i_1] [i_1] = ((/* implicit */short) (~(2796664931U)));
                    }
                }
                for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 2) /* same iter space */
                {
                    var_23 = ((((/* implicit */_Bool) (+(4837195005202069787ULL)))) ? (((((/* implicit */_Bool) 6825425481168540625ULL)) ? (-191862173) : (((/* implicit */int) (unsigned char)220)))) : ((~(((/* implicit */int) var_1)))));
                    arr_41 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_9 [i_0 - 2] [i_0 - 2] [i_0] [i_0] [i_0 - 2])))) ? (max((((/* implicit */long long int) (_Bool)1)), (-8273747406772949316LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (arr_35 [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_0] [i_0 + 1]) : (arr_35 [i_0 - 1] [i_0] [i_0] [i_0] [i_0] [i_0 - 2]))))));
                }
            }
        } 
    } 
}

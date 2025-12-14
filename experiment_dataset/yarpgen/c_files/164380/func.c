/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164380
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
    var_14 ^= ((/* implicit */unsigned char) var_1);
    var_15 = ((/* implicit */_Bool) (unsigned short)0);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) -276712558))));
                var_17 = ((/* implicit */unsigned int) ((int) (+(4071765511U))));
                var_18 = ((/* implicit */long long int) var_6);
                /* LoopNest 2 */
                for (short i_3 = 0; i_3 < 21; i_3 += 2) 
                {
                    for (long long int i_4 = 0; i_4 < 21; i_4 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */int) var_13)) & (1813263921))))));
                            arr_14 [i_0 - 2] [i_0] [(unsigned char)19] [6ULL] [i_1] = ((/* implicit */unsigned long long int) ((3503090011U) > (arr_1 [i_0 - 1])));
                            var_20 = ((/* implicit */signed char) var_4);
                        }
                    } 
                } 
                arr_15 [i_1] [10ULL] [10ULL] [10ULL] = ((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) arr_10 [i_1 - 1] [i_1 - 1] [i_1 + 1] [6ULL]))));
            }
            for (unsigned long long int i_5 = 2; i_5 < 19; i_5 += 1) 
            {
                arr_18 [19ULL] [i_1] = ((/* implicit */unsigned int) arr_5 [i_5 + 1] [(unsigned char)0] [i_5 + 2]);
                arr_19 [i_0 + 1] [i_1] [i_1] = ((/* implicit */unsigned long long int) -596352893);
            }
            /* vectorizable */
            for (unsigned char i_6 = 2; i_6 < 19; i_6 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_7 = 2; i_7 < 19; i_7 += 1) 
                {
                    arr_24 [i_1] [i_1 + 1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? ((((_Bool)1) ? (223201784U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) : (((791877285U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_1] [i_6] [i_7 + 1])))))));
                    /* LoopSeq 2 */
                    for (short i_8 = 0; i_8 < 21; i_8 += 3) 
                    {
                        var_21 = ((/* implicit */unsigned char) ((((unsigned long long int) -8211131459226957939LL)) >> (((3503089997U) - (3503089988U)))));
                        var_22 = ((/* implicit */unsigned long long int) arr_13 [i_6 - 2] [i_1] [i_6 - 1] [i_6 - 2] [i_8]);
                        var_23 = ((/* implicit */unsigned long long int) 1558903941U);
                    }
                    for (int i_9 = 3; i_9 < 17; i_9 += 2) 
                    {
                        var_24 = ((/* implicit */unsigned int) ((int) (signed char)122));
                        var_25 = ((/* implicit */unsigned int) var_3);
                        var_26 ^= ((/* implicit */short) (~(((/* implicit */int) ((signed char) 223201783U)))));
                    }
                    var_27 *= var_2;
                }
                for (unsigned short i_10 = 2; i_10 < 19; i_10 += 3) 
                {
                    /* LoopSeq 1 */
                    for (int i_11 = 2; i_11 < 19; i_11 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned char) (+(((var_6) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                        var_29 = ((/* implicit */long long int) (unsigned char)241);
                    }
                    var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2058898099)) ? (((((/* implicit */_Bool) arr_0 [i_0 + 4])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_4))));
                    var_31 = ((/* implicit */unsigned char) ((signed char) 2736063329U));
                    var_32 = ((/* implicit */int) max((var_32), (2058898099)));
                }
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 21; i_12 += 1) 
                {
                    for (signed char i_13 = 3; i_13 < 19; i_13 += 2) 
                    {
                        {
                            var_33 = ((/* implicit */unsigned char) ((9437725463842184518ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                            var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) ((int) 503775921)))));
                        }
                    } 
                } 
            }
            var_35 ^= ((/* implicit */unsigned char) var_2);
        }
        var_36 = ((/* implicit */signed char) -2093928988975913855LL);
    }
    var_37 = ((/* implicit */unsigned int) min((((/* implicit */int) var_1)), ((~(((/* implicit */int) ((var_12) >= (((/* implicit */unsigned long long int) 8211131459226957939LL)))))))));
}

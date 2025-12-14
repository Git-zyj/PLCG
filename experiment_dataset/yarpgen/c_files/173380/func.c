/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173380
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */long long int) min((var_15), (((((/* implicit */_Bool) var_6)) ? ((~((((_Bool)1) ? (((/* implicit */long long int) arr_3 [0])) : (arr_1 [i_0]))))) : (((((/* implicit */_Bool) arr_3 [4ULL])) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) (_Bool)0)) : (arr_3 [(signed char)4]))))))))));
                var_16 ^= ((/* implicit */int) arr_1 [i_0]);
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 3; i_3 < 12; i_3 += 4) 
                    {
                        {
                            arr_10 [i_0] [i_1] = arr_4 [i_0];
                            var_17 = ((/* implicit */_Bool) arr_5 [i_1] [i_1]);
                            var_18 = ((/* implicit */unsigned int) arr_1 [i_3]);
                            var_19 = ((/* implicit */_Bool) ((arr_2 [i_1 - 1] [i_1] [i_1]) ? ((+(((/* implicit */int) arr_2 [i_1 + 2] [i_1] [i_1])))) : ((+(((/* implicit */int) arr_2 [i_1 + 2] [i_1] [i_1]))))));
                        }
                    } 
                } 
                var_20 &= max((((/* implicit */signed char) ((_Bool) ((((/* implicit */int) (signed char)40)) ^ (((/* implicit */int) arr_6 [8U] [i_1] [8U] [i_0])))))), (arr_6 [2] [i_1] [2] [2]));
                var_21 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) 3119977415U))) ? (((unsigned int) (~(var_1)))) : (max((1174989882U), (((/* implicit */unsigned int) arr_7 [i_1] [i_1] [(signed char)2] [i_1]))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (int i_4 = 0; i_4 < 20; i_4 += 3) 
    {
        /* LoopSeq 3 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_22 ^= ((/* implicit */signed char) ((((_Bool) arr_12 [i_4])) ? (((/* implicit */int) arr_15 [i_4] [i_4])) : (min((arr_14 [i_4]), (((/* implicit */int) arr_15 [i_4] [i_4]))))));
            var_23 = (~(((((/* implicit */_Bool) ((long long int) arr_15 [i_5] [i_4]))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)(-127 - 1))) & (67076096)))) : (max((3119977420U), (((/* implicit */unsigned int) (unsigned char)120)))))));
        }
        for (unsigned short i_6 = 2; i_6 < 19; i_6 += 4) 
        {
            arr_19 [i_4] = arr_14 [i_4];
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_7 = 1; i_7 < 18; i_7 += 1) 
            {
                var_24 &= ((/* implicit */int) ((long long int) (-(((/* implicit */int) arr_18 [i_4] [(_Bool)1] [i_4])))));
                /* LoopNest 2 */
                for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                {
                    for (short i_9 = 0; i_9 < 20; i_9 += 4) 
                    {
                        {
                            var_25 ^= ((/* implicit */unsigned long long int) (_Bool)1);
                            var_26 ^= ((/* implicit */_Bool) 2311660875038805968ULL);
                            var_27 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_15 [i_6] [16U]))));
                        }
                    } 
                } 
            }
            for (unsigned char i_10 = 0; i_10 < 20; i_10 += 1) 
            {
                var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) arr_18 [i_4] [i_4] [i_4]))));
                arr_31 [i_10] = ((/* implicit */unsigned long long int) arr_23 [i_10] [i_10] [i_10] [i_10]);
            }
        }
        for (signed char i_11 = 0; i_11 < 20; i_11 += 2) 
        {
            var_29 |= ((/* implicit */signed char) (~(((arr_16 [i_4] [i_4] [i_11]) ? (((/* implicit */int) arr_16 [i_4] [i_4] [i_4])) : (((/* implicit */int) arr_16 [i_11] [i_4] [i_4]))))));
            var_30 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_25 [(unsigned char)4] [i_11] [i_11] [i_4])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_13 [i_4])))), (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((short) arr_25 [i_4] [i_4] [i_4] [i_4]))) : (((/* implicit */int) ((_Bool) (signed char)(-127 - 1))))));
        }
        /* LoopSeq 1 */
        for (signed char i_12 = 0; i_12 < 20; i_12 += 2) 
        {
            var_31 = ((((/* implicit */_Bool) min((arr_29 [i_4] [i_12] [i_4] [i_4]), (((/* implicit */int) var_5))))) ? (arr_26 [i_4]) : (5292677361912203367LL));
            var_32 = ((/* implicit */int) arr_30 [i_12] [i_12] [8] [i_12]);
            arr_37 [i_4] [i_4] [i_4] = ((/* implicit */short) (~(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3119977427U)) ? (5292677361912203367LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)42)))))), (max((5629581482792823028ULL), (((/* implicit */unsigned long long int) arr_24 [i_4] [i_4] [i_4] [i_4] [i_4]))))))));
        }
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100571
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
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((-1675859072) | (((/* implicit */int) (unsigned short)34698))));
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_10 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_5)) ? (-1675859048) : (((/* implicit */int) arr_5 [i_0] [i_1])))) + (2147483647))) >> (((((/* implicit */int) arr_4 [i_0 - 1])) - (42757)))));
            arr_6 [10] = ((/* implicit */signed char) ((((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 1])) % (((/* implicit */int) (unsigned char)22))));
            arr_7 [i_1] [i_1] [i_0 - 2] &= ((/* implicit */_Bool) ((var_8) & (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_0] [i_1])) | (arr_1 [i_0 - 2]))))));
        }
        for (long long int i_2 = 4; i_2 < 23; i_2 += 4) 
        {
            var_11 -= ((/* implicit */_Bool) ((int) arr_1 [i_0 + 1]));
            var_12 *= ((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_2 - 1] [i_2 - 4] [i_0 + 1]))));
        }
        for (int i_3 = 0; i_3 < 24; i_3 += 4) 
        {
            var_13 *= ((/* implicit */long long int) arr_5 [20ULL] [i_0]);
            arr_14 [i_0] [i_0 - 1] [i_3] = (!(((/* implicit */_Bool) arr_12 [i_0 - 2] [i_0 - 1])));
            var_14 *= ((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0 + 1] [i_0 - 2])) / (arr_13 [i_0])));
        }
        for (signed char i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            /* LoopNest 2 */
            for (long long int i_5 = 3; i_5 < 20; i_5 += 2) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 4) 
                {
                    {
                        arr_21 [i_4] [(unsigned short)1] [i_4] [i_0] &= ((/* implicit */int) arr_20 [(short)19] [18ULL] [0ULL] [i_5 + 4]);
                        var_15 += (((((_Bool)1) ? (((/* implicit */unsigned long long int) 1675859058)) : (3298308641744211952ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0 - 1] [i_5 + 1]))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                /* LoopSeq 2 */
                for (signed char i_8 = 1; i_8 < 21; i_8 += 2) 
                {
                    var_16 = ((/* implicit */unsigned long long int) (~(arr_15 [(unsigned char)19])));
                    var_17 = ((/* implicit */signed char) -1675859050);
                }
                for (signed char i_9 = 0; i_9 < 24; i_9 += 1) 
                {
                    var_18 &= ((/* implicit */unsigned char) arr_5 [i_0] [i_9]);
                    var_19 = ((/* implicit */unsigned int) (unsigned short)46182);
                    var_20 = ((/* implicit */unsigned long long int) ((unsigned char) ((_Bool) arr_10 [i_9])));
                }
                arr_30 [i_0] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1675859072)) ? (arr_13 [i_0 + 1]) : (((/* implicit */int) (unsigned short)19332))));
            }
            for (signed char i_10 = 2; i_10 < 21; i_10 += 3) 
            {
                var_21 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)32))));
                var_22 = ((/* implicit */_Bool) ((unsigned char) 15360U));
                /* LoopNest 2 */
                for (unsigned short i_11 = 0; i_11 < 24; i_11 += 1) 
                {
                    for (unsigned long long int i_12 = 1; i_12 < 23; i_12 += 3) 
                    {
                        {
                            arr_41 [i_12] [i_11] [i_11] [i_10 - 1] [5LL] [i_4] [i_0] = ((/* implicit */unsigned short) 11363078073215044693ULL);
                            var_23 = ((/* implicit */int) (-(((((/* implicit */_Bool) -1675859067)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
                        }
                    } 
                } 
            }
            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_0 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [i_0 - 2]))));
        }
        var_25 = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 1675859081)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)122))))));
        var_26 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (arr_0 [i_0 - 2]) : (arr_0 [i_0 - 2])));
        /* LoopNest 2 */
        for (signed char i_13 = 1; i_13 < 22; i_13 += 4) 
        {
            for (unsigned long long int i_14 = 1; i_14 < 20; i_14 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_15 = 2; i_15 < 21; i_15 += 4) 
                    {
                        for (unsigned char i_16 = 0; i_16 < 24; i_16 += 4) 
                        {
                            {
                                var_27 -= ((/* implicit */unsigned long long int) (unsigned short)46194);
                                arr_55 [i_13] [i_13] [i_13 + 2] [i_13] [i_13 + 2] [i_13] [12] = ((/* implicit */unsigned short) ((var_3) != ((-2147483647 - 1))));
                            }
                        } 
                    } 
                    var_28 *= ((/* implicit */unsigned char) (((+(((/* implicit */int) var_0)))) + ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (unsigned int i_17 = 4; i_17 < 20; i_17 += 2) 
    {
        for (long long int i_18 = 2; i_18 < 21; i_18 += 4) 
        {
            for (_Bool i_19 = 0; i_19 < 0; i_19 += 1) 
            {
                {
                    var_29 = ((/* implicit */signed char) max((((/* implicit */long long int) arr_24 [17ULL] [i_18])), ((~(arr_51 [i_18 + 1] [i_19])))));
                    /* LoopNest 2 */
                    for (signed char i_20 = 1; i_20 < 21; i_20 += 4) 
                    {
                        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                        {
                            {
                                arr_69 [i_17] [i_17] [i_19 + 1] [i_20] [i_19] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_59 [i_17 - 1] [i_17] [i_19 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((unsigned long long int) -147638905))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) arr_43 [0ULL] [(unsigned char)1])) : (((/* implicit */int) (signed char)126))))) ? (((/* implicit */unsigned long long int) -7387088741130421369LL)) : (arr_8 [i_17])))));
                                var_30 = ((/* implicit */signed char) (!((_Bool)1)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}

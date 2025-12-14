/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103133
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
    var_17 += ((/* implicit */_Bool) var_0);
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 24; i_0 += 2) 
    {
        for (signed char i_1 = 4; i_1 < 22; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 24; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 24; i_3 += 2) 
                    {
                        for (int i_4 = 1; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_18 |= ((/* implicit */signed char) var_2);
                                var_19 -= ((/* implicit */unsigned char) max((arr_8 [2U] [i_0] [i_1 + 1]), (((/* implicit */unsigned long long int) ((unsigned short) min((((/* implicit */signed char) var_11)), (var_4)))))));
                                var_20 -= ((/* implicit */short) max((((/* implicit */long long int) (signed char)17)), (arr_4 [i_0] [i_0])));
                                var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) max((min((((/* implicit */unsigned char) var_4)), (arr_0 [i_2]))), (((/* implicit */unsigned char) ((signed char) (short)17953)))))) | (((((/* implicit */int) (signed char)-115)) * (((/* implicit */int) (unsigned short)50735))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 2; i_5 < 24; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 2; i_6 < 23; i_6 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */short) ((arr_11 [i_6] [i_1] [i_1]) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)114))));
                                var_23 += ((/* implicit */short) arr_9 [i_2 + 1] [(signed char)8] [i_0 + 1]);
                                var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_12 [i_0] [i_0 - 1] [i_1] [i_0 - 1] [i_1] [i_6]))));
                            }
                        } 
                    } 
                    var_25 ^= ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) arr_15 [i_1 - 2] [i_0] [i_2 + 1]))) ^ (((/* implicit */int) (!(arr_15 [i_1 + 1] [i_0] [i_1 + 2]))))));
                    /* LoopNest 2 */
                    for (short i_7 = 2; i_7 < 24; i_7 += 4) 
                    {
                        for (unsigned long long int i_8 = 1; i_8 < 22; i_8 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned long long int) (signed char)(-127 - 1));
                                arr_22 [i_1] [i_7] [i_8] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((unsigned short) (~(var_14))))), (((unsigned int) max((((/* implicit */unsigned long long int) var_15)), (32768ULL))))));
                                var_27 &= ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_5), (((/* implicit */signed char) arr_15 [i_7] [i_7] [i_0]))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) (short)4032)) ? (8646911284551352320ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_8]))))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_21 [22ULL] [i_1] [i_2] [i_2] [i_7] [i_7] [i_8 + 1])) : (((/* implicit */int) arr_12 [16ULL] [16ULL] [16ULL] [16ULL] [i_7] [i_7])))))))) : (((/* implicit */int) (_Bool)0))));
                                var_28 = ((/* implicit */signed char) arr_10 [i_8 + 3] [i_7 - 1] [i_0] [i_0]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_9 = 1; i_9 < 23; i_9 += 1) 
                    {
                        for (unsigned char i_10 = 1; i_10 < 22; i_10 += 4) 
                        {
                            {
                                arr_30 [i_0] [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_1] = ((/* implicit */long long int) arr_29 [i_0 + 1] [i_0 + 1] [i_1] [i_0 + 1] [i_10 + 1]);
                                var_29 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_8) % (((/* implicit */int) var_16))))) ? (((/* implicit */int) min((var_4), (arr_12 [i_0] [i_0] [i_0 - 1] [i_0] [i_1] [i_0 - 2])))) : (((/* implicit */int) (signed char)39))))) * (((((((/* implicit */int) arr_27 [i_1] [i_2])) < (((/* implicit */int) arr_1 [i_1 - 3] [i_1 - 3])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_12) <= (((/* implicit */int) arr_7 [(short)2] [i_1 - 2] [i_1 - 2] [i_9])))))) : (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned long long int) var_12)) : (var_9)))))));
                                var_30 ^= var_9;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_11 = 2; i_11 < 16; i_11 += 1) 
    {
        for (signed char i_12 = 1; i_12 < 16; i_12 += 1) 
        {
            {
                var_31 = ((/* implicit */unsigned char) ((((((/* implicit */int) (short)29950)) | (((/* implicit */int) (_Bool)1)))) >> (((var_10) - (753866683)))));
                /* LoopNest 2 */
                for (int i_13 = 2; i_13 < 16; i_13 += 4) 
                {
                    for (unsigned long long int i_14 = 4; i_14 < 16; i_14 += 3) 
                    {
                        {
                            var_32 = ((/* implicit */signed char) (+(((/* implicit */int) arr_25 [i_11]))));
                            var_33 = max((((((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_11 - 1] [i_12] [i_13 + 1] [i_14]))))) ? (((((/* implicit */int) var_16)) + (var_15))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-98))))))), (((/* implicit */int) ((short) (~(var_0))))));
                            var_34 = ((signed char) ((((/* implicit */_Bool) arr_12 [i_12 - 1] [i_14 - 2] [i_13 - 2] [i_11] [i_12] [i_13 + 1])) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (signed char)1))));
                        }
                    } 
                } 
                var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) ((signed char) max((arr_0 [i_11 - 1]), (arr_0 [i_12 + 1])))))));
                var_36 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_18 [i_12])))))));
            }
        } 
    } 
}

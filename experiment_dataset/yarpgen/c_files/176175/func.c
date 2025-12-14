/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176175
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
    for (signed char i_0 = 4; i_0 < 15; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned int) max(((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2343))) : (10897744977352906369ULL))), (((/* implicit */unsigned long long int) ((9223372036854775807LL) << (((((/* implicit */int) (unsigned short)57449)) - (57449))))))));
                var_17 = arr_2 [i_0] [i_1] [i_0];
                var_18 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (signed char)8)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1 - 2] [i_0 - 1])) ? (arr_1 [i_1 - 2] [i_0 - 1]) : (((/* implicit */int) (unsigned short)57449)))))));
                var_19 = ((/* implicit */unsigned short) max((min((((((/* implicit */_Bool) 4030271187U)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (signed char)-1)))), (((/* implicit */int) (unsigned char)54)))), (1965440536)));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        {
                            arr_8 [i_0] [i_0 - 1] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 15993066010545395336ULL)) ? (((/* implicit */int) (unsigned short)65530)) : (((/* implicit */int) (unsigned char)3))))), (arr_6 [i_0] [i_1 - 1] [i_3])))) ? (8370009565014414408ULL) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)2)))), (((/* implicit */int) max(((_Bool)1), ((_Bool)1)))))))));
                            var_20 = ((/* implicit */signed char) min((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-1)) ? (1477059111) : (((/* implicit */int) var_8))))), (min((((/* implicit */unsigned int) arr_7 [i_3] [i_3] [2ULL] [2ULL] [2ULL] [2ULL])), (985921226U))))), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)126)) / (((/* implicit */int) (unsigned char)53)))))));
                            /* LoopSeq 3 */
                            for (long long int i_4 = 0; i_4 < 17; i_4 += 2) /* same iter space */
                            {
                                var_21 ^= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)65529)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)228))))) : (max((var_0), (((/* implicit */unsigned long long int) (_Bool)1)))))), (12135719211309024305ULL)));
                                var_22 = ((/* implicit */unsigned short) max((2251250057871360ULL), (5920317789515281979ULL)));
                                var_23 ^= ((/* implicit */int) min((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)117)) : (15)))), (((((/* implicit */_Bool) max((6), (((/* implicit */int) (unsigned short)22066))))) ? (min((18444492823651680245ULL), (((/* implicit */unsigned long long int) arr_3 [i_1] [i_4])))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65519)) * (((/* implicit */int) (signed char)94)))))))));
                            }
                            /* vectorizable */
                            for (long long int i_5 = 0; i_5 < 17; i_5 += 2) /* same iter space */
                            {
                                var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -37)) ? (((/* implicit */int) (unsigned short)6)) : (16)));
                                var_25 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (short)17739))));
                                var_26 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)2377)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (0U)))) ? (((((/* implicit */_Bool) (unsigned short)10188)) ? (((/* implicit */int) (unsigned char)235)) : (((/* implicit */int) arr_11 [i_5] [(unsigned short)16] [i_3] [i_2] [i_2] [i_1] [i_0])))) : (((/* implicit */int) arr_11 [i_1 - 2] [i_0] [i_1 + 1] [(short)8] [i_1 - 2] [i_0 + 1] [i_0]))));
                                var_27 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)65528))));
                                var_28 = ((/* implicit */int) min((var_28), (((((/* implicit */_Bool) arr_11 [i_0 + 2] [i_1] [i_1] [(unsigned short)6] [i_1 - 2] [i_1] [i_1 - 1])) ? (((/* implicit */int) arr_11 [i_0 + 2] [14] [i_1] [(short)8] [9U] [i_1] [i_1 - 1])) : (((/* implicit */int) arr_11 [i_0 + 2] [i_1] [i_1] [i_1] [i_1 - 2] [(unsigned char)1] [i_1 - 1]))))));
                            }
                            for (long long int i_6 = 0; i_6 < 17; i_6 += 2) /* same iter space */
                            {
                                var_29 = ((/* implicit */unsigned short) max((max((((((/* implicit */int) (signed char)2)) / (((/* implicit */int) var_7)))), (((/* implicit */int) arr_9 [(signed char)4] [i_0] [i_2] [i_0] [i_0 + 2])))), ((+(((/* implicit */int) (signed char)51))))));
                                var_30 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 3244625356689621351ULL)) ? (((/* implicit */int) (unsigned char)30)) : (((/* implicit */int) arr_5 [i_0] [2] [i_0 - 2])))) << (((((((/* implicit */_Bool) arr_7 [i_6] [i_3] [i_2] [10] [i_1 - 1] [i_0 - 1])) ? (((/* implicit */unsigned long long int) -28)) : (arr_10 [i_0] [i_1] [i_0 - 4] [(unsigned short)4] [i_0] [i_1] [i_1]))) - (18446744073709551579ULL)))));
                                var_31 ^= ((/* implicit */unsigned int) (_Bool)1);
                            }
                            var_32 = ((/* implicit */int) (-(min((0ULL), (((/* implicit */unsigned long long int) 2357137671295737587LL))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_33 &= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (-(var_2)))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (2129545036199954623LL))) : (((/* implicit */long long int) max((((/* implicit */int) (_Bool)0)), (33)))))), (((/* implicit */long long int) var_1))));
}

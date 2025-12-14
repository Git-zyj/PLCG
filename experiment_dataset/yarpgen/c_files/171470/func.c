/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171470
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_16 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) || (((/* implicit */_Bool) 1099444518912ULL)))) ? (((((/* implicit */int) (unsigned char)255)) - (((((/* implicit */int) (unsigned char)0)) - (((/* implicit */int) var_8)))))) : (((/* implicit */int) var_6))));
        /* LoopSeq 1 */
        for (signed char i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            var_17 &= ((/* implicit */unsigned short) (((-(((/* implicit */int) var_9)))) % (((((/* implicit */_Bool) arr_1 [i_0] [i_1 + 4])) ? (((/* implicit */int) arr_1 [i_0] [i_1 - 1])) : (((/* implicit */int) var_13))))));
            var_18 -= ((/* implicit */_Bool) var_1);
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                for (long long int i_3 = 1; i_3 < 13; i_3 += 2) 
                {
                    {
                        var_19 ^= max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)26077)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (unsigned char)0))))), (12753367724910186128ULL));
                        var_20 &= ((/* implicit */short) (unsigned char)255);
                        /* LoopSeq 4 */
                        for (long long int i_4 = 2; i_4 < 13; i_4 += 1) /* same iter space */
                        {
                            arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (((_Bool)1) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0] [i_0])) / (((/* implicit */int) (unsigned char)1))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_13 [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [0LL]))) - (var_12)))))))));
                            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_4 [i_4] [i_2]), (((/* implicit */int) var_11))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_4] [i_2]))))) : ((+(((/* implicit */int) var_10))))))) ? (((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)1)) && (var_10)))) + (((((/* implicit */_Bool) (unsigned short)51522)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)(-127 - 1))))))) : (((/* implicit */int) var_0))));
                            var_22 ^= ((/* implicit */short) (((+((+(((/* implicit */int) (_Bool)1)))))) ^ ((-(((/* implicit */int) max((((/* implicit */signed char) var_5)), (var_14))))))));
                        }
                        for (long long int i_5 = 2; i_5 < 13; i_5 += 1) /* same iter space */
                        {
                            var_23 = ((/* implicit */unsigned long long int) max((var_23), (5410569109223709624ULL)));
                            var_24 = ((/* implicit */signed char) ((var_3) + (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))));
                            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? (max((arr_4 [i_0] [i_0]), (((/* implicit */int) (unsigned char)255)))) : ((+(((/* implicit */int) arr_3 [i_2] [i_0])))))) : (((/* implicit */int) (short)-2048))));
                        }
                        for (long long int i_6 = 2; i_6 < 13; i_6 += 1) /* same iter space */
                        {
                            var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) min(((+(((/* implicit */int) (unsigned char)0)))), (((((/* implicit */_Bool) arr_13 [i_0])) ? (((/* implicit */int) arr_13 [i_0])) : (((/* implicit */int) var_13))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                            var_27 = ((/* implicit */unsigned char) (!(((((((/* implicit */int) arr_2 [i_3])) * (((/* implicit */int) var_9)))) != ((-(((/* implicit */int) var_0))))))));
                        }
                        for (long long int i_7 = 2; i_7 < 13; i_7 += 1) /* same iter space */
                        {
                            arr_22 [i_2] [i_0] [i_2] [4] [i_3 + 1] [i_7] [i_2] &= ((/* implicit */long long int) (short)494);
                            arr_23 [i_7] [i_1] [i_1] [i_3] [i_7] = ((/* implicit */signed char) arr_8 [i_0]);
                            var_28 = ((/* implicit */short) var_13);
                        }
                        var_29 = ((/* implicit */short) (-(((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
        }
    }
    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 22; i_9 += 2) 
        {
            for (signed char i_10 = 3; i_10 < 19; i_10 += 2) 
            {
                {
                    var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)32767)) ? (max((((/* implicit */int) ((var_1) == (((/* implicit */int) arr_28 [i_10] [i_9] [i_8]))))), (((((/* implicit */int) var_15)) * (((/* implicit */int) (signed char)1)))))) : ((+((~(((/* implicit */int) var_14))))))));
                    var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) var_5))));
                }
            } 
        } 
        var_32 = ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) / (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) arr_27 [i_8 - 1] [i_8])) ? (var_12) : (arr_27 [i_8 - 1] [i_8]))) : (((var_5) ? (arr_27 [i_8 - 1] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))));
        var_33 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned short) arr_27 [i_8 - 1] [i_8])))));
        var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) ((arr_27 [i_8] [(unsigned short)10]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))))))))));
    }
    var_35 &= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)65))));
    var_36 = ((/* implicit */int) ((((/* implicit */_Bool) (((-(((/* implicit */int) (unsigned char)0)))) - (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5))))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)87)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) : (var_3)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)214), (((/* implicit */unsigned char) var_13)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) * (var_12)))))));
}

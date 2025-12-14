/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178850
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
    var_15 = ((1740208262) >> ((((~(((/* implicit */int) (_Bool)1)))) + (26))));
    var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) var_6))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))));
        var_18 |= ((((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (var_7)))) != ((+(((/* implicit */int) (_Bool)1)))));
    }
    for (long long int i_1 = 2; i_1 < 19; i_1 += 4) 
    {
        /* LoopSeq 3 */
        for (int i_2 = 0; i_2 < 20; i_2 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) 
            {
                var_19 = ((/* implicit */unsigned short) (((~(arr_9 [i_1 - 2] [i_1 - 1] [i_1 - 1]))) <= ((~(((((/* implicit */_Bool) (unsigned char)18)) ? (-6440680941070141680LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_4 = 3; i_4 < 19; i_4 += 4) 
                {
                    arr_16 [(unsigned short)10] [i_2] [(unsigned char)4] [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_2))))));
                    var_20 |= ((/* implicit */long long int) ((unsigned long long int) arr_9 [i_4 - 1] [i_2] [i_1 + 1]));
                    var_21 |= ((/* implicit */long long int) (short)14195);
                }
                var_22 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1 - 2] [i_1 - 2] [i_3]))) | (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_2 [i_2]), (((/* implicit */unsigned short) (_Bool)1)))))) : (((((/* implicit */_Bool) 2220297593077026028LL)) ? (arr_5 [i_1 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))));
                arr_17 [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) ((((_Bool) 1125899873288192LL)) ? (((/* implicit */int) ((signed char) arr_11 [2U] [i_2] [i_3]))) : (((((/* implicit */int) (unsigned char)161)) >> (((((var_12) & (arr_7 [(_Bool)1] [i_2]))) - (652064325708901LL)))))));
                var_23 ^= ((/* implicit */short) var_6);
            }
            var_24 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (arr_7 [i_1] [i_1]))) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned char)12)))))))));
            var_25 -= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1084))) ^ (1163576140U)));
        }
        for (int i_5 = 0; i_5 < 20; i_5 += 4) /* same iter space */
        {
            var_26 ^= ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */int) (unsigned char)94)) >= (((/* implicit */int) arr_6 [i_1 + 1] [i_1 - 1])))));
            var_27 = ((/* implicit */signed char) arr_11 [i_1 - 1] [i_1 + 1] [i_1 - 1]);
            arr_20 [i_1 - 2] [i_1 - 2] [i_5] = ((/* implicit */long long int) (~((~(((unsigned int) (signed char)-55))))));
            arr_21 [i_1] = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_12 [i_1] [i_1 - 2] [i_1] [i_1])) ? (72057044282114048LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1])))))));
        }
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            var_28 = ((/* implicit */unsigned char) max((((int) arr_6 [i_6 - 1] [i_1 - 2])), (((/* implicit */int) max(((unsigned char)19), (((/* implicit */unsigned char) arr_6 [i_6 - 1] [i_1 - 2])))))));
            var_29 = ((/* implicit */_Bool) (((-(((/* implicit */int) var_0)))) ^ (((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_6] [i_6])) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) var_10)), (var_11)))))))));
            arr_25 [i_1] [i_6] &= ((/* implicit */short) max((((/* implicit */unsigned short) ((signed char) (!(((/* implicit */_Bool) arr_22 [i_1])))))), ((unsigned short)0)));
        }
        arr_26 [i_1] [i_1] = ((/* implicit */short) ((_Bool) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1 + 1] [i_1 + 1] [(_Bool)1] [i_1]))) >= (var_13)))))));
        var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned char)255)) ? (4261412864U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)887)))))))) ? (((((/* implicit */_Bool) var_1)) ? (min((var_1), (((/* implicit */unsigned long long int) arr_4 [i_1])))) : (16169111778629479679ULL))) : (2277632295080071954ULL))))));
        arr_27 [i_1] [i_1] = ((/* implicit */unsigned char) (signed char)-118);
        var_31 = ((long long int) (+(((var_9) >> (((/* implicit */int) var_5))))));
    }
    for (unsigned char i_7 = 0; i_7 < 20; i_7 += 4) 
    {
        var_32 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(max((var_12), (((/* implicit */long long int) var_2))))))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 16169111778629479679ULL)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (short)-14675)))))) : (max((((/* implicit */int) arr_2 [i_7])), (((((/* implicit */int) var_7)) & (((/* implicit */int) arr_22 [i_7]))))))));
        arr_30 [(unsigned char)13] = ((/* implicit */int) ((((/* implicit */_Bool) ((int) ((unsigned short) var_7)))) ? (max((((/* implicit */unsigned long long int) (_Bool)1)), (((unsigned long long int) (signed char)127)))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_7] [i_7] [i_7]))) & (arr_14 [i_7] [i_7] [i_7] [i_7]))))));
    }
    for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 4) 
    {
        /* LoopSeq 2 */
        for (signed char i_9 = 0; i_9 < 21; i_9 += 4) 
        {
            arr_37 [i_8] [i_9] [i_8] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_34 [i_8] [i_8])) ? (((/* implicit */int) (unsigned short)61319)) : (((/* implicit */int) arr_34 [i_8] [i_9])))) & (((((/* implicit */int) arr_0 [i_8])) << (((((/* implicit */int) var_7)) + (105)))))));
            arr_38 [9ULL] = ((/* implicit */short) ((unsigned long long int) ((min((((/* implicit */long long int) arr_1 [i_8] [i_9])), (var_12))) / (((/* implicit */long long int) ((/* implicit */int) var_0))))));
            var_33 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((short) arr_34 [i_9] [(_Bool)1]))), (((18446744073709551615ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_9] [i_9])))))));
            /* LoopNest 2 */
            for (unsigned char i_10 = 4; i_10 < 17; i_10 += 4) 
            {
                for (short i_11 = 0; i_11 < 21; i_11 += 4) 
                {
                    {
                        arr_46 [i_8] [i_9] [i_8] [i_11] = ((/* implicit */unsigned char) ((unsigned short) (_Bool)1));
                        arr_47 [i_8] [i_10 - 4] [3ULL] = ((signed char) (!(((/* implicit */_Bool) var_8))));
                        arr_48 [i_11] [i_11] [(short)17] [i_9] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)22268)) ? (-2147483629) : (((/* implicit */int) (signed char)118))));
                    }
                } 
            } 
            var_34 *= ((/* implicit */short) (~(((/* implicit */int) (unsigned short)21691))));
        }
        for (signed char i_12 = 0; i_12 < 21; i_12 += 4) 
        {
            arr_52 [i_8] [i_12] = ((/* implicit */long long int) (((~(((/* implicit */int) arr_33 [i_8] [i_12])))) ^ (((/* implicit */int) ((unsigned char) (~(((/* implicit */int) var_5))))))));
            var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) min(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1926652733866391683LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-12320))) : (992557058U)))) || (((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_10))))))))))));
        }
        var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_35 [i_8] [i_8] [i_8])) ? (((/* implicit */int) arr_35 [i_8] [i_8] [i_8])) : (((/* implicit */int) arr_35 [i_8] [i_8] [i_8])))), (((/* implicit */int) var_0)))))));
    }
    var_37 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_0)), (2220297593077026017LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_2)))), ((-((+(1993454921581770237LL)))))));
    var_38 = ((/* implicit */unsigned char) var_12);
}

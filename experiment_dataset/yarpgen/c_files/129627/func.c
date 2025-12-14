/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129627
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] = (~(((/* implicit */int) (short)-13590)));
                var_16 ^= ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) -1)) ? (((arr_1 [8U]) - (-21))) : ((-(((/* implicit */int) arr_5 [2LL] [i_1 - 1])))))));
                /* LoopSeq 2 */
                for (unsigned short i_2 = 2; i_2 < 8; i_2 += 1) /* same iter space */
                {
                    arr_9 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((-1) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1 - 1] [i_2 - 1])))))));
                    var_17 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_8 [1ULL])) ? (((/* implicit */int) arr_7 [i_0] [i_1 - 1])) : (((((/* implicit */_Bool) (signed char)23)) ? (0) : (((/* implicit */int) arr_7 [i_0] [i_0])))))) != (((/* implicit */int) ((unsigned char) (unsigned char)254)))));
                    var_18 = -781254117946348119LL;
                    arr_10 [i_0] [0LL] [i_1 - 1] [i_2] |= ((/* implicit */int) ((unsigned long long int) ((arr_2 [i_1 - 1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)44))))));
                }
                for (unsigned short i_3 = 2; i_3 < 8; i_3 += 1) /* same iter space */
                {
                    arr_14 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_3 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_3 + 1]))) : (arr_8 [i_1 - 1])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_3 + 1]))) : (((((/* implicit */_Bool) arr_3 [i_3 + 3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_3 - 2]))) : (-5313805732808068210LL))));
                    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_12 [i_0])))) ? (((/* implicit */int) arr_5 [i_0] [i_3 - 1])) : (arr_12 [i_0])));
                    var_20 = (-(max((((((/* implicit */_Bool) -2630315967761734932LL)) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_3] [5LL])) : (((/* implicit */int) arr_3 [(short)10])))), (((/* implicit */int) (signed char)26)))));
                }
                var_21 = ((/* implicit */signed char) max((501180916), (((/* implicit */int) (unsigned char)0))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) var_15);
    /* LoopSeq 4 */
    for (long long int i_4 = 0; i_4 < 15; i_4 += 1) 
    {
        arr_17 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-66)) ? (((((/* implicit */int) (short)-27484)) + (-1672957638))) : (((((/* implicit */_Bool) (unsigned short)18953)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))) ? (((arr_16 [i_4] [i_4]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)175))))) : (((/* implicit */long long int) ((arr_15 [i_4]) ? (((/* implicit */int) arr_15 [(_Bool)1])) : (((/* implicit */int) arr_15 [i_4])))))));
        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-23)) ? (((/* implicit */unsigned long long int) (-(182178317U)))) : ((-(10ULL)))))) ? (((/* implicit */unsigned int) (+(-1773862405)))) : ((-((+(1886474402U)))))));
        /* LoopSeq 4 */
        for (signed char i_5 = 0; i_5 < 15; i_5 += 1) 
        {
            var_24 &= ((/* implicit */long long int) -21);
            arr_20 [i_5] = ((/* implicit */short) ((-5313805732808068227LL) & (((/* implicit */long long int) ((/* implicit */int) (signed char)127)))));
            var_25 *= ((/* implicit */unsigned int) (signed char)-91);
        }
        /* vectorizable */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
        {
            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (+(((/* implicit */int) (signed char)111)))))));
            var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) (+((-(arr_21 [i_6]))))))));
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
        {
            arr_25 [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) (short)27484)) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-23))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)84))) : (71043909691586349ULL))) : (((/* implicit */unsigned long long int) 5313805732808068226LL))));
            var_28 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (-(((/* implicit */int) arr_22 [i_4] [(unsigned char)4]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_4]))) : (((((/* implicit */_Bool) arr_16 [i_4] [i_7])) ? (71043909691586367ULL) : (((/* implicit */unsigned long long int) arr_24 [13ULL] [i_4])))))) | (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 18375700164017965263ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)12))) : (5313805732808068226LL))) << (((/* implicit */int) (!(arr_23 [i_4] [i_4] [i_7])))))))));
            /* LoopNest 2 */
            for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 1) 
            {
                for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                {
                    {
                        arr_32 [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)14194)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (6714919275415097094LL)));
                        /* LoopSeq 2 */
                        for (int i_10 = 0; i_10 < 15; i_10 += 1) 
                        {
                            arr_35 [i_10] [i_10] [(signed char)4] |= ((/* implicit */unsigned int) min((((/* implicit */long long int) max(((short)-10700), (((/* implicit */short) (signed char)-87))))), (((arr_28 [i_9 + 1] [12ULL] [i_9 + 1] [i_9 + 1]) - (arr_28 [i_9] [14LL] [i_10] [i_10])))));
                            var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) arr_27 [i_9 + 1] [0] [0] [(_Bool)1]))));
                            var_30 |= ((/* implicit */short) arr_30 [i_4] [i_4] [14ULL] [i_4]);
                        }
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 15; i_11 += 1) 
                        {
                            arr_39 [i_4] [i_7] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */_Bool) (+(arr_16 [i_4] [i_9 + 1])));
                            arr_40 [i_4] [4ULL] [(unsigned char)0] &= ((/* implicit */short) ((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (unsigned short)9587))));
                        }
                        arr_41 [i_4] [(signed char)14] [(signed char)8] &= ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)(-127 - 1)))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned char i_12 = 1; i_12 < 14; i_12 += 1) 
            {
                arr_44 [i_12] [i_7] [i_7] [i_4] = ((/* implicit */int) arr_18 [i_4]);
                var_31 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_12] [i_12] [(unsigned char)10] [(_Bool)1])) ? (((/* implicit */int) (_Bool)1)) : (arr_37 [i_4] [i_4] [i_4] [i_4] [i_4] [4ULL])))) ? (((/* implicit */int) arr_26 [i_4] [i_7] [(signed char)14] [i_12])) : (((((/* implicit */_Bool) arr_16 [i_12] [i_7])) ? (arr_38 [i_12] [i_7] [i_12] [i_7] [i_12 - 1] [14ULL]) : (((/* implicit */int) arr_33 [i_12] [i_12] [4] [i_7] [4] [i_4] [i_4]))))))) ? ((+((-(((/* implicit */int) arr_15 [i_4])))))) : (((/* implicit */int) ((signed char) (signed char)-125))));
                arr_45 [i_7] [i_7] [i_12] [i_7] = ((/* implicit */unsigned short) (signed char)(-127 - 1));
                var_32 = ((/* implicit */unsigned char) (-(((unsigned int) arr_42 [i_12 + 1] [i_7]))));
                var_33 = ((/* implicit */signed char) (-(((/* implicit */int) (short)10696))));
            }
            arr_46 [i_4] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_30 [i_4] [i_4] [i_4] [i_4]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_4]))) : (((((/* implicit */unsigned long long int) arr_28 [i_4] [i_7] [i_7] [(signed char)12])) & (arr_43 [i_4] [i_4] [i_4] [i_4])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)33)) ? (((/* implicit */int) (signed char)-124)) : (((/* implicit */int) (signed char)-117))))) ? (((((/* implicit */int) (signed char)-121)) & (((/* implicit */int) (unsigned char)125)))) : (((/* implicit */int) arr_15 [i_7])))) : (((/* implicit */int) arr_26 [i_4] [i_4] [i_7] [i_4]))));
        }
        /* vectorizable */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
        {
            var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (signed char)-117)) : (((/* implicit */int) (_Bool)1))));
            var_35 |= ((/* implicit */short) ((0ULL) - (arr_29 [i_4] [i_4] [i_4] [i_4])));
            arr_50 [i_4] [i_4] [i_13] = ((/* implicit */signed char) (-(-5313805732808068215LL)));
        }
        var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((3U) / (6U)))))) ? (((long long int) arr_33 [(unsigned char)8] [i_4] [8] [i_4] [i_4] [i_4] [i_4])) : (((/* implicit */long long int) ((/* implicit */int) (signed char)113)))));
    }
    for (unsigned short i_14 = 0; i_14 < 16; i_14 += 1) 
    {
        var_37 ^= ((/* implicit */signed char) arr_53 [i_14]);
        arr_54 [i_14] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_52 [i_14]))));
    }
    for (short i_15 = 0; i_15 < 22; i_15 += 1) /* same iter space */
    {
        var_38 = ((/* implicit */int) (_Bool)1);
        var_39 = ((/* implicit */long long int) max((var_39), (((/* implicit */long long int) (_Bool)1))));
        arr_58 [i_15] = ((/* implicit */_Bool) arr_57 [i_15] [i_15]);
        arr_59 [(unsigned short)20] |= (signed char)12;
    }
    for (short i_16 = 0; i_16 < 22; i_16 += 1) /* same iter space */
    {
        arr_62 [i_16] [i_16] = ((/* implicit */long long int) arr_61 [i_16] [i_16]);
        var_40 = ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_55 [i_16])))) ? (min((arr_56 [i_16]), (((/* implicit */long long int) arr_55 [i_16])))) : (((/* implicit */long long int) (~(0))))));
    }
    var_41 = ((/* implicit */_Bool) var_2);
}

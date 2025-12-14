/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104919
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
    /* vectorizable */
    for (int i_0 = 3; i_0 < 8; i_0 += 2) 
    {
        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((unsigned int) ((unsigned long long int) 1373791381U))))));
        arr_2 [10U] |= ((/* implicit */signed char) ((-7639575440873450775LL) + (var_0)));
        var_19 -= (~(((((/* implicit */int) (short)13352)) << (((((((/* implicit */int) (short)-13358)) + (13384))) - (11))))));
    }
    /* vectorizable */
    for (short i_1 = 1; i_1 < 10; i_1 += 1) 
    {
        /* LoopSeq 3 */
        for (signed char i_2 = 0; i_2 < 11; i_2 += 4) /* same iter space */
        {
            /* LoopNest 3 */
            for (signed char i_3 = 2; i_3 < 8; i_3 += 4) 
            {
                for (int i_4 = 3; i_4 < 9; i_4 += 1) 
                {
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        {
                            arr_16 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((int) (short)-13944)) : (((/* implicit */int) (!(((/* implicit */_Bool) 17525914426682088475ULL)))))));
                            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_3)) ^ (var_10)))) ? (((unsigned long long int) var_4)) : (((unsigned long long int) (short)13352))))));
                            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((((/* implicit */int) (signed char)-67)) + (2147483647))) >> (((((/* implicit */int) (signed char)-92)) + (109))))))));
                            var_22 = ((/* implicit */short) ((3427238814719615820LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-116)))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_6 = 0; i_6 < 11; i_6 += 1) 
            {
                for (unsigned long long int i_7 = 1; i_7 < 9; i_7 += 4) 
                {
                    {
                        arr_21 [i_2] [i_7] = ((/* implicit */short) (~(((((/* implicit */long long int) var_1)) & (-2531051834227618259LL)))));
                        arr_22 [i_7] [i_7] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_11)))) ? (((((/* implicit */int) (short)-13356)) | (((/* implicit */int) (signed char)46)))) : (((/* implicit */int) ((2161064988U) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)206))))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_8 = 2; i_8 < 8; i_8 += 4) 
                        {
                            arr_25 [i_8] [i_2] &= ((/* implicit */int) ((((/* implicit */_Bool) (short)13361)) || (((/* implicit */_Bool) 790162738U))));
                            arr_26 [i_8] [i_2] [i_6] [(signed char)8] [i_8 + 2] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_15)) / (var_0)))) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)206)))));
                            arr_27 [i_7] = ((/* implicit */int) (-(562601504U)));
                            arr_28 [i_1 + 1] [i_2] [i_6] [i_7] [i_7] [i_7] [10U] = ((/* implicit */_Bool) (-(((7639575440873450768LL) / (((/* implicit */long long int) 2133902307U))))));
                            arr_29 [i_7] [i_6] [i_7 + 1] [i_8 + 1] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) 747246310108780649ULL))))) ^ (((/* implicit */int) (signed char)96))));
                        }
                        arr_30 [(unsigned short)0] [i_7] [i_6] [i_6] = ((/* implicit */unsigned char) var_14);
                    }
                } 
            } 
            arr_31 [i_2] = ((/* implicit */short) ((unsigned int) ((((/* implicit */int) var_12)) <= (((/* implicit */int) (short)13352)))));
            var_23 *= ((/* implicit */unsigned char) (+(((((/* implicit */int) (short)-15676)) + (((/* implicit */int) (short)-9222))))));
        }
        for (signed char i_9 = 0; i_9 < 11; i_9 += 4) /* same iter space */
        {
            var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-31)) ? (((/* implicit */unsigned long long int) 2161064986U)) : (var_14))) >> ((((~(573006581U))) - (3721960663U))))))));
            arr_35 [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)90)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (unsigned char)255))));
            arr_36 [(signed char)8] [i_1 - 1] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) -7639575440873450775LL)))))));
            var_25 = ((/* implicit */int) (+(((unsigned long long int) 9534664310264971235ULL))));
        }
        for (signed char i_10 = 0; i_10 < 11; i_10 += 4) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned char i_11 = 0; i_11 < 11; i_11 += 1) 
            {
                for (int i_12 = 0; i_12 < 11; i_12 += 4) 
                {
                    for (int i_13 = 0; i_13 < 11; i_13 += 4) 
                    {
                        {
                            arr_50 [i_11] [i_10] [i_12] [i_13] = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)209)) : (586314465))));
                            var_26 += ((((((/* implicit */_Bool) -70699076147123291LL)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) var_8)))) * (((/* implicit */int) ((signed char) (signed char)-82))));
                            var_27 *= ((/* implicit */unsigned int) ((int) ((var_14) < (((/* implicit */unsigned long long int) 4294967289U)))));
                        }
                    } 
                } 
            } 
            arr_51 [i_1] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_4) & (((/* implicit */unsigned int) var_7))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) == (var_0)))) : (((int) 3632074083U))));
            /* LoopSeq 1 */
            for (unsigned int i_14 = 0; i_14 < 11; i_14 += 1) 
            {
                var_28 |= ((/* implicit */unsigned long long int) var_7);
                arr_54 [i_1] [i_1] [i_14] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)46))))) ? (((/* implicit */int) (unsigned short)25678)) : (((/* implicit */int) ((((/* implicit */unsigned int) -586314466)) == (133169152U))))));
            }
        }
        arr_55 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) 1411003641U))) ? (((int) var_3)) : (((-877944203) / (((/* implicit */int) (short)-19828))))));
    }
    var_29 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)39845)) ? (1423550358U) : (((/* implicit */unsigned int) -447519734))))) ? (4161798158U) : (((2730082225U) * (((/* implicit */unsigned int) var_2))))))) ? (((/* implicit */long long int) ((var_17) / (max((1482212829), (var_17)))))) : (((((/* implicit */_Bool) ((4534148813149236298ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)25678)))))) ? (((/* implicit */long long int) ((133169138U) * (((/* implicit */unsigned int) var_7))))) : (((((/* implicit */long long int) 447519734)) + (-5850170338890528238LL))))));
}

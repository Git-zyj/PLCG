/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143740
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
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) 2627741459U))) % (((/* implicit */int) max((((/* implicit */unsigned short) var_3)), (((unsigned short) var_9)))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 3) /* same iter space */
        {
            arr_6 [i_0] [i_0] &= max((((/* implicit */unsigned int) arr_0 [(signed char)4])), ((+(2627741459U))));
            var_12 = ((/* implicit */long long int) (~(max((((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))) < (var_10))))))));
        }
        for (unsigned short i_2 = 0; i_2 < 15; i_2 += 3) /* same iter space */
        {
            var_13 = ((/* implicit */long long int) var_5);
            var_14 = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
        }
        for (unsigned short i_3 = 0; i_3 < 15; i_3 += 3) /* same iter space */
        {
            var_15 &= ((/* implicit */unsigned long long int) min(((+(var_1))), (max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2627741441U))))), (max((((/* implicit */unsigned int) var_5)), (2627741441U)))))));
            arr_12 [0] [i_3] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */_Bool) var_9)) ? (2251799813652480ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))))));
            var_16 -= ((/* implicit */short) (_Bool)1);
            var_17 = ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)0))));
            var_18 = ((((long long int) var_7)) >= (((/* implicit */long long int) ((((/* implicit */_Bool) ((int) var_1))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))) : (1667225855U)))));
        }
        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 3) /* same iter space */
        {
            arr_16 [i_4] = ((/* implicit */unsigned char) ((int) (~(max((var_6), (((/* implicit */long long int) arr_15 [i_0] [i_4])))))));
            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) 2627741459U))) & ((-(((/* implicit */int) (_Bool)0))))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)237))) : ((~(arr_3 [i_0]))))) : ((~(1072020594U)))));
            arr_17 [i_4] [i_4] = ((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) 2627741458U)) * (9207097683139723024ULL)))));
        }
        var_20 *= ((/* implicit */_Bool) arr_11 [i_0] [(_Bool)1]);
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_1) + (((/* implicit */unsigned int) ((/* implicit */int) (short)-5910)))))) ? (((((/* implicit */_Bool) -7396572910718762001LL)) ? (((/* implicit */int) arr_9 [i_0])) : (((/* implicit */int) (unsigned short)45124)))) : (arr_13 [8U])))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_9 [i_0]), (((/* implicit */unsigned char) ((_Bool) 0))))))) : (((((/* implicit */_Bool) 1667225853U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)213))) : (-8436918307015562086LL)))));
        var_22 = ((/* implicit */unsigned char) ((unsigned int) (((_Bool)1) ? (((/* implicit */unsigned long long int) (+(var_8)))) : (((var_0) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
    }
    var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) min((max((((/* implicit */long long int) (+(var_10)))), (((var_6) / (((/* implicit */long long int) 104981518U)))))), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)252)), (var_5))))) >= (max((-8642399938056771726LL), (((/* implicit */long long int) (unsigned short)65516))))))))))));
    /* LoopSeq 2 */
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        var_24 = ((/* implicit */_Bool) var_9);
        /* LoopNest 2 */
        for (unsigned char i_6 = 2; i_6 < 13; i_6 += 4) 
        {
            for (unsigned char i_7 = 0; i_7 < 14; i_7 += 3) 
            {
                {
                    var_25 = ((/* implicit */unsigned char) arr_23 [i_7] [i_6 - 2] [i_6 - 2]);
                    var_26 = ((/* implicit */long long int) (+(((/* implicit */int) var_9))));
                    var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) var_4))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 14; i_8 += 3) 
        {
            for (int i_9 = 2; i_9 < 13; i_9 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_28 = (_Bool)1;
                        var_29 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_9 - 1] [i_9 - 1] [i_9 - 2])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)252))))) ? (-3356340692671375921LL) : (((((/* implicit */_Bool) 9239646390569828591ULL)) ? (min((arr_30 [i_9] [i_5]), (((/* implicit */long long int) arr_20 [i_10] [i_10] [i_10])))) : (1655715264432838996LL)))));
                        var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) max((((/* implicit */long long int) var_10)), (arr_30 [i_8] [i_8]))))));
                        var_31 = ((unsigned short) ((var_0) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_5 - 1])))));
                    }
                    var_32 ^= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) ((unsigned char) (~(8642399938056771726LL))))), ((unsigned short)55275)));
                    var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) ((((int) arr_22 [i_5 - 1] [(short)6] [i_9 - 2])) | (((/* implicit */int) max(((unsigned short)65514), (((/* implicit */unsigned short) (_Bool)1))))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_11 = 3; i_11 < 12; i_11 += 1) 
    {
        var_34 = ((/* implicit */signed char) arr_4 [i_11]);
        var_35 += ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */long long int) ((/* implicit */int) arr_29 [10LL]))) & (var_8))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))));
        var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [(unsigned char)6] [i_11 - 3]))) : (3596251286U)));
        var_37 = var_9;
    }
}

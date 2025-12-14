/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189207
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (min((((/* implicit */unsigned int) -16)), (3492434150U))) : (min((((/* implicit */unsigned int) arr_1 [i_0] [i_0])), (var_5)))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_1)))) : (((int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (3492434150U) : (((/* implicit */unsigned int) arr_0 [i_0])))))));
        var_16 = ((/* implicit */signed char) (-((~(((/* implicit */int) arr_1 [i_0] [i_0]))))));
        var_17 = ((/* implicit */unsigned int) (~((+(min((((/* implicit */long long int) arr_0 [i_0])), (137438953471LL)))))));
    }
    for (unsigned int i_1 = 0; i_1 < 17; i_1 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned short) ((signed char) ((signed char) arr_4 [i_1])));
        var_19 = ((/* implicit */unsigned short) (+((+(var_13)))));
    }
    /* LoopSeq 1 */
    for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
    {
        var_20 = ((/* implicit */unsigned short) min(((~(((/* implicit */int) var_1)))), ((~(((/* implicit */int) var_14))))));
        /* LoopSeq 3 */
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            var_21 = ((/* implicit */long long int) max((arr_0 [i_3 + 1]), (((/* implicit */int) ((_Bool) -11LL)))));
            var_22 = (~(((/* implicit */int) ((((/* implicit */int) arr_3 [i_3] [(signed char)14])) >= (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (arr_1 [i_2] [i_3]))))))));
            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_1 [i_3 + 1] [i_3 + 1])) : (((/* implicit */int) arr_3 [i_3 + 1] [i_3 + 1]))))) ? (((/* implicit */int) min((((/* implicit */signed char) var_7)), (arr_7 [i_3 + 1] [i_3 + 1] [i_3 + 1])))) : ((~(((/* implicit */int) var_3))))));
            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2147483624)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (496U)));
        }
        for (unsigned short i_4 = 1; i_4 < 7; i_4 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_5 = 0; i_5 < 11; i_5 += 4) 
            {
                for (long long int i_6 = 0; i_6 < 11; i_6 += 1) 
                {
                    {
                        var_25 = ((/* implicit */unsigned long long int) var_5);
                        /* LoopSeq 1 */
                        for (long long int i_7 = 2; i_7 < 9; i_7 += 3) 
                        {
                            var_26 = ((/* implicit */unsigned char) min((((unsigned int) (_Bool)1)), (((/* implicit */unsigned int) ((unsigned char) 1778093349)))));
                            var_27 = (+(((/* implicit */int) arr_16 [i_2] [i_4])));
                            arr_20 [i_2] [i_7] [i_5] [i_6] [i_7] [i_6] [i_7] = ((/* implicit */_Bool) (-((-(((/* implicit */int) (_Bool)1))))));
                        }
                    }
                } 
            } 
            /* LoopNest 2 */
            for (long long int i_8 = 2; i_8 < 9; i_8 += 4) 
            {
                for (unsigned char i_9 = 0; i_9 < 11; i_9 += 3) 
                {
                    {
                        arr_29 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) < (-137438953479LL)));
                        var_28 = min(((~(((/* implicit */int) (unsigned char)122)))), (((((/* implicit */int) var_0)) | (((/* implicit */int) var_7)))));
                    }
                } 
            } 
            arr_30 [(signed char)6] [i_4] [i_2] = ((/* implicit */long long int) ((((((/* implicit */int) var_9)) / (-1878409838))) / ((-(((/* implicit */int) arr_27 [i_4 + 3] [i_4] [i_4 + 2]))))));
            var_29 = ((/* implicit */unsigned char) var_8);
            var_30 = ((/* implicit */long long int) (-(((((/* implicit */int) arr_14 [i_4] [i_4] [i_4 + 2] [i_4 + 1] [i_4 + 3] [i_4 - 1])) | (((/* implicit */int) arr_17 [i_4 + 1]))))));
        }
        for (unsigned short i_10 = 1; i_10 < 7; i_10 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned short i_11 = 0; i_11 < 11; i_11 += 4) 
            {
                /* LoopNest 2 */
                for (short i_12 = 3; i_12 < 8; i_12 += 3) 
                {
                    for (long long int i_13 = 2; i_13 < 10; i_13 += 4) 
                    {
                        {
                            var_31 = ((/* implicit */int) (~((+(6782695864992531408LL)))));
                            arr_41 [i_11] [i_10 + 4] [i_2] = ((/* implicit */unsigned char) (~((+(((unsigned long long int) var_9))))));
                            var_32 = ((/* implicit */signed char) arr_21 [i_13 + 1] [i_12 + 2] [i_12] [i_10 - 1]);
                        }
                    } 
                } 
                arr_42 [i_2] [(unsigned char)0] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((signed char) arr_32 [i_10 - 1])))));
                var_33 = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)122)) + (((/* implicit */int) ((unsigned short) (unsigned char)61)))));
            }
            for (int i_14 = 2; i_14 < 10; i_14 += 4) 
            {
                var_34 = arr_22 [i_2] [i_10 - 1] [i_14] [i_14];
                arr_45 [i_2] [i_10 + 4] [i_14] = ((/* implicit */int) (unsigned char)61);
                var_35 = (+(((/* implicit */int) var_3)));
            }
            /* LoopNest 2 */
            for (long long int i_15 = 0; i_15 < 11; i_15 += 4) 
            {
                for (short i_16 = 0; i_16 < 11; i_16 += 1) 
                {
                    {
                        var_36 = ((((/* implicit */_Bool) arr_25 [i_16] [i_10 + 3] [(signed char)10] [1U] [(unsigned char)1] [i_2])) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)46078)) : (((/* implicit */int) var_15)))) : (((/* implicit */int) ((((/* implicit */int) var_9)) < (1878409838)))));
                        arr_51 [(_Bool)1] [5LL] [(_Bool)1] [i_16] = ((/* implicit */unsigned int) var_1);
                        var_37 = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
                        arr_52 [i_2] [i_10] [i_10] [i_15] [i_16] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)15734))));
                        var_38 = ((/* implicit */signed char) var_6);
                    }
                } 
            } 
            var_39 = ((/* implicit */signed char) min(((~(((((/* implicit */_Bool) -1601569898)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_49 [i_2] [i_2] [i_10] [i_10]))))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_15)))))));
            var_40 = max(((+(var_13))), (((/* implicit */long long int) min((-1878409838), (((/* implicit */int) (short)-11085))))));
        }
    }
    var_41 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) != ((-9223372036854775807LL - 1LL))))) > (((/* implicit */int) var_15))));
}

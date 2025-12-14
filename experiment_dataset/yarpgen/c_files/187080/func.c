/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187080
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 3; i_0 < 20; i_0 += 3) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_3 [i_0] [i_0])))) ? ((-(var_3))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (signed char)15)))))));
        var_19 = ((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) < (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))));
    }
    for (unsigned short i_1 = 3; i_1 < 20; i_1 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            for (unsigned int i_3 = 1; i_3 < 20; i_3 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_4 = 2; i_4 < 19; i_4 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned int) var_14);
                        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) && (arr_0 [i_3] [i_3])));
                    }
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [i_3]))))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1))))) : ((-(((/* implicit */int) arr_12 [i_3]))))));
                        arr_19 [i_1 - 3] [i_1 - 3] [i_1 - 2] [i_3] = min((((/* implicit */int) ((-1585216713) < (((/* implicit */int) (_Bool)1))))), ((-(((/* implicit */int) min((arr_2 [i_3]), ((unsigned short)35252)))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_6 = 0; i_6 < 21; i_6 += 4) /* same iter space */
                        {
                            arr_24 [i_1] [i_1] [i_1] [i_3] [i_6] [(unsigned short)13] = ((/* implicit */unsigned short) arr_20 [i_1] [i_2] [i_1] [i_3] [i_6]);
                            var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) var_10))));
                            arr_25 [i_1 - 2] [i_3] [i_3] [(short)19] [(short)19] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)56)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65535))));
                        }
                        for (unsigned short i_7 = 0; i_7 < 21; i_7 += 4) /* same iter space */
                        {
                            var_24 = ((/* implicit */unsigned long long int) var_13);
                            var_25 ^= ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-51))))) | (((var_11) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_1] [i_7] [i_1] [(_Bool)1] [i_1]))))))) ^ (((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) arr_15 [i_7] [i_5] [i_7] [i_7] [i_7] [(unsigned char)2])), (4063656507U))) ^ (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-72))))))))));
                        }
                        var_26 = ((/* implicit */short) max((min((((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (signed char)65)) : (((/* implicit */int) var_14)))), (((/* implicit */int) arr_28 [i_1 - 1] [(unsigned short)0] [0U] [i_3 + 1] [i_3] [16] [i_5 - 1])))), (((/* implicit */int) var_8))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 3; i_8 < 20; i_8 += 4) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 21; i_9 += 3) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)15656)) >> (((((/* implicit */int) (signed char)-57)) + (79))))))));
                                var_28 = ((/* implicit */int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (_Bool)1)) : (-28)))) ? (arr_14 [i_3] [i_3] [i_3 + 1] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_7 [i_1] [i_1]), ((unsigned short)49880)))))))));
                                var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) max((max(((_Bool)1), (((_Bool) (short)28669)))), ((_Bool)1))))));
                            }
                        } 
                    } 
                    arr_35 [(_Bool)1] [(short)17] [i_3] [i_3 - 1] = ((/* implicit */signed char) (+((+(arr_18 [i_3] [i_2])))));
                }
            } 
        } 
        arr_36 [i_1] = ((/* implicit */unsigned short) (-(min((((((/* implicit */int) (short)32767)) | (((/* implicit */int) (short)-18677)))), (((/* implicit */int) arr_16 [i_1 - 3] [i_1 - 3] [i_1 - 3] [14ULL]))))));
        var_30 = ((/* implicit */unsigned short) (_Bool)1);
    }
    /* vectorizable */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        arr_40 [i_10] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (unsigned char)1))))));
        var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) 231310788U))));
    }
    /* LoopSeq 1 */
    for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
    {
        /* LoopNest 3 */
        for (short i_12 = 0; i_12 < 10; i_12 += 3) 
        {
            for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
            {
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    {
                        arr_50 [i_12] = ((/* implicit */signed char) max((((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)6392)) : (((/* implicit */int) var_9))))) : (var_10))), (((/* implicit */long long int) var_4))));
                        var_32 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((18446744073709551615ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38188)))))) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)187)) || (((/* implicit */_Bool) 231310790U))))))), (((/* implicit */int) ((_Bool) (+(((/* implicit */int) arr_1 [i_12]))))))));
                        var_33 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_12 [i_12])), ((unsigned short)49880)))) ? (((/* implicit */int) arr_11 [i_12] [i_11 + 1] [i_13 - 1])) : (((/* implicit */int) min((((/* implicit */unsigned short) var_17)), ((unsigned short)15656)))))) >> (((/* implicit */int) ((_Bool) 25)))));
                    }
                } 
            } 
        } 
        var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (unsigned short)49880)) : (((/* implicit */int) (signed char)11)))))));
        arr_51 [i_11] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)15656)) <= (((/* implicit */int) (_Bool)1))))) >= ((+((+(((/* implicit */int) (signed char)-56))))))));
        arr_52 [i_11] = arr_47 [(unsigned short)4] [i_11 + 1];
    }
}

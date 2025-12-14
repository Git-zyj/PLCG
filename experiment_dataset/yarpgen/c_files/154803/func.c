/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154803
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
    var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) (-2147483647 - 1))) ? (1319429767U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)124)) : (((/* implicit */int) (unsigned char)124))))))))));
    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) var_17))));
    var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */int) var_11)) == (((((/* implicit */_Bool) var_17)) ? (((((/* implicit */_Bool) (short)-28414)) ? (((/* implicit */int) (unsigned char)84)) : (((/* implicit */int) var_9)))) : (var_19))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        var_23 = ((/* implicit */unsigned int) var_18);
        var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)136))));
    }
    for (short i_1 = 1; i_1 < 17; i_1 += 4) 
    {
        var_25 = ((/* implicit */unsigned int) max((((/* implicit */short) (unsigned char)131)), ((short)(-32767 - 1))));
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            arr_8 [i_1] [0LL] [i_1] = ((/* implicit */short) ((int) max((((/* implicit */unsigned short) arr_6 [i_1] [i_2])), (arr_0 [i_1] [i_2]))));
            /* LoopNest 3 */
            for (unsigned char i_3 = 1; i_3 < 19; i_3 += 2) 
            {
                for (unsigned short i_4 = 0; i_4 < 21; i_4 += 1) 
                {
                    for (short i_5 = 0; i_5 < 21; i_5 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((((/* implicit */_Bool) arr_13 [8] [8])) ? (((((/* implicit */_Bool) max((-1011917136), (((/* implicit */int) arr_15 [i_1] [i_1 + 3] [i_1] [i_1] [i_1]))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)115))))) : (((unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_1 - 1] [i_4]))))))))));
                            var_27 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((long long int) (signed char)0))) ? (((/* implicit */int) arr_11 [i_5] [i_3] [i_2] [i_1])) : (((((/* implicit */_Bool) (unsigned char)132)) ? (((/* implicit */int) arr_15 [i_2] [i_2] [i_2] [(unsigned short)10] [i_2])) : (((/* implicit */int) arr_14 [i_1 + 1] [i_1] [i_2] [i_3 + 1] [i_3 + 1] [(short)20] [i_5]))))))));
                        }
                    } 
                } 
            } 
        }
        var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((2305843009213691904ULL), (((/* implicit */unsigned long long int) (unsigned char)138))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)0))))))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_6 = 3; i_6 < 20; i_6 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_7 = 1; i_7 < 18; i_7 += 1) 
            {
                for (signed char i_8 = 4; i_8 < 19; i_8 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_9 = 3; i_9 < 20; i_9 += 2) 
                        {
                            var_29 |= ((/* implicit */short) (-(((/* implicit */int) arr_23 [i_6] [i_7 + 2] [i_8 + 2] [i_8 + 2] [i_9 - 1] [i_9 + 1]))));
                            var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) (!(arr_15 [i_6] [i_6 - 3] [i_6] [i_6 + 1] [i_9 + 1]))))));
                            arr_25 [i_1] [i_6 + 1] [i_6] [i_6 + 1] [i_9 + 1] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)115)) & (((/* implicit */int) arr_24 [i_9] [i_1] [i_8 - 3] [(unsigned short)4] [i_6] [i_1] [i_1]))))) ? (((((/* implicit */_Bool) (short)17658)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (_Bool)1)))) : (4194303)));
                        }
                        var_31 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (-((-(((/* implicit */int) var_0))))))), (min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 8847400417818548417LL))))), ((((_Bool)1) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6058)))))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_10 = 3; i_10 < 20; i_10 += 4) 
            {
                for (unsigned long long int i_11 = 2; i_11 < 19; i_11 += 4) 
                {
                    {
                        var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_1 + 4] [i_6] [i_10] [i_11 + 2])) ? (((/* implicit */int) arr_22 [i_1 + 3] [(signed char)5] [i_11] [i_11] [i_6] [i_10] [i_1 + 3])) : (((/* implicit */int) (short)-1))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_6 [i_10] [i_11]))))) : (max((((/* implicit */unsigned long long int) (unsigned short)65535)), (arr_28 [i_1 - 1] [i_11] [i_11])))))))));
                        /* LoopSeq 2 */
                        for (int i_12 = 4; i_12 < 19; i_12 += 2) 
                        {
                            var_33 = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-13)) ? (874939052) : (((/* implicit */int) (unsigned short)5))))) ? (((/* implicit */unsigned long long int) arr_37 [i_1] [i_12 - 1] [i_12 - 1] [i_6 - 3] [(_Bool)1])) : (arr_30 [i_1] [i_1] [i_1 + 1] [i_1] [i_11 - 2]))), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)3)) : (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)0)), ((unsigned char)220))))))));
                            var_34 -= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) 9191634169658003836LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)8108))))));
                            var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) (-(((((/* implicit */int) var_11)) % (((/* implicit */int) arr_23 [i_10 + 1] [7ULL] [i_10 + 1] [i_10 + 1] [i_6] [i_1 + 3])))))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_13 = 1; i_13 < 20; i_13 += 1) 
                        {
                            arr_40 [i_1 - 1] [i_6] [i_1] [(_Bool)1] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-25))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 274877906943ULL))))) : (((/* implicit */int) (_Bool)0))));
                            var_36 = ((/* implicit */unsigned char) arr_27 [i_1] [i_1] [i_1 - 1]);
                        }
                        var_37 = ((/* implicit */unsigned short) ((((/* implicit */long long int) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_34 [i_1] [i_1] [i_10] [(unsigned short)13])) : (((/* implicit */int) (unsigned short)65535)))), ((+(((/* implicit */int) (unsigned char)36))))))) / (((((((/* implicit */_Bool) arr_2 [i_10] [i_11])) || (((/* implicit */_Bool) (unsigned char)255)))) ? (((((/* implicit */_Bool) arr_23 [8ULL] [8ULL] [2LL] [i_11] [3ULL] [(unsigned char)16])) ? (arr_10 [i_11] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_1] [i_10]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)2)) ? (((/* implicit */int) (unsigned short)6144)) : (((/* implicit */int) arr_15 [i_1 + 3] [i_6] [i_10] [i_10] [i_11])))))))));
                        var_38 ^= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (unsigned short)51885)) ? ((~(-2213316134684493731LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (arr_1 [i_11]) : (1806772380U)))))), (var_16)));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_14 = 3; i_14 < 20; i_14 += 1) 
                        {
                            var_39 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_1 + 1] [(unsigned char)2] [i_10] [i_10])) ? (((/* implicit */int) (unsigned char)245)) : (((/* implicit */int) arr_11 [i_1] [i_10 - 1] [i_11] [i_11]))))) ? (((((/* implicit */_Bool) var_16)) ? (arr_26 [i_1 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_1] [i_11]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1] [(_Bool)0] [i_1] [i_1 + 3] [i_1]))) * (arr_2 [i_10] [i_11 - 2])))));
                            var_40 = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) -2213316134684493716LL)) ? (((/* implicit */int) arr_18 [i_1] [i_1] [i_1])) : (((/* implicit */int) var_7)))));
                            var_41 = ((/* implicit */unsigned short) (~((-2147483647 - 1))));
                        }
                        for (unsigned short i_15 = 0; i_15 < 21; i_15 += 2) 
                        {
                            var_42 = ((/* implicit */unsigned short) ((((var_14) ? (var_16) : (((/* implicit */long long int) arr_2 [i_6] [i_11])))) ^ (((/* implicit */long long int) ((((/* implicit */int) arr_16 [i_15])) << (((((/* implicit */int) (unsigned char)195)) - (191))))))));
                            var_43 = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [0U])) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_1] [i_1] [i_15])))))) ? ((-(((/* implicit */int) (_Bool)1)))) : ((+(((/* implicit */int) (unsigned char)192)))))));
                            arr_46 [i_1] [i_1] [i_10] [i_11 + 2] [i_15] = ((/* implicit */long long int) arr_2 [i_15] [i_6]);
                            var_44 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) (+(((/* implicit */int) var_10))))))));
                            var_45 = ((/* implicit */unsigned long long int) max((var_5), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (-2213316134684493716LL) : (((/* implicit */long long int) var_19))))))))));
                        }
                    }
                } 
            } 
            var_46 = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-18))));
        }
        for (unsigned short i_16 = 1; i_16 < 20; i_16 += 1) 
        {
            var_47 = arr_10 [i_1] [i_1] [i_1];
            arr_49 [i_1] [i_16] [i_1] = ((/* implicit */_Bool) ((arr_27 [i_1] [i_1] [i_16]) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 67108863U)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_14))))) || (((/* implicit */_Bool) max((arr_28 [i_1] [i_1] [i_16 - 1]), (((/* implicit */unsigned long long int) arr_16 [i_16 - 1])))))))) : (((/* implicit */int) arr_0 [i_16 - 1] [i_16 + 1]))));
            arr_50 [i_1] [i_1] = ((/* implicit */signed char) (unsigned char)153);
        }
    }
    var_48 = ((/* implicit */long long int) -1779998698);
}
